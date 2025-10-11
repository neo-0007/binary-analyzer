
undefined8 FUN_004a8880(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 != -1) {
    if (param_1[1] == 0) {
      lVar1 = FUN_004a7f10();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    FUN_004a06b0(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      FUN_004a10c0(param_1[1],param_3,param_4);
    }
    return 1;
  }
  FUN_004a06b0(*param_1);
  *param_1 = param_2;
  FUN_004a7f30(param_1[1]);
  param_1[1] = 0;
  return 1;
}

