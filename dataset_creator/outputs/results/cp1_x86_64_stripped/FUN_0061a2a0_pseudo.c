
undefined4 FUN_0061a2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_004b2c00(param_4);
  lVar3 = FUN_004b2df0(param_4);
  if (lVar3 != 0) {
    iVar1 = FUN_0061a240(param_3,lVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00619770(param_1,param_2,lVar3,param_4);
      goto LAB_0061a2e3;
    }
  }
  uVar2 = 0;
LAB_0061a2e3:
  FUN_004b2d50(param_4);
  return uVar2;
}

