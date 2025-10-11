
undefined8 aesni_gcm_initkey(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2c0;
  *(long *)(param_1 + 0x2b8) = lVar1;
  aesni_set_encrypt_key(param_2,param_3 * 8,lVar1);
  CRYPTO_gcm128_init(param_1 + 0xf8,lVar1,aesni_encrypt);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  *(code **)(param_1 + 0x2b0) = aesni_ctr32_encrypt_blocks;
  return 1;
}

