
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12_MAC_DATA * PKCS12_MAC_DATA_new(void)

{
  ASN1_ITEM *it;
  PKCS12_MAC_DATA *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  pPVar1 = (PKCS12_MAC_DATA *)ASN1_item_new(it);
  return pPVar1;
}

