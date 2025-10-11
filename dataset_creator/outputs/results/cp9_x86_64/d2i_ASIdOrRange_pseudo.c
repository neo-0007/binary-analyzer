
ASIdOrRange * d2i_ASIdOrRange(ASIdOrRange **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASIdOrRange *pAVar1;
  
  it = (ASN1_ITEM *)ASIdOrRange_it();
  pAVar1 = (ASIdOrRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

