
ASIdentifierChoice * d2i_ASIdentifierChoice(ASIdentifierChoice **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASIdentifierChoice *pAVar1;
  
  it = (ASN1_ITEM *)ASIdentifierChoice_it();
  pAVar1 = (ASIdentifierChoice *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

