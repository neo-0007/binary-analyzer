
long FUN_006382b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + -8) < 0) {
    return lVar1 + *(long *)(lVar1 + -0x18);
  }
  FUN_00638140();
  return *param_1 + *(long *)(*param_1 + -0x18);
}

