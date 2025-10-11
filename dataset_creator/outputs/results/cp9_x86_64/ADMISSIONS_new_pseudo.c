
void ADMISSIONS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSIONS_it();
  ASN1_item_new(it);
  return;
}

