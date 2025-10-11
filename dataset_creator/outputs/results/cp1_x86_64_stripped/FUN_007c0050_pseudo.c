
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c0050(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  _DAT_0094ae08 = 0;
  return;
}

