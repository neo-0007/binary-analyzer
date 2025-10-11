
EVP_PKEY * EVP_PKEY_dup(int *param_1)

{
  code *pcVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long lVar3;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0x676,"EVP_PKEY_dup");
    ERR_set_error(6,0xc0102,0);
    return (EVP_PKEY *)0x0;
  }
  pkey = EVP_PKEY_new();
  if (pkey == (EVP_PKEY *)0x0) {
    return (EVP_PKEY *)0x0;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
LAB_005313e3:
      iVar2 = evp_keymgmt_util_copy(pkey,param_1,0x87);
      goto joined_r0x0053145c;
    }
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) goto LAB_005313e3;
    if ((*(long *)(param_1 + 2) == 0) ||
       (pcVar1 = *(code **)(*(long *)(param_1 + 2) + 0x130), pcVar1 == (code *)0x0)) {
      if ((*(long *)(param_1 + 8) != 0) || (iVar2 = EVP_PKEY_set_type(pkey,*param_1), iVar2 == 0)) {
        ERR_new();
        ERR_set_debug("../crypto/evp/p_lib.c",0x68e,"EVP_PKEY_dup");
        ERR_set_error(6,0xe0,0);
        goto LAB_0053145e;
      }
      goto LAB_005313f7;
    }
    iVar2 = (*pcVar1)(pkey,param_1);
joined_r0x0053145c:
    if (iVar2 == 0) goto LAB_0053145e;
  }
LAB_005313f7:
  iVar2 = CRYPTO_dup_ex_data(0x11,(CRYPTO_EX_DATA *)&pkey[1].engine,
                             (CRYPTO_EX_DATA *)(param_1 + 0x14));
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = ossl_x509at_dup();
      *(long *)&pkey[1].references = lVar3;
      if (lVar3 == 0) goto LAB_0053145e;
    }
    return pkey;
  }
LAB_0053145e:
  EVP_PKEY_free(pkey);
  return (EVP_PKEY *)0x0;
}

