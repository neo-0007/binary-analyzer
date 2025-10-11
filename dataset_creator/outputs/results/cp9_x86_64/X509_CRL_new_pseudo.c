
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CRL * X509_CRL_new(void)

{
  ASN1_ITEM *it;
  X509_CRL *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  pXVar1 = (X509_CRL *)ASN1_item_new(it);
  return pXVar1;
}

