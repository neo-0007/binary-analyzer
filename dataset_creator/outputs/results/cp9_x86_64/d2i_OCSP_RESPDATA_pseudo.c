
OCSP_RESPDATA * d2i_OCSP_RESPDATA(OCSP_RESPDATA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_RESPDATA *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  pOVar1 = (OCSP_RESPDATA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

