
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPONSE * OCSP_RESPONSE_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPONSE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPONSE_it();
  pOVar1 = (OCSP_RESPONSE *)ASN1_item_new(it);
  return pOVar1;
}

