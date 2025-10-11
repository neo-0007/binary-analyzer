
ASN1_STRING * d2i_ASN1_PRINTABLE(ASN1_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLE_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

