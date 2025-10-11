
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

GENERAL_NAME * GENERAL_NAME_new(void)

{
  ASN1_ITEM *it;
  GENERAL_NAME *pGVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  pGVar1 = (GENERAL_NAME *)ASN1_item_new(it);
  return pGVar1;
}

