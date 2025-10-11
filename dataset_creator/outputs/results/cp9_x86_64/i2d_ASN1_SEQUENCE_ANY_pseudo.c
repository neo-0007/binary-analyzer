
int i2d_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_SEQUENCE_ANY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

