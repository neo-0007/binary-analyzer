
IPAddressRange * d2i_IPAddressRange(IPAddressRange **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  pIVar1 = (IPAddressRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}

