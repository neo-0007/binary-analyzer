
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_RECIP_INFO * PKCS7_RECIP_INFO_new(void)

{
  ASN1_ITEM *it;
  PKCS7_RECIP_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_RECIP_INFO_it();
  pPVar1 = (PKCS7_RECIP_INFO *)ASN1_item_new(it);
  return pPVar1;
}

