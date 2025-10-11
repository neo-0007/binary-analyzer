
void EVP_PKEY_CTX_set_ecdh_kdf_type(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,0x800,0x1004,param_2,(void *)0x0);
  return;
}

