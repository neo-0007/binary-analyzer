
undefined8 cipher_hw_aesni_initkey(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  param_1[0x16] = param_1 + 0x18;
  if ((*(int *)(param_1 + 2) - 1U < 2) && ((*(byte *)((long)param_1 + 0x3c) & 2) == 0)) {
    iVar1 = aesni_set_decrypt_key(param_2,param_3 * 8,param_1 + 0x18);
    *param_1 = aesni_decrypt;
    pcVar2 = (code *)0x0;
    if (*(int *)(param_1 + 2) == 2) {
LAB_00441ae0:
      pcVar2 = aesni_cbc_encrypt;
    }
  }
  else {
    iVar1 = aesni_set_encrypt_key();
    *param_1 = aesni_encrypt;
    if (*(int *)(param_1 + 2) == 2) goto LAB_00441ae0;
    if (*(int *)(param_1 + 2) != 5) {
      param_1[1] = 0;
      goto joined_r0x00441af3;
    }
    pcVar2 = aesni_ctr32_encrypt_blocks;
  }
  param_1[1] = pcVar2;
joined_r0x00441af3:
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_hw_aesni.inc",0x30,
                  "cipher_hw_aesni_initkey");
    ERR_set_error(0x39,0x65,0);
    return 0;
  }
  return 1;
}

