
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NETSCAPE_SPKAC * NETSCAPE_SPKAC_new(void)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKAC *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  pNVar1 = (NETSCAPE_SPKAC *)ASN1_item_new(it);
  return pNVar1;
}

