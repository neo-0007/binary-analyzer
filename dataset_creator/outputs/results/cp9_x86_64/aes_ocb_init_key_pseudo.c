
undefined8 aes_ocb_init_key(undefined8 param_1,uchar *param_2,void *param_3)

{
  AES_KEY *key;
  int iVar1;
  AES_KEY *key_00;
  code *pcVar2;
  code *pcVar3;
  
  key_00 = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 == (uchar *)0x0) {
      if (key_00[2].rd_key[2] == 0) {
        memcpy(*(void **)(key_00[2].rd_key + 0x30),param_3,(long)(int)key_00[3].rd_key[3]);
      }
      else {
        CRYPTO_ocb128_setiv(key_00[2].rd_key + 4,param_3,(long)(int)key_00[3].rd_key[3],
                            (long)(int)key_00[3].rd_key[4]);
      }
      key_00[2].rd_key[3] = 1;
      return 1;
    }
    key = (AES_KEY *)(key_00[1].rd_key + 1);
    if ((DAT_0093e59c._1_1_ & 2) == 0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      AES_set_encrypt_key(param_2,iVar1 * 8,key_00);
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      AES_set_decrypt_key(param_2,iVar1 * 8,key);
      pcVar3 = AES_decrypt;
      pcVar2 = AES_encrypt;
    }
    else {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      vpaes_set_encrypt_key(param_2,iVar1 * 8,key_00);
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      vpaes_set_decrypt_key(param_2,iVar1 * 8,key);
      pcVar3 = vpaes_decrypt;
      pcVar2 = vpaes_encrypt;
    }
    iVar1 = CRYPTO_ocb128_init(key_00[2].rd_key + 4,key_00,key,pcVar2,pcVar3,0);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_3 != (void *)0x0) ||
       ((key_00[2].rd_key[3] != 0 &&
        (param_3 = *(void **)(key_00[2].rd_key + 0x30), param_3 != (void *)0x0)))) {
      iVar1 = CRYPTO_ocb128_setiv(key_00[2].rd_key + 4,param_3,(long)(int)key_00[3].rd_key[3],
                                  (long)(int)key_00[3].rd_key[4]);
      if (iVar1 != 1) {
        return 0;
      }
      key_00[2].rd_key[3] = 1;
    }
    key_00[2].rd_key[2] = 1;
  }
  return 1;
}

