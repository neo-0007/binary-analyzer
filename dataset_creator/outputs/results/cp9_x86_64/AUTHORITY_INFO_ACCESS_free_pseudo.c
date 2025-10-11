
void AUTHORITY_INFO_ACCESS_free(AUTHORITY_INFO_ACCESS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

