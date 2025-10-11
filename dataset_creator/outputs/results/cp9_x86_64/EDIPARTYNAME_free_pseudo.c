
void EDIPARTYNAME_free(EDIPARTYNAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

