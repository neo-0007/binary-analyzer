
long * FUN_0063cc00(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != param_1) {
    lVar2 = (long)param_2 - (long)param_1 >> 2;
    plVar1 = (long *)FUN_0063af10(lVar2,0);
    if (lVar2 == 1) {
      *(undefined4 *)(plVar1 + 3) = *param_1;
    }
    else if (lVar2 != 0) {
      FUN_00771ea0(plVar1 + 3,param_1,lVar2,0x3fffffffffffffff);
    }
    if (plVar1 != &DAT_009452c0) {
      *(undefined4 *)(plVar1 + 2) = 0;
      *plVar1 = lVar2;
      *(undefined4 *)((long)plVar1 + ((long)param_2 - (long)param_1) + 0x18) = 0;
    }
    return plVar1 + 3;
  }
  return (long *)&DAT_009452d8;
}

