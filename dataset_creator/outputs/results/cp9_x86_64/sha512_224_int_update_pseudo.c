
void sha512_224_int_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Update(c,param_2,param_3);
  return;
}

