
undefined8 FUN_007a2a00(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    xend();
  }
  else {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709680();
      return 0;
    }
  }
  return 0;
}

