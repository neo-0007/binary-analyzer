
void PBKDF2PARAM_free(PBKDF2PARAM *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

