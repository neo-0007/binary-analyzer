
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PBE2PARAM * PBE2PARAM_new(void)

{
  ASN1_ITEM *it;
  PBE2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  pPVar1 = (PBE2PARAM *)ASN1_item_new(it);
  return pPVar1;
}

