
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OTHERNAME * OTHERNAME_new(void)

{
  ASN1_ITEM *it;
  OTHERNAME *pOVar1;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  pOVar1 = (OTHERNAME *)ASN1_item_new(it);
  return pOVar1;
}

