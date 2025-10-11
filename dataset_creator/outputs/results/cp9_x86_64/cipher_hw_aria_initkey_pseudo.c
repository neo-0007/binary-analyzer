
undefined8 cipher_hw_aria_initkey(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((*(byte *)((long)param_1 + 0x3c) & 2) == 0) && (*(int *)(param_1 + 2) - 1U < 2)) {
    iVar1 = ossl_aria_set_decrypt_key(param_2,param_3 * 8,param_1 + 0x18);
  }
  else {
    iVar1 = ossl_aria_set_encrypt_key();
  }
  if (-1 < iVar1) {
    param_1[0x16] = param_1 + 0x18;
    *param_1 = ossl_aria_encrypt;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/cipher_aria_hw.c",0x19,
                "cipher_hw_aria_initkey");
  ERR_set_error(0x39,0x65,0);
  return 0;
}

