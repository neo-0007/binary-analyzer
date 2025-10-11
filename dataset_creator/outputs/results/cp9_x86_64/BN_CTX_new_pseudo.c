
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BN_CTX * BN_CTX_new(void)

{
  BN_CTX *pBVar1;
  
  pBVar1 = (BN_CTX *)BN_CTX_new_ex(0);
  return pBVar1;
}

