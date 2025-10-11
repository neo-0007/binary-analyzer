
void EVP_PKEY_CTX_set_dh_paramgen_type(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1005,param_2,(void *)0x0);
  return;
}

