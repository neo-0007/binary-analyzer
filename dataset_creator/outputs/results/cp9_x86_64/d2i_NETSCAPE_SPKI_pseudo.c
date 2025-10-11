
NETSCAPE_SPKI * d2i_NETSCAPE_SPKI(NETSCAPE_SPKI **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKI *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  pNVar1 = (NETSCAPE_SPKI *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}

