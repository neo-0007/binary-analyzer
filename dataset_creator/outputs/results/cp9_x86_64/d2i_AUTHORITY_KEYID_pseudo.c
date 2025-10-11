
AUTHORITY_KEYID * d2i_AUTHORITY_KEYID(AUTHORITY_KEYID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  AUTHORITY_KEYID *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  pAVar1 = (AUTHORITY_KEYID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}

