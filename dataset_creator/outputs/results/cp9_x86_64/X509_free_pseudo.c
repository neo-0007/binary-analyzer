
void X509_free(X509 *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

