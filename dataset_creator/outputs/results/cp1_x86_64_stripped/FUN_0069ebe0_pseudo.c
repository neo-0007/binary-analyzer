
long * FUN_0069ebe0(long *param_1,undefined1 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = param_1[1];
  plVar2 = (long *)*param_1;
  if (plVar2 == param_1 + 2) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < lVar1 + 1U) {
    FUN_0069e300(param_1,lVar1,0,0,1);
    plVar2 = (long *)*param_1;
  }
  *(undefined1 *)((long)plVar2 + lVar1) = param_2;
  param_1[1] = lVar1 + 1U;
  *(undefined1 *)(*param_1 + 1 + lVar1) = 0;
  return param_1;
}

