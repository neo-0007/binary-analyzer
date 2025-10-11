
void ripe_final(undefined8 param_1,uchar *param_2)

{
  RIPEMD160_CTX *c;
  
  c = (RIPEMD160_CTX *)EVP_MD_CTX_get0_md_data();
  RIPEMD160_Final(param_2,c);
  return;
}

