
void X509_REQ_INFO_free(X509_REQ_INFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

