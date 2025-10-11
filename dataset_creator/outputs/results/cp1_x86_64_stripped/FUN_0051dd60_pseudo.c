
undefined8 FUN_0051dd60(uint param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00422340(&DAT_009411f8,FUN_0051d940);
  if ((iVar1 != 0) && (DAT_009411e4 != 0)) {
    local_28[0] = 0x1000000;
    if ((param_1 & 0x80000000) == 0) {
      local_28[0] = (ulong)(param_1 & 0x7f800000);
    }
    iVar1 = FUN_004222a0(DAT_009411f0);
    if (iVar1 != 0) {
      lVar2 = FUN_00545b60(DAT_009411e8,local_28);
      FUN_004222e0(DAT_009411f0);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 8);
        goto LAB_0051ddf2;
      }
    }
  }
  uVar3 = 0;
LAB_0051ddf2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

