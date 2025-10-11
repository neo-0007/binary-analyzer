
void X509_CRL_free(X509_CRL *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

