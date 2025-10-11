
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PROXY_POLICY * PROXY_POLICY_new(void)

{
  ASN1_ITEM *it;
  PROXY_POLICY *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  pPVar1 = (PROXY_POLICY *)ASN1_item_new(it);
  return pPVar1;
}

