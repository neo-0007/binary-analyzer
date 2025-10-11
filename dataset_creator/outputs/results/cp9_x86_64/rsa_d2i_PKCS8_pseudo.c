
void rsa_d2i_PKCS8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  der2key_decode_p8(param_2,param_3,param_4,ossl_rsa_key_from_pkcs8);
  return;
}

