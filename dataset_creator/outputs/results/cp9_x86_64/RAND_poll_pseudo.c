
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RAND_poll(void)

{
  _func_3915 *p_Var1;
  int iVar2;
  RAND_METHOD *pRVar3;
  RAND_METHOD *pRVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *buf;
  uint uVar8;
  
  pRVar3 = RAND_get_rand_method();
  pRVar4 = (RAND_METHOD *)RAND_OpenSSL();
  if (pRVar3 == (RAND_METHOD *)0x0) {
    return 0;
  }
  uVar8 = (uint)(pRVar4 == pRVar3);
  if (pRVar4 != pRVar3) {
    lVar5 = ossl_rand_pool_new(0x100,1,0x20,0x3000);
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = ossl_pool_acquire_entropy(lVar5);
    if ((lVar6 != 0) && (p_Var1 = pRVar3->add, p_Var1 != (_func_3915 *)0x0)) {
      uVar7 = ossl_rand_pool_entropy(lVar5);
      iVar2 = ossl_rand_pool_length(lVar5);
      buf = (void *)ossl_rand_pool_buffer(lVar5);
      iVar2 = (*p_Var1)(buf,iVar2,(double)uVar7 * _DAT_007d2988);
      if (iVar2 != 0) {
        uVar8 = 1;
      }
    }
    ossl_rand_pool_free(lVar5);
  }
  return uVar8;
}

