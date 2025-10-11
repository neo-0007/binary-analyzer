
void USERNOTICE_free(USERNOTICE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

