
void * malloc(size_t __size)

{
  int iVar1;
  short sVar2;
  ulong *puVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  if ((long)__size < 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return (void *)0x0;
  }
  uVar7 = 0;
  if (0x1f < __size + 0x17) {
    uVar7 = (__size + 0x17 & 0xfffffffffffffff0) - 0x11 >> 4;
  }
  lVar8 = *(long *)(in_FS_OFFSET + -0x30);
  if (lVar8 == 0) {
    if (((*(char *)(in_FS_OFFSET + -0x28) == '\0') && (tcache_init_part_0(), uVar7 < DAT_00931148))
       && (lVar8 = *(long *)(in_FS_OFFSET + -0x30), lVar8 != 0)) goto LAB_00706900;
  }
  else if (uVar7 < DAT_00931148) {
LAB_00706900:
    sVar2 = *(short *)(lVar8 + uVar7 * 2);
    if (sVar2 != 0) {
      puVar3 = *(ulong **)(lVar8 + (uVar7 + 0x10) * 8);
      if (((ulong)puVar3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("malloc(): unaligned tcache chunk detected");
      }
      *(ulong *)(lVar8 + (uVar7 + 0x10) * 8) = (ulong)puVar3 >> 0xc ^ *puVar3;
      *(short *)(lVar8 + uVar7 * 2) = sVar2 + -1;
      puVar3[1] = 0;
      return puVar3;
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    pvVar4 = (void *)_int_malloc(&main_arena,__size);
    if (pvVar4 == (void *)0x0) {
      return (void *)0x0;
    }
    if ((*(ulong *)((long)pvVar4 + -8) & 2) != 0) {
      return pvVar4;
    }
    if ((*(ulong *)((long)pvVar4 + -8) & 4) == 0) {
      return pvVar4;
    }
    uVar7 = DAT_00931110 * -4;
    if (DAT_00931110 == 0) {
      uVar7 = 0xfffffffffc000000;
    }
    if (*(undefined4 **)(uVar7 & (long)pvVar4 - 0x10U) == &main_arena) {
      return pvVar4;
    }
                    /* WARNING: Subroutine does not return */
    __malloc_assert("!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))"
                    ,"malloc.c",0xcfa,"__libc_malloc");
  }
  piVar5 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)get_free_list();
    if (piVar5 != (int *)0x0) goto LAB_0070682b;
    piVar5 = (int *)arena_get2_part_0(__size,0);
    pvVar4 = (void *)_int_malloc(piVar5,__size);
    if (pvVar4 == (void *)0x0) {
      if (piVar5 == (int *)0x0) goto LAB_0070684e;
      goto code_r0x00706a51;
    }
LAB_00706a6a:
    if (piVar5 == (int *)0x0) goto LAB_0070684e;
  }
  else {
    LOCK();
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      *piVar5 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      __lll_lock_wait_private(piVar5);
    }
LAB_0070682b:
    pvVar4 = (void *)_int_malloc(piVar5,__size);
    if (pvVar4 == (void *)0x0) {
code_r0x00706a51:
      piVar5 = (int *)arena_get_retry(piVar5,__size);
      pvVar4 = (void *)_int_malloc(piVar5,__size);
      goto LAB_00706a6a;
    }
  }
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(piVar5);
  }
LAB_0070684e:
  if (pvVar4 == (void *)0x0) {
    return (void *)0x0;
  }
  if ((*(ulong *)((long)pvVar4 + -8) & 2) == 0) {
    piVar6 = &main_arena;
    if ((*(ulong *)((long)pvVar4 + -8) & 4) != 0) {
      uVar7 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar7 = 0xfffffffffc000000;
      }
      piVar6 = *(int **)(uVar7 & (long)pvVar4 - 0x10U);
    }
    if (piVar6 != piVar5) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))"
                      ,"malloc.c",0xd10,"__libc_malloc");
    }
  }
  return pvVar4;
}

