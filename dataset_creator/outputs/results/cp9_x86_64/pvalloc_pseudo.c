
void * pvalloc(ulong param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __size;
  long in_FS_OFFSET;
  
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  uVar5 = _dl_pagesize - 1;
  if (CARRY8(param_1,uVar5)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return (void *)0x0;
  }
  __size = 1 - _dl_pagesize & param_1 + uVar5;
  if (_dl_pagesize < 0x11) {
    pvVar2 = malloc(__size);
    return pvVar2;
  }
  if (_dl_pagesize < 0x20) {
    uVar6 = 0x20;
  }
  else {
    if (0x8000000000000000 < _dl_pagesize) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      return (void *)0x0;
    }
    uVar6 = _dl_pagesize;
    if (((uVar5 & _dl_pagesize) != 0) && (uVar6 = 0x20, _dl_pagesize != 0x20)) {
      do {
        uVar6 = uVar6 * 2;
      } while (uVar6 < _dl_pagesize);
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    pvVar2 = (void *)_int_memalign(&main_arena,uVar6,__size);
    if (pvVar2 == (void *)0x0) {
      return (void *)0x0;
    }
    if ((*(ulong *)((long)pvVar2 + -8) & 2) != 0) {
      return pvVar2;
    }
    if ((*(ulong *)((long)pvVar2 + -8) & 4) == 0) {
      return pvVar2;
    }
    uVar5 = DAT_00931110 * -4;
    if (DAT_00931110 == 0) {
      uVar5 = 0xfffffffffc000000;
    }
    if (*(undefined4 **)(uVar5 & (long)pvVar2 - 0x10U) == &main_arena) {
      return pvVar2;
    }
                    /* WARNING: Subroutine does not return */
    __malloc_assert("!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))"
                    ,"malloc.c",0xdeb,"_mid_memalign");
  }
  piVar3 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)get_free_list();
    if (piVar3 != (int *)0x0) goto LAB_0070797d;
    piVar3 = (int *)arena_get2_part_0(__size + 0x20 + uVar6,0);
    pvVar2 = (void *)_int_memalign(piVar3,uVar6,__size);
    if (pvVar2 == (void *)0x0) {
      if (piVar3 == (int *)0x0) goto LAB_007079a3;
      goto code_r0x00707b39;
    }
LAB_00707b55:
    if (piVar3 == (int *)0x0) goto LAB_007079a3;
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
LAB_0070797d:
    pvVar2 = (void *)_int_memalign(piVar3,uVar6,__size);
    if (pvVar2 == (void *)0x0) {
code_r0x00707b39:
      piVar3 = (int *)arena_get_retry(piVar3,__size);
      pvVar2 = (void *)_int_memalign(piVar3,uVar6,__size);
      goto LAB_00707b55;
    }
  }
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(piVar3);
  }
LAB_007079a3:
  if (pvVar2 == (void *)0x0) {
    return (void *)0x0;
  }
  if ((*(ulong *)((long)pvVar2 + -8) & 2) == 0) {
    piVar4 = &main_arena;
    if ((*(ulong *)((long)pvVar2 + -8) & 4) != 0) {
      uVar5 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar5 = 0xfffffffffc000000;
      }
      piVar4 = *(int **)(uVar5 & (long)pvVar2 - 0x10U);
    }
    if (piVar4 != piVar3) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))"
                      ,"malloc.c",0xdfd,"_mid_memalign");
    }
  }
  return pvVar2;
}

