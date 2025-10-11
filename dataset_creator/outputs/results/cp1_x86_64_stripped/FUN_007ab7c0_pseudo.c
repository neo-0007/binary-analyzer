
/* WARNING: Removing unreachable block (ram,0x007ab8b0) */
/* WARNING: Removing unreachable block (ram,0x007ab8d0) */

undefined4 FUN_007ab7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
  }
  else {
    uVar2 = FUN_007a2720();
    syscall();
    FUN_007a2790(uVar2,param_2,param_3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x101;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

