
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ENVELOPE * PKCS7_ENVELOPE_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENVELOPE_it();
  pPVar1 = (PKCS7_ENVELOPE *)ASN1_item_new(it);
  return pPVar1;
}

