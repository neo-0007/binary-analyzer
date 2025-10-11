
uint FUN_0059a9b0(int param_1)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_1 - 1;
  if (8 < uVar1) {
    if (DAT_00942780 != 0) {
      local_48[0] = param_1;
      iVar2 = FUN_00435f40(DAT_00942780,local_48);
      if (-1 < iVar2) {
        uVar1 = iVar2 + 9;
        goto LAB_0059a9f1;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_0059a9f1:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

