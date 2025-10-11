
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NETSCAPE_SPKI * NETSCAPE_SPKI_new(void)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKI *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  pNVar1 = (NETSCAPE_SPKI *)ASN1_item_new(it);
  return pNVar1;
}

