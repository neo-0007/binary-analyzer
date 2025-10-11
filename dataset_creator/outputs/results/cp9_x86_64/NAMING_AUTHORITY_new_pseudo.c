
void NAMING_AUTHORITY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAMING_AUTHORITY_it();
  ASN1_item_new(it);
  return;
}

