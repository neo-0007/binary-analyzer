
void PKCS12_free(PKCS12 *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS12_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

