
int i2d_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

