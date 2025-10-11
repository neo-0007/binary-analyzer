
void X509_CRL_INFO_free(X509_CRL_INFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CRL_INFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

