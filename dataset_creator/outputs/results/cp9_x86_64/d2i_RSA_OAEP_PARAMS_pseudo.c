
void d2i_RSA_OAEP_PARAMS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}

