
void EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x390,4,0x1005,0,param_2);
  return;
}

