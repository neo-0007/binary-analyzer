
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_CRLID * OCSP_CRLID_new(void)

{
  ASN1_ITEM *it;
  OCSP_CRLID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CRLID_it();
  pOVar1 = (OCSP_CRLID *)ASN1_item_new(it);
  return pOVar1;
}

