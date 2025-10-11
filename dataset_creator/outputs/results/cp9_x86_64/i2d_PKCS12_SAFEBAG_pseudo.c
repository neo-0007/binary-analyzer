
int i2d_PKCS12_SAFEBAG(PKCS12_SAFEBAG *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

