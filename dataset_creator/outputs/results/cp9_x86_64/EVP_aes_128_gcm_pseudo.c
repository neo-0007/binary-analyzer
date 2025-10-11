
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_gcm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_128_gcm;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_128_gcm;
  }
  return (EVP_CIPHER *)puVar1;
}

