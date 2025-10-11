
undefined4 SCT_CTX_set1_pubkey(undefined8 *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  
  pkey = X509_PUBKEY_get(param_2);
  uVar2 = 0;
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = ct_public_key_hash_isra_0(param_1[10],param_1[0xb],param_2,param_1 + 1,param_1 + 2);
    if (iVar1 == 0) {
      EVP_PKEY_free(pkey);
      return 0;
    }
    EVP_PKEY_free((EVP_PKEY *)*param_1);
    *param_1 = pkey;
    uVar2 = 1;
  }
  return uVar2;
}

