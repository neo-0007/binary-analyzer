
int i2d_PKCS12_MAC_DATA(PKCS12_MAC_DATA *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

