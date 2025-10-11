
void RSA_OAEP_PARAMS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
  ASN1_item_new(it);
  return;
}

