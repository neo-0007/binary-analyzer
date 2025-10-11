
undefined * OSSL_EC_curve_nid2name(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  if (0 < param_1) {
    piVar3 = &DAT_00901178;
    iVar2 = 0x2c0;
    lVar1 = 0;
    while( true ) {
      if (param_1 == iVar2) {
        return (&curve_list)[lVar1 * 2];
      }
      lVar1 = lVar1 + 1;
      if (lVar1 == 0x52) break;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 4;
    }
  }
  return (undefined *)0x0;
}

