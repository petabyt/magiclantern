# ./run_canon_fw.sh 5D3eeko -s -S & arm-none-eabi-gdb -x 5D3eeko/debugmsg.gdb
# only tested on 1.1.3

source -v debug-logging.gdb

macro define CURRENT_TASK 0x40000148
macro define CURRENT_ISR  (*(int*)0x4000014C ? *(int*)0x40000010 : 0)

b *0x1E43E44
printf_log

# enable early UART output
set *(int*)0x4000000C = 1

b *0x1378
commands
  silent
  print_current_location
  KRED
  printf "init_task\n"
  KRESET
  c
end

b *0x1E46C50
commands
  silent
  print_current_location
  KBLU
  printf "task_create(entry=%x, %x, %x, stack=%x, %x, %x, %s)\n", $r0, $r1, $r2, $r3, *(int*)$sp, *(int*)($sp+4), *(int*)($sp+8)
  KRESET
  c
end

b *0x1E46C04
task_create_log

b *0x1E1CD8A
assert_log

cont
