
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ENC_CONTENT * PKCS7_ENC_CONTENT_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ENC_CONTENT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  pPVar1 = (PKCS7_ENC_CONTENT *)ASN1_item_new(it);
  return pPVar1;
}

