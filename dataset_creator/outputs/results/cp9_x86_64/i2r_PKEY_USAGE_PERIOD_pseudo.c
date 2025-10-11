
undefined8 i2r_PKEY_USAGE_PERIOD(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  BIO_printf(param_3,"%*s",(ulong)param_4,&DAT_008343a2);
  if (*param_2 != 0) {
    BIO_write(param_3,"Not Before: ",0xc);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    BIO_write(param_3,&DAT_007f7194,2);
  }
  if (param_2[1] != 0) {
    BIO_write(param_3,"Not After: ",0xb);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[1]);
  }
  return 1;
}

