
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_BASICRESP * OCSP_BASICRESP_new(void)

{
  ASN1_ITEM *it;
  OCSP_BASICRESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_BASICRESP_it();
  pOVar1 = (OCSP_BASICRESP *)ASN1_item_new(it);
  return pOVar1;
}

