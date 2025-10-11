
undefined8 FUN_0061a240(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_004b7b50(param_2);
  if (*param_1 != -1) {
    param_1 = param_1 + 1;
    do {
      uVar2 = FUN_004b8360(param_2);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      iVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return 1;
}

