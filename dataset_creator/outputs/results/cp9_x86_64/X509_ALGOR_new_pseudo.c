
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_ALGOR * X509_ALGOR_new(void)

{
  ASN1_ITEM *it;
  X509_ALGOR *pXVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  pXVar1 = (X509_ALGOR *)ASN1_item_new(it);
  return pXVar1;
}

