
int i2o_ECPublicKey(EC_KEY *key,uchar **out)

{
  int num;
  size_t sVar1;
  size_t sVar2;
  uchar *buf;
  
  if (key != (EC_KEY *)0x0) {
    sVar1 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                               *(point_conversion_form_t *)(key + 0x34),(uchar *)0x0,0,(BN_CTX *)0x0
                              );
    num = (int)sVar1;
    if ((out != (uchar **)0x0) && (sVar1 != 0)) {
      if (*out == (uchar *)0x0) {
        buf = (uchar *)CRYPTO_malloc(num,"../crypto/ec/ec_asn1.c",0x48f);
        *out = buf;
        if (buf == (uchar *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x490,"i2o_ECPublicKey");
          ERR_set_error(0x10,0xc0100,0);
          num = 0;
        }
        else {
          sVar1 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                                     *(point_conversion_form_t *)(key + 0x34),buf,sVar1,
                                     (BN_CTX *)0x0);
          if (sVar1 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x497,"i2o_ECPublicKey");
            ERR_set_error(0x10,0x80010,0);
            CRYPTO_free(*out);
            *out = (uchar *)0x0;
            num = 0;
          }
        }
      }
      else {
        sVar2 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                                   *(point_conversion_form_t *)(key + 0x34),*out,sVar1,(BN_CTX *)0x0
                                  );
        if (sVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x497,"i2o_ECPublicKey");
          ERR_set_error(0x10,0x80010,0);
          num = 0;
        }
        else {
          *out = *out + sVar1;
        }
      }
    }
    return num;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_asn1.c",0x483,"i2o_ECPublicKey");
  ERR_set_error(0x10,0xc0102,0);
  return 0;
}

