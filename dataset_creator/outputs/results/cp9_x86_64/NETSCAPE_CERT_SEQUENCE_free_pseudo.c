
void NETSCAPE_CERT_SEQUENCE_free(NETSCAPE_CERT_SEQUENCE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

