
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * sysmalloc(ulong param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  size_t __len;
  ulong *puVar12;
  void *__addr;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  char cVar19;
  ulong local_48;
  long local_40;
  
  lVar3 = _dl_pagesize;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (undefined4 *)0x0) || ((DAT_009310f0 <= param_1 && (DAT_0093111c < DAT_00931120)))
     ) {
    if (((DAT_00931110 != 0) &&
        ((DAT_00931110 <= param_1 &&
         (puVar9 = (undefined8 *)sysmalloc_mmap_constprop_0(param_1,DAT_00931110,DAT_00931118),
         puVar9 != (undefined8 *)0xffffffffffffffff)))) ||
       (puVar9 = (undefined8 *)sysmalloc_mmap_constprop_0(param_1,lVar3,0),
       puVar9 != (undefined8 *)0xffffffffffffffff)) goto LAB_00704966;
    if (param_2 == (undefined4 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_00704966;
    }
    cVar19 = '\x01';
  }
  else {
    cVar19 = '\0';
  }
  puVar2 = *(undefined4 **)(param_2 + 0x18);
  uVar16 = *(ulong *)(puVar2 + 2) & 0xfffffffffffffff8;
  puVar15 = (undefined8 *)((long)puVar2 + uVar16);
  if (((uVar16 != 0) || (puVar2 != param_2 + 0x18)) &&
     ((uVar16 < 0x20 ||
      (((*(ulong *)(puVar2 + 2) & 1) == 0 || (((ulong)puVar15 & lVar3 - 1U) != 0)))))) {
                    /* WARNING: Subroutine does not return */
    __malloc_assert("(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)"
                    ,"malloc.c",0xa39,"sysmalloc");
  }
  uVar1 = param_1 + 0x20;
  if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
    __malloc_assert("(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)","malloc.c",0xa3f,
                    "sysmalloc");
  }
  if (param_2 == &main_arena) {
    lVar6 = param_1 + 0x20 + DAT_009310e8;
    if ((DAT_00931184 & 2) == 0) {
      lVar6 = lVar6 - uVar16;
    }
    if (DAT_00931108 == 0) {
      local_48 = lVar6 + -1 + _dl_pagesize & -_dl_pagesize;
    }
    else {
      local_48 = (DAT_00931108 + -1 + __curbrk + lVar6 & -DAT_00931108) - __curbrk;
    }
    if ((long)local_48 < 1) {
LAB_00704bb0:
      if (DAT_00931110 == 0) {
        puVar12 = &local_48;
LAB_00704bc5:
        puVar7 = (undefined8 *)
                 sysmalloc_mmap_fallback_constprop_0(puVar12,param_1,uVar16,lVar3,0x100000,0);
        uVar10 = DAT_00931a08;
        puVar9 = DAT_009311e0;
        if (puVar7 == (undefined8 *)0xffffffffffffffff) goto LAB_007048cb;
      }
      else {
        puVar12 = &local_48;
        puVar7 = (undefined8 *)
                 sysmalloc_mmap_fallback_constprop_0
                           (puVar12,param_1,uVar16,DAT_00931110,DAT_00931110,DAT_00931118,puVar12);
        if (puVar7 == (undefined8 *)0xffffffffffffffff) goto LAB_00704bc5;
      }
      pvVar8 = (void *)((long)puVar7 + local_48);
      bVar18 = pvVar8 == (void *)0x0;
      uVar10 = DAT_00931a08;
      puVar9 = DAT_009311e0;
      if (puVar7 == (undefined8 *)0x0) goto LAB_007048cb;
    }
    else {
      puVar7 = (undefined8 *)0x0;
      if (__always_fail_morecore == '\0') {
        puVar7 = (undefined8 *)sbrk(local_48);
        if ((long)puVar7 - 1U < 0xfffffffffffffffe) {
          if (DAT_00931108 - 1U < local_48) {
            uVar13 = _dl_pagesize - 1U & (ulong)puVar7;
            uVar10 = local_48;
            puVar9 = puVar7;
            if (uVar13 != 0) {
              uVar10 = local_48 + uVar13;
              puVar9 = (undefined8 *)(-_dl_pagesize & (ulong)puVar7);
            }
            madvise(puVar9,uVar10,0xe);
          }
        }
        else {
          puVar7 = (undefined8 *)0x0;
        }
      }
      if (puVar7 == (undefined8 *)0x0) goto LAB_00704bb0;
      bVar18 = true;
      pvVar8 = (void *)0x0;
    }
    puVar9 = DAT_009311e0;
    if (DAT_00931140 == (undefined8 *)0x0) {
      DAT_00931140 = puVar7;
    }
    uVar10 = DAT_00931a08 + local_48;
    DAT_00931a08 = uVar10;
    if ((puVar15 == puVar7) && (bVar18)) {
      *(ulong *)(puVar2 + 2) = local_48 + uVar16 | 1;
    }
    else if ((DAT_00931184 & 2) == 0) {
      if (uVar16 != 0) {
        if (puVar7 < puVar15) {
                    /* WARNING: Subroutine does not return */
          malloc_printerr("break adjusted to free malloc space");
        }
        if (uVar16 != 0) {
          DAT_00931a08 = (long)puVar7 + (uVar10 - (long)puVar15);
        }
      }
      uVar10 = uVar16;
      puVar15 = puVar7;
      if (((ulong)puVar7 & 0xf) != 0) {
        lVar6 = 0x10 - (ulong)((uint)puVar7 & 0xf);
        uVar10 = lVar6 + uVar16;
        puVar15 = (undefined8 *)((long)puVar7 + lVar6);
      }
      lVar6 = local_48 + uVar10 + (long)puVar7;
      uVar13 = (-lVar3 & lVar3 + -1 + lVar6) + (uVar10 - lVar6);
      if ((long)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        __malloc_assert("correction >= 0","malloc.c",0xb18,"sysmalloc");
      }
      uVar10 = DAT_00931a08;
      if (__always_fail_morecore == '\0') {
        pvVar8 = sbrk(uVar13);
        if ((long)pvVar8 - 1U < 0xfffffffffffffffe) {
          uVar17 = uVar13;
          puVar7 = puVar15;
          if (DAT_00931108 - 1U < uVar13) {
            uVar10 = _dl_pagesize - 1U & (ulong)pvVar8;
            __len = uVar13;
            __addr = pvVar8;
            if (uVar10 != 0) {
              __len = uVar13 + uVar10;
              __addr = (void *)(-_dl_pagesize & (ulong)pvVar8);
            }
            madvise(__addr,__len,0xe);
            puVar7 = puVar15;
          }
LAB_00704d96:
          uVar10 = DAT_00931a08;
          puVar9 = DAT_009311e0;
          if (pvVar8 != (void *)0x0) {
            uVar10 = DAT_00931a08 + uVar13;
            goto LAB_00704e61;
          }
        }
        else {
          uVar10 = DAT_00931a08;
          puVar9 = DAT_009311e0;
          if (__always_fail_morecore == '\0') {
            pvVar8 = sbrk(0);
            uVar13 = 0;
            puVar9 = DAT_009311e0;
            uVar10 = DAT_00931a08;
            puVar7 = puVar15;
            goto joined_r0x00704fd9;
          }
        }
      }
    }
    else {
      uVar13 = (ulong)((uint)puVar7 & 0xf);
      if (((ulong)puVar7 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        __malloc_assert("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0","malloc.c",
                        0xb33,"sysmalloc");
      }
      uVar17 = 0;
      if (pvVar8 == (void *)0x0) {
        if (__always_fail_morecore == '\0') {
          pvVar8 = sbrk(0);
          puVar9 = DAT_009311e0;
          uVar10 = DAT_00931a08;
joined_r0x00704fd9:
          uVar17 = 0;
          DAT_009311e0 = puVar9;
          DAT_00931a08 = uVar10;
          if (pvVar8 != (void *)0xffffffffffffffff) goto LAB_00704d96;
        }
      }
      else {
LAB_00704e61:
        DAT_009311e0 = puVar7;
        puVar7[1] = (long)pvVar8 + (uVar17 - (long)puVar7) | 1;
        puVar9 = puVar7;
        DAT_00931a08 = uVar10;
        if (uVar16 != 0) {
          uVar16 = uVar16 - 0x20 & 0xfffffffffffffff0;
          *(ulong *)(puVar2 + 2) = uVar16 | 1;
          *(undefined8 *)((long)puVar2 + uVar16 + 8) = 0x11;
          *(undefined8 *)((long)puVar2 + uVar16 + 0x18) = 0x11;
          if (0x1f < uVar16) {
            _int_free(&main_arena,puVar2,1);
            uVar10 = DAT_00931a08;
            puVar9 = DAT_009311e0;
          }
        }
      }
    }
  }
  else {
    lVar6 = uVar1 - uVar16;
    if (DAT_00931110 == 0) {
      uVar13 = (ulong)puVar2 & 0xfffffffffc000000;
      lVar14 = *(long *)(uVar13 + 0x10);
      lVar11 = DAT_009310e8;
      if ((0 < lVar6) &&
         (uVar10 = (*(long *)(uVar13 + 0x20) + -1 + lVar6 & -*(long *)(uVar13 + 0x20)) + lVar14,
         uVar10 < 0x4000001)) goto LAB_0070488f;
LAB_00704b13:
      puVar9 = (undefined8 *)alloc_new_heap(param_1 + 0x50,lVar11,_dl_pagesize,0x4000);
      if (puVar9 == (undefined8 *)0x0) {
        if ((cVar19 == '\0') &&
           (puVar9 = (undefined8 *)sysmalloc_mmap_constprop_0(param_1,lVar3,0),
           puVar9 != (undefined8 *)0xffffffffffffffff)) goto LAB_00704966;
        uVar10 = *(ulong *)(param_2 + 0x222);
        puVar9 = *(undefined8 **)(param_2 + 0x18);
      }
      else {
LAB_00704b3a:
        lVar3 = puVar9[2];
        uVar17 = uVar16 - 0x20 & 0xfffffffffffffff0;
        *puVar9 = param_2;
        puVar9[1] = uVar13;
        *(undefined8 **)(param_2 + 0x18) = puVar9 + 6;
        uVar10 = *(long *)(param_2 + 0x222) + lVar3;
        *(ulong *)(param_2 + 0x222) = uVar10;
        puVar9[7] = lVar3 - 0x30U | 1;
        uVar16 = uVar17 + 0x10;
        ((ulong *)((long)puVar2 + uVar16))[1] = 1;
        uVar4 = _UNK_008209d8;
        if (uVar17 < 0x20) {
          *(ulong *)(puVar2 + 2) = uVar16 | 1;
          *(ulong *)((long)puVar2 + uVar16) = uVar16;
          puVar9 = puVar9 + 6;
        }
        else {
          puVar9 = (undefined8 *)((long)puVar2 + uVar17 + 8);
          *puVar9 = _DAT_008209d0;
          puVar9[1] = uVar4;
          *(ulong *)(puVar2 + 2) = uVar17 | 5;
          _int_free(param_2,puVar2,1);
          uVar10 = *(ulong *)(param_2 + 0x222);
          puVar9 = *(undefined8 **)(param_2 + 0x18);
        }
      }
    }
    else {
      uVar13 = DAT_00931110 * -4 & (ulong)puVar2;
      lVar14 = *(long *)(uVar13 + 0x10);
      if ((lVar6 < 1) ||
         (uVar10 = (*(long *)(uVar13 + 0x20) + -1 + lVar6 & -*(long *)(uVar13 + 0x20)) + lVar14,
         DAT_00931110 * 4 < uVar10)) {
LAB_00704e0b:
        lVar11 = DAT_009310e8;
        puVar9 = (undefined8 *)alloc_new_heap();
        if (puVar9 == (undefined8 *)0x0) goto LAB_00704b13;
        goto LAB_00704b3a;
      }
LAB_0070488f:
      uVar17 = *(ulong *)(uVar13 + 0x18);
      if (uVar17 < uVar10) {
        iVar5 = mprotect((void *)(uVar17 + uVar13),uVar10 - uVar17,3);
        if (iVar5 != 0) {
          lVar11 = DAT_009310e8;
          if (DAT_00931110 == 0) goto LAB_00704b13;
          goto LAB_00704e0b;
        }
        *(ulong *)(uVar13 + 0x18) = uVar10;
      }
      *(ulong *)(uVar13 + 0x10) = uVar10;
      lVar3 = *(long *)(uVar13 + 0x10);
      puVar9 = *(undefined8 **)(param_2 + 0x18);
      uVar10 = (lVar3 - lVar14) + *(long *)(param_2 + 0x222);
      *(ulong *)(param_2 + 0x222) = uVar10;
      *(ulong *)(puVar2 + 2) = (lVar3 + uVar13) - (long)puVar2 | 1;
    }
  }
LAB_007048cb:
  if (*(ulong *)(param_2 + 0x224) < uVar10) {
    *(ulong *)(param_2 + 0x224) = uVar10;
  }
  uVar16 = puVar9[1];
  if ((uVar16 & 0xfffffffffffffff8) < uVar1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *(ulong *)(param_2 + 0x18) = (long)puVar9 + param_1;
    puVar9[1] = (ulong)(param_2 != &main_arena) << 2 | param_1 | 1;
    *(ulong *)((long)puVar9 + param_1 + 8) = (uVar16 & 0xfffffffffffffff8) - param_1 | 1;
    puVar9 = puVar9 + 2;
  }
LAB_00704966:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

