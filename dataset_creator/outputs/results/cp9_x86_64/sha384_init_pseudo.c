
void sha384_init(void)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA384_Init(c);
  return;
}

