
void md5_final(undefined8 param_1,uchar *param_2)

{
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_get0_md_data();
  MD5_Final(param_2,c);
  return;
}

