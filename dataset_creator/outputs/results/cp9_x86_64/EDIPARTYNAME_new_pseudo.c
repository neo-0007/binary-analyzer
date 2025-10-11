
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EDIPARTYNAME * EDIPARTYNAME_new(void)

{
  ASN1_ITEM *it;
  EDIPARTYNAME *pEVar1;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  pEVar1 = (EDIPARTYNAME *)ASN1_item_new(it);
  return pEVar1;
}

