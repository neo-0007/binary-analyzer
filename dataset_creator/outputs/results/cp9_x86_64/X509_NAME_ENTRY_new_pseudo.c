
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_NAME_ENTRY * X509_NAME_ENTRY_new(void)

{
  ASN1_ITEM *it;
  X509_NAME_ENTRY *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  pXVar1 = (X509_NAME_ENTRY *)ASN1_item_new(it);
  return pXVar1;
}

