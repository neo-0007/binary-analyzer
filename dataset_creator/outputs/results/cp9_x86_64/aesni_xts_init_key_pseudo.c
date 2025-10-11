
undefined4 aesni_xts_init_key(long param_1,void *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  void *b;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (undefined8 *)0x0 || param_2 != (void *)0x0) {
    if (param_2 != (void *)0x0) {
      uVar4 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar7 = (int)(((uint)(uVar4 >> 0x1f) & 1) + (int)uVar4) >> 1;
      iVar1 = iVar7 * 8;
      if (param_4 == 0) {
        b = (void *)((long)iVar7 + (long)param_2);
        aesni_set_decrypt_key(param_2,iVar1,lVar3);
        pcVar6 = aesni_decrypt;
        pcVar5 = aesni_xts_decrypt;
      }
      else {
        b = (void *)((long)param_2 + (long)iVar7);
        iVar7 = CRYPTO_memcmp(param_2,b,(long)iVar7);
        if (iVar7 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/e_aes.c",0x119,"aesni_xts_init_key");
          ERR_set_error(6,0xc0,0);
          return 0;
        }
        aesni_set_encrypt_key(param_2,iVar1,lVar3);
        pcVar6 = aesni_encrypt;
        pcVar5 = aesni_xts_encrypt;
      }
      *(code **)(lVar3 + 0x200) = pcVar6;
      *(code **)(lVar3 + 0x210) = pcVar5;
      aesni_set_encrypt_key(b,iVar1,lVar3 + 0xf8);
      *(code **)(lVar3 + 0x208) = aesni_encrypt;
      *(long *)(lVar3 + 0x1f0) = lVar3;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(long *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
      uVar2 = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
    }
  }
  return 1;
}

