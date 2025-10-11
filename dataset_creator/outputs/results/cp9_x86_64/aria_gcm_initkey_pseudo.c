
undefined8 aria_gcm_initkey(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2c0;
  *(long *)(param_1 + 0x2b8) = lVar1;
  ossl_aria_set_encrypt_key(param_2,param_3 * 8,lVar1);
  CRYPTO_gcm128_init(param_1 + 0xf8,lVar1,ossl_aria_encrypt);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  return 1;
}

