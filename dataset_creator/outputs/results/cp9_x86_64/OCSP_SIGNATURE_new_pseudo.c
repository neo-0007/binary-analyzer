
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_SIGNATURE * OCSP_SIGNATURE_new(void)

{
  ASN1_ITEM *it;
  OCSP_SIGNATURE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SIGNATURE_it();
  pOVar1 = (OCSP_SIGNATURE *)ASN1_item_new(it);
  return pOVar1;
}

