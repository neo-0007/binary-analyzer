
void kmac_update(long param_1,void *param_2,size_t param_3)

{
  EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 8),param_2,param_3);
  return;
}

