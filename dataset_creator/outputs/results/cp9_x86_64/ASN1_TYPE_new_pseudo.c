
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_TYPE * ASN1_TYPE_new(void)

{
  ASN1_ITEM *it;
  ASN1_TYPE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  pAVar1 = (ASN1_TYPE *)ASN1_item_new(it);
  return pAVar1;
}

