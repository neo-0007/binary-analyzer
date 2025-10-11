
OCSP_BASICRESP * d2i_OCSP_BASICRESP(OCSP_BASICRESP **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_BASICRESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_BASICRESP_it();
  pOVar1 = (OCSP_BASICRESP *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

