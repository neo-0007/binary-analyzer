
long * FUN_006540b0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 4;
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x40);
  *param_1 = (long)(param_1 + 2);
  if (lVar1 != 0) {
    lVar2 = thunk_FUN_007564d0(lVar1,param_2,4);
    lVar2 = lVar1 + lVar2 * 4;
  }
  FUN_006b8500(param_1,lVar1,lVar2);
  return param_1;
}

