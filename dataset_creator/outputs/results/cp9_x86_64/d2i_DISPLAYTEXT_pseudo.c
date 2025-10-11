
ASN1_STRING * d2i_DISPLAYTEXT(ASN1_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)DISPLAYTEXT_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

