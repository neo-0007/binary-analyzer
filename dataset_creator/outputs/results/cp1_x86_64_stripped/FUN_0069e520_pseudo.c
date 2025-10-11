
void FUN_0069e520(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(param_1 + 2);
  if (param_2 + 2 == (long *)*param_2) {
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
  }
  else {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
  }
  lVar1 = param_2[1];
  *param_2 = (long)(param_2 + 2);
  param_2[1] = 0;
  param_1[1] = lVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}

