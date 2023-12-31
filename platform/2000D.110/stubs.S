/** \file
 * Entry points into the firmware image.
 *
 * These are the functions that we can call from our tasks
 * in the Canon 1.1.0 firmware for the 2000D
 *
 */
/*
 * Copyright (C) 2021 Magic Lantern Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#include <stub.h>

// kitor: functions in early ram regions seem to match 1:1 1300D.110

/** Startup **/
NSTUB( ROMBASEADDR, firmware_entry )                        // 0xFE0C0000
NSTUB(0xfe0c3a38,  cstart)                                  //
NSTUB(   0x29898,  bzero32)                                 // called by cstart() rom
NSTUB(    0x5254,  create_init_task)                        // must be called from ram
NSTUB(0xFE129718,  init_task)                               // passed as arg to create_init_task, look for dmSetup
NSTUB(   0x669e8,  additional_version)

/** File I/O **/
NSTUB(0xfe2a35ac,  FIO_CloseFile)                           //
NSTUB(0xfe2a4580,  FIO_FindClose)                           // called with ret_FIO_FindFirstEx after finishing the dir scanning loop
NSTUB(0xfe2a44a0,  FIO_FindNextEx)                          //
NSTUB(0xfe2a335c, _FIO_ReadFile)                            //
NSTUB(0xfe2a340c,  FIO_SeekSkipFile)                        // same as SeekFile
NSTUB(0xfe2a34fc, _FIO_WriteFile)                           //
NSTUB(0xfe2a3dec, _FIO_CreateDirectory)                     //
NSTUB(0xfe2a3208, _FIO_CreateFile)                          //
NSTUB(0xfe2a43ac, _FIO_FindFirstEx)                         //
NSTUB(0xfe2a3728, _FIO_GetFileSize)                         //
NSTUB(0xfe2a314c, _FIO_OpenFile)                            //
NSTUB(0xfe2a32b4, _FIO_RemoveFile)                          //
NSTUB(0xfe2a3c24, _FIO_RenameFile)

/** GUI **/
NSTUB(   0x3136C,  gui_main_struct)                         // in gui_main_task
NSTUB(   0x3d8c0,  gui_task_list)
NSTUB(0xfe0cca74,  GUI_ChangeMode)
NSTUB(0xfe0cc8b8,  GUI_Control)
NSTUB(0xfe14d5b4,  SetGUIRequestMode)
NSTUB(0xfe0ccf28,  gui_init_end)                            // EndGuiInit
NSTUB(0xfe0cc4e8,  gui_main_task)                           // message at 0x30, counter at 0x0c
NSTUB(0xfe14fe2c,  gui_massive_event_loop)                  // GUI_Control_Post
NSTUB(0xfe2eac48,  GUI_SetLvMode)                           /* present on 500D.111, 50D.109, 5D2.212 */
// NSTUB(    ???,  GUI_SetMovieSize_a)                      /* present on 50D.109 */
// NSTUB(    ???,  GUI_SetMovieSize_b)                      /* present on 50D.109 */
NSTUB(0xfe2eae7c,  Gui_SetSoundRecord)                   /* present on 6D.113, 5D2.212 */

/** ASIF **/
// TODO:
NSTUB(0xfe11d200,  PowerAudioOutput)          //ok             /* not found  old FE108E44*/
NSTUB(0xfe11b96c,  SetAudioVolumeOut) 		//ok	
NSTUB(0xfe106ac4,  SetNextASIFADCBuffer) 
NSTUB(0xfe106cb0,  SetNextASIFDACBuffer) 
NSTUB(0xfe11c6c4,  SetSamplingRate) 
NSTUB(0xfe105fac,  StartASIFDMAADC) 
NSTUB(0xfe106380,  StartASIFDMADAC) 
NSTUB(0xfe106600,  StopASIFDMADAC) 
NSTUB(0xfe11cd38,  PowerMicAmp)                           /* present on 650D.104, EOSM.202, 700D.113 */
NSTUB(0xfe106728,  SetASIFMode)                             /* present on 700D.113 , On 1300D not used*/
//NSTUB(0xFE108E10,  SetAudioVolumeIn) //?                       /* present on 6D.113 */
NSTUB(0xfe108aa0,  SoundDevActiveIn) //ok                       /* present on 7D.203, 6D.113, 650D.104, EOSM.202, 700D.113 */
NSTUB(0xfe108cf8,  SoundDevShutDownIn)//ok                      /* present on 7D.203, 6D.113, 650D.104, EOSM.202, 700D.113 */
NSTUB(0xfe106258,  StopASIFDMAADC) //ok                          /* present on 7D.203, 6D.113, EOSM.202 */


