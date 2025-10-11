
ASN1_STRING * d2i_ocsp_nonce(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ASN1_STRING *str;
  
  if (param_1 == (long *)0x0) {
    str = ASN1_OCTET_STRING_new();
    if (str != (ASN1_OCTET_STRING *)0x0) {
      iVar1 = ASN1_OCTET_STRING_set(str,(void *)*param_2,(int)param_3);
      if (iVar1 != 0) {
        *param_2 = *param_2 + param_3;
        return str;
      }
    }
  }
  else {
    str = (ASN1_STRING *)*param_1;
    if (str == (ASN1_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) goto LAB_0061b018;
    }
    else {
LAB_0061b018:
      iVar1 = ASN1_OCTET_STRING_set(str,(void *)*param_2,(int)param_3);
      if (iVar1 != 0) {
        *param_2 = param_3 + *param_2;
        *param_1 = (long)str;
        return str;
      }
    }
    if ((ASN1_OCTET_STRING *)*param_1 == str) goto LAB_0061b066;
  }
  ASN1_OCTET_STRING_free(str);
LAB_0061b066:
  ERR_new();
  ERR_set_debug("../crypto/ocsp/v3_ocsp.c",0xce,"d2i_ocsp_nonce");
  ERR_set_error(0x27,0xc0100,0);
  return (ASN1_STRING *)0x0;
}

