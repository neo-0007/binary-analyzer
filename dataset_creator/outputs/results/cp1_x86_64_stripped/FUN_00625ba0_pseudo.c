
long FUN_00625ba0(long *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      iVar1 = DAT_00943a18 + 1;
      UNLOCK();
      iVar3 = DAT_00943a18 + 1;
      LOCK();
      DAT_00943a18 = iVar1;
      if (*param_1 == 0) {
        *param_1 = (long)iVar3;
      }
      UNLOCK();
      return *param_1 + -1;
    }
    DAT_00943a18 = DAT_00943a18 + 1;
    lVar2 = (long)DAT_00943a18;
    *param_1 = lVar2;
  }
  return lVar2 + -1;
}

