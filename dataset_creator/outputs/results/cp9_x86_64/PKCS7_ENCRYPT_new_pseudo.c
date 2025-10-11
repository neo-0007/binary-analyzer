
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ENCRYPT * PKCS7_ENCRYPT_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ENCRYPT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  pPVar1 = (PKCS7_ENCRYPT *)ASN1_item_new(it);
  return pPVar1;
}

