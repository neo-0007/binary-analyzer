
int i2d_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLESTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

