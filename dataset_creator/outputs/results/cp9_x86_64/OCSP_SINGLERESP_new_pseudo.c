
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_SINGLERESP * OCSP_SINGLERESP_new(void)

{
  ASN1_ITEM *it;
  OCSP_SINGLERESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SINGLERESP_it();
  pOVar1 = (OCSP_SINGLERESP *)ASN1_item_new(it);
  return pOVar1;
}

