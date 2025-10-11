
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_TIME * ASN1_TIME_new(void)

{
  ASN1_ITEM *it;
  ASN1_TIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  pAVar1 = (ASN1_TIME *)ASN1_item_new(it);
  return pAVar1;
}

