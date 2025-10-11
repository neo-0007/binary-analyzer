
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICY_CONSTRAINTS * POLICY_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  POLICY_CONSTRAINTS *pPVar1;
  
  it = (ASN1_ITEM *)POLICY_CONSTRAINTS_it();
  pPVar1 = (POLICY_CONSTRAINTS *)ASN1_item_new(it);
  return pPVar1;
}

