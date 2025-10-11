
ASRange * d2i_ASRange(ASRange **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASRange *pAVar1;
  
  it = (ASN1_ITEM *)ASRange_it();
  pAVar1 = (ASRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

