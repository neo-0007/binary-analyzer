
EVP_PKEY *
pem_read_bio_key_legacy_constprop_0
          (BIO *param_1,long *param_2,void *param_3,undefined8 param_4,undefined8 param_5,
          uint param_6)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  X509_SIG *a;
  PKCS8_PRIV_KEY_INFO *pPVar4;
  EVP_PKEY *pkey;
  ulong uVar5;
  EVP_PKEY_ASN1_METHOD *pEVar6;
  long in_FS_OFFSET;
  char *local_468;
  uchar *local_460;
  uchar *local_458;
  undefined8 local_450;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_468 = (char *)0x0;
  local_460 = (uchar *)0x0;
  local_458 = (uchar *)0x0;
  ERR_set_mark();
  if ((param_6 & 1) == 0) {
    pcVar2 = "SM2 PARAMETERS";
    if ((param_6 & 2) != 0) {
      pcVar2 = "SM2 PUBLIC KEY";
    }
    iVar3 = PEM_bytes_read_bio(&local_458,&local_450,&local_468,pcVar2 + 4,param_1,
                               ossl_pw_pem_password,param_3);
  }
  else {
    iVar3 = PEM_bytes_read_bio_secmem
                      (&local_458,&local_450,&local_468,"ANY PRIVATE KEY",param_1,
                       ossl_pw_pem_password,param_3);
  }
  if (iVar3 == 0) {
    ERR_pop_to_mark();
    pkey = (EVP_PKEY *)0x0;
    goto LAB_00542e09;
  }
  ERR_clear_last_mark();
  pcVar2 = local_468;
  local_460 = local_458;
  iVar3 = strcmp(local_468,"PRIVATE KEY");
  if (iVar3 == 0) {
    pPVar4 = d2i_PKCS8_PRIV_KEY_INFO
                       ((PKCS8_PRIV_KEY_INFO **)0x0,&local_460,
                        CONCAT44(local_450._4_4_,(undefined4)local_450));
    if (pPVar4 != (PKCS8_PRIV_KEY_INFO *)0x0) {
      pkey = (EVP_PKEY *)evp_pkcs82pkey_legacy(pPVar4,param_4,param_5);
      if (param_2 != (long *)0x0) {
        EVP_PKEY_free((EVP_PKEY *)*param_2);
        *param_2 = (long)pkey;
      }
      PKCS8_PRIV_KEY_INFO_free(pPVar4);
      goto LAB_00542f01;
    }
    goto LAB_00542dc8;
  }
  iVar3 = strcmp(pcVar2,"ENCRYPTED PRIVATE KEY");
  if (iVar3 == 0) {
    a = d2i_X509_SIG((X509_SIG **)0x0,&local_460,CONCAT44(local_450._4_4_,(undefined4)local_450));
    if (a == (X509_SIG *)0x0) {
LAB_00542dc8:
      uVar5 = ERR_peek_last_error();
joined_r0x00542f12:
      if (uVar5 != 0) goto LAB_00542dd6;
      ERR_new();
      pkey = (EVP_PKEY *)0x0;
      ERR_set_debug("../crypto/pem/pem_pkey.c",199,"pem_read_bio_key_legacy");
      ERR_set_error(9,0x8000d,0);
    }
    else {
      iVar3 = ossl_pw_pem_password(local_448,0x400,0,param_3);
      if (-1 < iVar3) {
        pPVar4 = PKCS8_decrypt(a,local_448,iVar3);
        X509_SIG_free(a);
        OPENSSL_cleanse(local_448,(long)iVar3);
        if (pPVar4 != (PKCS8_PRIV_KEY_INFO *)0x0) {
          pkey = (EVP_PKEY *)evp_pkcs82pkey_legacy(pPVar4,param_4,param_5);
          if (param_2 != (long *)0x0) {
            EVP_PKEY_free((EVP_PKEY *)*param_2);
            *param_2 = (long)pkey;
          }
          PKCS8_PRIV_KEY_INFO_free(pPVar4);
          if (pkey != (EVP_PKEY *)0x0) goto LAB_00542de0;
        }
        goto LAB_00542dc8;
      }
      ERR_new();
      pkey = (EVP_PKEY *)0x0;
      ERR_set_debug("../crypto/pem/pem_pkey.c",0x9b,"pem_read_bio_key_legacy");
      ERR_set_error(9,0x68,0);
      X509_SIG_free(a);
    }
  }
  else {
    iVar3 = ossl_pem_check_suffix(pcVar2,"PRIVATE KEY");
    if (0 < iVar3) {
      pEVar6 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,local_468,iVar3);
      if ((pEVar6 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(long *)(pEVar6 + 0xb8) == 0))
      goto LAB_00542dc8;
      pkey = (EVP_PKEY *)
             ossl_d2i_PrivateKey_legacy
                       (*(undefined4 *)pEVar6,param_2,&local_460,
                        CONCAT44(local_450._4_4_,(undefined4)local_450),param_4,param_5);
LAB_00542f01:
      if (pkey != (EVP_PKEY *)0x0) goto LAB_00542de0;
      uVar5 = ERR_peek_last_error();
      goto joined_r0x00542f12;
    }
    if ((param_6 & 2) != 0) {
      pkey = (EVP_PKEY *)
             ossl_d2i_PUBKEY_legacy
                       (param_2,&local_460,CONCAT44(local_450._4_4_,(undefined4)local_450));
      goto LAB_00542f01;
    }
    iVar3 = ossl_pem_check_suffix(local_468,"PARAMETERS");
    if (iVar3 < 1) goto LAB_00542dc8;
    pkey = EVP_PKEY_new();
    if (pkey != (EVP_PKEY *)0x0) {
      iVar3 = EVP_PKEY_set_type_str(pkey,local_468,iVar3);
      if (((iVar3 != 0) &&
          (pcVar1 = *(code **)(*(long *)&pkey->references + 0x70), pcVar1 != (code *)0x0)) &&
         (iVar3 = (*pcVar1)(pkey,&local_460,(undefined4)local_450), iVar3 != 0)) {
        if (param_2 != (long *)0x0) {
          EVP_PKEY_free((EVP_PKEY *)*param_2);
          *param_2 = (long)pkey;
        }
        goto LAB_00542de0;
      }
      EVP_PKEY_free(pkey);
    }
LAB_00542dd6:
    pkey = (EVP_PKEY *)0x0;
  }
LAB_00542de0:
  CRYPTO_secure_free(local_468,"../crypto/pem/pem_pkey.c",0xc9);
  CRYPTO_secure_clear_free
            (local_458,CONCAT44(local_450._4_4_,(undefined4)local_450),"../crypto/pem/pem_pkey.c",
             0xca);
LAB_00542e09:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pkey;
}

