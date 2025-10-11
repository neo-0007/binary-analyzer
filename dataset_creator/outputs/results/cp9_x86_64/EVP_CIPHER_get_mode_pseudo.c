
uint EVP_CIPHER_get_mode(void)

{
  uint uVar1;
  
  uVar1 = EVP_CIPHER_get_flags();
  return uVar1 & 0xf0007;
}

