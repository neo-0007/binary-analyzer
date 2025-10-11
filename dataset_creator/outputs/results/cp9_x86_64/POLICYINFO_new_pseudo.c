
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICYINFO * POLICYINFO_new(void)

{
  ASN1_ITEM *it;
  POLICYINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  pPVar1 = (POLICYINFO *)ASN1_item_new(it);
  return pPVar1;
}

