
void ECPARAMETERS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPARAMETERS_it();
  ASN1_item_new(it);
  return;
}

