
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ACCESS_DESCRIPTION * ACCESS_DESCRIPTION_new(void)

{
  ASN1_ITEM *it;
  ACCESS_DESCRIPTION *pAVar1;
  
  it = (ASN1_ITEM *)ACCESS_DESCRIPTION_it();
  pAVar1 = (ACCESS_DESCRIPTION *)ASN1_item_new(it);
  return pAVar1;
}

