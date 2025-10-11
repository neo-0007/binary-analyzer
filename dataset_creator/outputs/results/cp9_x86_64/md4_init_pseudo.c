
void md4_init(void)

{
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_get0_md_data();
  MD4_Init(c);
  return;
}

