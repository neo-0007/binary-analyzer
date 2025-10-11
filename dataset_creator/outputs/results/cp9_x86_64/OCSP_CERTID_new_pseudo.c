
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_CERTID * OCSP_CERTID_new(void)

{
  ASN1_ITEM *it;
  OCSP_CERTID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTID_it();
  pOVar1 = (OCSP_CERTID *)ASN1_item_new(it);
  return pOVar1;
}

