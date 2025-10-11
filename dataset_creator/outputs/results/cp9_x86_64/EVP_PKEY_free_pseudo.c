
void EVP_PKEY_free(EVP_PKEY *pkey)

{
  stack_st_X509_ATTRIBUTE **ppsVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (pkey == (EVP_PKEY *)0x0) {
    return;
  }
  LOCK();
  ppsVar1 = &pkey->attributes;
  iVar2 = *(int *)ppsVar1;
  *(int *)ppsVar1 = *(int *)ppsVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  evp_keymgmt_util_clear_operation_cache(pkey,1);
  evp_pkey_free_legacy(pkey);
  if (*(long *)&pkey[1].save_parameters != 0) {
    evp_keymgmt_freedata(*(long *)&pkey[1].save_parameters,pkey[1].attributes);
    EVP_KEYMGMT_free(*(undefined8 *)&pkey[1].save_parameters);
    *(undefined8 *)&pkey[1].save_parameters = 0;
    pkey[1].attributes = (stack_st_X509_ATTRIBUTE *)0x0;
  }
  pkey->type = 0;
  CRYPTO_free_ex_data(0x11,pkey,(CRYPTO_EX_DATA *)&pkey[1].engine);
  uVar3._0_4_ = pkey[1].type;
  uVar3._4_4_ = pkey[1].save_type;
  CRYPTO_THREAD_lock_free(uVar3);
  OPENSSL_sk_pop_free(*(undefined8 *)&pkey[1].references,X509_ATTRIBUTE_free);
  CRYPTO_free(pkey);
  return;
}

