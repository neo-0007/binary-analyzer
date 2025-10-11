
int X509_alias_set1(X509 *x,uchar *name,int len)

{
  ASN1_STRING *a;
  stack_st_GENERAL_NAME *psVar1;
  int iVar2;
  ASN1_UTF8STRING *str;
  X509_CERT_AUX *pXVar3;
  
  if (name != (uchar *)0x0) {
    if (x == (X509 *)0x0) {
      return 0;
    }
    pXVar3 = (X509_CERT_AUX *)x[1].altname;
    if (pXVar3 == (X509_CERT_AUX *)0x0) {
      pXVar3 = X509_CERT_AUX_new();
      x[1].altname = (stack_st_GENERAL_NAME *)pXVar3;
      if (pXVar3 == (X509_CERT_AUX *)0x0) {
        return 0;
      }
    }
    str = pXVar3->alias;
    if (str == (ASN1_UTF8STRING *)0x0) {
      str = ASN1_UTF8STRING_new();
      pXVar3->alias = str;
      if (str == (ASN1_UTF8STRING *)0x0) {
        return 0;
      }
    }
    iVar2 = ASN1_STRING_set(str,name,len);
    return iVar2;
  }
  if ((x != (X509 *)0x0) && (x[1].altname != (stack_st_GENERAL_NAME *)0x0)) {
    a = *(ASN1_STRING **)&((x[1].altname)->stack).sorted;
    if (a != (ASN1_STRING *)0x0) {
      ASN1_UTF8STRING_free(a);
      psVar1 = x[1].altname;
      (psVar1->stack).sorted = 0;
      (psVar1->stack).num_alloc = 0;
      return 1;
    }
    return 1;
  }
  return 1;
}

