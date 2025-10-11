
ASN1_BIT_STRING *
v2i_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,stack_st_CONF_VALUE *nval)

{
  char *__s2;
  int iVar1;
  ASN1_BIT_STRING *a;
  long lVar2;
  char *__s1;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  a = ASN1_BIT_STRING_new();
  if (a == (ASN1_BIT_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_bitst.c",0x43,"v2i_ASN1_BIT_STRING");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(nval), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      lVar2 = OPENSSL_sk_value(nval,iVar3);
      piVar4 = (int *)method->usr_data;
      __s1 = *(char **)(piVar4 + 2);
      if (__s1 == (char *)0x0) {
LAB_0061d080:
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_bitst.c",0x54,"v2i_ASN1_BIT_STRING");
        ERR_set_error(0x22,0x6f,&DAT_007d9761,*(undefined8 *)(lVar2 + 8));
        ASN1_BIT_STRING_free(a);
        return (ASN1_BIT_STRING *)0x0;
      }
      __s2 = *(char **)(lVar2 + 8);
      while ((iVar1 = strcmp(*(char **)(piVar4 + 4),__s2), iVar1 != 0 &&
             (iVar1 = strcmp(__s1,__s2), iVar1 != 0))) {
        __s1 = *(char **)(piVar4 + 8);
        piVar4 = piVar4 + 6;
        if (__s1 == (char *)0x0) goto LAB_0061d080;
      }
      iVar1 = ASN1_BIT_STRING_set_bit(a,*piVar4,1);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_bitst.c",0x4c,"v2i_ASN1_BIT_STRING");
        ERR_set_error(0x22,0xc0100,0);
        ASN1_BIT_STRING_free(a);
        return (ASN1_BIT_STRING *)0x0;
      }
      if (*(long *)(piVar4 + 2) == 0) goto LAB_0061d080;
    }
  }
  return a;
}

