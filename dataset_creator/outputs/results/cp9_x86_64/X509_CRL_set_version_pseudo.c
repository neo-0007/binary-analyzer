
int X509_CRL_set_version(X509_CRL *x,long version)

{
  int iVar1;
  X509_CRL_INFO *pXVar2;
  
  if (x == (X509_CRL *)0x0) {
    return 0;
  }
  pXVar2 = x->crl;
  if (pXVar2 == (X509_CRL_INFO *)0x0) {
    pXVar2 = (X509_CRL_INFO *)ASN1_INTEGER_new();
    x->crl = pXVar2;
    if (pXVar2 == (X509_CRL_INFO *)0x0) {
      return 0;
    }
  }
  iVar1 = ASN1_INTEGER_set(pXVar2,version);
  return iVar1;
}

