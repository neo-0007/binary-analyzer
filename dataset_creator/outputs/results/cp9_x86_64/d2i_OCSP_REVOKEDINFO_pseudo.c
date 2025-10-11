
OCSP_REVOKEDINFO * d2i_OCSP_REVOKEDINFO(OCSP_REVOKEDINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_REVOKEDINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  pOVar1 = (OCSP_REVOKEDINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

