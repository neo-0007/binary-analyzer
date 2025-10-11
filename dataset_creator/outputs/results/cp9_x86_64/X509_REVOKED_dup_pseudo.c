
void X509_REVOKED_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_REVOKED_it();
  ASN1_item_dup(it,param_1);
  return;
}

