
ASN1_INTEGER * d2i_ASN1_INTEGER(ASN1_INTEGER **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_INTEGER *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_INTEGER_it();
  pAVar1 = (ASN1_INTEGER *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

