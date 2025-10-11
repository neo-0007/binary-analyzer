
long FUN_004b82e0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_004b7e80(param_1,8);
    if (iVar1 == 0) {
      lVar2 = FUN_004b7690();
    }
    else {
      lVar2 = FUN_004b7700();
    }
    if (lVar2 != 0) {
      lVar3 = FUN_004b8260(lVar2,param_1);
      if (lVar3 != 0) {
        return lVar2;
      }
      FUN_004b7fa0(lVar2);
    }
  }
  return 0;
}

