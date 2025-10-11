
ASN1_OCTET_STRING * d2i_ASN1_OCTET_STRING(ASN1_OCTET_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_OCTET_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_OCTET_STRING_it();
  pAVar1 = (ASN1_OCTET_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

