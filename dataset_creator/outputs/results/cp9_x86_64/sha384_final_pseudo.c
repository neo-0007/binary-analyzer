
void sha384_final(undefined8 param_1,uchar *param_2)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA384_Final(param_2,c);
  return;
}

