
OCSP_RESPBYTES * d2i_OCSP_RESPBYTES(OCSP_RESPBYTES **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_RESPBYTES *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  pOVar1 = (OCSP_RESPBYTES *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

