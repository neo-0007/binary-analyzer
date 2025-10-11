
void tcache_init_part_0(void)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  byte bVar5;
  
  bVar5 = 0;
  piVar3 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)get_free_list();
    if (piVar3 != (int *)0x0) goto LAB_00706078;
    piVar3 = (int *)arena_get2_part_0(0x280,0);
    puVar2 = (undefined8 *)_int_malloc(piVar3,0x280);
    if (puVar2 == (undefined8 *)0x0) {
      if (piVar3 == (int *)0x0) goto LAB_0070609f;
      goto LAB_00706120;
    }
LAB_00706140:
    if (piVar3 == (int *)0x0) goto LAB_0070609f;
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      __lll_lock_wait_private(piVar3);
    }
LAB_00706078:
    puVar2 = (undefined8 *)_int_malloc(piVar3,0x280);
    if (puVar2 == (undefined8 *)0x0) {
LAB_00706120:
      piVar3 = (int *)arena_get_retry(piVar3,0x280);
      puVar2 = (undefined8 *)_int_malloc(piVar3,0x280);
      goto LAB_00706140;
    }
  }
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(piVar3);
  }
LAB_0070609f:
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(in_FS_OFFSET + -0x30) = puVar2;
    *puVar2 = 0;
    puVar2[0x4f] = 0;
    uVar4 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8)) +
                    0x280U >> 3);
    puVar2 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar5 * -2 + 1;
    }
  }
  return;
}

