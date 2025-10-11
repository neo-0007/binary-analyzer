
undefined8 FUN_00552b10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = param_1[4];
  if (lVar3 == 0) {
    lVar3 = FUN_00535890();
    param_1[4] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_00537bb0(lVar3,param_2[4]);
  if (iVar2 != 0) {
    FUN_0053f190(param_1[6]);
    lVar3 = FUN_0053f1e0(param_2[6]);
    param_1[6] = lVar3;
    if (lVar3 != 0) {
      lVar3 = param_2[5];
      param_1[5] = lVar3;
      if (lVar3 != 0) {
        FUN_0053fe50();
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

