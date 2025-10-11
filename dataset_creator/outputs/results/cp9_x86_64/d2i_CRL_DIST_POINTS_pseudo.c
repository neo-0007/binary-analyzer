
CRL_DIST_POINTS * d2i_CRL_DIST_POINTS(CRL_DIST_POINTS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CRL_DIST_POINTS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (CRL_DIST_POINTS *)pAVar1;
}

