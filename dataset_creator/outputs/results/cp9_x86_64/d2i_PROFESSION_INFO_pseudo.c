
void d2i_PROFESSION_INFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROFESSION_INFO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}

