
void ADMISSION_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSION_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}

