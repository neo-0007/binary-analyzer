
void EVP_PKEY_CTX_get1_id(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,-1,-1,0x10,0,param_2);
  return;
}

