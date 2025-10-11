
void EVP_PKEY_CTX_set_ec_paramgen_curve_nid(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1001,param_2,(void *)0x0);
  return;
}

