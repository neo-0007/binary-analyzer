
int X509_REQ_check_private_key(X509_REQ *x509,EVP_PKEY *pkey)

{
  int iVar1;
  EVP_PKEY *pkey_00;
  uint uVar2;
  
  pkey_00 = X509_REQ_get_pubkey(x509);
  iVar1 = EVP_PKEY_eq(pkey_00,pkey);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_req.c",0x5d,"X509_REQ_check_private_key");
    ERR_set_error(0xb,0x74,0);
    uVar2 = 0;
  }
  else if (iVar1 < 1) {
    if (iVar1 == -2) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_req.c",99,"X509_REQ_check_private_key");
      ERR_set_error(0xb,0x75,0);
    }
    else if (iVar1 == -1) {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("../crypto/x509/x509_req.c",0x60,"X509_REQ_check_private_key");
      ERR_set_error(0xb,0x73,0);
      goto LAB_0058e47f;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(iVar1 == 1);
  }
LAB_0058e47f:
  EVP_PKEY_free(pkey_00);
  return uVar2;
}

