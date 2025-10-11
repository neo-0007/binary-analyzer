
void X509_EXTENSION_free(X509_EXTENSION *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

