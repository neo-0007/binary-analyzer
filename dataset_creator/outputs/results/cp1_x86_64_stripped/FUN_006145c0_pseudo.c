
uint FUN_006145c0(int param_1)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_38 [10];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_1 - 1;
  if (7 < uVar1) {
    if (DAT_00942858 != 0) {
      local_38[0] = param_1;
      iVar2 = FUN_00435f40(DAT_00942858,local_38);
      if (-1 < iVar2) {
        uVar1 = iVar2 + 8;
        goto LAB_00614601;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_00614601:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

