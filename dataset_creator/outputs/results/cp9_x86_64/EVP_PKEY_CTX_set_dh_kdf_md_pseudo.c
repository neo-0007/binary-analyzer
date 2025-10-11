
void EVP_PKEY_CTX_set_dh_kdf_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x1007,0,param_2);
  return;
}

