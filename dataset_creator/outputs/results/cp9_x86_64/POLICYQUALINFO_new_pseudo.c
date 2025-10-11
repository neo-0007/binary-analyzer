
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICYQUALINFO * POLICYQUALINFO_new(void)

{
  ASN1_ITEM *it;
  POLICYQUALINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  pPVar1 = (POLICYQUALINFO *)ASN1_item_new(it);
  return pPVar1;
}

