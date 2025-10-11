
undefined4 FUN_00433720(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar4 = &DAT_007d039e;
  ppuVar3 = &PTR_s_SHA2_224_008ea9d8;
  lVar2 = 0;
  while( true ) {
    iVar1 = FUN_0040ab70(param_1,puVar4);
    if (iVar1 != 0) {
      return (&DAT_008ea9c0)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 7) break;
    puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 2;
  }
  return 0;
}

