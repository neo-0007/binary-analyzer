
ulong FUN_0076eb20(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  if ((DAT_0094ab88 == 0) && (iVar2 = FUN_0076eae0(0), iVar2 < 0)) {
    return 0xffffffffffffffff;
  }
  uVar1 = DAT_0094ab88;
  if (param_1 == 0) {
    return DAT_0094ab88;
  }
  if ((long)param_1 < 1) {
    if (-param_1 < DAT_0094ab88 || -DAT_0094ab88 == param_1) goto LAB_0076eb7f;
  }
  else if (!CARRY8(param_1,DAT_0094ab88)) {
LAB_0076eb7f:
    iVar2 = FUN_0076eae0(param_1 + DAT_0094ab88);
    if (iVar2 < 0) {
      return 0xffffffffffffffff;
    }
    return uVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  return 0xffffffffffffffff;
}

