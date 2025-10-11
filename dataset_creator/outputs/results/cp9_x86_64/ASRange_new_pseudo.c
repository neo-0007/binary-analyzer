
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASRange * ASRange_new(void)

{
  ASN1_ITEM *it;
  ASRange *pAVar1;
  
  it = (ASN1_ITEM *)ASRange_it();
  pAVar1 = (ASRange *)ASN1_item_new(it);
  return pAVar1;
}

