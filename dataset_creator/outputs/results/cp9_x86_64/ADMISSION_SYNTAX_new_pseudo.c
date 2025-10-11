
void ADMISSION_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSION_SYNTAX_it();
  ASN1_item_new(it);
  return;
}

