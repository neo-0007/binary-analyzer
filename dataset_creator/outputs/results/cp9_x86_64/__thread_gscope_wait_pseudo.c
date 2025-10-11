
/* WARNING: Removing unreachable block (ram,0x00780244) */
/* WARNING: Removing unreachable block (ram,0x0078024c) */
/* WARNING: Removing unreachable block (ram,0x007802f4) */
/* WARNING: Removing unreachable block (ram,0x00780300) */
/* WARNING: Removing unreachable block (ram,0x00780252) */
/* WARNING: Removing unreachable block (ram,0x0078030a) */

void __thread_gscope_wait(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  LOCK();
  bVar4 = _dl_stack_cache_lock == 0;
  if (bVar4) {
    _dl_stack_cache_lock = 1;
  }
  UNLOCK();
  if (!bVar4) {
    __lll_lock_wait_private(&_dl_stack_cache_lock);
  }
  puVar1 = *(undefined8 **)(in_FS_OFFSET + 0x10);
  puVar3 = _dl_stack_used;
  if ((undefined8 **)_dl_stack_used != &_dl_stack_used) {
    do {
      if ((puVar1 != puVar3 + -0x58) && (*(int *)((long)puVar3 + -0x2a4) != 0)) {
        LOCK();
        bVar4 = *(int *)((long)puVar3 + -0x2a4) == 1;
        if (bVar4) {
          *(int *)((long)puVar3 + -0x2a4) = 2;
        }
        UNLOCK();
        if (bVar4) {
          do {
            syscall();
          } while (*(int *)((long)puVar3 + -0x2a4) == 2);
        }
      }
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &_dl_stack_used);
  }
  puVar3 = _dl_stack_user;
  if ((undefined8 **)_dl_stack_user != &_dl_stack_user) {
    do {
      if ((puVar1 != puVar3 + -0x58) && (*(int *)((long)puVar3 + -0x2a4) != 0)) {
        LOCK();
        bVar4 = *(int *)((long)puVar3 + -0x2a4) == 1;
        if (bVar4) {
          *(int *)((long)puVar3 + -0x2a4) = 2;
        }
        UNLOCK();
        if (bVar4) {
          do {
            syscall();
          } while (*(int *)((long)puVar3 + -0x2a4) == 2);
        }
      }
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &_dl_stack_user);
  }
  iVar2 = _dl_stack_cache_lock;
  LOCK();
  _dl_stack_cache_lock = 0;
  UNLOCK();
  if (iVar2 < 2) {
    return;
  }
  __lll_lock_wake_private(&_dl_stack_cache_lock);
  return;
}

