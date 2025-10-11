
undefined8 aesni_gcm_init_key(undefined8 param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0 && param_2 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      memcpy(*(void **)(lVar2 + 0x2b8),param_3,(long)*(int *)(lVar2 + 0x2c0));
    }
    else {
      CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3);
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  aesni_set_encrypt_key(param_2,iVar1 * 8,lVar2);
  CRYPTO_gcm128_init(lVar2 + 0x100,lVar2,aesni_encrypt);
  *(code **)(lVar2 + 0x2e0) = aesni_ctr32_encrypt_blocks;
  if (param_3 == (void *)0x0) {
    if (*(int *)(lVar2 + 0xfc) == 0) goto LAB_004074c6;
    param_3 = *(void **)(lVar2 + 0x2b8);
    if (param_3 == (void *)0x0) {
      *(undefined4 *)(lVar2 + 0xf8) = 1;
      return 1;
    }
  }
  CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3,(long)*(int *)(lVar2 + 0x2c0));
  *(undefined4 *)(lVar2 + 0xfc) = 1;
LAB_004074c6:
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}

