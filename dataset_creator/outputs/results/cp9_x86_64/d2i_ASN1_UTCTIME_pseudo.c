
ASN1_UTCTIME * d2i_ASN1_UTCTIME(ASN1_UTCTIME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_UTCTIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_UTCTIME_it();
  pAVar1 = (ASN1_UTCTIME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

