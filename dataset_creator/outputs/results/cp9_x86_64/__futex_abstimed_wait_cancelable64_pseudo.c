
/* WARNING: Removing unreachable block (ram,0x00799210) */
/* WARNING: Removing unreachable block (ram,0x00799215) */
/* WARNING: Removing unreachable block (ram,0x007991ef) */
/* WARNING: Removing unreachable block (ram,0x007991f4) */
/* WARNING: Removing unreachable block (ram,0x0079921a) */

undefined8
__futex_abstimed_wait_cancelable64
          (undefined8 param_1,undefined4 param_2,uint param_3,long *param_4,uint param_5)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if ((param_4 != (long *)0x0) && (*param_4 < 0)) {
    return 0x6e;
  }
  if (param_3 < 2) {
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      syscall();
    }
    else {
      uVar1 = __pthread_enable_asynccancel();
      syscall();
      __pthread_disable_asynccancel(uVar1,(param_3 << 8 ^ 0x100 | 0x89) ^ param_5,param_2);
    }
                    /* WARNING: Subroutine does not return */
    __libc_fatal("The futex facility returned an unexpected error code.\n");
  }
  return 0x16;
}

