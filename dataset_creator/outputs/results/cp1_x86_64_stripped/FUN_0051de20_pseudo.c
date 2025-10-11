
undefined8 FUN_0051de20(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00422340(&DAT_009411f8,FUN_0051d940);
  if (iVar1 == 0) goto LAB_0051df10;
  uVar2 = 0;
  if ((DAT_009411e4 == 0) || ((param_1 & 0x80000000) != 0)) goto LAB_0051deb6;
  local_38[0] = (ulong)(param_1 & 0x7fffffff);
  iVar1 = FUN_004222a0(DAT_009411f0);
  if (iVar1 == 0) {
LAB_0051ded0:
    local_38[0] = (ulong)(param_1 & 0x7fffff);
    iVar1 = FUN_004222a0(DAT_009411f0);
    if (iVar1 != 0) {
      lVar3 = FUN_00545b60(DAT_009411e8,local_38);
      FUN_004222e0(DAT_009411f0);
      if (lVar3 != 0) goto LAB_0051deb2;
    }
LAB_0051df10:
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00545b60(DAT_009411e8,local_38);
    FUN_004222e0(DAT_009411f0);
    if (lVar3 == 0) goto LAB_0051ded0;
LAB_0051deb2:
    uVar2 = *(undefined8 *)(lVar3 + 8);
  }
LAB_0051deb6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

