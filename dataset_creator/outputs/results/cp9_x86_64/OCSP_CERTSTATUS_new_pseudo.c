
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_CERTSTATUS * OCSP_CERTSTATUS_new(void)

{
  ASN1_ITEM *it;
  OCSP_CERTSTATUS *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  pOVar1 = (OCSP_CERTSTATUS *)ASN1_item_new(it);
  return pOVar1;
}

