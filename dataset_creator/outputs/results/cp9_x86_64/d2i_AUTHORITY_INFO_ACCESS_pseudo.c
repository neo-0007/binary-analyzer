
AUTHORITY_INFO_ACCESS * d2i_AUTHORITY_INFO_ACCESS(AUTHORITY_INFO_ACCESS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (AUTHORITY_INFO_ACCESS *)pAVar1;
}

