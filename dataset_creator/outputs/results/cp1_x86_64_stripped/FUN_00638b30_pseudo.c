
long * FUN_00638b30(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00637be0(*param_1 + param_3,param_1[1],param_2);
  lVar1 = *param_1;
  plVar3 = plVar2 + 3;
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      *(char *)(plVar2 + 3) = (char)param_1[3];
      lVar1 = *param_1;
    }
    else {
      plVar3 = (long *)thunk_FUN_00713a50(plVar3,param_1 + 3);
      lVar1 = *param_1;
    }
  }
  if (plVar2 != &DAT_009452a0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    *plVar2 = lVar1;
    *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    return plVar3;
  }
  return plVar3;
}

