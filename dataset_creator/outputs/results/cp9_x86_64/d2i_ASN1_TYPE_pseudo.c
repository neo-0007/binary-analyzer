
ASN1_TYPE * d2i_ASN1_TYPE(ASN1_TYPE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_TYPE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  pAVar1 = (ASN1_TYPE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

