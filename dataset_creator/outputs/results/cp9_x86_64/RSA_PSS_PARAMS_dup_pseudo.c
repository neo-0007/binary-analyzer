
void RSA_PSS_PARAMS_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  ASN1_item_dup(it,param_1);
  return;
}

