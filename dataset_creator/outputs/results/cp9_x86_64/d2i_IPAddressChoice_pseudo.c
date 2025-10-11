
IPAddressChoice * d2i_IPAddressChoice(IPAddressChoice **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressChoice *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  pIVar1 = (IPAddressChoice *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}

