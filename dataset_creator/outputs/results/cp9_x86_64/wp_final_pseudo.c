
void wp_final(undefined8 param_1,uchar *param_2)

{
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_get0_md_data();
  WHIRLPOOL_Final(param_2,c);
  return;
}

