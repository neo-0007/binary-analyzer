
undefined4 ossl_rsa_oaeppss_md2nid(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar4 = &DAT_007c6514;
  ppuVar3 = &PTR_s_SHA2_224_00905158;
  lVar2 = 0;
  while( true ) {
    iVar1 = EVP_MD_is_a(param_1,puVar4);
    if (iVar1 != 0) {
      return (&oaeppss_name_nid_map)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 7) break;
    puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 2;
  }
  return 0;
}

