
PKCS7 * PKCS7_dup(PKCS7 *p7)

{
  ASN1_ITEM *it;
  PKCS7 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  pPVar1 = (PKCS7 *)ASN1_item_dup(it,p7);
  return pPVar1;
}

