
ASN1_BMPSTRING * d2i_ASN1_BMPSTRING(ASN1_BMPSTRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_BMPSTRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_BMPSTRING_it();
  pAVar1 = (ASN1_BMPSTRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

