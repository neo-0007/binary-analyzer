
uchar * EVP_PKCS82PKEY_ex(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uchar *puVar4;
  long in_FS_OFFSET;
  uchar *local_50;
  uchar *local_48;
  uchar *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  local_48 = (uchar *)0x0;
  local_40 = (uchar *)0x0;
  iVar1 = i2d_PKCS8_PRIV_KEY_INFO(param_1,&local_40);
  if (iVar1 < 1) {
    puVar4 = (uchar *)0x0;
    goto LAB_005f4f0d;
  }
  puVar4 = local_40;
  if (local_40 == (uchar *)0x0) goto LAB_005f4f0d;
  local_48 = local_40;
  local_38 = (long)iVar1;
  lVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_50,"DER","PrivateKeyInfo",0,0x87,param_2,param_3);
  if (lVar3 == 0) {
LAB_005f4f30:
    local_50 = (uchar *)evp_pkcs82pkey_legacy(param_1,param_2,param_3);
  }
  else {
    iVar2 = OSSL_DECODER_from_data(lVar3,&local_48,&local_38);
    if (iVar2 == 0) goto LAB_005f4f30;
  }
  CRYPTO_clear_free(local_40,(long)iVar1,"../crypto/evp/evp_pkey.c",0x5b);
  OSSL_DECODER_CTX_free(lVar3);
  puVar4 = local_50;
LAB_005f4f0d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

