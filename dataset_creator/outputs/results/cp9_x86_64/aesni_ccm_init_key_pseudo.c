
undefined8 aesni_ccm_init_key(long param_1,long param_2,void *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      aesni_set_encrypt_key(param_2,iVar1 * 8,lVar2);
      CRYPTO_ccm128_init(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108)
                         ,lVar2,aesni_encrypt);
      if (param_4 == 0) {
        pcVar3 = aesni_ccm64_decrypt_blocks;
      }
      else {
        pcVar3 = aesni_ccm64_encrypt_blocks;
      }
      *(code **)(lVar2 + 0x150) = pcVar3;
      *(undefined4 *)(lVar2 + 0xf8) = 1;
    }
    if (param_3 != (void *)0x0) {
      memcpy((void *)(param_1 + 0x28),param_3,(long)(0xf - *(int *)(lVar2 + 0x108)));
      *(undefined4 *)(lVar2 + 0xfc) = 1;
    }
  }
  return 1;
}

