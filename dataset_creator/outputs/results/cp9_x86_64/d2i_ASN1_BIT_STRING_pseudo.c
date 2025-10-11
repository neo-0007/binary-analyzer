
ASN1_BIT_STRING * d2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_BIT_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_BIT_STRING_it();
  pAVar1 = (ASN1_BIT_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

