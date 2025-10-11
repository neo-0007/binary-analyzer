
long * FUN_0063afd0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)&DAT_009452d8;
  }
  else {
    plVar1 = (long *)FUN_0063af10(param_1,0);
    plVar2 = plVar1 + 3;
    if (param_1 == 1) {
      *(undefined4 *)(plVar1 + 3) = param_2;
    }
    else {
      FUN_00771ff0(plVar2,param_2,param_1,0x3fffffffffffffff);
    }
    if (plVar1 != &DAT_009452c0) {
      *(undefined4 *)(plVar1 + 2) = 0;
      *plVar1 = param_1;
      *(undefined4 *)((long)plVar1 + param_1 * 4 + 0x18) = 0;
    }
  }
  return plVar2;
}

