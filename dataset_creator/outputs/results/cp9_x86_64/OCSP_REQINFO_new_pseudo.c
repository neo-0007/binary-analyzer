
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_REQINFO * OCSP_REQINFO_new(void)

{
  ASN1_ITEM *it;
  OCSP_REQINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  pOVar1 = (OCSP_REQINFO *)ASN1_item_new(it);
  return pOVar1;
}

