
int X509_keyid_set1(X509 *x,uchar *id,int len)

{
  ASN1_STRING *a;
  int iVar1;
  ASN1_OCTET_STRING *str;
  X509_CERT_AUX *pXVar2;
  
  if (id != (uchar *)0x0) {
    if (x == (X509 *)0x0) {
      return 0;
    }
    pXVar2 = (X509_CERT_AUX *)x[1].altname;
    if (pXVar2 == (X509_CERT_AUX *)0x0) {
      pXVar2 = X509_CERT_AUX_new();
      x[1].altname = (stack_st_GENERAL_NAME *)pXVar2;
      if (pXVar2 == (X509_CERT_AUX *)0x0) {
        return 0;
      }
    }
    str = pXVar2->keyid;
    if (str == (ASN1_OCTET_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      pXVar2->keyid = str;
      if (str == (ASN1_OCTET_STRING *)0x0) {
        return 0;
      }
    }
    iVar1 = ASN1_STRING_set(str,id,len);
    return iVar1;
  }
  if ((x != (X509 *)0x0) && (x[1].altname != (stack_st_GENERAL_NAME *)0x0)) {
    a = (ASN1_STRING *)((x[1].altname)->stack).comp;
    if (a != (ASN1_STRING *)0x0) {
      ASN1_OCTET_STRING_free(a);
      ((x[1].altname)->stack).comp = (_func_257 *)0x0;
      return 1;
    }
    return 1;
  }
  return 1;
}

