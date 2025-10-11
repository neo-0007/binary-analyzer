
void blake2b_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2b512_init(uVar1);
  return;
}

