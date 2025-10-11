
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_REQUEST * OCSP_REQUEST_new(void)

{
  ASN1_ITEM *it;
  OCSP_REQUEST *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  pOVar1 = (OCSP_REQUEST *)ASN1_item_new(it);
  return pOVar1;
}

