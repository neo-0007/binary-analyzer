
long FUN_006382e0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(lVar2 + -0x18);
  if (-1 < *(int *)(lVar2 + -8)) {
    FUN_00638140();
    lVar2 = *param_1;
  }
  return lVar2 + lVar1 + -1;
}

