
bool aes_generic_ocb_cipher(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    iVar1 = CRYPTO_ocb128_encrypt();
    return iVar1 != 0;
  }
  iVar1 = CRYPTO_ocb128_decrypt(param_1 + 0x2b0);
  return iVar1 != 0;
}

