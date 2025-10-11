
void X509_CERT_AUX_free(X509_CERT_AUX *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

