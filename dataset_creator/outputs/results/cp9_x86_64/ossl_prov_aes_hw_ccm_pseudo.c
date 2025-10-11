
undefined1 * ossl_prov_aes_hw_ccm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_ccm;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = aes_ccm;
  }
  return puVar1;
}

