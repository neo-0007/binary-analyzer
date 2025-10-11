
int evp_pkey_name2type(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  char *pcVar4;
  
  pcVar4 = "RSA";
  ppuVar3 = &PTR_s_RSA_PSS_00903278;
  lVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_strcasecmp(param_1,pcVar4);
    if (iVar1 == 0) {
      return (&standard_name2type)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xc) break;
    pcVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 2;
  }
  iVar1 = OBJ_sn2nid(param_1);
  iVar1 = EVP_PKEY_type(iVar1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = OBJ_ln2nid(param_1);
  iVar1 = EVP_PKEY_type(iVar1);
  return iVar1;
}

