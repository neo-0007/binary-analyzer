
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_DIGEST * PKCS7_DIGEST_new(void)

{
  ASN1_ITEM *it;
  PKCS7_DIGEST *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  pPVar1 = (PKCS7_DIGEST *)ASN1_item_new(it);
  return pPVar1;
}

