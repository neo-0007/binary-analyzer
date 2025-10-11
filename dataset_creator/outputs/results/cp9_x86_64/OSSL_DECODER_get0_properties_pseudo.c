
undefined8 OSSL_DECODER_get0_properties(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x1e5,"OSSL_DECODER_get0_properties");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}

