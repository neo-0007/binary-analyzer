
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_REVOKEDINFO * OCSP_REVOKEDINFO_new(void)

{
  ASN1_ITEM *it;
  OCSP_REVOKEDINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  pOVar1 = (OCSP_REVOKEDINFO *)ASN1_item_new(it);
  return pOVar1;
}

