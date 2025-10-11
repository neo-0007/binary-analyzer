
void FUN_006a1000(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 1;
  *param_1 = (long)(param_1 + 2);
  if (param_2 != 0) {
    lVar1 = thunk_FUN_007129d0(param_2,param_2,1);
    lVar1 = param_2 + lVar1;
  }
  FUN_006a0e00(param_1,param_2,lVar1);
  return;
}

