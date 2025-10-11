
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA_PSS_PARAMS * RSA_PSS_PARAMS_new(void)

{
  ASN1_ITEM *it;
  RSA_PSS_PARAMS *pRVar1;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  pRVar1 = (RSA_PSS_PARAMS *)ASN1_item_new(it);
  return pRVar1;
}

