
int X509_set_version(X509 *x,long version)

{
  int iVar1;
  X509_CINF *a;
  
  if (x == (X509 *)0x0) {
    return 0;
  }
  a = x->cert_info;
  if (version != 0) {
    if (a == (X509_CINF *)0x0) {
      a = (X509_CINF *)ASN1_INTEGER_new();
      x->cert_info = a;
      if (a == (X509_CINF *)0x0) {
        return 0;
      }
    }
    iVar1 = ASN1_INTEGER_set(a,version);
    return iVar1;
  }
  ASN1_INTEGER_free((ASN1_STRING *)a);
  x->cert_info = (X509_CINF *)0x0;
  return 1;
}

