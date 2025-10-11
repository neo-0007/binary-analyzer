
void FUN_0066cd30(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0066caa0(param_1 + 3);
  if (lVar1 != 0) {
    FUN_0066f6e0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_0066f6e0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}

