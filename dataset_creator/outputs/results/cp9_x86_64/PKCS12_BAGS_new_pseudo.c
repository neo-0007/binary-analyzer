
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12_BAGS * PKCS12_BAGS_new(void)

{
  ASN1_ITEM *it;
  PKCS12_BAGS *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_BAGS_it();
  pPVar1 = (PKCS12_BAGS *)ASN1_item_new(it);
  return pPVar1;
}

