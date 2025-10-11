
void PBEPARAM_free(PBEPARAM *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

