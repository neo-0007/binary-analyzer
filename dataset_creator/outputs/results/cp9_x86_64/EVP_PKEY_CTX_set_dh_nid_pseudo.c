
void EVP_PKEY_CTX_set_dh_nid(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x1c,6,0x100f,param_2,(void *)0x0);
  return;
}

