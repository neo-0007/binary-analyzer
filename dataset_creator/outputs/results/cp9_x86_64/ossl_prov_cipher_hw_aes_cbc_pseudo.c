
undefined1 * ossl_prov_cipher_hw_aes_cbc(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_cbc;
  if ((DAT_0093e59c._3_1_ & 2) != 0) {
    puVar1 = aesni_cbc;
  }
  return puVar1;
}

