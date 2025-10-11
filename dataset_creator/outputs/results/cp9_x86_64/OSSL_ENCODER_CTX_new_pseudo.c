
long OSSL_ENCODER_CTX_new(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x68,"../crypto/encode_decode/encoder_meth.c",0x274);
  if (lVar1 != 0) {
    return lVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/encoder_meth.c",0x275,"OSSL_ENCODER_CTX_new");
  ERR_set_error(0x3b,0xc0100,0);
  return 0;
}

