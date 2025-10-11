
void EVP_PKEY_CTX_set_rsa_pss_saltlen(undefined8 param_1,undefined4 param_2)

{
  RSA_pkey_ctx_ctrl(param_1,0x1f0,0x1002,param_2,0);
  return;
}

