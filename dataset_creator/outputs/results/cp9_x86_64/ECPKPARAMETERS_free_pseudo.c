
void ECPKPARAMETERS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPKPARAMETERS_it();
  ASN1_item_free(param_1,it);
  return;
}

