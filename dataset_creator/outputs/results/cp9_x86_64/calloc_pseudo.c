
void * calloc(size_t __nmemb,size_t __size)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  size_t __n;
  undefined1 (*__s) [16];
  int *piVar4;
  void *pvVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  long in_FS_OFFSET;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = __nmemb;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __size;
  __n = SUB168(auVar2 * auVar3,0);
  if (((long)__n < 0) || (SUB168(auVar2 * auVar3,8) != 0)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return (void *)0x0;
  }
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
    tcache_init_part_0();
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    piVar4 = &main_arena;
    uVar10 = *(ulong *)(*DAT_009311e0 + 8) & 0xfffffffffffffff8;
    pauVar9 = DAT_009311e0;
  }
  else {
    piVar4 = *(int **)(in_FS_OFFSET + -0x20);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)get_free_list();
      if ((piVar4 == (int *)0x0) && (piVar4 = (int *)arena_get2_part_0(__n,0), piVar4 == (int *)0x0)
         ) {
        uVar10 = 0;
        pauVar9 = (undefined1 (*) [16])0x0;
        goto LAB_00707cbc;
      }
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
    }
    pauVar9 = *(undefined1 (**) [16])(piVar4 + 0x18);
    uVar10 = *(ulong *)(*pauVar9 + 8) & 0xfffffffffffffff8;
    if (piVar4 != &main_arena) {
      uVar6 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar6 = 0xfffffffffc000000;
      }
      uVar6 = ((uVar6 & (ulong)pauVar9) + *(long *)((uVar6 & (ulong)pauVar9) + 0x18)) -
              (long)pauVar9;
      if (uVar10 < uVar6) {
        uVar10 = uVar6;
      }
    }
  }
LAB_00707cbc:
  __s = (undefined1 (*) [16])_int_malloc(piVar4);
  if ((__s != (undefined1 (*) [16])0x0) && ((*(ulong *)(__s[-1] + 8) & 2) == 0)) {
    piVar7 = &main_arena;
    if ((*(ulong *)(__s[-1] + 8) & 4) != 0) {
      uVar6 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar6 = 0xfffffffffc000000;
      }
      piVar7 = *(int **)(uVar6 & (ulong)(__s + -1));
    }
    if (piVar7 != piVar4) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("!mem || chunk_is_mmapped (mem2chunk (mem)) || av == arena_for_chunk (mem2chunk (mem))"
                      ,"malloc.c",0xe61,"__libc_calloc");
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
    if (__s == (undefined1 (*) [16])0x0) {
      if (piVar4 == (int *)0x0) goto LAB_00707d10;
      piVar4 = (int *)arena_get_retry(piVar4,__n);
      __s = (undefined1 (*) [16])_int_malloc(piVar4);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private(piVar4);
      }
    }
  }
LAB_00707d10:
  if (__s != (undefined1 (*) [16])0x0) {
    if ((*(ulong *)(__s[-1] + 8) & 2) == 0) {
      uVar8 = *(ulong *)(__s[-1] + 8) & 0xfffffffffffffff8;
      uVar6 = uVar8;
      if (perturb_byte == 0) {
        if (uVar10 <= uVar8) {
          uVar6 = uVar10;
        }
        if (pauVar9 != __s + -1) {
          uVar6 = uVar8;
        }
      }
      __n = uVar6 - 8;
      if (__n < 0x18) {
                    /* WARNING: Subroutine does not return */
        __malloc_assert("nclears >= 3","malloc.c",0xe96,"__libc_calloc");
      }
      if (0x4f < __n) goto LAB_00707e90;
      *(undefined8 *)__s[1] = 0;
      *__s = (undefined1  [16])0x0;
      if (((0x27 < __n) && (*(undefined1 (*) [16])(__s[1] + 8) = (undefined1  [16])0x0, 0x37 < __n))
         && (*(undefined1 (*) [16])(__s[2] + 8) = (undefined1  [16])0x0, 0x47 < __n)) {
        *(undefined1 (*) [16])(__s[3] + 8) = (undefined1  [16])0x0;
      }
    }
    else if (perturb_byte != 0) {
LAB_00707e90:
      pvVar5 = memset(__s,0,__n);
      return pvVar5;
    }
  }
  return __s;
}