/** Audio **/
NSTUB(    0x31604,  sounddev)                               // in sounddev_task
// TODO: Not found direct write it looks like its some kind of serial connection now

NSTUB(0xfe2b2d5c, _audio_ic_read) // FE2B3A3C 0xFE2B3A3C
NSTUB(0xfe2b29f4, _audio_ic_write) // posible sub_FE2B3A18


NSTUB(0xfe8b9b84,  audio_thresholds)                        // find "ALV_Initialize", then pointer to "AudioLevel", thresholds are following array of 41 values
NSTUB(0xfe108aa0,  sounddev_active_in)                      // "SoundDevActiveIn"
NSTUB(0xfe108690,  sounddev_task)                           // "[SND] _SoundDeviceTask"
// NSTUB(    ???, _audio_ic_write_bulk)                     /* present on 6D.116 */

/** Bitmap **/
NSTUB(   0x54020,  LCD_Palette)                             // in InitializeBitmapDisplayDevice, right after 0xc0f14800
NSTUB(   0x55820,  bmp_vram_info)

/** CFN **/
NSTUB(0xfe712ed4,  GetCFnData)
NSTUB(0xfe713100,  SetCFnData)
// NSTUB(    ???,  GUI_GetCFnForTab4)                       /* present on 7D.203 */
// NSTUB(0xFE4716F0,  GUI_SetCFnForTab4)                    /* present on 7D.203 */

/** Camera interface? **/
// TODO:
 NSTUB(0xC0220000,  camera_engine)

/** MPU communication **/
NSTUB(0xFE2993B4, _mpu_send);                               /* dwSize < TXBD_DATA_SIZE */
NSTUB(0xFE10FA70, _mpu_recv);                               /* registered in InitializeIntercom as CBR */

/** DMA **/
NSTUB(0xfe124530,  dma_memcpy)

/** Debug messages **/
NSTUB(   0x31bf4,  dm_names)                                // in DebugMsg, before the 1st loop target
NSTUB(0xfe11f3c8,  DryosDebugMsg)
NSTUB(0xfe11f730,  dm_set_store_level)                      // called by "dmstore"
NSTUB(0xfe11f6c8,  dm_set_print_level)

/** Dialog API **/
NSTUB(0xfe3f0334,  dialog_redraw)
NSTUB(0xfe2f807c,  dialog_set_property_str)

/** Dialog handlers **/
NSTUB(0xfe5ac5f4,  ErrCardForLVApp_handler)                 // LiveViewErrorApp, as in 60D
NSTUB(0xfe455038,  ErrForCamera_handler)                    // ERR70, ERR80 etc (DlgErrForCamera.c, AJ_DIALOG.HANDLER_DlgErrForCamera.c)
NSTUB(0xfe487ea8,  HideUnaviFeedBack_maybe)                 // look for StartUnaviFeedBackTimer
NSTUB(0xfe48ca60,  LiveViewApp_handler)
NSTUB(0xfe48d0cc,  LiveViewApp_handler_BL_JudgeBottomInfoDispTimerState)
NSTUB(0xfe48e708,  LiveViewApp_handler_end)                 // start of next function
NSTUB(0xfe4a8544,  PlayMain_handler)
NSTUB(0xfe5e7ec8,  PlayMovieGuideApp_handler)
NSTUB(0xfe49bc18,  ShootOlcApp_handler)
// NSTUB(    ???,  LiveViewLevelApp_handler)                /* present on 5D3.113 */
// NSTUB(    ???,  LiveViewShutterApp_handler)              /* present on 6D.113, 650D.104, EOSM.202, 700D.113 */
// NSTUB(0xFE49AA14,  LiveViewWbApp_handler)                /* present on 7D.203, 5D3.113, 5D2.212 */
// NSTUB(    ???,  LiveViewWifiApp_handler)                 /* present on 6D.113 */
// NSTUB(    ???,  StartPlayProtectGuideApp)                /* present on 7D.203, 5D2.212 */
// NSTUB(    ???,  StopPlayProtectGuideApp)                 /* present on 7D.203, 5D2.212 */

