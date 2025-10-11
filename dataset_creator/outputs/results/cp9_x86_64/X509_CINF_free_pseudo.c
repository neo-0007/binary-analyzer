
void X509_CINF_free(X509_CINF *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

