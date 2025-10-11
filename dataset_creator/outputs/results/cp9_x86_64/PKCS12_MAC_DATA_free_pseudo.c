
void PKCS12_MAC_DATA_free(PKCS12_MAC_DATA *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

