
void FUN_006b5a70(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_2 + 2;
  *param_1 = (long)(param_1 + 2);
  if (plVar1 == (long *)*param_2) {
    FUN_00756660(param_1 + 2,plVar1,4);
  }
  else {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
  }
  lVar2 = param_2[1];
  *param_2 = (long)plVar1;
  param_2[1] = 0;
  param_1[1] = lVar2;
  *(undefined4 *)(param_2 + 2) = 0;
  return;
}

