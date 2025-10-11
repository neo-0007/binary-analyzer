
ASN1_IA5STRING * d2i_ASN1_IA5STRING(ASN1_IA5STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_IA5STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_IA5STRING_it();
  pAVar1 = (ASN1_IA5STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

