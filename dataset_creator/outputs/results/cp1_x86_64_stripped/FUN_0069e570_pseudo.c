
void FUN_0069e570(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2[1];
  *param_1 = (long)(param_1 + 2);
  if (param_2 + 2 != (long *)*param_2) {
    *param_1 = *param_2;
    lVar2 = param_2[2];
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    *param_2 = (long)(param_2 + 2);
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    return;
  }
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  param_1[1] = lVar1;
  param_2[1] = 0;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}

