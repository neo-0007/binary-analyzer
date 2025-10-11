
undefined4 ossl_decoder_get_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x1fa,"ossl_decoder_get_number");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}

