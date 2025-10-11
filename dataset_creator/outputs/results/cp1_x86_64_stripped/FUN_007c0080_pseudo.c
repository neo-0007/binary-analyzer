
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c0080(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[1] = (long)param_2;
  *(long **)(lVar1 + 8) = param_1;
  *param_2 = (long)param_1;
  _DAT_0094ae08 = 0;
  return;
}

