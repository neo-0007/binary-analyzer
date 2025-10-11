
undefined8 dh_pkey_import_from_type(undefined8 param_1,EVP_PKEY_CTX *param_2,int param_3)

{
  int iVar1;
  EVP_PKEY *pkey;
  DH *dh;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  dh = (DH *)ossl_dh_new_ex(*(undefined8 *)(param_2 + 8));
  if (dh == (DH *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_ameth.c",0x1fb,"dh_pkey_import_from_type");
    ERR_set_error(5,0xc0100,0);
    return 0;
  }
  DH_clear_flags(dh,0xf000);
  DH_set_flags(dh,(ulong)(param_3 != 0x1c) << 0xc);
  iVar1 = ossl_dh_params_fromdata(dh,param_1);
  if (iVar1 != 0) {
    iVar1 = ossl_dh_key_fromdata(dh,param_1,1);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_assign(pkey,param_3,dh);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  DH_free(dh);
  return 0;
}

