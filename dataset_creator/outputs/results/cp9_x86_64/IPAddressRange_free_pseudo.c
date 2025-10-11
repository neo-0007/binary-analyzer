
void IPAddressRange_free(IPAddressRange *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

