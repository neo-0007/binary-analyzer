
undefined4 FUN_004b9680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_004b2c00(param_4);
  lVar2 = FUN_004b2df0(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_004b8260(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_004b9310(param_1,lVar2,param_3);
      goto LAB_004b96db;
    }
  }
  uVar1 = 0;
LAB_004b96db:
  FUN_004b2d50(param_4);
  return uVar1;
}

