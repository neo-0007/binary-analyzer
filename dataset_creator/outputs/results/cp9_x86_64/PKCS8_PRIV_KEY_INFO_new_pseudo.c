
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS8_PRIV_KEY_INFO * PKCS8_PRIV_KEY_INFO_new(void)

{
  ASN1_ITEM *it;
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)ASN1_item_new(it);
  return pPVar1;
}

