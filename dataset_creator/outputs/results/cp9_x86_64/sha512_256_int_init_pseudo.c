
void sha512_256_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  sha512_256_init(uVar1);
  return;
}