/** Display **/
NSTUB(0xfe40e2d4,  MirrorDisplay)
NSTUB(0xfe40e334,  NormalDisplay)
NSTUB(0xfe40e304,  ReverseDisplay)

/** EDMAC **/
NSTUB(0xfe29da58,  AbortEDmac)
NSTUB(0xfe29d764,  ConnectReadEDmac)
NSTUB(0xfe29d6a0,  ConnectWriteEDmac)
NSTUB(0xfe29db20,  RegisterEDmacAbortCBR)
NSTUB(0xfe29daf8,  RegisterEDmacCompleteCBR)
NSTUB(0xfe29dc24,  RegisterEDmacPopCBR)
NSTUB(0xfe29d5e8,  SetEDmac)
NSTUB(0xfe29d904,  StartEDmac)
NSTUB(0xfe29db60,  UnregisterEDmacAbortCBR)
NSTUB(0xfe29db0c,  UnregisterEDmacCompleteCBR)
NSTUB(0xfe29dc38,  UnregisterEDmacPopCBR)

/** Electronic Level **/
NSTUB(0xfe2ea488,  GUI_SetRollingPitchingLevelStatus)

/** Engio **/
NSTUB(0xfe29e9f4, _EngDrvOut)
NSTUB(0xfe29eda0, _engio_write)
NSTUB(0xfe29e8e4,  shamem_read)

/** Eventprocs (call by name) **/
NSTUB(0xfe1202bc,  call)

/** Events **/
NSTUB(0xfe2c162c,  TryPostEvent)                            /* present on 6D.113, 650D.104, EOSM.202, 700D.113 */
NSTUB(0xfe2c1688,  TryPostEvent_end)                        /* present on 6D.113, 650D.104, EOSM.202, 700D.113 */
NSTUB(0xfe2bda54,  TryPostStageEvent)                       /* present on 6D.113, 650D.104, EOSM.202, 700D.113 */
NSTUB(0xfe2bdab0,  TryPostStageEvent_end)                   /* present on 6D.113, 650D.104, EOSM.202, 700D.113 */

/** ExMem **/
NSTUB(0xfe122cb8,  AddMemoryChunk)
NSTUB(0xfe125168,  AllocateContinuousMemoryResource)        // m_pfContAllocMemoryCBR
NSTUB(0xfe12511c,  AllocateMemoryResource)                  // m_pfAllocMemoryCBR
NSTUB(0xfe122234,  CreateMemoryChunk)
NSTUB(0xfe122a18,  CreateMemorySuite)                       // FFCCEF34
NSTUB(0xfe12284c,  DeleteMemorySuite)                       // FFCCED2C
NSTUB(0xfe125280,  FreeMemoryResource)                      // m_pfFreeMemoryCBR
NSTUB(0xfe122d88,  GetFirstChunkFromSuite)                  // AJ_PackMemory_PackMem_p3
NSTUB(0xfe1227d8,  GetMemoryAddressOfMemoryChunk)           // AJ_PackMemory_PackMem.c_IsChunkSignature
NSTUB(0xfe123514,  GetNextMemoryChunk)
NSTUB(0xfe0d54fc,  SRM_AllocateMemoryResourceFor1stJob)
NSTUB(0xfe0d58d0,  SRM_FreeMemoryResourceFor1stJob)

/** GUI for old cameras **/
NSTUB(   0x36c0c,  gui_timer_struct)                        // in GUI_Control_Post
NSTUB(0xfe151ccc,  gui_change_mode)                         // GUI_ChangeMode_Post
NSTUB(0xfe1524ac,  gui_local_post)
NSTUB(0xfe152ad4,  gui_other_post)
// NSTUB(    ???,  gui_change_lcd_state_post)               /* present on 7D.203, 500D.111, 50D.109, 5D2.212 */

