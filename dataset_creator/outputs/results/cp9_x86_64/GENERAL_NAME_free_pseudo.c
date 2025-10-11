
void GENERAL_NAME_free(GENERAL_NAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

