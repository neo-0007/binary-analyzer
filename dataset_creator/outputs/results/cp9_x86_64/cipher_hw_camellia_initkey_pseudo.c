
undefined8 cipher_hw_camellia_initkey(undefined8 *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  param_1[0x16] = (CAMELLIA_KEY *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = Camellia_set_key(param_2,param_3 * 8,(CAMELLIA_KEY *)(param_1 + 0x18));
  if (-1 < iVar2) {
    if (((*(byte *)((long)param_1 + 0x3c) & 2) == 0) && (iVar1 - 1U < 2)) {
      *param_1 = Camellia_decrypt;
    }
    else {
      *param_1 = Camellia_encrypt;
    }
    if (iVar1 == 2) {
      pcVar3 = Camellia_cbc_encrypt;
    }
    else {
      pcVar3 = (code *)0x0;
    }
    param_1[1] = pcVar3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/cipher_camellia_hw.c",0x1e,
                "cipher_hw_camellia_initkey");
  ERR_set_error(0x39,0x65,0);
  return 0;
}

