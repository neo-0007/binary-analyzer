
void FUN_00671320(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[2] = param_2[6];
  lVar1 = param_2[3];
  param_1[2] = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18) + 0x10) = param_2[4];
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  return;
}

