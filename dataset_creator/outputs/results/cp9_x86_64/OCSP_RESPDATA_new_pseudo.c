
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPDATA * OCSP_RESPDATA_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPDATA *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  pOVar1 = (OCSP_RESPDATA *)ASN1_item_new(it);
  return pOVar1;
}

