
OCSP_CRLID * d2i_OCSP_CRLID(OCSP_CRLID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_CRLID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CRLID_it();
  pOVar1 = (OCSP_CRLID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

