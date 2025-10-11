
void aes_256_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x100,0x80,0);
  return;
}

