
undefined8 ossl_cmp_sk_ASN1_UTF8STRING_push_str(long param_1,void *param_2,int param_3)

{
  int iVar1;
  ASN1_UTF8STRING *str;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (void *)0x0) {
    str = ASN1_UTF8STRING_new();
    if (str != (ASN1_UTF8STRING *)0x0) {
      iVar1 = ASN1_STRING_set(str,param_2,param_3);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_push(param_1,str);
        if (iVar1 != 0) {
          return 1;
        }
      }
      ASN1_UTF8STRING_free(str);
    }
  }
  return 0;
}

