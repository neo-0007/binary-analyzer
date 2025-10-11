
int X509_self_signed(X509 *param_1,int param_2)

{
  int iVar1;
  EVP_PKEY *r;
  
  r = (EVP_PKEY *)X509_get0_pubkey();
  if (r == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x62,"X509_self_signed");
    ERR_set_error(0xb,0x6c,0);
    iVar1 = -1;
  }
  else {
    iVar1 = ossl_x509v3_cache_extensions(param_1);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      if (((ulong)param_1[1].name & 0x2000) == 0) {
        return 0;
      }
      iVar1 = 1;
      if (param_2 != 0) {
        iVar1 = X509_verify(param_1,r);
        return iVar1;
      }
    }
  }
  return iVar1;
}

