
void sha256_init(void)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA256_Init(c);
  return;
}

