
void PKCS7_ENCRYPT_free(PKCS7_ENCRYPT *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

