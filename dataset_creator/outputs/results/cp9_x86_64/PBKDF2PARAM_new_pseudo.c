
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PBKDF2PARAM * PBKDF2PARAM_new(void)

{
  ASN1_ITEM *it;
  PBKDF2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  pPVar1 = (PBKDF2PARAM *)ASN1_item_new(it);
  return pPVar1;
}

