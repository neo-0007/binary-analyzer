
void PKCS7_ENC_CONTENT_free(PKCS7_ENC_CONTENT *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

