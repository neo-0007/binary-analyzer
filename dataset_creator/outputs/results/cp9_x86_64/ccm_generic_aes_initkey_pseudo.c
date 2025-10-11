
undefined8 ccm_generic_aes_initkey(byte *param_1,uchar *param_2,int param_3)

{
  code *pcVar1;
  
  if ((DAT_0093e59c._1_1_ & 2) == 0) {
    AES_set_encrypt_key(param_2,param_3 * 8,(AES_KEY *)(param_1 + 0xa8));
    pcVar1 = AES_encrypt;
  }
  else {
    vpaes_set_encrypt_key();
    pcVar1 = vpaes_encrypt;
  }
  CRYPTO_ccm128_init(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                     (AES_KEY *)(param_1 + 0xa8),pcVar1);
  *param_1 = *param_1 | 2;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  return 1;
}

