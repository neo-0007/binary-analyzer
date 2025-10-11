
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASIdentifiers * ASIdentifiers_new(void)

{
  ASN1_ITEM *it;
  ASIdentifiers *pAVar1;
  
  it = (ASN1_ITEM *)ASIdentifiers_it();
  pAVar1 = (ASIdentifiers *)ASN1_item_new(it);
  return pAVar1;
}

