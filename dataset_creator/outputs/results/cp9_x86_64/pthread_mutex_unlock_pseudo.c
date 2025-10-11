
int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  
  uVar3 = (__mutex->__data).__kind & 0x17f;
  if (((__mutex->__data).__kind & 0x7cU) != 0) {
    iVar2 = __pthread_mutex_unlock_full(__mutex,1);
    return iVar2;
  }
  if (uVar3 != 0) {
    if (uVar3 == 0x100) {
      iVar2 = __lll_unlock_elision(__mutex,(__mutex->__data).__kind & 0x80);
      return iVar2;
    }
    if (((__mutex->__data).__kind & 0x7fU) == 1) {
      if ((__mutex->__data).__owner != *(int *)(in_FS_OFFSET + 0x2d0)) {
        return 1;
      }
      puVar1 = &(__mutex->__data).__count;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 != 0) {
        return 0;
      }
    }
    else if (((__mutex->__data).__kind & 0x7fU) != 3) {
      if (uVar3 != 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("type == PTHREAD_MUTEX_ERRORCHECK_NP","pthread_mutex_unlock.c",0x62,
                      "__pthread_mutex_unlock_usercnt");
      }
      if ((__mutex->__data).__owner != *(int *)(in_FS_OFFSET + 0x2d0)) {
        return 1;
      }
      if ((__mutex->__data).__lock == 0) {
        return 1;
      }
    }
  }
  (__mutex->__data).__nusers = (__mutex->__data).__nusers - 1;
  (__mutex->__data).__owner = 0;
  if ((((__mutex->__data).__kind & 0x80U) == 0) && (*(int *)(in_FS_OFFSET + 0x18) == 0)) {
    (__mutex->__data).__lock = 0;
  }
  else {
    LOCK();
    iVar2 = (__mutex->__data).__lock;
    (__mutex->__data).__lock = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake();
    }
  }
  return 0;
}

