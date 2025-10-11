
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_ATTRIBUTE * X509_ATTRIBUTE_new(void)

{
  ASN1_ITEM *it;
  X509_ATTRIBUTE *pXVar1;
  
  it = (ASN1_ITEM *)X509_ATTRIBUTE_it();
  pXVar1 = (X509_ATTRIBUTE *)ASN1_item_new(it);
  return pXVar1;
}

