
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7 * PKCS7_new(void)

{
  ASN1_ITEM *it;
  PKCS7 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  pPVar1 = (PKCS7 *)ASN1_item_new(it);
  return pPVar1;
}

