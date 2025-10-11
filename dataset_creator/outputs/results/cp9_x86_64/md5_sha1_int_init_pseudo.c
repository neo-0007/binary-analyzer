
void md5_sha1_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_md5_sha1_init(uVar1);
  return;
}

