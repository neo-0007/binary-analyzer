
undefined8 FUN_00428ca0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00422340(&DAT_0093fd50,FUN_004283b0);
  if ((iVar1 != 0) && (DAT_0093fd48 != 0)) {
    iVar1 = FUN_004222c0(DAT_0093fd60);
    if (iVar1 != 0) {
      FUN_0051a270(DAT_0093fd70);
      DAT_0093fd70 = 0;
      DAT_0093fd58 = param_1;
      FUN_004222e0(DAT_0093fd60);
      return 1;
    }
  }
  return 0;
}

