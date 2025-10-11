
long * __resolv_conf_get(long param_1)

{
  long *__ptr;
  int iVar1;
  char cVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  bool bVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    LOCK();
    bVar6 = lock == 0;
    if (bVar6) {
      lock = 1;
    }
    UNLOCK();
    if (!bVar6) {
      __lll_lock_wait_private(&lock);
    }
    if (global == (undefined1 (*) [16])0x0) {
      pauVar4 = (undefined1 (*) [16])calloc(1,0x58);
      if (pauVar4 == (undefined1 (*) [16])0x0) {
        return (long *)0x0;
      }
      global = pauVar4;
      *(undefined8 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x230) ^ 0x26a8fa5e48af8061;
      if ((uVar5 < *(ulong *)*global) &&
         (__ptr = *(long **)(*(long *)global[1] + uVar5 * 8), ((ulong)__ptr & 1) == 0)) {
        if (*__ptr == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("conf->__refcount > 0","resolv_conf.c",0xc2,"resolv_conf_get_1");
        }
        *__ptr = *__ptr + 1;
        iVar1 = lock;
        LOCK();
        lock = 0;
        UNLOCK();
        if (1 < iVar1) {
          __lll_lock_wake_private(&lock);
        }
        cVar2 = resolv_conf_matches(param_1,__ptr);
        if (cVar2 != '\0') {
          return __ptr;
        }
        LOCK();
        bVar6 = lock == 0;
        if (bVar6) {
          lock = 1;
        }
        UNLOCK();
        if (!bVar6) {
          __lll_lock_wait_private(&lock);
        }
        if (*__ptr == 0) {
                    /* WARNING: Subroutine does not return */
          conf_decrement_part_0();
        }
        lVar3 = *__ptr + -1;
        if (lVar3 == 0) {
          free(__ptr);
        }
        else {
          *__ptr = lVar3;
        }
      }
    }
    iVar1 = lock;
    LOCK();
    lock = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private(&lock);
    }
  }
  return (long *)0x0;
}

