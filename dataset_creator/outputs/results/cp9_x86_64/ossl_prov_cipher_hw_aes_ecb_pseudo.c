
undefined1 * ossl_prov_cipher_hw_aes_ecb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_ecb;
  if ((DAT_0093e59c._3_1_ & 2) != 0) {
    puVar1 = aesni_ecb;
  }
  return puVar1;
}

