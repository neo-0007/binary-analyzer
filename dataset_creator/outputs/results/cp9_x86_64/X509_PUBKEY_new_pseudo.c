
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_PUBKEY * X509_PUBKEY_new(void)

{
  ASN1_ITEM *it;
  X509_PUBKEY *pXVar1;
  
  it = (ASN1_ITEM *)X509_PUBKEY_it();
  pXVar1 = (X509_PUBKEY *)ASN1_item_new(it);
  return pXVar1;
}

