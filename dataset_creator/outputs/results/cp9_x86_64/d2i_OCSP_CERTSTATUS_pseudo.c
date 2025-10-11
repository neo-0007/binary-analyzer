
OCSP_CERTSTATUS * d2i_OCSP_CERTSTATUS(OCSP_CERTSTATUS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_CERTSTATUS *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  pOVar1 = (OCSP_CERTSTATUS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}

