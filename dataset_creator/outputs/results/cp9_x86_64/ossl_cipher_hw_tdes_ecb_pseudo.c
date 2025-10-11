
undefined8
ossl_cipher_hw_tdes_ecb(long param_1,DES_cblock *param_2,const_DES_cblock *param_3,ulong param_4)

{
  uchar *input;
  uchar *puVar1;
  
  if (7 < param_4) {
    input = *param_3;
    do {
      puVar1 = input + 8;
      DES_ecb3_encrypt((const_DES_cblock *)input,param_2,(DES_key_schedule *)(param_1 + 0xc0),
                       (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
                       *(byte *)(param_1 + 0x3c) >> 1 & 1);
      input = puVar1;
      param_2 = param_2 + 1;
    } while (puVar1 != param_3[1] + (param_4 - 8 & 0xfffffffffffffff8));
    return 1;
  }
  return 1;
}

