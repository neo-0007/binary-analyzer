
long OSSL_DECODER_CTX_new(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x68,"../crypto/encode_decode/decoder_meth.c",0x272);
  if (lVar1 != 0) {
    return lVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x273,"OSSL_DECODER_CTX_new");
  ERR_set_error(0x3c,0xc0100,0);
  return 0;
}

