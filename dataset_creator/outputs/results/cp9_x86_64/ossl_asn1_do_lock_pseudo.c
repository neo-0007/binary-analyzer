
uint ossl_asn1_do_lock(long *param_1,int param_2,char *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  
  if ((*param_3 == '\x01') || (uVar5 = 0, *param_3 == '\x06')) {
    lVar3 = *(long *)(param_3 + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
    uVar5 = *(uint *)(lVar3 + 8) & 1;
    if (uVar5 != 0) {
      piVar4 = (int *)((long)*(int *)(lVar3 + 0xc) + *param_1);
      plVar1 = (long *)(*param_1 + (long)*(int *)(lVar3 + 0x10));
      if (param_2 == 0) {
        LOCK();
        *piVar4 = 1;
        UNLOCK();
        lVar3 = CRYPTO_THREAD_lock_new();
        *plVar1 = lVar3;
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_utl.c",0x59,"ossl_asn1_do_lock");
          uVar5 = 0xffffffff;
          ERR_set_error(0xd,0xc0100,0);
        }
      }
      else if (param_2 == 1) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        uVar5 = iVar2 + 1;
      }
      else {
        uVar5 = 0xffffffff;
        if (param_2 == -1) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          uVar5 = iVar2 - 1;
          if (uVar5 == 0) {
            CRYPTO_THREAD_lock_free(*plVar1);
            *plVar1 = 0;
          }
        }
      }
    }
  }
  return uVar5;
}

