
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

USERNOTICE * USERNOTICE_new(void)

{
  ASN1_ITEM *it;
  USERNOTICE *pUVar1;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  pUVar1 = (USERNOTICE *)ASN1_item_new(it);
  return pUVar1;
}

