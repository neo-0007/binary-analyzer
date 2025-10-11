
undefined8 aes_wrap_init_key(long param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  AES_KEY *key;
  undefined8 uVar2;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  uVar2 = 1;
  if (param_3 != (void *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 == (uchar *)0x0) {
      if (param_3 == (void *)0x0) {
        return 1;
      }
    }
    else {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
        AES_set_decrypt_key(param_2,iVar1 * 8,key);
      }
      else {
        iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
        AES_set_encrypt_key(param_2,iVar1 * 8,key);
      }
      if (param_3 == (void *)0x0) {
        key[1].rd_key[1] = 0;
        key[1].rd_key[2] = 0;
        return 1;
      }
    }
    iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
    uVar2 = 0;
    if (-1 < iVar1) {
      memcpy((void *)(param_1 + 0x28),param_3,(long)iVar1);
      *(void **)(key[1].rd_key + 1) = (void *)(param_1 + 0x28);
      return 1;
    }
  }
  return uVar2;
}

