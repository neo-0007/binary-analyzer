
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NETSCAPE_CERT_SEQUENCE * NETSCAPE_CERT_SEQUENCE_new(void)

{
  ASN1_ITEM *it;
  NETSCAPE_CERT_SEQUENCE *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  pNVar1 = (NETSCAPE_CERT_SEQUENCE *)ASN1_item_new(it);
  return pNVar1;
}

