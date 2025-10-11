
void PKCS7_free(PKCS7 *a)

{
  ASN1_ITEM *it;
  
  if (a != (PKCS7 *)0x0) {
    CRYPTO_free((void *)a[1].length);
    it = (ASN1_ITEM *)PKCS7_it();
    ASN1_item_free((ASN1_VALUE *)a,it);
    return;
  }
  return;
}

