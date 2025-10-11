
void X509_REQ_free(X509_REQ *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

