
int i2d_PBE2PARAM(PBE2PARAM *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

