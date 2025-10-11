
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICY_MAPPING * POLICY_MAPPING_new(void)

{
  ASN1_ITEM *it;
  POLICY_MAPPING *pPVar1;
  
  it = (ASN1_ITEM *)POLICY_MAPPING_it();
  pPVar1 = (POLICY_MAPPING *)ASN1_item_new(it);
  return pPVar1;
}

