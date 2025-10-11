
long * FUN_0063b0b0(undefined4 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_2 - (long)param_1 >> 2;
  plVar2 = (long *)FUN_0063af10(lVar3,0);
  plVar1 = plVar2 + 3;
  if (lVar3 == 1) {
    *(undefined4 *)(plVar2 + 3) = *param_1;
  }
  else if (lVar3 != 0) {
    FUN_00771ea0(plVar1,param_1,lVar3,0x3fffffffffffffff);
  }
  if (plVar2 != &DAT_009452c0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    *plVar2 = lVar3;
    *(undefined4 *)((long)plVar2 + (param_2 - (long)param_1) + 0x18) = 0;
    return plVar1;
  }
  return plVar1;
}

