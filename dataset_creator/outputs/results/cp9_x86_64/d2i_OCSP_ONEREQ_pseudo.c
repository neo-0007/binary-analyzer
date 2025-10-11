
OCSP_ONEREQ * d2i_OCSP_ONEREQ(OCSP_ONEREQ **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_ONEREQ *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  pOVar1 = (OCSP_ONEREQ *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

