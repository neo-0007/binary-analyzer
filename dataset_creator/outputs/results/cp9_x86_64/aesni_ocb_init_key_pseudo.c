
undefined8 aesni_ocb_init_key(undefined8 param_1,long param_2,void *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(lVar2 + 0x1f0) == 0) {
        memcpy(*(void **)(lVar2 + 0x2a8),param_3,(long)*(int *)(lVar2 + 0x2e8));
      }
      else {
        CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                            (long)*(int *)(lVar2 + 0x2ec));
      }
      *(undefined4 *)(lVar2 + 500) = 1;
      return 1;
    }
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    aesni_set_encrypt_key(param_2,iVar1 * 8,lVar2);
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    aesni_set_decrypt_key(param_2,iVar1 * 8,lVar2 + 0xf8);
    if (param_4 == 0) {
      pcVar3 = aesni_ocb_decrypt;
    }
    else {
      pcVar3 = aesni_ocb_encrypt;
    }
    iVar1 = CRYPTO_ocb128_init(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,aesni_encrypt,aesni_decrypt,pcVar3);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_3 != (void *)0x0) ||
       ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)
        ))) {
      iVar1 = CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                                  (long)*(int *)(lVar2 + 0x2ec));
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(lVar2 + 500) = 1;
    }
    *(undefined4 *)(lVar2 + 0x1f0) = 1;
  }
  return 1;
}

