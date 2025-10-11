
undefined1 * ossl_prov_cipher_hw_aes_ofb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_ofb128;
  if ((DAT_0093e59c._3_1_ & 2) != 0) {
    puVar1 = aesni_ofb128;
  }
  return puVar1;
}

