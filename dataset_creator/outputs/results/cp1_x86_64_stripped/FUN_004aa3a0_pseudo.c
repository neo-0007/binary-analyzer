
long * FUN_004aa3a0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)0x0;
  plVar4 = plVar1;
  while ((*(int *)((long)plVar4 + 0x24) == 1 || (*plVar4 != param_2))) {
    plVar2 = (long *)plVar4[5];
    plVar3 = plVar4;
    plVar4 = plVar2;
    if (plVar2 == (long *)0x0) {
      return plVar2;
    }
  }
  if ((int)plVar4[4] == 1) {
    if (plVar1 == plVar4) {
      *param_1 = plVar4[5];
    }
    else {
      plVar3[5] = plVar4[5];
    }
    FUN_0041ad60(plVar4,"../crypto/async/async_wait.c",0xa5);
    param_1[1] = param_1[1] + -1;
    return (long *)0x1;
  }
  *(undefined4 *)((long)plVar4 + 0x24) = 1;
  param_1[2] = param_1[2] + 1;
  return (long *)0x1;
}

