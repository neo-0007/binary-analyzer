
int i2d_PKEY_USAGE_PERIOD(PKEY_USAGE_PERIOD *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

