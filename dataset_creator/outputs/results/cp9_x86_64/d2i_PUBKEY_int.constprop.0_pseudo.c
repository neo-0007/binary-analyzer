
EVP_PKEY *
d2i_PUBKEY_int_constprop_0
          (X509_PUBKEY *param_1,undefined8 *param_2,long param_3,X509_ALGOR *param_4,char *param_5,
          int param_6)

{
  X509_PUBKEY *pXVar1;
  EVP_PKEY *pEVar2;
  X509_PUBKEY **a;
  long in_FS_OFFSET;
  X509_PUBKEY *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)*param_2;
  local_50 = (X509_PUBKEY *)0x0;
  if (param_4 == (X509_ALGOR *)0x0 && param_5 == (char *)0x0) {
    a = (X509_PUBKEY **)0x0;
    if (param_6 != 0) {
      pXVar1 = (X509_PUBKEY *)CRYPTO_zalloc(0x30,"../crypto/x509/x_pubkey.c",0x1f5);
      local_50 = pXVar1;
      if (pXVar1 != (X509_PUBKEY *)0x0) {
        pXVar1[1].algor = (X509_ALGOR *)0x0;
        CRYPTO_free(pXVar1[1].public_key);
        pXVar1[1].public_key = (ASN1_BIT_STRING *)0x0;
        goto LAB_0059bb26;
      }
LAB_0059ba62:
      pEVar2 = (EVP_PKEY *)0x0;
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0x1f7,"d2i_PUBKEY_int");
      ERR_set_error(0xb,0xc0100,0);
      goto LAB_0059ba05;
    }
LAB_0059b9a0:
    pXVar1 = d2i_X509_PUBKEY(a,&local_48,param_3);
    if (pXVar1 == (X509_PUBKEY *)0x0) {
      pEVar2 = (EVP_PKEY *)0x0;
      pXVar1 = local_50;
    }
    else {
      pEVar2 = X509_PUBKEY_get(pXVar1);
      X509_PUBKEY_free(pXVar1);
      local_50 = (X509_PUBKEY *)0x0;
      if (pEVar2 == (EVP_PKEY *)0x0) {
        pXVar1 = (X509_PUBKEY *)0x0;
      }
      else {
        *param_2 = local_48;
        pXVar1 = param_1;
        if (param_1 != (X509_PUBKEY *)0x0) {
          EVP_PKEY_free((EVP_PKEY *)param_1->algor);
          param_1->algor = (X509_ALGOR *)pEVar2;
          pXVar1 = local_50;
        }
      }
    }
  }
  else {
    pXVar1 = (X509_PUBKEY *)CRYPTO_zalloc(0x30,"../crypto/x509/x_pubkey.c",0x1f5);
    local_50 = pXVar1;
    if (pXVar1 == (X509_PUBKEY *)0x0) goto LAB_0059ba62;
    pXVar1[1].algor = param_4;
    CRYPTO_free(pXVar1[1].public_key);
    pXVar1[1].public_key = (ASN1_BIT_STRING *)0x0;
    if (param_5 == (char *)0x0) {
LAB_0059bb26:
      a = &local_50;
      *(byte *)&local_50[1].pkey = (byte)param_6 & 1 | *(byte *)&local_50[1].pkey & 0xfe;
      goto LAB_0059b9a0;
    }
    pEVar2 = (EVP_PKEY *)CRYPTO_strdup(param_5,"../crypto/x509/x_pubkey.c",0x37);
    pXVar1[1].public_key = (ASN1_BIT_STRING *)pEVar2;
    pXVar1 = local_50;
    if (pEVar2 != (EVP_PKEY *)0x0) goto LAB_0059bb26;
  }
  X509_PUBKEY_free(pXVar1);
LAB_0059ba05:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pEVar2;
}

