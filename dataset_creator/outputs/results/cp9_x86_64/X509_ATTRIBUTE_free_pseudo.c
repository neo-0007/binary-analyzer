
void X509_ATTRIBUTE_free(X509_ATTRIBUTE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ATTRIBUTE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

