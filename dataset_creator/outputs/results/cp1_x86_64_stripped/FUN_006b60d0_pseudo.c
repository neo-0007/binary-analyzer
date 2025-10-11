
long * FUN_006b60d0(long *param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = param_1[1];
  plVar2 = (long *)*param_1;
  if (plVar2 == param_1 + 2) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < lVar1 + 1U) {
    FUN_006b5810(param_1,lVar1,0,0,1);
    plVar2 = (long *)*param_1;
  }
  *(undefined4 *)((long)plVar2 + lVar1 * 4) = param_2;
  param_1[1] = lVar1 + 1U;
  *(undefined4 *)((long)plVar2 + 4 + lVar1 * 4) = 0;
  return param_1;
}

