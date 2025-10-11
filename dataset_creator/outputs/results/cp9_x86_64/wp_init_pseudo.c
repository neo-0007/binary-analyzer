
void wp_init(void)

{
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_get0_md_data();
  WHIRLPOOL_Init(c);
  return;
}

