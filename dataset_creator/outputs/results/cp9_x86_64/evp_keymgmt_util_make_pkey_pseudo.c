
EVP_PKEY * evp_keymgmt_util_make_pkey(long param_1,long param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pkey = EVP_PKEY_new();
    if (pkey != (EVP_PKEY *)0x0) {
      iVar1 = evp_keymgmt_util_assign_pkey(pkey,param_1,param_2);
      if (iVar1 != 0) {
        return pkey;
      }
      goto LAB_0052a16b;
    }
  }
  pkey = (EVP_PKEY *)0x0;
LAB_0052a16b:
  EVP_PKEY_free(pkey);
  return (EVP_PKEY *)0x0;
}

