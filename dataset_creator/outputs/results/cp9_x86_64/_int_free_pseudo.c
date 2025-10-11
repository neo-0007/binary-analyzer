
/* WARNING: Instruction at (ram,0x00703479) overlaps instruction at (ram,0x00703478)
    */

void _int_free(int *param_1,ulong *param_2,uint param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *__addr;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  long in_FS_OFFSET;
  bool bVar19;
  byte bVar20;
  char local_41;
  long local_40;
  
  bVar20 = 0;
  uVar17 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = uVar17 & 0xfffffffffffffff8;
  if (((ulong *)-uVar11 < param_2) || (((ulong)param_2 & 0xf) != 0)) {
                    /* WARNING: Subroutine does not return */
    malloc_printerr("free(): invalid pointer");
  }
  if ((uVar11 < 0x20) || (uVar7 = (ulong)((uint)uVar17 & 8), (uVar17 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    malloc_printerr("free(): invalid size");
  }
  lVar6 = *(long *)(in_FS_OFFSET + -0x30);
  if ((lVar6 == 0) || (uVar9 = uVar11 - 0x11 >> 4, DAT_00931148 <= uVar9)) {
LAB_00703219:
    if (global_max_fast < uVar11) {
      if ((param_2[1] & 2) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          munmap_chunk(param_2);
          return;
        }
        goto LAB_00703aa5;
      }
      if ((*(int *)(in_FS_OFFSET + 0x18) == 0) || ((param_3 & 1) != 0)) {
        bVar19 = true;
      }
      else {
        LOCK();
        iVar5 = *param_1;
        if (iVar5 == 0) {
          *param_1 = 1;
        }
        UNLOCK();
        bVar19 = false;
        if (iVar5 != 0) {
          __lll_lock_wait_private(param_1);
        }
      }
      puVar10 = *(ulong **)(param_1 + 0x18);
      uVar17 = (long)param_2 + uVar11;
      if (puVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("double free or corruption (top)");
      }
      if (((*(byte *)(param_1 + 1) & 2) == 0) &&
         ((long)puVar10 + (puVar10[1] & 0xfffffffffffffff8) <= uVar17)) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("double free or corruption (out)");
      }
      uVar7 = *(ulong *)(uVar17 + 8);
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("double free or corruption (!prev)");
      }
      uVar9 = uVar7 & 0xfffffffffffffff8;
      if ((uVar7 < 0x11) || (*(ulong *)(param_1 + 0x222) <= uVar9)) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("free(): invalid next size (normal)");
      }
      if (perturb_byte != 0) {
        memset(param_2 + 2,perturb_byte,uVar11 - 0x10);
      }
      if ((param_2[1] & 1) == 0) {
        uVar7 = *param_2;
        param_2 = (ulong *)((long)param_2 - uVar7);
        uVar11 = uVar11 + uVar7;
        if ((param_2[1] & 0xfffffffffffffff8) != uVar7) {
                    /* WARNING: Subroutine does not return */
          malloc_printerr("corrupted size vs. prev_size while consolidating");
        }
        unlink_chunk_constprop_0(param_2);
      }
      if (*(ulong *)(param_1 + 0x18) == uVar17) {
        uVar11 = uVar11 + uVar9;
        param_2[1] = uVar11 | 1;
        *(ulong **)(param_1 + 0x18) = param_2;
      }
      else {
        if ((*(byte *)(uVar17 + 8 + uVar9) & 1) == 0) {
          uVar11 = uVar11 + uVar9;
          unlink_chunk_constprop_0(uVar17);
        }
        else {
          *(ulong *)(uVar17 + 8) = *(ulong *)(uVar17 + 8) & 0xfffffffffffffffe;
        }
        uVar17 = *(ulong *)(param_1 + 0x1c);
        if (*(int **)(uVar17 + 0x18) != param_1 + 0x18) {
                    /* WARNING: Subroutine does not return */
          malloc_printerr("free(): corrupted unsorted chunks");
        }
        param_2[2] = uVar17;
        param_2[3] = (ulong)(param_1 + 0x18);
        if (0x3ff < uVar11) {
          *(undefined1 (*) [16])(param_2 + 4) = (undefined1  [16])0x0;
        }
        *(ulong **)(param_1 + 0x1c) = param_2;
        *(ulong **)(uVar17 + 0x18) = param_2;
        param_2[1] = uVar11 | 1;
        *(ulong *)((long)param_2 + uVar11) = uVar11;
      }
      if (0xffff < uVar11) {
        if (param_1[2] != 0) {
          malloc_consolidate(param_1);
        }
        uVar17 = DAT_009310e8;
        plVar16 = *(long **)(param_1 + 0x18);
        if (param_1 == &main_arena) {
          if (mp_ <= (plVar16[1] & 0xfffffffffffffff8U)) {
            systrim_constprop_0(DAT_009310e8);
          }
        }
        else {
          if (DAT_00931110 == 0) {
            __addr = (undefined8 *)((ulong)plVar16 & 0xfffffffffc000000);
            piVar18 = (int *)*__addr;
            if (param_1 != piVar18) goto LAB_00703b88;
            uVar11 = 0x4000000;
          }
          else {
            uVar11 = DAT_00931110 * 4;
            __addr = (undefined8 *)(DAT_00931110 * -4 & (ulong)plVar16);
            piVar18 = (int *)*__addr;
            if (param_1 != piVar18) {
LAB_00703b88:
                    /* WARNING: Subroutine does not return */
              __malloc_assert("heap->ar_ptr == av","malloc.c",0x124f,"_int_free");
            }
          }
          if (plVar16 == __addr + 6) {
            lVar6 = DAT_009310e8 + 0x20;
            do {
              puVar2 = (undefined8 *)__addr[1];
              lVar13 = puVar2[2] + -0x10;
              uVar7 = (ulong)((int)puVar2 + (int)lVar13 & 0xf);
              plVar12 = (long *)((lVar13 - uVar7) + (long)puVar2);
              if (plVar12[1] != 1) {
                    /* WARNING: Subroutine does not return */
                __malloc_assert("chunksize_nomask (p) == (0 | PREV_INUSE)","arena.c",0x293,
                                "heap_trim");
              }
              plVar12 = (long *)((long)plVar12 - *plVar12);
              lVar13 = (plVar12[1] & 0xfffffffffffffff8U) + uVar7;
              uVar7 = lVar13 + 0x10;
              if (0x3e < lVar13 + 0xfU) {
                    /* WARNING: Subroutine does not return */
                __malloc_assert("new_size > 0 && new_size < (long) (2 * MINSIZE)","arena.c",0x296,
                                "heap_trim");
              }
              if ((plVar12[1] & 1U) == 0) {
                uVar7 = uVar7 + *plVar12;
              }
              if (((long)uVar7 < 1) || (uVar11 <= uVar7)) {
                    /* WARNING: Subroutine does not return */
                __malloc_assert("new_size > 0 && new_size < max_size","arena.c",0x299,"heap_trim");
              }
              if ((uVar11 - puVar2[2]) + uVar7 < (ulong)(lVar6 + __addr[4])) {
                uVar7 = plVar16[1];
                break;
              }
              *(long *)(piVar18 + 0x222) = *(long *)(piVar18 + 0x222) - __addr[2];
              if (aligned_heap_area == (long)__addr + uVar11) {
                aligned_heap_area = 0;
              }
              munmap(__addr,uVar11);
              if ((*(byte *)(plVar12 + 1) & 1) == 0) {
                plVar12 = (long *)((long)plVar12 - *plVar12);
                unlink_chunk_constprop_0(plVar12);
              }
              if (((long)plVar12 + uVar7 & puVar2[4] - 1) != 0) {
                    /* WARNING: Subroutine does not return */
                __malloc_assert("((unsigned long) ((char *) p + new_size) & (heap->pagesize - 1)) == 0"
                                ,"arena.c",0x2a8,"heap_trim");
              }
              if ((long)plVar12 + uVar7 != puVar2[2] + (long)puVar2) {
                    /* WARNING: Subroutine does not return */
                __malloc_assert("((char *) p + new_size) == ((char *) heap + heap->size)","arena.c",
                                0x2aa,"heap_trim");
              }
              *(long **)(piVar18 + 0x18) = plVar12;
              uVar7 = uVar7 | 1;
              plVar12[1] = uVar7;
              __addr = puVar2;
              plVar16 = plVar12;
            } while (plVar12 == puVar2 + 6);
          }
          else {
            uVar7 = plVar16[1];
          }
          uVar4 = __libc_enable_secure;
          uVar7 = uVar7 & 0xfffffffffffffff8;
          if ((((mp_ <= uVar7) && (uVar11 = uVar7 - 0x21, -1 < (long)uVar11)) && (uVar17 < uVar11))
             && ((uVar17 = -__addr[4] & uVar11 - uVar17, uVar17 != 0 &&
                 (lVar6 = __addr[2] - uVar17, 0x2f < lVar6)))) {
            if ((int)may_shrink_heap_12 < 0) {
              may_shrink_heap_12 = __libc_enable_secure;
              if (__libc_enable_secure == 0) {
                iVar5 = __open64_nocancel("/proc/sys/vm/overcommit_memory",0x80000);
                if (-1 < iVar5) {
                  lVar13 = __read_nocancel(iVar5,&local_41,1);
                  may_shrink_heap_12 = uVar4;
                  if (0 < lVar13) {
                    may_shrink_heap_12 = (uint)(local_41 == '2');
                  }
                  __close_nocancel(iVar5);
                }
                if (may_shrink_heap_12 == 0) goto LAB_0070386e;
              }
LAB_00703a51:
              pvVar8 = mmap64((void *)((long)__addr + lVar6),uVar17,0,0x32,-1,0);
              if (pvVar8 == (void *)0xffffffffffffffff) goto LAB_007033fe;
              __addr[3] = lVar6;
            }
            else {
              if (may_shrink_heap_12 != 0) goto LAB_00703a51;
LAB_0070386e:
              madvise((void *)((long)__addr + lVar6),uVar17,4);
            }
            __addr[2] = lVar6;
            *(ulong *)(piVar18 + 0x222) = *(long *)(piVar18 + 0x222) - uVar17;
            plVar16[1] = uVar7 - uVar17 | 1;
          }
        }
      }
LAB_007033fe:
      if (!bVar19) {
        LOCK();
        iVar5 = *param_1;
        *param_1 = 0;
        UNLOCK();
        if (1 < iVar5) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            __lll_lock_wake_private(param_1);
            return;
          }
          goto LAB_00703aa5;
        }
      }
    }
    else {
      uVar7 = *(ulong *)((long)param_2 + uVar11 + 8);
      if ((uVar7 < 0x11) || (*(ulong *)(param_1 + 0x222) <= (uVar7 & 0xfffffffffffffff8))) {
        if (param_3 != 0) {
LAB_00703561:
                    /* WARNING: Subroutine does not return */
          malloc_printerr("free(): invalid next size (fast)");
        }
        LOCK();
        iVar5 = *param_1;
        if (iVar5 == 0) {
          *param_1 = 1;
        }
        UNLOCK();
        if (iVar5 != 0) {
          __lll_lock_wait_private(param_1);
        }
        uVar7 = *(ulong *)((long)param_2 + uVar11 + 8);
        bVar19 = true;
        if (0x10 < uVar7) {
          bVar19 = *(ulong *)(param_1 + 0x222) <= (uVar7 & 0xfffffffffffffff8);
        }
        LOCK();
        iVar5 = *param_1;
        *param_1 = 0;
        UNLOCK();
        if (1 < iVar5) {
          __lll_lock_wake_private(param_1);
        }
        if (bVar19) goto LAB_00703561;
      }
      if (perturb_byte != 0) {
        uVar7 = (ulong)(perturb_byte & 0xff) * 0x101010101010101;
        param_2[2] = uVar7;
        *(ulong *)((long)param_2 + (uVar11 - 0x10 & 0xffffffff) + 8) = uVar7;
        puVar10 = (ulong *)((ulong)(param_2 + 3) & 0xfffffffffffffff8);
        for (uVar11 = (ulong)((uint)((((int)param_2 + 0x10) -
                                     (int)(ulong *)((ulong)(param_2 + 3) & 0xfffffffffffffff8)) +
                                    (int)(uVar11 - 0x10)) >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar10 = uVar7;
          puVar10 = puVar10 + (ulong)bVar20 * -2 + 1;
        }
      }
      param_1[2] = 1;
      uVar17 = uVar17 >> 4 & 0xfffffff;
      uVar4 = (uint)uVar17;
      lVar6 = (ulong)(uVar4 - 2) + 2;
      puVar10 = *(ulong **)(param_1 + lVar6 * 2);
      if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
        if (param_2 == puVar10) {
LAB_0070348e:
                    /* WARNING: Subroutine does not return */
          malloc_printerr("double free or corruption (fasttop)");
        }
        param_2[2] = (ulong)(param_2 + 2) >> 0xc ^ (ulong)puVar10;
        *(ulong **)(param_1 + lVar6 * 2) = param_2;
      }
      else {
        plVar16 = (long *)(param_1 + uVar17 * 2);
        puVar15 = puVar10;
        do {
          puVar10 = puVar15;
          if (puVar10 == param_2) goto LAB_0070348e;
          param_2[2] = (ulong)puVar10 ^ (ulong)(param_2 + 2) >> 0xc;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            puVar15 = (ulong *)*plVar16;
            if (puVar10 == puVar15) {
              *plVar16 = (long)param_2;
              puVar15 = puVar10;
            }
          }
          else {
            LOCK();
            puVar15 = (ulong *)*plVar16;
            if (puVar10 == puVar15) {
              *plVar16 = (long)param_2;
              puVar15 = puVar10;
            }
            UNLOCK();
          }
        } while (puVar10 != puVar15);
      }
      if (((puVar10 != (ulong *)0x0) && ((param_3 & 1) != 0)) &&
         (uVar4 != ((uint)(puVar10[1] >> 4) & 0xfffffff))) {
                    /* WARNING: Subroutine does not return */
        malloc_printerr("invalid fastbin entry (free)");
      }
    }
  }
  else {
    puVar10 = param_2 + 2;
    if (param_2[3] == tcache_key) {
      lVar6 = *(long *)(in_FS_OFFSET + -0x30);
      puVar15 = *(ulong **)(lVar6 + 0x80 + uVar9 * 8);
      if (puVar15 != (ulong *)0x0) {
        do {
          if (DAT_00931158 == uVar7) {
                    /* WARNING: Subroutine does not return */
            malloc_printerr("free(): too many chunks detected in tcache");
          }
          if (((ulong)puVar15 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            malloc_printerr("free(): unaligned chunk detected in tcache 2");
          }
          if (puVar15 == puVar10) {
                    /* WARNING: Subroutine does not return */
            malloc_printerr("free(): double free detected in tcache 2");
          }
          uVar3 = *puVar15;
          uVar14 = (ulong)puVar15 >> 0xc;
          uVar7 = uVar7 + 1;
          puVar15 = (ulong *)(uVar3 ^ uVar14);
        } while (uVar3 != uVar14);
      }
    }
    uVar1 = *(ushort *)(lVar6 + uVar9 * 2);
    if (DAT_00931158 <= uVar1) goto LAB_00703219;
    param_2[3] = tcache_key;
    param_2[2] = (ulong)puVar10 >> 0xc ^ *(ulong *)(lVar6 + 0x80 + uVar9 * 8);
    *(ulong **)(lVar6 + 0x80 + uVar9 * 8) = puVar10;
    *(ushort *)(lVar6 + uVar9 * 2) = uVar1 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00703aa5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

