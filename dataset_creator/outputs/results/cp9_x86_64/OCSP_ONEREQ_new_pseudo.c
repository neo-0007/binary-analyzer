
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_ONEREQ * OCSP_ONEREQ_new(void)

{
  ASN1_ITEM *it;
  OCSP_ONEREQ *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  pOVar1 = (OCSP_ONEREQ *)ASN1_item_new(it);
  return pOVar1;
}

