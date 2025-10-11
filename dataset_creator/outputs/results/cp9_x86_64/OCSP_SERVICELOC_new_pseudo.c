
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_SERVICELOC * OCSP_SERVICELOC_new(void)

{
  ASN1_ITEM *it;
  OCSP_SERVICELOC *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SERVICELOC_it();
  pOVar1 = (OCSP_SERVICELOC *)ASN1_item_new(it);
  return pOVar1;
}

