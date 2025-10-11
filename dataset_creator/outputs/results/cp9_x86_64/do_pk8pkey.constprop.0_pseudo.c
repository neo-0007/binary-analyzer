
uint do_pk8pkey_constprop_0
               (BIO *param_1,EVP_PKEY *param_2,int param_3,int param_4,EVP_CIPHER *param_5,
               char *param_6,int param_7,code *param_8,char *param_9)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  PKCS8_PRIV_KEY_INFO *x;
  X509_SIG *x_00;
  undefined8 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = "DER";
  if (param_3 == 0) {
    pcVar6 = "PEM";
  }
  lVar3 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x87,pcVar6,"PrivateKeyInfo");
  if (lVar3 == 0) {
    uVar1 = 0;
    goto LAB_0054262e;
  }
  if (param_6 == (char *)0x0 && param_8 == (code *)0x0) {
    if (param_9 == (char *)0x0) {
      param_8 = PEM_def_callback;
      param_6 = (char *)0x0;
    }
    else {
      param_8 = (code *)0x0;
      sVar4 = strlen(param_9);
      param_7 = (int)sVar4;
      param_6 = param_9;
    }
  }
  if (param_4 == -1) {
    iVar2 = OSSL_ENCODER_CTX_get_num_encoders(lVar3);
    if (iVar2 == 0) {
      x = EVP_PKEY2PKCS8(param_2);
      if (x == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_005425e8;
      if (param_5 != (EVP_CIPHER *)0x0) goto LAB_00542570;
      if (param_3 == 0) {
        uVar1 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(param_1,x);
      }
      else {
        uVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio(param_1,x);
      }
      goto LAB_0054261e;
    }
    if (param_5 == (EVP_CIPHER *)0x0) {
LAB_005427e8:
      iVar2 = OSSL_ENCODER_to_bio(lVar3,param_1);
      uVar1 = (uint)(iVar2 != 0);
    }
    else {
      uVar5 = EVP_CIPHER_get0_name(param_5);
      iVar2 = OSSL_ENCODER_CTX_set_cipher(lVar3,uVar5,0);
      if (((iVar2 != 0) &&
          ((param_6 == (char *)0x0 ||
           (iVar2 = OSSL_ENCODER_CTX_set_passphrase(lVar3,param_6,(long)param_7), iVar2 != 0)))) &&
         ((param_8 == (code *)0x0 ||
          (iVar2 = OSSL_ENCODER_CTX_set_pem_password_cb(lVar3,param_8,param_9), iVar2 != 0))))
      goto LAB_005427e8;
      uVar1 = 0;
    }
  }
  else {
    x = EVP_PKEY2PKCS8(param_2);
    if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
LAB_005425e8:
      ERR_new();
      uVar1 = 0;
      ERR_set_debug("../crypto/pem/pem_pk8.c",0x85,__func___3);
      ERR_set_error(9,0x73,0);
      x = (PKCS8_PRIV_KEY_INFO *)0x0;
    }
    else {
LAB_00542570:
      if (param_6 == (char *)0x0) {
        iVar2 = (*param_8)(local_448,0x400,1,param_9);
        if (iVar2 < 0) {
          uVar1 = 0;
          ERR_new();
          ERR_set_debug("../crypto/pem/pem_pk8.c",0x8c,__func___3);
          ERR_set_error(9,0x6f,0);
          goto LAB_0054261e;
        }
        x_00 = PKCS8_encrypt(param_4,param_5,local_448,iVar2,(uchar *)0x0,0,0,x);
        OPENSSL_cleanse(local_448,(long)iVar2);
      }
      else {
        x_00 = PKCS8_encrypt(param_4,param_5,param_6,param_7,(uchar *)0x0,0,0,x);
      }
      if (x_00 == (X509_SIG *)0x0) {
        uVar1 = 0;
      }
      else {
        if (param_3 == 0) {
          uVar1 = PEM_write_bio_PKCS8(param_1,x_00);
        }
        else {
          uVar1 = i2d_PKCS8_bio(param_1,x_00);
        }
        X509_SIG_free(x_00);
      }
    }
LAB_0054261e:
    PKCS8_PRIV_KEY_INFO_free(x);
  }
  OSSL_ENCODER_CTX_free(lVar3);
LAB_0054262e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

