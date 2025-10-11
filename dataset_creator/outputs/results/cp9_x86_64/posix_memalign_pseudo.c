
int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  if ((((__alignment >> 3) - 1 & __alignment >> 3) != 0 || (__alignment & 7) != 0) ||
     (__alignment == 0)) {
    return 0x16;
  }
  if (__alignment < 0x11) {
    pvVar2 = malloc(__size);
    if (pvVar2 == (void *)0x0) {
      return 0xc;
    }
    goto LAB_00708980;
  }
  if (__alignment < 0x20) {
    uVar3 = 0x20;
  }
  else {
    if (0x8000000000000000 < __alignment) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      return 0xc;
    }
    uVar3 = __alignment;
    if (((__alignment - 1 & __alignment) != 0) && (uVar3 = 0x20, __alignment != 0x20)) {
      do {
        uVar3 = uVar3 * 2;
      } while (uVar3 < __alignment);
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    pvVar2 = (void *)_int_memalign(&main_arena,uVar3,__size);
    if (pvVar2 == (void *)0x0) {
      return 0xc;
    }
    if (((*(ulong *)((long)pvVar2 + -8) & 2) == 0) && ((*(ulong *)((long)pvVar2 + -8) & 4) != 0)) {
      uVar3 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar3 = 0xfffffffffc000000;
      }
      if (*(undefined4 **)(uVar3 & (long)pvVar2 - 0x10U) != &main_arena) {
                    /* WARNING: Subroutine does not return */
        __malloc_assert("!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))"
                        ,"malloc.c",0xdeb,"_mid_memalign");
      }
    }
    goto LAB_00708980;
  }
  piVar4 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)get_free_list();
    if (piVar4 != (int *)0x0) goto LAB_00708868;
    piVar4 = (int *)arena_get2_part_0(uVar3 + 0x20 + __size,0);
    pvVar2 = (void *)_int_memalign(piVar4,uVar3,__size);
    if (pvVar2 != (void *)0x0) goto LAB_00708a90;
    if (piVar4 != (int *)0x0) goto code_r0x00708a71;
  }
  else {
    LOCK();
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      *piVar4 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      __lll_lock_wait_private(piVar4);
    }
LAB_00708868:
    pvVar2 = (void *)_int_memalign(piVar4,uVar3,__size);
    if (pvVar2 == (void *)0x0) {
code_r0x00708a71:
      piVar4 = (int *)arena_get_retry(piVar4,__size);
      pvVar2 = (void *)_int_memalign(piVar4,uVar3,__size);
LAB_00708a90:
      if (piVar4 == (int *)0x0) goto LAB_00708890;
    }
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private(piVar4);
    }
  }
LAB_00708890:
  if (pvVar2 == (void *)0x0) {
    return 0xc;
  }
  if ((*(ulong *)((long)pvVar2 + -8) & 2) == 0) {
    piVar5 = &main_arena;
    if ((*(ulong *)((long)pvVar2 + -8) & 4) != 0) {
      uVar3 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar3 = 0xfffffffffc000000;
      }
      piVar5 = *(int **)(uVar3 & (long)pvVar2 - 0x10U);
    }
    if (piVar5 != piVar4) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))"
                      ,"malloc.c",0xdfd,"_mid_memalign");
    }
  }
LAB_00708980:
  *__memptr = pvVar2;
  return 0;
}

