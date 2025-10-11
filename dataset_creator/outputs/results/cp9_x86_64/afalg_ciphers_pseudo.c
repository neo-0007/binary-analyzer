
undefined8 afalg_ciphers(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_3 = &afalg_cipher_nids;
    return 3;
  }
  if ((param_4 - 0x1a3U < 9) && ((0x111UL >> ((ulong)(param_4 - 0x1a3U) & 0x3f) & 1) != 0)) {
    uVar1 = afalg_aes_cbc(param_4);
    *param_2 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

