
SXNETID * d2i_SXNETID(SXNETID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  SXNETID *pSVar1;
  
  it = (ASN1_ITEM *)SXNETID_it();
  pSVar1 = (SXNETID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pSVar1;
}

