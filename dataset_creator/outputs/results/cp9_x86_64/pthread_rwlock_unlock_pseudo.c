
/* WARNING: Removing unreachable block (ram,0x0070184f) */
/* WARNING: Removing unreachable block (ram,0x007018ae) */
/* WARNING: Removing unreachable block (ram,0x007017bc) */
/* WARNING: Removing unreachable block (ram,0x007017c8) */
/* WARNING: Removing unreachable block (ram,0x007018ba) */
/* WARNING: Removing unreachable block (ram,0x0070185b) */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  if ((__rwlock->__data).__writer == *(int *)(in_FS_OFFSET + 0x2d0)) {
    (__rwlock->__data).__writer = 0;
    LOCK();
    uVar1 = (__rwlock->__data).__writer_wakeup;
    (__rwlock->__data).__writer_wakeup = 0;
    UNLOCK();
    if ((__rwlock->__data).__flags == 0) {
LAB_00701804:
      uVar3 = (__rwlock->__data).__lock;
      do {
        LOCK();
        uVar2 = (__rwlock->__data).__lock;
        bVar4 = uVar3 == uVar2;
        if (bVar4) {
          (__rwlock->__data).__lock = uVar3 >> 3 != 0 ^ uVar3 ^ 2;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar4);
      if (uVar3 >> 3 != 0) {
        LOCK();
        uVar3 = (__rwlock->__data).__readers_wakeup;
        (__rwlock->__data).__readers_wakeup = 0;
        UNLOCK();
        if ((uVar3 & 2) != 0) {
          syscall();
        }
      }
    }
    else {
      uVar3 = (__rwlock->__data).__nr_readers;
      do {
        if (uVar3 == 0) goto LAB_00701804;
        LOCK();
        uVar2 = (__rwlock->__data).__nr_readers;
        bVar4 = uVar3 == uVar2;
        if (bVar4) {
          (__rwlock->__data).__nr_readers = uVar3 | 0x80000000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar4);
    }
    if ((uVar1 & 2) != 0) {
      syscall();
    }
  }
  else {
    uVar1 = (__rwlock->__data).__lock;
    do {
      uVar3 = uVar1 - 8;
      if (uVar3 >> 3 == 0) {
        if ((uVar3 & 2) != 0) {
          uVar3 = uVar3 | 1;
        }
        uVar3 = uVar3 & 0xfffffffb;
      }
      LOCK();
      uVar2 = (__rwlock->__data).__lock;
      bVar4 = uVar1 == uVar2;
      if (bVar4) {
        (__rwlock->__data).__lock = uVar3;
        uVar2 = uVar1;
      }
      UNLOCK();
      uVar1 = uVar2;
    } while (!bVar4);
    if ((uVar3 & 1) != 0) {
      LOCK();
      uVar1 = (__rwlock->__data).__readers_wakeup;
      (__rwlock->__data).__readers_wakeup = 1;
      UNLOCK();
      if ((uVar1 & 2) != 0) {
        syscall();
      }
    }
    if (((uVar3 ^ uVar2) & 4) != 0) {
      syscall();
    }
  }
  return 0;
}

