
void RSA_PSS_PARAMS_free(RSA_PSS_PARAMS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

