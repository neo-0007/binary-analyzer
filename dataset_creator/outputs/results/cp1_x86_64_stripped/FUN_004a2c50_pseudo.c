
undefined8
FUN_004a2c50(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
            undefined8 param_5,long param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((-1 < param_3) && (iVar1 = thunk_FUN_0049f880(*param_1,(long)param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_004a8880(param_1[1],param_2,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    FUN_004a2150(param_1[2],param_6,param_7);
  }
  return 1;
}

