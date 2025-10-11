
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_SIG * X509_SIG_new(void)

{
  ASN1_ITEM *it;
  X509_SIG *pXVar1;
  
  it = (ASN1_ITEM *)X509_SIG_it();
  pXVar1 = (X509_SIG *)ASN1_item_new(it);
  return pXVar1;
}

