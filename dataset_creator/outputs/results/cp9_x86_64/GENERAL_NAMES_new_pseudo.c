
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

GENERAL_NAMES * GENERAL_NAMES_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAMES_it();
  pAVar1 = ASN1_item_new(it);
  return (GENERAL_NAMES *)pAVar1;
}

