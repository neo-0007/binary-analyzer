
void IPAddressChoice_free(IPAddressChoice *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

