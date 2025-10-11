
undefined8 OSSL_DECODER_CTX_set_construct(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x237,"OSSL_DECODER_CTX_set_construct");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}

