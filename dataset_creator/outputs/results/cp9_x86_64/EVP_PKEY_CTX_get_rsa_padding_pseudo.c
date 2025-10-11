
void EVP_PKEY_CTX_get_rsa_padding(undefined8 param_1,undefined8 param_2)

{
  RSA_pkey_ctx_ctrl(param_1,0xffffffff,0x1006,0,param_2);
  return;
}

