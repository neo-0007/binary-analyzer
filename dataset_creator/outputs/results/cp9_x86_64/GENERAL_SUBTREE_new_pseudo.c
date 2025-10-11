
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

GENERAL_SUBTREE * GENERAL_SUBTREE_new(void)

{
  ASN1_ITEM *it;
  GENERAL_SUBTREE *pGVar1;
  
  it = (ASN1_ITEM *)GENERAL_SUBTREE_it();
  pGVar1 = (GENERAL_SUBTREE *)ASN1_item_new(it);
  return pGVar1;
}