NSTUB(0xfe152ebc,  gui_change_shoot_type_post)              /* present on 7D.203, 500D.111, 50D.109, 5D2.212 */
NSTUB(0xfe153748,  gui_init_event)                          /* present on 7D.203, 500D.111, 50D.109, 5D2.212 */
NSTUB(0xfe152e34,  gui_post_10000085)                       /* present on 500D.111, 50D.109, 5D2.212 */
// NSTUB(    ???,  gui_timer_something)                     /* present on 7D.203, 500D.111, 50D.109, 5D2.212 */

/** GUI timers **/
NSTUB(0xfe4828f8,  CancelDateTimer)                         /* present on 7D.203, 6D.113, 5D3.113 */
NSTUB(0xfe1290c8,  CancelTimer)
NSTUB(0xfe120d20,  SetHPTimerAfterNow)
NSTUB(0xfe120e10,  SetHPTimerNextTick)
NSTUB(0xfe128ff8,  SetTimerAfter)

/** H264 Encoder **/
NSTUB(   0x38a3c,  mvr_config)
NSTUB(0xfe280edc,  mvrFixQScale)
NSTUB(0xfe2809a0,  mvrSetDefQScale)
NSTUB(0xfe2809e8,  mvrSetFullHDOptSize)
NSTUB(0xfe280bcc,  mvrSetGopOptSizeFULLHD)

/** Interrupts **/
// NSTUB(    ???,  isr_table_handler)                       /* present on 7D_MASTER.203 */
// NSTUB(    ???,  isr_table_param)                         /* present on 7D_MASTER.203 */
//NSTUB(   ???,  post_isr_hook)                           /* present on 7D.203, 6D.113, 5D3.113, EOSM.202 */
//NSTUB(   ???,  pre_isr_hook)                            /* present on 7D.203, 6D.113, 5D3.113, 7D_MASTER.203, EOSM.202 */

/** LCD Sensor **/
NSTUB(0xfe12bc18,  DispSensorStart)
// NSTUB(    ???,  LightMeasure_n_Callback_r0)              /* present on 7D.203, 5D2.212 */

/** Making the card bootable **/
NSTUB(   0x48f94,  cf_device)
NSTUB(   0x48fb8,  sd_device)                               // in sdReadBlk
NSTUB(0xfe543e24,  fsuDecodePartitionTable)

/** Memory allocation **/
NSTUB(0xfe127918,  GetMemoryInformation)                    // called from AllocateMemory
NSTUB(0xfe1278c4,  GetSizeOfMaxRegion)
NSTUB(0xfe127b78, _AllocateMemory)                          // "[MEM] NG AllocateMemory"
NSTUB(0xfe127f14, _FreeMemory)
NSTUB(0xfe11f3c8, _alloc_dma_memory)
NSTUB(0xfe2c5f28, _free)
NSTUB(0xfe2c1888, _free_dma_memory)
NSTUB(0xfe2c5ed0, _malloc)                                  // maybe its better to use Allocate/Free?
// NSTUB(    ???,  free_dma_memory)                         /* present on 7D_MASTER.203 */

/** Message queues **/
NSTUB(    0x7868,  msg_queue_count)			//ok
NSTUB(    0x7480,  msg_queue_create)                        //ok CreateMessageQueue 
NSTUB(    0x7814,  msg_queue_post)				//ok
NSTUB(    0x75d0,  msg_queue_receive)			//ok

/** PTP **/
NSTUB(0xfe36e86c,  ptp_register_handler)
NSTUB(0xfe1fc97c,  ptpPropSetUILock)                        /* present on 650D.104, 700D.113 */

/** Properties **/
NSTUB(0xfe10c5e0, _prop_cleanup)
NSTUB(0xfe10be44, _prop_request_change)
NSTUB(0xfe10c438,  prop_deliver)
NSTUB(0xfe10c4c0,  prop_register_slave)                     // called by"GUI_RegisterPropertySlave"
// NSTUB(    ???,  prop_unregister_slave)                   /* present on 7D.203 */

/** RPC (for 7D) **/
// NSTUB(0xFE2B8E18,  BulkInIPCTransfer)                    /* present on 7D.203 */
// NSTUB(0xFE2B8D54,  BulkOutIPCTransfer)                   /* present on 7D.203 */
// NSTUB(0xFE2B8F8C,  QuickOutIPCTransfer)                  /* present on 7D.203 */
// NSTUB(0xFE2B950C,  RegisterRPCHandler)                   /* present on 7D.203, 7D_MASTER.203 */
// NSTUB(0xFE2B95BC,  RequestRPC)                           /* present on 7D.203, 7D_MASTER.203 */

