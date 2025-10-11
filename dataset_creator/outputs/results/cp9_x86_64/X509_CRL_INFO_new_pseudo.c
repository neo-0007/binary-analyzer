
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CRL_INFO * X509_CRL_INFO_new(void)

{
  ASN1_ITEM *it;
  X509_CRL_INFO *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_INFO_it();
  pXVar1 = (X509_CRL_INFO *)ASN1_item_new(it);
  return pXVar1;
}

