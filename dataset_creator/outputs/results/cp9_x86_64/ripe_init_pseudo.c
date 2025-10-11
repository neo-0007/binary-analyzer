
void ripe_init(void)

{
  RIPEMD160_CTX *c;
  
  c = (RIPEMD160_CTX *)EVP_MD_CTX_get0_md_data();
  RIPEMD160_Init(c);
  return;
}

