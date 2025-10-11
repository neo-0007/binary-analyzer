
/* WARNING: Removing unreachable block (ram,0x00788460) */
/* WARNING: Removing unreachable block (ram,0x00788478) */

undefined8 getrandom(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x13e;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,param_2,param_3);
  return 0x13e;
}

