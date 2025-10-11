
undefined1 * EVP_aes_192_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_192_ocb;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_192_ocb;
  }
  return puVar1;
}

