
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA * RSA_new(void)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)rsa_new_intern(0,0);
  return pRVar1;
}

