
void ASN1_UTCTIME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_UTCTIME_it();
  ASN1_item_dup(it,param_1);
  return;
}

