
/* WARNING: Removing unreachable block (ram,0x0076dbb3) */
/* WARNING: Removing unreachable block (ram,0x0076dc18) */

undefined8 FUN_0076db30(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 7) || (param_2 == 0x26)) {
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      uVar3 = 0x48;
      syscall();
    }
    else {
      uVar2 = FUN_007a2720();
      syscall();
      FUN_007a2790(uVar2,param_2,param_3);
      uVar3 = 0x48;
    }
  }
  else {
    uVar3 = FUN_0076e590();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

