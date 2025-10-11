
int X509_get_pubkey_parameters(EVP_PKEY *pkey,stack_st_X509 *chain)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_PKEY *pkey_00;
  EVP_PKEY *to;
  
  if ((pkey == (EVP_PKEY *)0x0) || (iVar1 = EVP_PKEY_missing_parameters(pkey), iVar1 != 0)) {
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(chain);
      if (iVar2 <= iVar1) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x509_vfy.c",0x7d2,"X509_get_pubkey_parameters");
        ERR_set_error(0xb,0x6b,0);
        return 0;
      }
      uVar3 = OPENSSL_sk_value(chain,iVar1);
      pkey_00 = (EVP_PKEY *)X509_get0_pubkey(uVar3);
      if (pkey_00 == (EVP_PKEY *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x509_vfy.c",0x7ca,"X509_get_pubkey_parameters");
        ERR_set_error(0xb,0x6c,0);
        return 0;
      }
      iVar2 = EVP_PKEY_missing_parameters(pkey_00);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
    }
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      uVar3 = OPENSSL_sk_value(chain,iVar1);
      to = (EVP_PKEY *)X509_get0_pubkey(uVar3);
      iVar2 = EVP_PKEY_copy_parameters(to,pkey_00);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (pkey != (EVP_PKEY *)0x0) {
      iVar1 = EVP_PKEY_copy_parameters(pkey,pkey_00);
      return iVar1;
    }
  }
  return 1;
}

