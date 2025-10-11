
undefined8 OSSL_DECODER_get0_provider(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x1db,"OSSL_DECODER_get0_provider");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}

