
EVP_PKEY * evp_pkey_new0_key(RSA *param_1,int param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if (param_1 == (RSA *)0x0) {
    return (EVP_PKEY *)0x0;
  }
  if ((param_2 != 6) && (param_2 != 0x74)) {
    ERR_new();
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x52,"evp_pkey_new0_key");
    ERR_set_error(9,0xc0103,0);
    return (EVP_PKEY *)0x0;
  }
  pkey = EVP_PKEY_new();
  if (pkey == (EVP_PKEY *)0x0) {
    if (param_2 == 6) {
      RSA_free(param_1);
    }
    else {
      DSA_free((DSA *)param_1);
    }
  }
  else if (param_2 == 6) {
    iVar1 = EVP_PKEY_set1_RSA(pkey,param_1);
    if (iVar1 != 0) {
      RSA_free(param_1);
      return pkey;
    }
    EVP_PKEY_free(pkey);
    RSA_free(param_1);
  }
  else {
    iVar1 = EVP_PKEY_set1_DSA(pkey,(dsa_st *)param_1);
    if (iVar1 != 0) {
      DSA_free((DSA *)param_1);
      return pkey;
    }
    EVP_PKEY_free(pkey);
    DSA_free((DSA *)param_1);
  }
  ERR_new();
  ERR_set_debug("../crypto/pem/pvkfmt.c",0x75,"evp_pkey_new0_key");
  ERR_set_error(9,0xc0100,0);
  return (EVP_PKEY *)0x0;
}

