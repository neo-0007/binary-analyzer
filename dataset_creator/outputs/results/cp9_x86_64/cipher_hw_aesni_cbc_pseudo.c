
undefined8
cipher_hw_aesni_cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  aesni_cbc_encrypt(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x94,
                    *(byte *)(param_1 + 0x3c) >> 1 & 1);
  return 1;
}

