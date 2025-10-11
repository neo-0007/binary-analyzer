
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_SIGNED * PKCS7_SIGNED_new(void)

{
  ASN1_ITEM *it;
  PKCS7_SIGNED *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  pPVar1 = (PKCS7_SIGNED *)ASN1_item_new(it);
  return pPVar1;
}

