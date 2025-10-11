
undefined8 ccm_aesni_initkey(byte *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  aesni_set_encrypt_key(param_2,param_3 * 8,param_1 + 0xa8);
  CRYPTO_ccm128_init(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                     param_1 + 0xa8,aesni_encrypt);
  if ((*param_1 & 1) == 0) {
    pcVar1 = aesni_ccm64_decrypt_blocks;
  }
  else {
    pcVar1 = aesni_ccm64_encrypt_blocks;
  }
  *(code **)(param_1 + 0x88) = pcVar1;
  *param_1 = *param_1 | 2;
  return 1;
}

