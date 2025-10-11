
void PKCS7_SIGNED_free(PKCS7_SIGNED *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

