
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ISSUER_AND_SERIAL * PKCS7_ISSUER_AND_SERIAL_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  pPVar1 = (PKCS7_ISSUER_AND_SERIAL *)ASN1_item_new(it);
  return pPVar1;
}

