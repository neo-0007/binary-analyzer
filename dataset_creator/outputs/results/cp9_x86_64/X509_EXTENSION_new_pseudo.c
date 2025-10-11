
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_EXTENSION * X509_EXTENSION_new(void)

{
  ASN1_ITEM *it;
  X509_EXTENSION *pXVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  pXVar1 = (X509_EXTENSION *)ASN1_item_new(it);
  return pXVar1;
}

