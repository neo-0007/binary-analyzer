
int i2d_ASN1_IA5STRING(ASN1_IA5STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_IA5STRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

