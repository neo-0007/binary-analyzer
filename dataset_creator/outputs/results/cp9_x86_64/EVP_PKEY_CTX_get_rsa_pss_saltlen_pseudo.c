
void EVP_PKEY_CTX_get_rsa_pss_saltlen(undefined8 param_1,undefined8 param_2)

{
  RSA_pkey_ctx_ctrl(param_1,0x1f0,0x1007,0,param_2);
  return;
}

