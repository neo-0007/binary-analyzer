
void test_sha1_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Update(c,param_2,param_3);
  return;
}

