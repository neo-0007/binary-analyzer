
undefined8 FUN_0043c440(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2[1] != 0) && (uVar2 = FUN_005379a0(), (int)uVar2 == 0)) {
    return uVar2;
  }
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    iVar1 = FUN_0051a180();
    if (iVar1 == 0) {
      FUN_00537a40(param_2[1]);
      return 0;
    }
    lVar3 = param_2[2];
  }
  uVar2 = *param_2;
  param_1[2] = lVar3;
  *param_1 = uVar2;
  param_1[1] = param_2[1];
  return 1;
}

