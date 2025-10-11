
void PKCS7_DIGEST_free(PKCS7_DIGEST *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

