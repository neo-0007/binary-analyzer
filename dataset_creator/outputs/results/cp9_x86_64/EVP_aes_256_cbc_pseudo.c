
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_cbc(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_256_cbc;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_256_cbc;
  }
  return (EVP_CIPHER *)puVar1;
}

