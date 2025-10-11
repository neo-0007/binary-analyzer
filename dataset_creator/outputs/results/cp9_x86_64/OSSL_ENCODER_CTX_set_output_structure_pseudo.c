
undefined8 OSSL_ENCODER_CTX_set_output_structure(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(long *)(param_1 + 0x10) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0xae,"OSSL_ENCODER_CTX_set_output_structure"
               );
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}

