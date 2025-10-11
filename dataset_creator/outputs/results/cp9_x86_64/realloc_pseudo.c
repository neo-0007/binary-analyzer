
/* WARNING: Removing unreachable block (ram,0x00707168) */

void * realloc(void *__ptr,size_t __size)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  size_t __len;
  void *__addr;
  ulong uVar10;
  int *piVar11;
  long in_FS_OFFSET;
  
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  if (__size == 0) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
      return (void *)0x0;
    }
  }
  else if (__ptr != (void *)0x0) {
    uVar5 = *(ulong *)((long)__ptr + -8);
    uVar6 = (long)__ptr - 0x10;
    piVar11 = (int *)0x0;
    uVar10 = uVar5 & 0xfffffffffffffff8;
    if ((uVar5 & 2) == 0) {
      if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
        tcache_init_part_0();
        uVar5 = *(ulong *)((long)__ptr + -8);
      }
      piVar11 = &main_arena;
      if ((uVar5 & 4) != 0) {
        uVar7 = DAT_00931110 * -4;
        if (DAT_00931110 == 0) {
          uVar7 = 0xfffffffffc000000;
        }
        piVar11 = *(int **)(uVar7 & uVar6);
      }
    }
    if ((-uVar10 < uVar6) || ((uVar6 & 0xf) != 0)) {
                    /* WARNING: Subroutine does not return */
      malloc_printerr("realloc(): invalid pointer");
    }
    if ((long)__size < 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      return (void *)0x0;
    }
    uVar7 = __size + 0x17 & 0xfffffffffffffff0;
    if (__size + 0x17 < 0x20) {
      uVar7 = 0x20;
    }
    if ((uVar5 & 2) != 0) {
      lVar3 = *(long *)((long)__ptr + -0x10);
      uVar5 = (uVar5 & 0xfffffffffffffff8) + lVar3;
      uVar9 = (ulong)__ptr & _dl_pagesize - 1U;
      if (((uVar6 - lVar3 | uVar5) & _dl_pagesize - 1U) != 0 || (uVar9 - 1 & uVar9) != 0) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("mremap_chunk(): invalid pointer");
      }
      uVar9 = _dl_pagesize + 7 + lVar3 + uVar7 & -_dl_pagesize;
      if (uVar5 == uVar9) {
        return __ptr;
      }
      pvVar4 = mremap((void *)(uVar6 - lVar3),uVar5,uVar9,1);
      if (pvVar4 != (void *)0xffffffffffffffff) {
        if (DAT_00931108 - 1U < uVar9) {
          uVar6 = _dl_pagesize - 1U & (ulong)pvVar4;
          __len = uVar9;
          __addr = pvVar4;
          if (uVar6 != 0) {
            __len = uVar9 + uVar6;
            __addr = (void *)(-_dl_pagesize & (ulong)pvVar4);
          }
          madvise(__addr,__len,0xe);
        }
        plVar1 = (long *)((long)pvVar4 + lVar3);
        if (((ulong)plVar1 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          __malloc_assert("aligned_OK (chunk2mem (p))","malloc.c",0xc23,"mremap_chunk");
        }
        if (lVar3 != *plVar1) {
                    /* WARNING: Subroutine does not return */
          __malloc_assert("prev_size (p) == offset","malloc.c",0xc25,"mremap_chunk");
        }
        plVar1[1] = uVar9 - lVar3 | 2;
        LOCK();
        lVar3 = DAT_00931130 + (uVar9 - uVar5);
        UNLOCK();
        uVar6 = (uVar9 - uVar5) + DAT_00931130;
        if (uVar6 <= DAT_00931138) {
          DAT_00931130 = lVar3;
          return plVar1 + 2;
        }
        LOCK();
        UNLOCK();
        DAT_00931130 = lVar3;
        DAT_00931138 = uVar6;
        return plVar1 + 2;
      }
      if (uVar7 <= uVar10 - 8) {
        return __ptr;
      }
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
        return (void *)0x0;
      }
      memcpy(pvVar4,__ptr,uVar10 - 0x10);
      munmap_chunk(uVar6);
      return pvVar4;
    }
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      pvVar4 = (void *)_int_realloc(piVar11,uVar6,uVar10,uVar7);
      if (pvVar4 == (void *)0x0) {
        return (void *)0x0;
      }
      if ((*(ulong *)((long)pvVar4 + -8) & 2) != 0) {
        return pvVar4;
      }
      piVar8 = &main_arena;
      if ((*(ulong *)((long)pvVar4 + -8) & 4) != 0) {
        uVar6 = DAT_00931110 * -4;
        if (DAT_00931110 == 0) {
          uVar6 = 0xfffffffffc000000;
        }
        piVar8 = *(int **)(uVar6 & (long)pvVar4 - 0x10U);
      }
      if (piVar11 == piVar8) {
        return pvVar4;
      }
                    /* WARNING: Subroutine does not return */
      __malloc_assert("!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))"
                      ,"malloc.c",0xd9e,"__libc_realloc");
    }
    LOCK();
    iVar2 = *piVar11;
    if (iVar2 == 0) {
      *piVar11 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      __lll_lock_wait_private(piVar11);
    }
    pvVar4 = (void *)_int_realloc(piVar11,uVar6,uVar10,uVar7);
    LOCK();
    iVar2 = *piVar11;
    *piVar11 = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake_private(piVar11);
    }
    if (pvVar4 == (void *)0x0) {
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
        return (void *)0x0;
      }
      memcpy(pvVar4,__ptr,
             ((*(ulong *)((long)__ptr + -8) & 0xfffffffffffffff8) - 0x10) +
             (ulong)(((uint)(*(ulong *)((long)__ptr + -8) >> 1) ^ 1) & 1) * 8);
      _int_free(piVar11,uVar6,0);
      return pvVar4;
    }
    if ((*(ulong *)((long)pvVar4 + -8) & 2) != 0) {
      return pvVar4;
    }
    piVar8 = &main_arena;
    if ((*(ulong *)((long)pvVar4 + -8) & 4) != 0) {
      uVar6 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar6 = 0xfffffffffc000000;
      }
      piVar8 = *(int **)(uVar6 & (long)pvVar4 - 0x10U);
    }
    if (piVar11 == piVar8) {
      return pvVar4;
    }
                    /* WARNING: Subroutine does not return */
    __malloc_assert("!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))"
                    ,"malloc.c",0xda9,"__libc_realloc");
  }
  pvVar4 = malloc(__size);
  return pvVar4;
}

