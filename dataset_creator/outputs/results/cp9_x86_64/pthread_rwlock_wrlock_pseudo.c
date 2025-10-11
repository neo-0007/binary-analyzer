
/* WARNING: Removing unreachable block (ram,0x00701bd3) */
/* WARNING: Removing unreachable block (ram,0x00701b90) */
/* WARNING: Removing unreachable block (ram,0x00701b6e) */
/* WARNING: Removing unreachable block (ram,0x00701b88) */
/* WARNING: Removing unreachable block (ram,0x00701b76) */
/* WARNING: Removing unreachable block (ram,0x00701bdb) */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  bool bVar8;
  
  if ((__rwlock->__data).__writer == *(int *)(in_FS_OFFSET + 0x2d0)) {
    return 0x23;
  }
  uVar4 = (__rwlock->__data).__lock;
  do {
    uVar6 = uVar4;
    LOCK();
    uVar4 = (__rwlock->__data).__lock;
    bVar7 = uVar6 == uVar4;
    if (bVar7) {
      (__rwlock->__data).__lock = uVar6 | 2;
      uVar4 = uVar6;
    }
    UNLOCK();
  } while (!bVar7);
  puVar1 = &(__rwlock->__data).__writer_wakeup;
  uVar4 = 1;
  if ((uVar6 & 2) != 0) {
    uVar4 = (__rwlock->__data).__flags;
    if (uVar4 != 0) {
      LOCK();
      (__rwlock->__data).__nr_readers = (__rwlock->__data).__nr_readers + 1;
      UNLOCK();
    }
    bVar7 = false;
LAB_0070195f:
    if ((uVar6 & 2) == 0) goto code_r0x00701964;
    if (uVar4 != 0) {
      uVar3 = (__rwlock->__data).__nr_readers;
      if ((int)uVar3 < 0) {
        LOCK();
        bVar8 = uVar3 == (__rwlock->__data).__nr_readers;
        if (bVar8) {
          (__rwlock->__data).__nr_readers = uVar3 + 0x7fffffff;
        }
        UNLOCK();
        if (bVar8) {
          uVar6 = (__rwlock->__data).__lock;
          goto LAB_0070197c;
        }
        goto LAB_0070195f;
      }
    }
    uVar6 = *puVar1;
    if ((uVar6 & 0xfffffffd) == 1) {
      if (uVar6 != 3) {
        LOCK();
        uVar3 = *puVar1;
        if (uVar6 == uVar3) {
          *puVar1 = 3;
        }
        UNLOCK();
        if (uVar6 != uVar3) goto LAB_00701a30;
      }
      iVar5 = __futex_abstimed_wait64(puVar1,3,0,0,(ulong)((__rwlock->__data).__shared != 0) << 7);
      if ((iVar5 == 0x6e) || (iVar5 == 0x4b)) {
        if (uVar4 == 0) {
          return iVar5;
        }
        uVar4 = (__rwlock->__data).__nr_readers;
        do {
          if (uVar4 == 0x80000001) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar4 - 1;
          }
          LOCK();
          uVar3 = (__rwlock->__data).__nr_readers;
          bVar7 = uVar4 == uVar3;
          if (bVar7) {
            (__rwlock->__data).__nr_readers = uVar6;
            uVar3 = uVar4;
          }
          uVar4 = uVar3;
          UNLOCK();
        } while (!bVar7);
        if (uVar4 != 0x80000001) {
          return iVar5;
        }
        uVar4 = 3;
        uVar6 = (__rwlock->__data).__lock | 2;
        goto LAB_007018fc;
      }
      uVar6 = (__rwlock->__data).__lock;
      bVar7 = true;
    }
    else {
LAB_00701a30:
      uVar6 = (__rwlock->__data).__lock;
    }
    goto LAB_0070195f;
  }
