
undefined8 X509V3_set_issuer_pkey(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_conf.c",0x1d3,"X509V3_set_issuer_pkey");
    ERR_set_error(0x22,0xc0102,0);
    uVar1 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) && (param_2 != 0)) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_conf.c",0x1d7,"X509V3_set_issuer_pkey");
      ERR_set_error(0x22,0x80106,0);
      return 0;
    }
    *(long *)(param_1 + 0x38) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

