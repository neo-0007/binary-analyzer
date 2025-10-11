
OCSP_SERVICELOC * d2i_OCSP_SERVICELOC(OCSP_SERVICELOC **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_SERVICELOC *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SERVICELOC_it();
  pOVar1 = (OCSP_SERVICELOC *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

