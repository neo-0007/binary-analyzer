
void X509_REVOKED_free(X509_REVOKED *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_REVOKED_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

