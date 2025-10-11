
int i2d_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

