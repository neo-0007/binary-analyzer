
OCSP_SIGNATURE * d2i_OCSP_SIGNATURE(OCSP_SIGNATURE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_SIGNATURE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SIGNATURE_it();
  pOVar1 = (OCSP_SIGNATURE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

