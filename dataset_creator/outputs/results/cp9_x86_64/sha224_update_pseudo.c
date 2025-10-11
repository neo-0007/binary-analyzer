
void sha224_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA224_Update(c,param_2,param_3);
  return;
}

