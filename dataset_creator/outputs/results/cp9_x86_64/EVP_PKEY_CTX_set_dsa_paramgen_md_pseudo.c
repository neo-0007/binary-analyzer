
void EVP_PKEY_CTX_set_dsa_paramgen_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1003,0,param_2);
  return;
}

