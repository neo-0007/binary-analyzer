
bool uint32_new(long *param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(4,"../crypto/asn1/x_int64.c",0x7e);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/x_int64.c",0x7f,"uint32_new");
    ERR_set_error(0xd,0xc0100,0);
  }
  return lVar1 != 0;
}

