
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12 * PKCS12_new(void)

{
  ASN1_ITEM *it;
  PKCS12 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  pPVar1 = (PKCS12 *)ASN1_item_new(it);
  return pPVar1;
}

