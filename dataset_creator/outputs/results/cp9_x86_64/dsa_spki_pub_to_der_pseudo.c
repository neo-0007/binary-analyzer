
int dsa_spki_pub_to_der(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  BIGNUM *bn;
  ASN1_INTEGER *a;
  
  bn = (BIGNUM *)DSA_get0_pub_key();
  if (bn == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x250,
                  "dsa_spki_pub_to_der");
    ERR_set_error(0x39,0xdc,0);
    return 0;
  }
  a = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
  if (a != (ASN1_INTEGER *)0x0) {
    iVar1 = i2d_ASN1_INTEGER(a,param_2);
    ASN1_STRING_clear_free(a);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x254,
                "dsa_spki_pub_to_der");
  ERR_set_error(0x39,0xa0,0);
  return 0;
}

