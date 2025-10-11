
void PKEY_USAGE_PERIOD_free(PKEY_USAGE_PERIOD *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

