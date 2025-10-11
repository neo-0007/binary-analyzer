
/* WARNING: Removing unreachable block (ram,0x00701632) */
/* WARNING: Removing unreachable block (ram,0x0070163e) */
/* WARNING: Type propagation algorithm not settling */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  if ((__rwlock->__data).__writer == *(int *)(in_FS_OFFSET + 0x2d0)) {
    return 0x23;
  }
  if ((__rwlock->__data).__flags == 2) {
    uVar2 = (__rwlock->__data).__lock;
    while (((uVar2 & 3) == 2 && (uVar2 >> 3 != 0))) {
      LOCK();
      uVar3 = (__rwlock->__data).__lock;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        (__rwlock->__data).__lock = uVar2 | 4;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
      if (bVar5) {
        while (uVar2 = (__rwlock->__data).__lock, (uVar2 & 4) != 0) {
          iVar4 = __futex_abstimed_wait64
                            (__rwlock,uVar2,0,0,(ulong)((__rwlock->__data).__shared != 0) << 7);
          if (iVar4 == 0x6e) {
            return 0x6e;
          }
          if (iVar4 == 0x4b) {
            return 0x4b;
          }
        }
      }
    }
  }
  LOCK();
  iVar4 = (__rwlock->__data).__lock;
  (__rwlock->__data).__lock = (__rwlock->__data).__lock + 8;
  UNLOCK();
  uVar2 = iVar4 + 8;
  while ((int)uVar2 < 0) {
    LOCK();
    uVar3 = (__rwlock->__data).__lock;
    bVar5 = uVar2 == uVar3;
    if (bVar5) {
      (__rwlock->__data).__lock = uVar2 - 8;
      uVar3 = uVar2;
    }
    uVar2 = uVar3;
    UNLOCK();
    if (bVar5) {
      return 0xb;
    }
  }
  if ((uVar2 & 1) != 0) {
    do {
      if ((uVar2 & 3) != 1) {
        puVar1 = &(__rwlock->__data).__readers_wakeup;
        bVar5 = false;
        goto LAB_00701657;
      }
      LOCK();
      uVar3 = (__rwlock->__data).__lock;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        (__rwlock->__data).__lock = uVar2 ^ 1;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    LOCK();
    uVar2 = (__rwlock->__data).__readers_wakeup;
    (__rwlock->__data).__readers_wakeup = 0;
    UNLOCK();
    if ((uVar2 & 2) != 0) {
      syscall();
    }
  }
  return 0;
LAB_00701657:
  uVar2 = *puVar1;
  if ((uVar2 | 2) != 3) {
    if (bVar5) {
      return 0;
    }
    if (((__rwlock->__data).__lock & 1U) != 0) goto LAB_00701657;
    uVar2 = *puVar1;
    if ((uVar2 | 2) != 3) {
      return 0;
    }
    bVar5 = true;
  }
  if ((uVar2 & 2) == 0) {
    LOCK();
    uVar3 = *puVar1;
    if (uVar2 == uVar3) {
      *puVar1 = 3;
    }
    UNLOCK();
    if (uVar2 != uVar3) goto LAB_00701657;
  }
  iVar4 = __futex_abstimed_wait64(puVar1,3,0,0);
  if ((iVar4 == 0x6e) || (iVar4 == 0x4b)) {
    uVar2 = (__rwlock->__data).__lock;
    do {
      if ((uVar2 & 1) == 0) {
        do {
        } while ((*puVar1 | 2) == 3);
        return 0;
      }
      LOCK();
      uVar3 = (__rwlock->__data).__lock;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        (__rwlock->__data).__lock = uVar2 - 8;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    return iVar4;
  }
  goto LAB_00701657;
}

