
void PROXY_CERT_INFO_EXTENSION_free(PROXY_CERT_INFO_EXTENSION *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROXY_CERT_INFO_EXTENSION_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

