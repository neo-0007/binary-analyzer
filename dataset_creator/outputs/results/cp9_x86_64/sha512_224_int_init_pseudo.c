
void sha512_224_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  sha512_224_init(uVar1);
  return;
}

