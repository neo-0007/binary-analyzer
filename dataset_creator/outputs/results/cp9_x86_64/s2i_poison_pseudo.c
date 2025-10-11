
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * s2i_poison(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}

