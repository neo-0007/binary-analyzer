
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASIdOrRange * ASIdOrRange_new(void)

{
  ASN1_ITEM *it;
  ASIdOrRange *pAVar1;
  
  it = (ASN1_ITEM *)ASIdOrRange_it();
  pAVar1 = (ASIdOrRange *)ASN1_item_new(it);
  return pAVar1;
}

