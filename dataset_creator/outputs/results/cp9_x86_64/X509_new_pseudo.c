
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509 * X509_new(void)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_new(it);
  return pXVar1;
}

