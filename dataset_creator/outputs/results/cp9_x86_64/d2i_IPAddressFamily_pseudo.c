
IPAddressFamily * d2i_IPAddressFamily(IPAddressFamily **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressFamily *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressFamily_it();
  pIVar1 = (IPAddressFamily *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}

