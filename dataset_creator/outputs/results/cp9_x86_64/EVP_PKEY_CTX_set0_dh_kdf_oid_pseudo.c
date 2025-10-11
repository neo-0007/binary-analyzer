
void EVP_PKEY_CTX_set0_dh_kdf_oid(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x100d,0,param_2);
  return;
}

