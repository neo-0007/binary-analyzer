
long * FUN_0069fc40(long *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  lVar2 = param_1[1];
  plVar4 = (long *)*param_1;
  uVar1 = lVar2 + param_3;
  if (plVar4 == param_1 + 2) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < uVar1) {
    FUN_0069e300(param_1,lVar2,0,param_2,param_3);
    plVar4 = (long *)*param_1;
  }
  else if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined1 *)((long)plVar4 + lVar2) = *param_2;
      plVar4 = (long *)*param_1;
    }
    else {
      thunk_FUN_00713a50();
      plVar4 = (long *)*param_1;
    }
  }
  param_1[1] = uVar1;
  *(undefined1 *)((long)plVar4 + uVar1) = 0;
  return param_1;
}

