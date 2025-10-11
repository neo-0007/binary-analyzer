
/* WARNING: Removing unreachable block (ram,0x00799160) */
/* WARNING: Removing unreachable block (ram,0x00799165) */
/* WARNING: Removing unreachable block (ram,0x0079913d) */
/* WARNING: Removing unreachable block (ram,0x00799142) */
/* WARNING: Removing unreachable block (ram,0x0079916a) */

undefined8
__futex_abstimed_wait64
          (undefined8 param_1,undefined4 param_2,uint param_3,long *param_4,uint param_5)

{
  if ((param_4 != (long *)0x0) && (*param_4 < 0)) {
    return 0x6e;
  }
  if (param_3 < 2) {
    syscall();
                    /* WARNING: Subroutine does not return */
    __libc_fatal("The futex facility returned an unexpected error code.\n",
                 (param_3 << 8 ^ 0x100 | 0x89) ^ param_5,param_2,param_4,0,0xffffffff,0xca);
  }
  return 0x16;
}

