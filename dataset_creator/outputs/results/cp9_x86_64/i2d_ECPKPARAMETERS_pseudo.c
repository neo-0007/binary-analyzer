
void i2d_ECPKPARAMETERS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPKPARAMETERS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}

