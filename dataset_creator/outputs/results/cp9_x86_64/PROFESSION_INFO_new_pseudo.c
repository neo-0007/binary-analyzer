
void PROFESSION_INFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROFESSION_INFO_it();
  ASN1_item_new(it);
  return;
}

