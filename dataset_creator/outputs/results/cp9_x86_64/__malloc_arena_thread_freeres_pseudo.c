
void __malloc_arena_thread_freeres(void)

{
  ulong *puVar1;
  undefined4 uVar2;
  void *__ptr;
  ulong *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  
  __ptr = *(void **)(in_FS_OFFSET + -0x30);
  *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  if (__ptr != (void *)0x0) {
    puVar9 = (ulong *)((long)__ptr + 0x80);
    *(undefined8 *)(in_FS_OFFSET + -0x30) = 0;
    do {
      puVar3 = (ulong *)*puVar9;
      while (puVar3 != (ulong *)0x0) {
        if (((ulong)puVar3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          malloc_printerr("tcache_thread_shutdown(): unaligned tcache chunk detected");
        }
        puVar1 = puVar3 + -2;
        *puVar9 = (ulong)puVar3 >> 0xc ^ *puVar3;
        uVar7 = puVar3[-1];
        uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        if ((uVar7 & 2) == 0) {
          if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
            tcache_init_part_0();
            uVar7 = puVar3[-1];
          }
          puVar8 = &main_arena;
          if ((uVar7 & 4) != 0) {
            uVar7 = DAT_00931110 * -4;
            if (DAT_00931110 == 0) {
              uVar7 = 0xfffffffffc000000;
            }
            puVar8 = *(undefined4 **)(uVar7 & (ulong)puVar1);
          }
          _int_free(puVar8,puVar1,0);
        }
        else {
          if (((DAT_00931128 == 0) && (DAT_009310f0 < uVar7)) && (uVar7 < 0x2000001)) {
            DAT_009310f0 = uVar7 & 0xfffffffffffffff8;
            mp_ = DAT_009310f0 * 2;
          }
          munmap_chunk(puVar1);
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
        puVar3 = (ulong *)*puVar9;
      }
      puVar9 = puVar9 + 1;
    } while ((ulong *)((long)__ptr + 0x280) != puVar9);
    free(__ptr);
  }
  lVar4 = *(long *)(in_FS_OFFSET + -0x20);
  *(undefined8 *)(in_FS_OFFSET + -0x20) = 0;
  if (lVar4 != 0) {
    LOCK();
    bVar10 = free_list_lock == 0;
    if (bVar10) {
      free_list_lock = 1;
    }
    UNLOCK();
    if (!bVar10) {
      __lll_lock_wait_private(&free_list_lock);
    }
    if (*(long *)(lVar4 + 0x880) == 0) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("a->attached_threads > 0","arena.c",0x3f5,"__malloc_arena_thread_freeres");
    }
    lVar6 = *(long *)(lVar4 + 0x880) + -1;
    *(long *)(lVar4 + 0x880) = lVar6;
    if (lVar6 == 0) {
      *(long *)(lVar4 + 0x878) = free_list;
      free_list = lVar4;
    }
    iVar5 = free_list_lock;
    LOCK();
    free_list_lock = 0;
    UNLOCK();
    if (1 < iVar5) {
      __lll_lock_wake_private(&free_list_lock);
      return;
    }
  }
  return;
}

