
IPAddressOrRange * d2i_IPAddressOrRange(IPAddressOrRange **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressOrRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  pIVar1 = (IPAddressOrRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}

