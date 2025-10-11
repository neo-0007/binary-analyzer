
void sha1_init(void)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Init(c);
  return;
}

