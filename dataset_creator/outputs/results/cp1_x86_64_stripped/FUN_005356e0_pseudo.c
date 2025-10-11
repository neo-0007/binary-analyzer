
undefined * FUN_005356e0(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  if (0 < param_1) {
    piVar3 = &DAT_0090e7d8;
    iVar2 = 0x2c0;
    lVar1 = 0;
    while( true ) {
      if (param_1 == iVar2) {
        return (&PTR_s_secp112r1_0090e7c0)[lVar1 * 2];
      }
      lVar1 = lVar1 + 1;
      if (lVar1 == 0x52) break;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 4;
    }
  }
  return (undefined *)0x0;
}

