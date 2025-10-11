
undefined8 aes_gcm_initkey(long param_1,uchar *param_2,int param_3)

{
  AES_KEY *key;
  byte bVar1;
  code *pcVar2;
  
  bVar1 = DAT_0093e59c._1_1_ & 2;
  key = (AES_KEY *)(param_1 + 0x2c0);
  *(AES_KEY **)(param_1 + 0x2b8) = key;
  if (bVar1 == 0) {
    AES_set_encrypt_key(param_2,param_3 * 8,key);
    CRYPTO_gcm128_init(param_1 + 0xf8,key,AES_encrypt);
    pcVar2 = (code *)0x0;
  }
  else {
    AES_set_encrypt_key(param_2,param_3 * 8,key);
    CRYPTO_gcm128_init(param_1 + 0xf8,key,AES_encrypt);
    pcVar2 = ossl_bsaes_ctr32_encrypt_blocks;
  }
  *(code **)(param_1 + 0x2b0) = pcVar2;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  return 1;
}

