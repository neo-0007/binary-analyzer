
bool cipher_updateaad(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = CRYPTO_ocb128_aad(param_1 + 0x2b0,param_2,param_4);
  return iVar1 == 1;
}

