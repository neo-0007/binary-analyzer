
DIST_POINT_NAME * d2i_DIST_POINT_NAME(DIST_POINT_NAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  DIST_POINT_NAME *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  pDVar1 = (DIST_POINT_NAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pDVar1;
}

