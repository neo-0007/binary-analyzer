
int i2d_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_VISIBLESTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

