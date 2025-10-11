
void OTHERNAME_free(OTHERNAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

