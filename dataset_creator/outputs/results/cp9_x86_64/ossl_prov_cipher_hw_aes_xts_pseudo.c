
undefined1 * ossl_prov_cipher_hw_aes_xts(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_generic_xts;
  if ((DAT_0093e59c._3_1_ & 2) != 0) {
    puVar1 = aesni_xts;
  }
  return puVar1;
}

