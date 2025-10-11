
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPBYTES * OCSP_RESPBYTES_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPBYTES *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  pOVar1 = (OCSP_RESPBYTES *)ASN1_item_new(it);
  return pOVar1;
}

