
long * FUN_00637c80(long param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    return (long *)&DAT_009452b8;
  }
  plVar1 = (long *)FUN_00637be0(param_1,0);
  plVar2 = plVar1 + 3;
  if (param_1 == 1) {
    *(char *)(plVar1 + 3) = param_2;
  }
  else {
    plVar2 = (long *)thunk_FUN_00713720(plVar2,(int)param_2,param_1);
  }
  if (plVar1 != &DAT_009452a0) {
    *(undefined4 *)(plVar1 + 2) = 0;
    *plVar1 = param_1;
    *(undefined1 *)((long)plVar1 + param_1 + 0x18) = 0;
  }
  return plVar2;
}

