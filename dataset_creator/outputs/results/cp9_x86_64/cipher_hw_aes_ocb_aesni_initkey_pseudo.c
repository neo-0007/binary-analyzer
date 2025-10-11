
undefined8 cipher_hw_aes_ocb_aesni_initkey(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  CRYPTO_ocb128_cleanup(param_1 + 0x2b0);
  aesni_set_encrypt_key(param_2,param_3 << 3,param_1 + 0xc0);
  aesni_set_decrypt_key(param_2,param_3 << 3,param_1 + 0x1b8);
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    pcVar2 = aesni_ocb_decrypt;
  }
  else {
    pcVar2 = aesni_ocb_encrypt;
  }
  uVar1 = CRYPTO_ocb128_init(param_1 + 0x2b0,param_1 + 0xc0,param_1 + 0x1b8,aesni_encrypt,
                             aesni_decrypt,pcVar2);
  if ((int)uVar1 != 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
    uVar1 = 1;
  }
  return uVar1;
}

