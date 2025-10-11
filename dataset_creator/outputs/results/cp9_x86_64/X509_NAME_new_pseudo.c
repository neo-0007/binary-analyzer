
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_NAME * X509_NAME_new(void)

{
  ASN1_ITEM *it;
  X509_NAME *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  pXVar1 = (X509_NAME *)ASN1_item_new(it);
  return pXVar1;
}

