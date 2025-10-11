
undefined8 cipher_hw_aes_xts_generic_initkey(long param_1,uchar *param_2,ulong param_3)

{
  AES_KEY *key;
  code *pcVar1;
  int bits;
  code *pcVar2;
  code *local_48;
  
  if ((DAT_0093e59c._1_1_ & 2) == 0) {
    local_48 = (code *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = ossl_bsaes_xts_encrypt;
    local_48 = ossl_bsaes_xts_decrypt;
  }
  key = (AES_KEY *)(param_1 + 0xc0);
  bits = (int)(param_3 >> 1) * 8;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    AES_set_decrypt_key(param_2,bits,key);
    pcVar1 = AES_decrypt;
  }
  else {
    AES_set_encrypt_key(param_2,bits,key);
    pcVar1 = AES_encrypt;
  }
  *(code **)(param_1 + 0x2c0) = pcVar1;
  AES_set_encrypt_key(param_2 + (param_3 >> 1),bits,(AES_KEY *)(param_1 + 0x1b8));
  *(AES_KEY **)(param_1 + 0x2b0) = key;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    pcVar2 = local_48;
  }
  *(AES_KEY **)(param_1 + 0x2b8) = (AES_KEY *)(param_1 + 0x1b8);
  *(code **)(param_1 + 0x2c8) = AES_encrypt;
  *(code **)(param_1 + 0x2d0) = pcVar2;
  return 1;
}

