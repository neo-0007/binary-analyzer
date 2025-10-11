
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPID * OCSP_RESPID_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPID_it();
  pOVar1 = (OCSP_RESPID *)ASN1_item_new(it);
  return pOVar1;
}

