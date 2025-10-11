
undefined1 * EVP_aes_128_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_128_ocb;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_128_ocb;
  }
  return puVar1;
}

