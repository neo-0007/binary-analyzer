
undefined1 * EVP_aes_256_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_256_ocb;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_256_ocb;
  }
  return puVar1;
}

