
void FUN_006b5320(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *(undefined4 *)(*param_1 + param_2 * 4) = 0;
  return;
}

