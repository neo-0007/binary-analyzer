
void FUN_006b8700(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 4;
  *param_1 = (long)(param_1 + 2);
  if (param_2 != 0) {
    lVar1 = thunk_FUN_007564d0(param_2,param_2,4);
    lVar1 = param_2 + lVar1 * 4;
  }
  FUN_006b8500(param_1,param_2,lVar1);
  return;
}

