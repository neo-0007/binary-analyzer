
int i2d_AUTHORITY_INFO_ACCESS(AUTHORITY_INFO_ACCESS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

