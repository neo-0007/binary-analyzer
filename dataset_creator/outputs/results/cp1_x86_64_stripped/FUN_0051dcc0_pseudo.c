
undefined8 FUN_0051dcc0(undefined8 param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00422340(&DAT_009411f8,FUN_0051d940);
  if (((iVar1 != 0) && (DAT_009411e4 != 0)) && (iVar1 = FUN_004222c0(DAT_009411f0), iVar1 != 0)) {
    for (; *param_2 != 0; param_2 = param_2 + 2) {
      FUN_005459e0(DAT_009411e8,param_2);
    }
    FUN_004222e0(DAT_009411f0);
    return 1;
  }
  return 0;
}

