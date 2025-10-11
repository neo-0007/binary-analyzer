
void ASN1_GENERALIZEDTIME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_GENERALIZEDTIME_it();
  ASN1_item_dup(it,param_1);
  return;
}

