
void EVP_PKEY_CTX_set_rsa_padding(undefined8 param_1,undefined4 param_2)

{
  RSA_pkey_ctx_ctrl(param_1,0xffffffff,0x1001,param_2,0);
  return;
}

