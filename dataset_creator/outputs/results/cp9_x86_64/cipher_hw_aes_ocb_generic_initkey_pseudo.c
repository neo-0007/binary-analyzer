
undefined8 cipher_hw_aes_ocb_generic_initkey(long param_1,uchar *param_2,int param_3)

{
  AES_KEY *key;
  AES_KEY *key_00;
  long lVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  
  key = (AES_KEY *)(param_1 + 0x1b8);
  key_00 = (AES_KEY *)(param_1 + 0xc0);
  lVar1 = param_1 + 0x2b0;
  param_3 = param_3 * 8;
  if ((DAT_0093e59c._1_1_ & 2) == 0) {
    CRYPTO_ocb128_cleanup(lVar1);
    AES_set_encrypt_key(param_2,param_3,key_00);
    AES_set_decrypt_key(param_2,param_3,key);
    pcVar4 = AES_decrypt;
    pcVar3 = AES_encrypt;
  }
  else {
    CRYPTO_ocb128_cleanup(lVar1);
    vpaes_set_encrypt_key(param_2,param_3,key_00);
    vpaes_set_decrypt_key(param_2,param_3,key);
    pcVar4 = vpaes_decrypt;
    pcVar3 = vpaes_encrypt;
  }
  iVar2 = CRYPTO_ocb128_init(lVar1,key_00,key,pcVar3,pcVar4,0);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
    return 1;
  }
  return 0;
}

