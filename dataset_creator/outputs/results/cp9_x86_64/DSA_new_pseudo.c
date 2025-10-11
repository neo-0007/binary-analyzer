
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA * DSA_new(void)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)dsa_new_intern(0,0);
  return pDVar1;
}

