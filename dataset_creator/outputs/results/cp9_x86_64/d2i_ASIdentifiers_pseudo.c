
ASIdentifiers * d2i_ASIdentifiers(ASIdentifiers **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASIdentifiers *pAVar1;
  
  it = (ASN1_ITEM *)ASIdentifiers_it();
  pAVar1 = (ASIdentifiers *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

