
void NETSCAPE_SPKAC_free(NETSCAPE_SPKAC *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

