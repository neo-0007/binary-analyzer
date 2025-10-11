
long * FUN_0041cdd0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_2 != 0) {
    if (*param_1 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      do {
        iVar1 = thunk_FUN_00712780(param_2);
        if (iVar1 == 0) {
          return param_1;
        }
        plVar2 = (long *)param_1[5];
        param_1 = param_1 + 5;
      } while (plVar2 != (long *)0x0);
    }
    return plVar2;
  }
  return (long *)0x0;
}

