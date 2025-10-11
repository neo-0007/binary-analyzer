
undefined4 FUN_004eb230(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 4;
  }
  iVar1 = FUN_0041c9c0(param_1,"uncompressed");
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_0041c9c0(param_1,"compressed");
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = FUN_0041c9c0(param_1,"hybrid");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  return (&DAT_009035c0)[lVar2 * 4];
}

