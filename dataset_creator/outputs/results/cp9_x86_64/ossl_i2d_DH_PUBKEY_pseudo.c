
int ossl_i2d_DH_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0x2a1,"ossl_i2d_DH_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0xc0100,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x1c,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}

