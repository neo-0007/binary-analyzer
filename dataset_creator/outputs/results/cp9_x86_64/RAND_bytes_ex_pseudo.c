
int RAND_bytes_ex(undefined8 param_1,uchar *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  RAND_METHOD *pRVar2;
  RAND_METHOD *pRVar3;
  long lVar4;
  
  pRVar2 = RAND_get_rand_method();
  if ((pRVar2 != (RAND_METHOD *)0x0) && (pRVar3 = (RAND_METHOD *)RAND_OpenSSL(), pRVar2 != pRVar3))
  {
    if (pRVar2->bytes == (_func_3913 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/rand/rand_lib.c",0x166,"RAND_bytes_ex");
      ERR_set_error(0x24,0x65,0);
      return -1;
    }
                    /* WARNING: Could not recover jumptable at 0x0042fba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pRVar2->bytes)(param_2,(int)param_3);
    return iVar1;
  }
  lVar4 = RAND_get0_public(param_1);
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = EVP_RAND_generate(lVar4,param_2,param_3,param_4,0,0,0);
  return iVar1;
}

