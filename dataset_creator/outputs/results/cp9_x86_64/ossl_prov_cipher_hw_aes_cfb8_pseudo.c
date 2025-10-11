
undefined1 * ossl_prov_cipher_hw_aes_cfb8(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_cfb8;
  if ((DAT_0093e59c._3_1_ & 2) != 0) {
    puVar1 = aesni_cfb8;
  }
  return puVar1;
}

