
void PKCS7_ISSUER_AND_SERIAL_free(PKCS7_ISSUER_AND_SERIAL *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

