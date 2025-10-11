
long * FUN_006309c0(undefined1 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  param_2 = param_2 - (long)param_1;
  plVar1 = (long *)FUN_00637be0(param_2,0);
  plVar2 = plVar1 + 3;
  if (param_2 == 1) {
    *(undefined1 *)(plVar1 + 3) = *param_1;
  }
  else {
    plVar2 = (long *)thunk_FUN_00713a50(plVar2,param_1,param_2);
  }
  if (plVar1 == &DAT_009452a0) {
    return plVar2;
  }
  *(undefined4 *)(plVar1 + 2) = 0;
  *plVar1 = param_2;
  *(undefined1 *)((long)plVar1 + param_2 + 0x18) = 0;
  return plVar2;
}

