
long X509_PUBKEY_get0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    ERR_new();
    lVar1 = 0;
    ERR_set_debug("../crypto/x509/x_pubkey.c",0x1c4,"X509_PUBKEY_get0");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0x1ca,"X509_PUBKEY_get0");
      ERR_set_error(6,0x72,0);
    }
  }
  return lVar1;
}

