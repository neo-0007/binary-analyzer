
void sha224_final(undefined8 param_1,uchar *param_2)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA224_Final(param_2,c);
  return;
}

