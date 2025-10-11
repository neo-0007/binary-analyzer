
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RAND_status(void)

{
  int iVar1;
  RAND_METHOD *pRVar2;
  RAND_METHOD *pRVar3;
  long lVar4;
  
  pRVar2 = RAND_get_rand_method();
  if ((pRVar2 != (RAND_METHOD *)0x0) && (pRVar3 = (RAND_METHOD *)RAND_OpenSSL(), pRVar2 != pRVar3))
  {
    if (pRVar2->status == (_func_3917 *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0042f9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pRVar2->status)();
    return iVar1;
  }
  lVar4 = RAND_get0_primary(0);
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = EVP_RAND_get_state(lVar4);
  return (int)(iVar1 == 1);
}