LAB_007018fc:
  (__rwlock->__data).__writer_wakeup = uVar4;
  if ((uVar6 & 1) == 0) {
    do {
      if (uVar6 >> 3 != 0) break;
      LOCK();
      uVar4 = (__rwlock->__data).__lock;
      bVar7 = uVar6 == uVar4;
      if (bVar7) {
        (__rwlock->__data).__lock = uVar6 | 1;
        uVar4 = uVar6;
      }
      UNLOCK();
      if (bVar7) {
        (__rwlock->__data).__readers_wakeup = 1;
        goto LAB_00701929;
      }
      uVar6 = uVar4;
    } while ((uVar4 & 1) == 0);
    puVar2 = &(__rwlock->__data).__readers_wakeup;
    bVar7 = false;
LAB_00701a50:
    do {
      uVar4 = *puVar2;
      if ((uVar4 & 0xfffffffd) != 0) {
        if (bVar7) break;
        if (((__rwlock->__data).__lock & 1U) == 0) goto LAB_00701a50;
        uVar4 = *puVar2;
        if ((uVar4 & 0xfffffffd) != 0) break;
        bVar7 = true;
      }
      if ((uVar4 & 2) == 0) {
        LOCK();
        uVar6 = *puVar2;
        if (uVar4 == uVar6) {
          *puVar2 = 2;
        }
        UNLOCK();
        if (uVar4 != uVar6) goto LAB_00701a50;
      }
      iVar5 = __futex_abstimed_wait64(puVar2,2,0,0,(ulong)((__rwlock->__data).__shared != 0) << 7);
      if ((iVar5 == 0x6e) || (iVar5 == 0x4b)) goto LAB_00701ac2;
    } while( true );
  }
LAB_00701929:
  (__rwlock->__data).__writer = *(int *)(in_FS_OFFSET + 0x2d0);
  return 0;
code_r0x00701964:
  LOCK();
  uVar3 = (__rwlock->__data).__lock;
  bVar8 = uVar6 == uVar3;
  if (bVar8) {
    (__rwlock->__data).__lock = uVar6 | 2;
    uVar3 = uVar6;
  }
  uVar6 = uVar3;
  UNLOCK();
  if (bVar8) goto code_r0x00701973;
  goto LAB_0070195f;
code_r0x00701973:
  if (uVar4 != 0) {
    LOCK();
    (__rwlock->__data).__nr_readers = (__rwlock->__data).__nr_readers - 1;
    UNLOCK();
  }
LAB_0070197c:
  uVar6 = uVar6 | 2;
  uVar4 = (-(uint)!bVar7 & 0xfffffffe) + 3;
  goto LAB_007018fc;
LAB_00701ac2:
  if ((__rwlock->__data).__flags != 0) {
    uVar4 = (__rwlock->__data).__nr_readers;
    if (uVar4 != 0) {
      LOCK();
      uVar6 = *puVar1;
      *puVar1 = 0;
      UNLOCK();
      do {
        LOCK();
        uVar3 = (__rwlock->__data).__nr_readers;
        bVar7 = uVar4 == uVar3;
        if (bVar7) {
          (__rwlock->__data).__nr_readers = uVar4 | 0x80000000;
          uVar3 = uVar4;
        }
        uVar4 = uVar3;
        UNLOCK();
        if (bVar7) {
          if ((uVar6 & 2) == 0) {
            return iVar5;
          }
          syscall();
          return iVar5;
        }
      } while (uVar4 != 0);
      (__rwlock->__data).__writer_wakeup = uVar6;
    }
  }
  uVar4 = (__rwlock->__data).__lock;
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar6 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    do {
      LOCK();
      uVar3 = (__rwlock->__data).__lock;
      bVar7 = uVar4 == uVar3;
      if (bVar7) {
        (__rwlock->__data).__lock = (uVar4 ^ 2) & 0xfffffffb;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      UNLOCK();
      if (bVar7) {
        if ((uVar6 & 2) != 0) {
          syscall();
        }
        if ((uVar4 & 4) != 0) {
          syscall();
        }
        return 0x6e;
      }
    } while ((uVar4 & 1) == 0);
    (__rwlock->__data).__writer_wakeup = uVar6;
  }
  do {
  } while ((*puVar2 & 0xfffffffd) == 0);
  goto LAB_00701929;
}

