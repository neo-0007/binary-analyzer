
long FUN_00638400(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 - param_2 == 0) {
    return param_2;
  }
  lVar1 = *param_1;
  FUN_00637f00(param_1,param_2 - lVar1,param_3 - param_2,0);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + -8) = 0xffffffff;
  return lVar2 + (param_2 - lVar1);
}

