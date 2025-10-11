
void X509_PUBKEY_free(X509_PUBKEY *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_PUBKEY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

