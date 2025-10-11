
void FUN_0066b170(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_006692f0(param_1 + 1);
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_0066ec40(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}

