
ulong ossl_ec_curve_name2nid(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = ossl_ec_curve_nist2nid_int();
  if ((int)uVar2 == 0) {
    ppuVar4 = &PTR_s_secp112r2_00901170;
    pcVar5 = "secp112r1";
    lVar3 = 0;
    while( true ) {
      iVar1 = OPENSSL_strcasecmp(pcVar5,param_1);
      if (iVar1 == 0) break;
      lVar3 = lVar3 + 1;
      if (lVar3 == 0x52) {
        return 0;
      }
      pcVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 2;
    }
    uVar2 = (ulong)(uint)(&DAT_00901168)[lVar3 * 4];
  }
  return uVar2;
}