/** Recursive locks **/
NSTUB(    0xbcb8,  AcquireRecursiveLock)
NSTUB(    0xbbf8,  CreateRecursiveLock) 
NSTUB(    0xbe28,  ReleaseRecursiveLock)

/** ResLock **/
NSTUB(0xfe2a1818,  CreateResLockEntry)
NSTUB(0xfe2a1d58,  LockEngineResources)
NSTUB(0xfe2a1e90,  UnLockEngineResources)

/** Semaphores **/
NSTUB(    0x30c8,  create_named_semaphore)
NSTUB(    0x3358,  give_semaphore)
NSTUB(    0x3270,  take_semaphore)

/** Task info **/
//ok
NSTUB(   0x358ec,  task_max)
//ok
NSTUB(0x4080,  get_task_by_id)                         // AJ_task_trampoline_related_p10 FE2C2ED0 

NSTUB(0x24c4,  _get_task_info_by_id)                         // AJ_task_trampoline_related_p10 FE2C2ED0 
//THUMB_FN(0xfcb46b2c,  _get_task_info_by_id) 
//NSTUB(0xfEa95880,  is_taskid_valid)                         // AJ_task_trampoline_related_p10 FE2C2ED0

NSTUB(    0x24c4,  is_taskid_valid)                         // AJ_task_trampoline_related_p10 FE2C2ED0

NSTUB(   0x31170,  current_task)
NSTUB(     0x640,  current_interrupt)                       // in interrupt handler (0x18), where MEM(C0201004) is stored




/** Task sleep **/
NSTUB(    0x3780,  msleep)                                  // called from EV_GETDONE_CACHE param 0x64

/** Tasks **/
NSTUB(   0x35924,  task_dispatch_hook)  // task_trampoline -> last call -> last non-empty BL -> one indirect call here
NSTUB(    0x38FC,  task_create)
NSTUB(    0x41DC,  task_trampoline)
// NSTUB(    ???,  current_task_ctx)                        /* present on 7D.203 */
// NSTUB(    ???,  next_task_ctx)                           /* present on 7D.203 */

/** Misc **/
NSTUB(   0x6d0a0,  lv_path_struct)                          // first arg of SelectPathDriveMode
NSTUB(0xfe11ac24,  LoadCalendarFromRTC)
NSTUB(0xfe2bbbc8,  vsnprintf)
//NSTUB(0xFE0180A8,  _print_serial)
//NSTUB( 0xff37aee4, ChangeHDMIOutputSizeToFULLHD)
//NSTUB( 0xff37b174, ChangeHDMIOutputSizeToVGA)
NSTUB(0xfe114b54,  EnableImagePhysicalScreenParameter)      /* present on 7D.203, 50D.109, 5D2.212 */
// NSTUB(    ???,  FSUunMountDevice)                        /* present on 5D3.113 */
// NSTUB(    ???,  PtpDps_remote_release_SW1_SW2_worker)    /* present on 7D.203, 5D2.212 */
// NSTUB(    ???,  memcpy)                                  /* present on 7D_MASTER.203 */

NSTUB(0xfe0d48e4,  TryReceiveMessageQueue)


