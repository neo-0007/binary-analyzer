
OTHERNAME * d2i_OTHERNAME(OTHERNAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OTHERNAME *pOVar1;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  pOVar1 = (OTHERNAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

