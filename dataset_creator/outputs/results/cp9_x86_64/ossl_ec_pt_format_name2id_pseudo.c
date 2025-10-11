
undefined4 ossl_ec_pt_format_name2id(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 4;
  }
  iVar1 = OPENSSL_strcasecmp(param_1,"uncompressed");
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_1,"compressed");
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_1,"hybrid");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  return (&format_nameid_map)[lVar2 * 4];
}

