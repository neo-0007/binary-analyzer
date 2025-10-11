
X509_CRL * X509_CRL_dup(X509_CRL *crl)

{
  ASN1_ITEM *it;
  X509_CRL *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  pXVar1 = (X509_CRL *)ASN1_item_dup(it,crl);
  return pXVar1;
}

