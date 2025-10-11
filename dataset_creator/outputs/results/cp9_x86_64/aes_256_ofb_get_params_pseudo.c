
void aes_256_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x100,8,0x80);
  return;
}

