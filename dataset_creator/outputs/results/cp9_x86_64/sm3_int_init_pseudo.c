
void sm3_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sm3_init(uVar1);
  return;
}

