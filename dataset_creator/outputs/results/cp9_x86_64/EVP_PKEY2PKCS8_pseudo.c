
PKCS8_PRIV_KEY_INFO * EVP_PKEY2PKCS8(EVP_PKEY *pkey)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  PKCS8_PRIV_KEY_INFO *pPVar4;
  PKCS8_PRIV_KEY_INFO *pPVar5;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)&pkey[1].save_parameters == 0) {
    pPVar4 = PKCS8_PRIV_KEY_INFO_new();
    if (pPVar4 == (PKCS8_PRIV_KEY_INFO *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_pkey.c",0x85,__func___0);
      ERR_set_error(6,0xc0100,0);
      goto LAB_005f5036;
    }
    lVar3 = 0;
    pPVar5 = pPVar4;
    if (*(long *)&pkey->references == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_pkey.c",0x94,__func___0);
      ERR_set_error(6,0x76,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)&pkey->references + 0x48);
      if (pcVar1 == (code *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_pkey.c",0x90,__func___0);
        ERR_set_error(6,0x90,0);
      }
      else {
        iVar2 = (*pcVar1)(pPVar4,pkey);
        if (iVar2 != 0) goto LAB_005f502e;
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_pkey.c",0x8c,__func___0);
        ERR_set_error(6,0x92,0);
      }
    }
LAB_005f5023:
    pPVar4 = (PKCS8_PRIV_KEY_INFO *)0x0;
    PKCS8_PRIV_KEY_INFO_free(pPVar5);
  }
  else {
    local_38 = (uchar *)0x0;
    local_30 = 0;
    lVar3 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x87,"DER","PrivateKeyInfo",0);
    if (lVar3 == 0) {
LAB_005f5020:
      pPVar5 = (PKCS8_PRIV_KEY_INFO *)0x0;
      goto LAB_005f5023;
    }
    iVar2 = OSSL_ENCODER_to_data(lVar3,&local_38,&local_30);
    if (iVar2 == 0) goto LAB_005f5020;
    local_28 = local_38;
    pPVar4 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_28,local_30);
    CRYPTO_free(local_38);
    if (pPVar4 == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_005f5020;
  }
LAB_005f502e:
  OSSL_ENCODER_CTX_free(lVar3);
LAB_005f5036:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

