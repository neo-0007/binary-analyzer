
void GENERAL_NAMES_free(GENERAL_NAMES *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)GENERAL_NAMES_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

