
undefined4
FUN_0061a320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_004b2c00(param_5);
  lVar3 = FUN_004b2df0(param_5);
  if (lVar3 != 0) {
    iVar1 = FUN_0061a240(param_4,lVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00619d30(param_1,param_2,param_3,lVar3,param_5);
      goto LAB_0061a36b;
    }
  }
  uVar2 = 0;
LAB_0061a36b:
  FUN_004b2d50(param_5);
  return uVar2;
}

