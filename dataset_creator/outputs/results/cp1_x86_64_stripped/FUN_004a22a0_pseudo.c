
long FUN_004a22a0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_004a21f0();
    if (lVar2 != 0) {
      iVar1 = FUN_004a20e0(lVar2,param_1);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_004a2270(lVar2);
    }
  }
  return 0;
}

