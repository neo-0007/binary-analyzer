
void __resolv_conf_detach(long param_1)

{
  undefined8 *puVar1;
  long *__ptr;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  bool bVar7;
  
  if (global == (undefined1 (*) [16])0x0) {
    return;
  }
  LOCK();
  bVar7 = lock == 0;
  if (bVar7) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar7) {
    __lll_lock_wait_private(&lock);
  }
  pauVar5 = global;
  if (global == (undefined1 (*) [16])0x0) {
    pauVar5 = (undefined1 (*) [16])calloc(1,0x58);
    if (pauVar5 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    global = pauVar5;
    *(undefined8 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x230) ^ 0x26a8fa5e48af8061;
    if (uVar6 < *(ulong *)*global) {
      puVar1 = (undefined8 *)(*(long *)global[1] + uVar6 * 8);
      __ptr = (long *)*puVar1;
      if (((ulong)__ptr & 1) == 0) {
        if (*__ptr == 0) {
                    /* WARNING: Subroutine does not return */
          conf_decrement_part_0();
        }
        lVar4 = *__ptr + -1;
        if (lVar4 == 0) {
          free(__ptr);
        }
        else {
          *__ptr = lVar4;
        }
        *puVar1 = *(undefined8 *)(pauVar5[1] + 8);
        *(ulong *)(pauVar5[1] + 8) = uVar6 * 2 + 1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  iVar3 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar3) {
    __lll_lock_wake_private(&lock);
    return;
  }
  return;
}

