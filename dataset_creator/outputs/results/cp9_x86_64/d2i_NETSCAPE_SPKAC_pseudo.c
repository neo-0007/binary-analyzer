
NETSCAPE_SPKAC * d2i_NETSCAPE_SPKAC(NETSCAPE_SPKAC **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKAC *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  pNVar1 = (NETSCAPE_SPKAC *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}

