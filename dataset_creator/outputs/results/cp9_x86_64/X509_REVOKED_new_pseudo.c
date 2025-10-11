
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_REVOKED * X509_REVOKED_new(void)

{
  ASN1_ITEM *it;
  X509_REVOKED *pXVar1;
  
  it = (ASN1_ITEM *)X509_REVOKED_it();
  pXVar1 = (X509_REVOKED *)ASN1_item_new(it);
  return pXVar1;
}

