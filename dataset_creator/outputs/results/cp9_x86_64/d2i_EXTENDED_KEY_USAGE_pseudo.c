
EXTENDED_KEY_USAGE * d2i_EXTENDED_KEY_USAGE(EXTENDED_KEY_USAGE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)EXTENDED_KEY_USAGE_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (EXTENDED_KEY_USAGE *)pAVar1;
}

