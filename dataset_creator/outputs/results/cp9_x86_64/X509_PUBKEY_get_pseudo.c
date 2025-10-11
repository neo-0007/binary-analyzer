
EVP_PKEY * X509_PUBKEY_get(X509_PUBKEY *key)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  
  pEVar2 = (EVP_PKEY *)X509_PUBKEY_get0();
  if (pEVar2 != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_up_ref(pEVar2);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0x1d6,"X509_PUBKEY_get");
      ERR_set_error(0xb,0xc0103,0);
      return (EVP_PKEY *)0x0;
    }
  }
  return pEVar2;
}

