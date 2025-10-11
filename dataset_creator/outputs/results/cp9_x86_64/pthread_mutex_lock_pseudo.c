
int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  uVar4 = (__mutex->__data).__kind & 0x17f;
  if (((__mutex->__data).__kind & 0x7cU) != 0) {
    iVar3 = __pthread_mutex_lock_full();
    return iVar3;
  }
  if (uVar4 == 0) {
    if (__pthread_force_elision != 0) {
      uVar4 = (__mutex->__data).__kind;
      if ((uVar4 & 0x300) == 0) {
        (__mutex->__data).__kind = uVar4 | 0x100;
LAB_007009d6:
        iVar3 = __lll_lock_elision(__mutex,(undefined1 *)((long)&(__mutex->__data).__spins + 2),
                                   (__mutex->__data).__kind & 0x80);
        return iVar3;
      }
      if ((uVar4 & 0x100) != 0) goto LAB_007009d6;
    }
  }
  else {
    if (uVar4 == 0x100) goto LAB_007009d6;
    if (((__mutex->__data).__kind & 0x7fU) == 1) {
      if ((__mutex->__data).__owner == *(int *)(in_FS_OFFSET + 0x2d0)) {
        if ((__mutex->__data).__count != 0xffffffff) {
          (__mutex->__data).__count = (__mutex->__data).__count + 1;
          return 0;
        }
        return 0xb;
      }
      if (((((__mutex->__data).__kind & 0x80U) == 0) && (*(int *)(in_FS_OFFSET + 0x18) == 0)) &&
         ((__mutex->__data).__lock == 0)) {
        (__mutex->__data).__lock = 1;
      }
      else {
        LOCK();
        bVar6 = (__mutex->__data).__lock == 0;
        if (bVar6) {
          (__mutex->__data).__lock = 1;
        }
        UNLOCK();
        if (!bVar6) {
          __lll_lock_wait();
        }
      }
      if ((__mutex->__data).__owner != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x82,
                      "___pthread_mutex_lock");
      }
      (__mutex->__data).__count = 1;
      goto LAB_00700995;
    }
    if (((__mutex->__data).__kind & 0x7fU) == 3) {
      LOCK();
      bVar6 = (__mutex->__data).__lock == 0;
      if (bVar6) {
        (__mutex->__data).__lock = 1;
      }
      UNLOCK();
      if (!bVar6) {
        iVar3 = (short)(__mutex->__data).__spins * 2 + 10;
        iVar2 = (int)__mutex_aconf;
        if (iVar3 <= __mutex_aconf) {
          iVar2 = iVar3;
        }
        iVar3 = 0;
        do {
          do {
            iVar5 = iVar3 + 1;
            if (iVar2 <= iVar3) {
              LOCK();
              bVar6 = (__mutex->__data).__lock == 0;
              if (bVar6) {
                (__mutex->__data).__lock = 1;
              }
              UNLOCK();
              if (!bVar6) {
                __lll_lock_wait(__mutex,(__mutex->__data).__kind & 0x80);
              }
              goto LAB_00700b44;
            }
            iVar3 = iVar5;
          } while ((__mutex->__data).__lock != 0);
          LOCK();
          bVar6 = (__mutex->__data).__lock == 0;
          if (bVar6) {
            (__mutex->__data).__lock = 1;
          }
          UNLOCK();
        } while (!bVar6);
LAB_00700b44:
        sVar1 = (short)(__mutex->__data).__spins;
        *(short *)&(__mutex->__data).__spins = sVar1 + (short)((iVar5 - sVar1) / 8);
      }
      if ((__mutex->__data).__owner != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x9b,
                      "___pthread_mutex_lock");
      }
      goto LAB_00700995;
    }
    if (((__mutex->__data).__kind & 0x7fU) != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
                    "pthread_mutex_lock.c",0xa0,"___pthread_mutex_lock");
    }
    if ((__mutex->__data).__owner == *(int *)(in_FS_OFFSET + 0x2d0)) {
      return 0x23;
    }
  }
  if (((((__mutex->__data).__kind & 0x80U) == 0) && (*(int *)(in_FS_OFFSET + 0x18) == 0)) &&
     ((__mutex->__data).__lock == 0)) {
    (__mutex->__data).__lock = 1;
  }
  else {
    LOCK();
    bVar6 = (__mutex->__data).__lock == 0;
    if (bVar6) {
      (__mutex->__data).__lock = 1;
    }
    UNLOCK();
    if (!bVar6) {
      __lll_lock_wait();
    }
  }
  if ((__mutex->__data).__owner != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x5e,"___pthread_mutex_lock");
  }
LAB_00700995:
  (__mutex->__data).__owner = *(int *)(in_FS_OFFSET + 0x2d0);
  (__mutex->__data).__nusers = (__mutex->__data).__nusers + 1;
  return 0;
}

