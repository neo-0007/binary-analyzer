
int X509_check_private_key(X509 *x509,EVP_PKEY *pkey)

{
  int iVar1;
  long lVar2;
  
  lVar2 = X509_get0_pubkey();
  if (lVar2 != 0) {
    iVar1 = EVP_PKEY_eq(lVar2,pkey);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_cmp.c",0x198,"X509_check_private_key");
      ERR_set_error(0xb,0x73,0);
    }
    else if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_cmp.c",0x195,"X509_check_private_key");
      ERR_set_error(0xb,0x74,0);
    }
    else if (iVar1 == -2) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_cmp.c",0x19b,"X509_check_private_key");
      ERR_set_error(0xb,0x75,0);
    }
    return (int)(0 < iVar1);
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_cmp.c",399,"X509_check_private_key");
  ERR_set_error(0xb,0x6c,0);
  return 0;
}

