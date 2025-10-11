
long FUN_0063b830(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3 - param_2 >> 2;
  if (lVar2 == 0) {
    return param_2;
  }
  lVar1 = *param_1;
  FUN_0063b2f0(param_1,param_2 - lVar1 >> 2,lVar2,0);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + -8) = 0xffffffff;
  return lVar2 + (param_2 - lVar1);
}