/** Unused stubs or porting notes **/
// NSTUB( 0xFF34B724, AJ_guess_LED_OFF )
// NSTUB( 0xFF34B6F4, AJ_guess_LED_ON )   // led for SD/CF read and write ops
// NSTUB(0xFF29E25C,  AfCtrl_SetLensParameterRemote)
// NSTUB(0xFF37FAF4,  CancelBottomInfoDispTimer)
// NSTUB(0xFF234FCC,  ChangeColorPalette)
// NSTUB(0xFF31DA7C,  CreateDialogBox)
// NSTUB(0xFF31D214,  DeleteDialogBox)
// NSTUB(0xFF1E65E4,  FIO_SeekFile)
// NSTUB(0xFF23081C,  GUI_GetFirmVersion)
// NSTUB(0xFF1115DC,  GetJpegBufForLV)
// NSTUB(0xFF1115E8,  GetJpegSizeForLV)
// NSTUB(0xFF073910, GetNumberOfChunks)
// NSTUB(0xFF073580, GetRemainOfMemoryChunk)
// NSTUB(0xFF0735B0, GetSizeOfMemoryChunk)
// NSTUB(0xFF0738AC, GetSizeOfMemorySuite)
// NSTUB(0xFF378968,  HideBottomInfoDisp_maybe)                // look for StartBottomInfoDispTimer
// NSTUB(   0x3787C,  LV_EX_X)
// NSTUB(   0x37880,  LV_EX_Y)
// NSTUB(0xFF1E963C,  MuteOff_0)
// NSTUB(0xFF1E95F4,  MuteOn_0)
// NSTUB(0xFF039D4C,  PD_GetBatteryPower)
// NSTUB(0xFF0396E4,  PD_RemoteRelease)
// NSTUB(0xFF05CB28,  PROPAD_GetPropertyData)
// NSTUB(0xFF05BF04,  PROP_GetMulticastProperty)
// NSTUB(0xFF1E09F8,  PopEDmac)
// NSTUB( 0xFF1A16D0, ReadyLiveViewDevice )
// NSTUB( 0xff33a734, RedrawDisplay )
// NSTUB(0xFF14B9E4,  RemoteRelease)
//NSTUB(0xFE1139DC,  SetBitmapVramAddress)                    // where to find bmp_vram_info
// NSTUB(0xFF06FB60, SetHPTimerAfterTimeout)
// NSTUB( 0xFF1A1CA4, SleepLiveViewDevice )               // not found
// NSTUB(0xFF072280, _AllocateMemory_do)                       // no err70, malloc structure at 0x3070
// NSTUB(0xFF05BF04, _prop_get_value)
// NSTUB(0xFF06DFCC,  bootdisk_disable)
// NSTUB(0xFF06DFC0,  bootdisk_enable)
// NSTUB( 0xFF4F2648, cfReadBlk )
// NSTUB(0xFF010500,  cli_save)
// NSTUB(0xFF31C444,  ctrlman_dispatch_event)
// NSTUB(0xFF070F38,  delete_semaphore)
// NSTUB(0xFF1E8FE0,  dispcheck)
// NSTUB(0xFF06E690,  dm_set_print_level)
// NSTUB(0xFF06E318,  dmstart)
// NSTUB(0xFF06E358,  dmstop)
// NSTUB(0xFF06ED38,  dumpf)
// NSTUB(0xFF14B8F4,  gui_lock)                                // PtpPropSetUILock
// NSTUB(0xFF56DCCC,  gui_main_task_functbl)                   // 7 functions
// NSTUB(0xFF31C594,  gui_task_create)
// NSTUB(0xFF31C6B4,  gui_task_destroy)
// NSTUB(    0x1A7C,  hotplug_struct)
// NSTUB(0xFF01B5D8,  hotplug_task)
// NSTUB(    0x1AC8,  hotplug_usb_buf)                         // after "USB Disconnect"
// NSTUB(0xFF04E9E4,  mvrSetBitRate)
// NSTUB(0xFF1C94E0,  mvrSetDeblockingFilter)
// NSTUB(0xFF1C97FC,  mvrSetGopOptSizeHD)
// NSTUB(0xFF1C9874,  mvrSetGopOptSizeVGA)
// NSTUB(0xFF1C96E8,  mvrSetHDOptSize)
// NSTUB(0xFF1C9A94,  mvrSetPrintMovieLog)
// NSTUB(0xFF1C9730,  mvrSetVGAOptSize)
// NSTUB(0xFF06FCE4,  oneshot_timer)
// NSTUB(0xFF230E48,  prop_request_icu_auto_poweroff)          // "PROP_Request PROP_ICU_AUTO_POWEROFF(%d)"
// NSTUB(0xFF14BAC8,  ptpPropButtonSW1)
// NSTUB(0xFF14BC30,  ptpPropButtonSW2)
// NSTUB(0xFF1FAEEC,  register_func)
// NSTUB(0xFF4F838C,  sdReadBlk)
// NSTUB(0xFF010514,  sei_restore)
// NSTUB(0xFF2E1124,  vram_get_number)                         // after "[ImgPlyer]   Rate"
// NSTUB(0xFF1E7C04,  vram_get_pos_and_size)
