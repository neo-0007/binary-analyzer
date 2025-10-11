
/* WARNING: Removing unreachable block (ram,0x007a2b40) */
/* WARNING: Removing unreachable block (ram,0x007a2b45) */
/* WARNING: Removing unreachable block (ram,0x007a2b1f) */
/* WARNING: Removing unreachable block (ram,0x007a2b24) */
/* WARNING: Removing unreachable block (ram,0x007a2b4a) */

undefined8
FUN_007a2ac0(undefined8 param_1,undefined4 param_2,uint param_3,long *param_4,uint param_5)

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
      uVar1 = FUN_007a2720();
      syscall();
      FUN_007a2790(uVar1,(param_3 << 8 ^ 0x100 | 0x89) ^ param_5,param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00703110("The futex facility returned an unexpected error code.\n");
  }
  return 0x16;
}

