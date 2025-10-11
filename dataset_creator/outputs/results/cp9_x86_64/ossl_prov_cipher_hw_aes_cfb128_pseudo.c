
undefined1 * ossl_prov_cipher_hw_aes_cfb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_cfb128;
  if ((DAT_0093e59c._3_1_ & 2) != 0) {
    puVar1 = aesni_cfb128;
  }
  return puVar1;
}

