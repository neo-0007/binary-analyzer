
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12_SAFEBAG * PKCS12_SAFEBAG_new(void)

{
  ASN1_ITEM *it;
  PKCS12_SAFEBAG *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  pPVar1 = (PKCS12_SAFEBAG *)ASN1_item_new(it);
  return pPVar1;
}

