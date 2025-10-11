
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_SIGN_ENVELOPE * PKCS7_SIGN_ENVELOPE_new(void)

{
  ASN1_ITEM *it;
  PKCS7_SIGN_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGN_ENVELOPE_it();
  pPVar1 = (PKCS7_SIGN_ENVELOPE *)ASN1_item_new(it);
  return pPVar1;
}

