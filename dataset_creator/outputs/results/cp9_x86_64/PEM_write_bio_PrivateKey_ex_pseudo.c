
int PEM_write_bio_PrivateKey_ex
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,char *param_4,int param_5,
              code *param_6,char *param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  int local_3c;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x87,&DAT_007fb1ae,"PrivateKeyInfo",param_9);
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 == 0) {
    OSSL_ENCODER_CTX_free(uVar2);
    if ((*(long *)&param_2->references != 0) &&
       (*(long *)(*(long *)&param_2->references + 0x48) == 0)) {
      iVar1 = PEM_write_bio_PrivateKey_traditional(param_1,param_2,param_3,param_4,param_5,param_6);
      return iVar1;
    }
    iVar1 = PEM_write_bio_PKCS8PrivateKey(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return iVar1;
  }
  local_3c = param_5;
  if (param_4 == (char *)0x0 && param_6 == (code *)0x0) {
    if (param_7 == (char *)0x0) {
      param_6 = PEM_def_callback;
      param_4 = (char *)0x0;
    }
    else {
      param_6 = (code *)0x0;
      sVar3 = strlen(param_7);
      local_3c = (int)sVar3;
      param_4 = param_7;
    }
  }
  if (param_3 != (EVP_CIPHER *)0x0) {
    uVar4 = EVP_CIPHER_get0_name(param_3);
    iVar1 = OSSL_ENCODER_CTX_set_cipher(uVar2,uVar4,0);
    if (((iVar1 == 0) ||
        ((param_4 != (char *)0x0 &&
         (iVar1 = OSSL_ENCODER_CTX_set_passphrase(uVar2,param_4,(long)local_3c), iVar1 == 0)))) ||
       ((param_6 != (code *)0x0 &&
        (iVar1 = OSSL_ENCODER_CTX_set_pem_password_cb(uVar2,param_6,param_7), iVar1 == 0)))) {
      OSSL_ENCODER_CTX_free(uVar2);
      return 0;
    }
  }
  iVar1 = OSSL_ENCODER_to_bio(uVar2,param_1);
  OSSL_ENCODER_CTX_free(uVar2);
  return iVar1;
}

