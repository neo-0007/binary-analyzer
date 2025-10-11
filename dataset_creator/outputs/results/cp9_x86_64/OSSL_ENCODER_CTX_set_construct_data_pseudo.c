
undefined8 OSSL_ENCODER_CTX_set_construct_data(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x155,"OSSL_ENCODER_CTX_set_construct_data")
  ;
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}

