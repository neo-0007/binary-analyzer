
void EVP_PKEY_CTX_set_rsa_oaep_md_name(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int_set_rsa_md_name(param_1,6,0x600,"digest",param_2,"digest-props",param_3);
  return;
}

