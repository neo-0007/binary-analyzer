
undefined1 * ossl_prov_aes_hw_gcm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_gcm;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_gcm;
  }
  return puVar1;
}

