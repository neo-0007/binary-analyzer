
void md5_init(void)

{
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_get0_md_data();
  MD5_Init(c);
  return;
}

