
undefined8 ossl_cmp_asn1_octet_string_set1(long *param_1,ASN1_STRING *param_2)

{
  undefined8 uVar1;
  ASN1_STRING *a;
  
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/cmp/cmp_util.c",0xf8,"ossl_cmp_asn1_octet_string_set1");
    ERR_set_error(0x3a,0x67,0);
    uVar1 = 0;
  }
  else {
    a = (ASN1_STRING *)*param_1;
    if (a == param_2) {
      return 1;
    }
    if (param_2 != (ASN1_STRING *)0x0) {
      param_2 = ASN1_OCTET_STRING_dup(param_2);
      if (param_2 == (ASN1_STRING *)0x0) {
        return 0;
      }
      a = (ASN1_STRING *)*param_1;
    }
    ASN1_OCTET_STRING_free(a);
    *param_1 = (long)param_2;
    uVar1 = 1;
  }
  return uVar1;
}

