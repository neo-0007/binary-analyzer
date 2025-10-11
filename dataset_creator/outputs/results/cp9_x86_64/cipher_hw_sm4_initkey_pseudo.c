
undefined8 cipher_hw_sm4_initkey(undefined8 *param_1,undefined8 param_2)

{
  ossl_sm4_set_key(param_2,param_1 + 0x18);
  param_1[0x16] = param_1 + 0x18;
  if (((*(byte *)((long)param_1 + 0x3c) & 2) == 0) && (*(int *)(param_1 + 2) - 1U < 2)) {
    *param_1 = ossl_sm4_decrypt;
    return 1;
  }
  *param_1 = ossl_sm4_encrypt;
  return 1;
}

