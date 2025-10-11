
void EVP_PKEY_CTX_get_ecdh_kdf_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,0x800,0x1006,0,param_2);
  return;
}

