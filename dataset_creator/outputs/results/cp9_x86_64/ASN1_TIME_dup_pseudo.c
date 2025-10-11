
void ASN1_TIME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  ASN1_item_dup(it,param_1);
  return;
}

