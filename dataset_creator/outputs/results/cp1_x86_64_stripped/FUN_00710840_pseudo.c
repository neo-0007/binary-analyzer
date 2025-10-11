
/* WARNING: Removing unreachable block (ram,0x00710b78) */

long * FUN_00710840(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long in_FS_OFFSET;
  
  if (DAT_0094a9a8 == '\0') {
    FUN_0070d5c0();
  }
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      FUN_007104f0(param_1);
      return (long *)0x0;
    }
  }
  else if (param_1 != (long *)0x0) {
    uVar5 = param_1[-1];
    plVar3 = param_1 + -2;
    piVar12 = (int *)0x0;
    uVar11 = uVar5 & 0xfffffffffffffff8;
    if ((uVar5 & 2) == 0) {
      if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
        FUN_0070fa60();
        uVar5 = param_1[-1];
      }
      piVar12 = &DAT_0093e160;
      if ((uVar5 & 4) != 0) {
        uVar8 = DAT_0093e0f0 * -4;
        if (DAT_0093e0f0 == 0) {
          uVar8 = 0xfffffffffc000000;
        }
        piVar12 = *(int **)(uVar8 & (ulong)plVar3);
      }
    }
    if (((long *)-uVar11 < plVar3) || (((ulong)plVar3 & 0xf) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bdd0("realloc(): invalid pointer");
    }
    if (param_2 < 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      return (long *)0x0;
    }
    uVar8 = param_2 + 0x17U & 0xfffffffffffffff0;
    if (param_2 + 0x17U < 0x20) {
      uVar8 = 0x20;
    }
    if ((uVar5 & 2) != 0) {
      lVar2 = param_1[-2];
      uVar5 = (uVar5 & 0xfffffffffffffff8) + lVar2;
      uVar10 = (ulong)param_1 & DAT_0093eb18 - 1U;
      if ((((long)plVar3 - lVar2 | uVar5) & DAT_0093eb18 - 1U) != 0 || (uVar10 - 1 & uVar10) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("mremap_chunk(): invalid pointer");
      }
      uVar10 = DAT_0093eb18 + 7 + lVar2 + uVar8 & -DAT_0093eb18;
      if (uVar5 == uVar10) {
        return param_1;
      }
      uVar6 = FUN_00770970((long)plVar3 - lVar2,uVar5,uVar10,1);
      if (uVar6 != 0xffffffffffffffff) {
        if (DAT_0093e0e8 - 1U < uVar10) {
          uVar7 = DAT_0093eb18 - 1U & uVar6;
          uVar11 = uVar10;
          uVar8 = uVar6;
          if (uVar7 != 0) {
            uVar11 = uVar10 + uVar7;
            uVar8 = -DAT_0093eb18 & uVar6;
          }
          FUN_0076f0e0(uVar8,uVar11,0xe);
        }
        plVar3 = (long *)(uVar6 + lVar2);
        if (((ulong)plVar3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bf60("aligned_OK (chunk2mem (p))","malloc.c",0xc23,"mremap_chunk");
        }
        if (lVar2 != *plVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bf60("prev_size (p) == offset","malloc.c",0xc25,"mremap_chunk");
        }
        plVar3[1] = uVar10 - lVar2 | 2;
        LOCK();
        lVar2 = DAT_0093e110 + (uVar10 - uVar5);
        UNLOCK();
        uVar5 = (uVar10 - uVar5) + DAT_0093e110;
        if (uVar5 <= DAT_0093e118) {
          DAT_0093e110 = lVar2;
          return plVar3 + 2;
        }
        LOCK();
        UNLOCK();
        DAT_0093e110 = lVar2;
        DAT_0093e118 = uVar5;
        return plVar3 + 2;
      }
      if (uVar8 <= uVar11 - 8) {
        return param_1;
      }
      plVar4 = (long *)FUN_007101b0(param_2);
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      thunk_FUN_00713a50(plVar4,param_1,uVar11 - 0x10);
      FUN_0070c050(plVar3);
      return plVar4;
    }
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      plVar3 = (long *)FUN_0070fb80(piVar12,plVar3,uVar11,uVar8);
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((plVar3[-1] & 2U) != 0) {
        return plVar3;
      }
      piVar9 = &DAT_0093e160;
      if ((plVar3[-1] & 4U) != 0) {
        uVar5 = DAT_0093e0f0 * -4;
        if (DAT_0093e0f0 == 0) {
          uVar5 = 0xfffffffffc000000;
        }
        piVar9 = *(int **)(uVar5 & (ulong)(plVar3 + -2));
      }
      if (piVar12 == piVar9) {
        return plVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))"
                   ,"malloc.c",0xd9e,"__libc_realloc");
    }
    LOCK();
    iVar1 = *piVar12;
    if (iVar1 == 0) {
      *piVar12 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      FUN_00709590(piVar12);
    }
    plVar4 = (long *)FUN_0070fb80(piVar12,plVar3,uVar11,uVar8);
    LOCK();
    iVar1 = *piVar12;
    *piVar12 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660(piVar12);
    }
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_007101b0(param_2);
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      thunk_FUN_00713a50(plVar4,param_1,
                         ((param_1[-1] & 0xfffffffffffffff8U) - 0x10) +
                         (ulong)(((uint)((ulong)param_1[-1] >> 1) ^ 1) & 1) * 8);
      FUN_0070cb80(piVar12,plVar3,0);
      return plVar4;
    }
    if ((plVar4[-1] & 2U) != 0) {
      return plVar4;
    }
    piVar9 = &DAT_0093e160;
    if ((plVar4[-1] & 4U) != 0) {
      uVar5 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar5 = 0xfffffffffc000000;
      }
      piVar9 = *(int **)(uVar5 & (ulong)(plVar4 + -2));
    }
    if (piVar12 == piVar9) {
      return plVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))"
                 ,"malloc.c",0xda9,"__libc_realloc");
  }
  plVar3 = (long *)FUN_007101b0(param_2);
  return plVar3;
}

