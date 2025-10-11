
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BASIC_CONSTRAINTS * BASIC_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  BASIC_CONSTRAINTS *pBVar1;
  
  it = (ASN1_ITEM *)BASIC_CONSTRAINTS_it();
  pBVar1 = (BASIC_CONSTRAINTS *)ASN1_item_new(it);
  return pBVar1;
}

