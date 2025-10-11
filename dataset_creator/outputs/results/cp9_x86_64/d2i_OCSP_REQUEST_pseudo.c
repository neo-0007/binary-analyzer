
OCSP_REQUEST * d2i_OCSP_REQUEST(OCSP_REQUEST **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_REQUEST *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  pOVar1 = (OCSP_REQUEST *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

