
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PBEPARAM * PBEPARAM_new(void)

{
  ASN1_ITEM *it;
  PBEPARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  pPVar1 = (PBEPARAM *)ASN1_item_new(it);
  return pPVar1;
}

