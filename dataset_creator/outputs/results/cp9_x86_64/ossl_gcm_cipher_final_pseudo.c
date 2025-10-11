
bool ossl_gcm_cipher_final(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    CRYPTO_gcm128_tag(param_1 + 0xf8,param_2,0x10);
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    return true;
  }
  iVar1 = CRYPTO_gcm128_finish(param_1 + 0xf8,param_2,*(undefined8 *)(param_1 + 0x18));
  return iVar1 == 0;
}

