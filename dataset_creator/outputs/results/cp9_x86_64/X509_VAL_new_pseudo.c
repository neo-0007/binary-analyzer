
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_VAL * X509_VAL_new(void)

{
  ASN1_ITEM *it;
  X509_VAL *pXVar1;
  
  it = (ASN1_ITEM *)X509_VAL_it();
  pXVar1 = (X509_VAL *)ASN1_item_new(it);
  return pXVar1;
}

