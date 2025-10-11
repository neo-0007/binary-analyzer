
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SXNETID * SXNETID_new(void)

{
  ASN1_ITEM *it;
  SXNETID *pSVar1;
  
  it = (ASN1_ITEM *)SXNETID_it();
  pSVar1 = (SXNETID *)ASN1_item_new(it);
  return pSVar1;
}

