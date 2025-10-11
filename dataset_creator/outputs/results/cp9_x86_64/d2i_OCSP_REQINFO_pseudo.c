
OCSP_REQINFO * d2i_OCSP_REQINFO(OCSP_REQINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_REQINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  pOVar1 = (OCSP_REQINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

