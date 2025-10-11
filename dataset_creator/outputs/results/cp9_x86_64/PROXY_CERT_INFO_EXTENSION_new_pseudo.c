
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PROXY_CERT_INFO_EXTENSION * PROXY_CERT_INFO_EXTENSION_new(void)

{
  ASN1_ITEM *it;
  PROXY_CERT_INFO_EXTENSION *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_CERT_INFO_EXTENSION_it();
  pPVar1 = (PROXY_CERT_INFO_EXTENSION *)ASN1_item_new(it);
  return pPVar1;
}

