
void FUN_006a0d60(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = (long)(param_1 + 2);
  FUN_006a0c90(param_1,*param_2,lVar1 + *param_2);
  return;
}

