
int i2d_ACCESS_DESCRIPTION(ACCESS_DESCRIPTION *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ACCESS_DESCRIPTION_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

