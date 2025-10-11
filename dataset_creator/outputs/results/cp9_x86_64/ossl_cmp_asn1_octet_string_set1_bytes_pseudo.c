
undefined8 ossl_cmp_asn1_octet_string_set1_bytes(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/cmp/cmp_util.c",0x110,"ossl_cmp_asn1_octet_string_set1_bytes");
    ERR_set_error(0x3a,0x67,0);
    uVar2 = 0;
  }
  else {
    if (param_2 == (void *)0x0) {
      str = (ASN1_OCTET_STRING *)0x0;
    }
    else {
      str = ASN1_OCTET_STRING_new();
      if (str == (ASN1_OCTET_STRING *)0x0) {
LAB_004bfce0:
        ASN1_OCTET_STRING_free(str);
        return 0;
      }
      iVar1 = ASN1_OCTET_STRING_set(str,param_2,param_3);
      if (iVar1 == 0) goto LAB_004bfce0;
    }
    ASN1_OCTET_STRING_free((ASN1_STRING *)*param_1);
    *param_1 = str;
    uVar2 = 1;
  }
  return uVar2;
}

