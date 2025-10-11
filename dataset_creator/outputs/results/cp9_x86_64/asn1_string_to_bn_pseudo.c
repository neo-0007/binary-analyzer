
BIGNUM * asn1_string_to_bn(int *param_1,BIGNUM *param_2,uint param_3)

{
  BIGNUM *b;
  
  if ((param_1[1] & 0xfffffeffU) != param_3) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_int.c",0x1ff,"asn1_string_to_bn");
    ERR_set_error(0xd,0xe1,0);
    return (BIGNUM *)0x0;
  }
  b = BN_bin2bn(*(uchar **)(param_1 + 2),*param_1,param_2);
  if (b == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_int.c",0x205,"asn1_string_to_bn");
    ERR_set_error(0xd,0x69,0);
  }
  else if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
    BN_set_negative(b,1);
    return b;
  }
  return b;
}

