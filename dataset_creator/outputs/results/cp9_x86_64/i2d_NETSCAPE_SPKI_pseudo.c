
int i2d_NETSCAPE_SPKI(NETSCAPE_SPKI *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

