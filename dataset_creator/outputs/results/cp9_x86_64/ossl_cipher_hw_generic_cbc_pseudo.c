
undefined8
ossl_cipher_hw_generic_cbc
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)param_1[1] != (code *)0x0) {
    (*(code *)param_1[1])(param_3);
    return 1;
  }
  if ((*(byte *)((long)param_1 + 0x3c) & 2) != 0) {
    CRYPTO_cbc128_encrypt();
    return 1;
  }
  CRYPTO_cbc128_decrypt(param_3,param_2,param_4,param_1[0x16],(long)param_1 + 0x94,*param_1);
  return 1;
}

