
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH * DH_new(void)

{
  DH *pDVar1;
  
  pDVar1 = (DH *)dh_new_intern(0,0);
  return pDVar1;
}

