
undefined8 cipher_hw_aesni_xts_initkey(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)(param_3 >> 1) * 8;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    aesni_set_decrypt_key(param_2,iVar2,param_1 + 0xc0);
    pcVar1 = aesni_decrypt;
  }
  else {
    aesni_set_encrypt_key();
    pcVar1 = aesni_encrypt;
  }
  *(code **)(param_1 + 0x2c0) = pcVar1;
  aesni_set_encrypt_key(param_2 + (param_3 >> 1),iVar2,param_1 + 0x1b8);
  *(long *)(param_1 + 0x2b0) = param_1 + 0xc0;
  *(long *)(param_1 + 0x2b8) = param_1 + 0x1b8;
  *(code **)(param_1 + 0x2c8) = aesni_encrypt;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    pcVar1 = aesni_xts_decrypt;
  }
  else {
    pcVar1 = aesni_xts_encrypt;
  }
  *(code **)(param_1 + 0x2d0) = pcVar1;
  return 1;
}

