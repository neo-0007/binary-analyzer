
void sha224_init(void)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA224_Init(c);
  return;
}

