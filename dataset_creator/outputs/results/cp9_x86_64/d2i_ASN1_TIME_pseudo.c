
ASN1_TIME * d2i_ASN1_TIME(ASN1_TIME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_TIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  pAVar1 = (ASN1_TIME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

