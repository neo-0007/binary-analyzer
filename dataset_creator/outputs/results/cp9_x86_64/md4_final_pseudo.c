
void md4_final(undefined8 param_1,uchar *param_2)

{
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_get0_md_data();
  MD4_Final(param_2,c);
  return;
}

