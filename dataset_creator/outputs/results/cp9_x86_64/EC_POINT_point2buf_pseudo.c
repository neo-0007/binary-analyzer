
size_t EC_POINT_point2buf(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t param_3,
                         undefined8 *param_4,BN_CTX *param_5)

{
  size_t len;
  uchar *buf;
  
  len = EC_POINT_point2oct(param_1,param_2,param_3,(uchar *)0x0,0,(BN_CTX *)0x0);
  if (len != 0) {
    buf = (uchar *)CRYPTO_malloc((int)len,"../crypto/ec/ec_oct.c",0x8f);
    if (buf == (uchar *)0x0) {
      ERR_new();
      len = 0;
      ERR_set_debug("../crypto/ec/ec_oct.c",0x90,"EC_POINT_point2buf");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      len = EC_POINT_point2oct(param_1,param_2,param_3,buf,len,param_5);
      if (len == 0) {
        CRYPTO_free(buf);
      }
      else {
        *param_4 = buf;
      }
    }
  }
  return len;
}

