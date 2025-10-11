
void EVP_PKEY_CTX_get_rsa_oaep_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,6,0x600,0x100b,0,param_2);
  return;
}

