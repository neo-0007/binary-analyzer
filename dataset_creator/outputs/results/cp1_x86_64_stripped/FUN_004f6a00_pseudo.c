
undefined8
FUN_004f6a00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = param_4;
  lVar2 = FUN_004f7790(param_2,param_3,param_6,param_7,param_8);
  if (lVar2 != 0) {
    uVar1 = FUN_004eae50(lVar2,local_20);
    *param_5 = uVar1;
    FUN_004eace0(lVar2);
    return 1;
  }
  *param_5 = 0;
  return 0;
}

