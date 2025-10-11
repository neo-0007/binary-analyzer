
NOTICEREF * d2i_NOTICEREF(NOTICEREF **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NOTICEREF *pNVar1;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  pNVar1 = (NOTICEREF *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}

