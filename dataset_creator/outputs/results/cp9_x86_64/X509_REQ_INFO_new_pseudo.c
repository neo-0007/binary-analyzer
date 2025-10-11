
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_REQ_INFO * X509_REQ_INFO_new(void)

{
  ASN1_ITEM *it;
  X509_REQ_INFO *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  pXVar1 = (X509_REQ_INFO *)ASN1_item_new(it);
  return pXVar1;
}

