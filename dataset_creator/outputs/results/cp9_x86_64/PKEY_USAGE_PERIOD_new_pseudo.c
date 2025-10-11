
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKEY_USAGE_PERIOD * PKEY_USAGE_PERIOD_new(void)

{
  ASN1_ITEM *it;
  PKEY_USAGE_PERIOD *pPVar1;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  pPVar1 = (PKEY_USAGE_PERIOD *)ASN1_item_new(it);
  return pPVar1;
}

