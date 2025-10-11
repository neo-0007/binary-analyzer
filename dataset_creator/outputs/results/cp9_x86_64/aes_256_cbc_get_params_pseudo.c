
void aes_256_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x100,0x80,0x80);
  return;
}

