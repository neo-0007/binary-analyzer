
undefined8 FUN_00428f70(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00422340(&DAT_0093fd50,FUN_004283b0);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_0093fd48 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_0051a180(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_0051d760(param_1);
    if (lVar2 == 0) goto LAB_00429040;
  }
  iVar1 = FUN_004222c0(DAT_0093fd68);
  if (iVar1 != 0) {
    iVar1 = FUN_00422340(&DAT_0093fd50,FUN_004283b0);
    if (((iVar1 != 0) && (DAT_0093fd48 != 0)) && (iVar1 = FUN_004222c0(DAT_0093fd60), iVar1 != 0)) {
      FUN_0051a270(DAT_0093fd70);
      DAT_0093fd58 = lVar2;
      DAT_0093fd70 = param_1;
      FUN_004222e0(DAT_0093fd60);
    }
    FUN_004222e0(DAT_0093fd68);
    return 1;
  }
LAB_00429040:
  FUN_0051a270(param_1);
  return 0;
}

