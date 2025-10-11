
long * FUN_0063bfe0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_0063af10(*param_1 + param_3,param_1[1],param_2);
  lVar2 = *param_1;
  plVar1 = plVar3 + 3;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      *(int *)(plVar3 + 3) = (int)param_1[3];
    }
    else {
      FUN_00771ea0(plVar1,param_1 + 3,lVar2,0x3fffffffffffffff);
      lVar2 = *param_1;
    }
  }
  if (plVar3 != &DAT_009452c0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    *plVar3 = lVar2;
    *(undefined4 *)((long)plVar3 + lVar2 * 4 + 0x18) = 0;
    return plVar1;
  }
  return plVar1;
}

