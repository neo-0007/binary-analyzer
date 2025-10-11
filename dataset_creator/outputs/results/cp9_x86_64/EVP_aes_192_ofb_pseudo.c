
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_ofb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_192_ofb;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_192_ofb;
  }
  return (EVP_CIPHER *)puVar1;
}

