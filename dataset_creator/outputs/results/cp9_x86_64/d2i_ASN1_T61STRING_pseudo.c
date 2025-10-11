
ASN1_T61STRING * d2i_ASN1_T61STRING(ASN1_T61STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_T61STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_T61STRING_it();
  pAVar1 = (ASN1_T61STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

