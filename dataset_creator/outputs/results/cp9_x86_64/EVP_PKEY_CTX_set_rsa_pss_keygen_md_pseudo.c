
void EVP_PKEY_CTX_set_rsa_pss_keygen_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x390,4,1,0,param_2);
  return;
}

