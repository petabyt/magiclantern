# ./run_canon_fw.sh 5D4AE -s -S & arm-none-eabi-gdb -x 5D4AE/debugmsg.gdb

source -v debug-logging.gdb

macro define CURRENT_TASK 0x44F4
macro define CURRENT_ISR  (*(int*)0x44D0 ? (*(int*)0x44D4) : 0)

b *0x268
DebugMsg_log

b *0x1B34
task_create_log

b *0x1774
register_interrupt_log

cont
