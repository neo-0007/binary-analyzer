
/* WARNING: Removing unreachable block (ram,0x007a2a90) */
/* WARNING: Removing unreachable block (ram,0x007a2a95) */
/* WARNING: Removing unreachable block (ram,0x007a2a6d) */
/* WARNING: Removing unreachable block (ram,0x007a2a72) */
/* WARNING: Removing unreachable block (ram,0x007a2a9a) */

undefined8
FUN_007a2a30(undefined8 param_1,undefined4 param_2,uint param_3,long *param_4,uint param_5)

{
  if ((param_4 != (long *)0x0) && (*param_4 < 0)) {
    return 0x6e;
  }
  if (param_3 < 2) {
    syscall();
                    /* WARNING: Subroutine does not return */
    FUN_00703110("The futex facility returned an unexpected error code.\n",
                 (param_3 << 8 ^ 0x100 | 0x89) ^ param_5,param_2,param_4,0,0xffffffff,0xca);
  }
  return 0x16;
}

