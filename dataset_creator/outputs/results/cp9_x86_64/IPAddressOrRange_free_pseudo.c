
void IPAddressOrRange_free(IPAddressOrRange *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

