
undefined8 dsa_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  DSA *r;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  r = (DSA *)ossl_dsa_new(*(undefined8 *)(param_2 + 8));
  if (r == (DSA *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x1e3,"dsa_pkey_import_from");
    ERR_set_error(10,0xc0100,0);
    return 0;
  }
  iVar1 = ossl_dsa_ffc_params_fromdata(r,param_1);
  if (iVar1 != 0) {
    iVar1 = ossl_dsa_key_fromdata(r,param_1,1);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_assign(pkey,0x74,r);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  DSA_free(r);
  return 0;
}

