
/* WARNING: Instruction at (ram,0x0070ce89) overlaps instruction at (ram,0x0070ce88)
    */

void FUN_0070cb80(int *param_1,ulong *param_2,uint param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
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
  uVar10 = uVar17 & 0xfffffffffffffff8;
  if (((ulong *)-uVar10 < param_2) || (((ulong)param_2 & 0xf) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bdd0("free(): invalid pointer");
  }
  if ((uVar10 < 0x20) || (uVar7 = (ulong)((uint)uVar17 & 8), (uVar17 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bdd0("free(): invalid size");
  }
  lVar6 = *(long *)(in_FS_OFFSET + -0x30);
  if ((lVar6 == 0) || (uVar8 = uVar10 - 0x11 >> 4, DAT_0093e128 <= uVar8)) {
LAB_0070cc29:
    if (DAT_0094a9c0 < uVar10) {
      if ((param_2[1] & 2) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          FUN_0070c050(param_2);
          return;
        }
        goto LAB_0070d4b5;
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
          FUN_00709590(param_1);
        }
      }
      puVar9 = *(ulong **)(param_1 + 0x18);
      uVar17 = (long)param_2 + uVar10;
      if (puVar9 == param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("double free or corruption (top)");
      }
      if (((*(byte *)(param_1 + 1) & 2) == 0) &&
         ((long)puVar9 + (puVar9[1] & 0xfffffffffffffff8) <= uVar17)) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("double free or corruption (out)");
      }
      uVar7 = *(ulong *)(uVar17 + 8);
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("double free or corruption (!prev)");
      }
      uVar8 = uVar7 & 0xfffffffffffffff8;
      if ((uVar7 < 0x11) || (*(ulong *)(param_1 + 0x222) <= uVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("free(): invalid next size (normal)");
      }
      if (DAT_0094a9bc != 0) {
        thunk_FUN_00713720(param_2 + 2,DAT_0094a9bc,uVar10 - 0x10);
      }
      if ((param_2[1] & 1) == 0) {
        uVar7 = *param_2;
        param_2 = (ulong *)((long)param_2 - uVar7);
        uVar10 = uVar10 + uVar7;
        if ((param_2[1] & 0xfffffffffffffff8) != uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("corrupted size vs. prev_size while consolidating");
        }
        FUN_0070c8e0(param_2);
      }
      if (*(ulong *)(param_1 + 0x18) == uVar17) {
        uVar10 = uVar10 + uVar8;
        param_2[1] = uVar10 | 1;
        *(ulong **)(param_1 + 0x18) = param_2;
      }
      else {
        if ((*(byte *)(uVar17 + 8 + uVar8) & 1) == 0) {
          uVar10 = uVar10 + uVar8;
          FUN_0070c8e0(uVar17);
        }
        else {
          *(ulong *)(uVar17 + 8) = *(ulong *)(uVar17 + 8) & 0xfffffffffffffffe;
        }
        uVar17 = *(ulong *)(param_1 + 0x1c);
        if (*(int **)(uVar17 + 0x18) != param_1 + 0x18) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("free(): corrupted unsorted chunks");
        }
        param_2[2] = uVar17;
        param_2[3] = (ulong)(param_1 + 0x18);
        if (0x3ff < uVar10) {
          *(undefined1 (*) [16])(param_2 + 4) = (undefined1  [16])0x0;
        }
        *(ulong **)(param_1 + 0x1c) = param_2;
        *(ulong **)(uVar17 + 0x18) = param_2;
        param_2[1] = uVar10 | 1;
        *(ulong *)((long)param_2 + uVar10) = uVar10;
      }
      if (0xffff < uVar10) {
        if (param_1[2] != 0) {
          FUN_0070c9c0(param_1);
        }
        uVar17 = DAT_0093e0c8;
        plVar16 = *(long **)(param_1 + 0x18);
        if (param_1 == &DAT_0093e160) {
          if (DAT_0093e0c0 <= (plVar16[1] & 0xfffffffffffffff8U)) {
            FUN_0070c800(DAT_0093e0c8);
          }
        }
        else {
          if (DAT_0093e0f0 == 0) {
            puVar11 = (undefined8 *)((ulong)plVar16 & 0xfffffffffc000000);
            piVar18 = (int *)*puVar11;
            if (param_1 != piVar18) goto LAB_0070d598;
            uVar10 = 0x4000000;
          }
          else {
            uVar10 = DAT_0093e0f0 * 4;
            puVar11 = (undefined8 *)(DAT_0093e0f0 * -4 & (ulong)plVar16);
            piVar18 = (int *)*puVar11;
            if (param_1 != piVar18) {
LAB_0070d598:
                    /* WARNING: Subroutine does not return */
              FUN_0070bf60("heap->ar_ptr == av","malloc.c",0x124f,"_int_free");
            }
          }
          if (plVar16 == puVar11 + 6) {
            lVar6 = DAT_0093e0c8 + 0x20;
            do {
              puVar2 = (undefined8 *)puVar11[1];
              lVar13 = puVar2[2] + -0x10;
              uVar7 = (ulong)((int)puVar2 + (int)lVar13 & 0xf);
              plVar12 = (long *)((lVar13 - uVar7) + (long)puVar2);
              if (plVar12[1] != 1) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("chunksize_nomask (p) == (0 | PREV_INUSE)","arena.c",0x293,"heap_trim")
                ;
              }
              plVar12 = (long *)((long)plVar12 - *plVar12);
              lVar13 = (plVar12[1] & 0xfffffffffffffff8U) + uVar7;
              uVar7 = lVar13 + 0x10;
              if (0x3e < lVar13 + 0xfU) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("new_size > 0 && new_size < (long) (2 * MINSIZE)","arena.c",0x296,
                             "heap_trim");
              }
              if ((plVar12[1] & 1U) == 0) {
                uVar7 = uVar7 + *plVar12;
              }
              if (((long)uVar7 < 1) || (uVar10 <= uVar7)) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("new_size > 0 && new_size < max_size","arena.c",0x299,"heap_trim");
              }
              if ((uVar10 - puVar2[2]) + uVar7 < (ulong)(lVar6 + puVar11[4])) {
                uVar7 = plVar16[1];
                break;
              }
              *(long *)(piVar18 + 0x222) = *(long *)(piVar18 + 0x222) - puVar11[2];
              if (DAT_0094a9a0 == (long)puVar11 + uVar10) {
                DAT_0094a9a0 = 0;
              }
              FUN_0076f080(puVar11,uVar10);
              if ((*(byte *)(plVar12 + 1) & 1) == 0) {
                plVar12 = (long *)((long)plVar12 - *plVar12);
                FUN_0070c8e0(plVar12);
              }
              if (((long)plVar12 + uVar7 & puVar2[4] - 1) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("((unsigned long) ((char *) p + new_size) & (heap->pagesize - 1)) == 0"
                             ,"arena.c",0x2a8,"heap_trim");
              }
              if ((long)plVar12 + uVar7 != puVar2[2] + (long)puVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("((char *) p + new_size) == ((char *) heap + heap->size)","arena.c",
                             0x2aa,"heap_trim");
              }
              *(long **)(piVar18 + 0x18) = plVar12;
              uVar7 = uVar7 | 1;
              plVar12[1] = uVar7;
              puVar11 = puVar2;
              plVar16 = plVar12;
            } while (plVar12 == puVar2 + 6);
          }
          else {
            uVar7 = plVar16[1];
          }
          uVar4 = DAT_0093ae30;
          uVar7 = uVar7 & 0xfffffffffffffff8;
          if ((((DAT_0093e0c0 <= uVar7) && (uVar10 = uVar7 - 0x21, -1 < (long)uVar10)) &&
              (uVar17 < uVar10)) &&
             ((uVar17 = -puVar11[4] & uVar10 - uVar17, uVar17 != 0 &&
              (lVar6 = puVar11[2] - uVar17, 0x2f < lVar6)))) {
            if ((int)DAT_0093e0a0 < 0) {
              DAT_0093e0a0 = DAT_0093ae30;
              if (DAT_0093ae30 == 0) {
                iVar5 = FUN_0076e620("/proc/sys/vm/overcommit_memory",0x80000);
                if (-1 < iVar5) {
                  lVar13 = FUN_0076e770(iVar5,&local_41,1);
                  DAT_0093e0a0 = uVar4;
                  if (0 < lVar13) {
                    DAT_0093e0a0 = (uint)(local_41 == '2');
                  }
                  FUN_0076e4b0(iVar5);
                }
                if (DAT_0093e0a0 == 0) goto LAB_0070d27e;
              }
LAB_0070d461:
              lVar13 = FUN_0076f020((long)puVar11 + lVar6,uVar17,0,0x32,0xffffffff,0);
              if (lVar13 == -1) goto LAB_0070ce0e;
              puVar11[3] = lVar6;
            }
            else {
              if (DAT_0093e0a0 != 0) goto LAB_0070d461;
LAB_0070d27e:
              FUN_0076f0e0((long)puVar11 + lVar6,uVar17,4);
            }
            puVar11[2] = lVar6;
            *(ulong *)(piVar18 + 0x222) = *(long *)(piVar18 + 0x222) - uVar17;
            plVar16[1] = uVar7 - uVar17 | 1;
          }
        }
      }
LAB_0070ce0e:
      if (!bVar19) {
        LOCK();
        iVar5 = *param_1;
        *param_1 = 0;
        UNLOCK();
        if (1 < iVar5) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            FUN_00709660(param_1);
            return;
          }
          goto LAB_0070d4b5;
        }
      }
    }
    else {
      uVar7 = *(ulong *)((long)param_2 + uVar10 + 8);
      if ((uVar7 < 0x11) || (*(ulong *)(param_1 + 0x222) <= (uVar7 & 0xfffffffffffffff8))) {
        if (param_3 != 0) {
LAB_0070cf71:
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("free(): invalid next size (fast)");
        }
        LOCK();
        iVar5 = *param_1;
        if (iVar5 == 0) {
          *param_1 = 1;
        }
        UNLOCK();
        if (iVar5 != 0) {
          FUN_00709590(param_1);
        }
        uVar7 = *(ulong *)((long)param_2 + uVar10 + 8);
        bVar19 = true;
        if (0x10 < uVar7) {
          bVar19 = *(ulong *)(param_1 + 0x222) <= (uVar7 & 0xfffffffffffffff8);
        }
        LOCK();
        iVar5 = *param_1;
        *param_1 = 0;
        UNLOCK();
        if (1 < iVar5) {
          FUN_00709660(param_1);
        }
        if (bVar19) goto LAB_0070cf71;
      }
      if (DAT_0094a9bc != 0) {
        uVar7 = (ulong)(DAT_0094a9bc & 0xff) * 0x101010101010101;
        param_2[2] = uVar7;
        *(ulong *)((long)param_2 + (uVar10 - 0x10 & 0xffffffff) + 8) = uVar7;
        puVar9 = (ulong *)((ulong)(param_2 + 3) & 0xfffffffffffffff8);
        for (uVar10 = (ulong)((uint)((((int)param_2 + 0x10) -
                                     (int)(ulong *)((ulong)(param_2 + 3) & 0xfffffffffffffff8)) +
                                    (int)(uVar10 - 0x10)) >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar9 = uVar7;
          puVar9 = puVar9 + (ulong)bVar20 * -2 + 1;
        }
      }
      param_1[2] = 1;
      uVar17 = uVar17 >> 4 & 0xfffffff;
      uVar4 = (uint)uVar17;
      lVar6 = (ulong)(uVar4 - 2) + 2;
      puVar9 = *(ulong **)(param_1 + lVar6 * 2);
      if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
        if (param_2 == puVar9) {
LAB_0070ce9e:
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("double free or corruption (fasttop)");
        }
        param_2[2] = (ulong)(param_2 + 2) >> 0xc ^ (ulong)puVar9;
        *(ulong **)(param_1 + lVar6 * 2) = param_2;
      }
      else {
        plVar16 = (long *)(param_1 + uVar17 * 2);
        puVar15 = puVar9;
        do {
          puVar9 = puVar15;
          if (puVar9 == param_2) goto LAB_0070ce9e;
          param_2[2] = (ulong)puVar9 ^ (ulong)(param_2 + 2) >> 0xc;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            puVar15 = (ulong *)*plVar16;
            if (puVar9 == puVar15) {
              *plVar16 = (long)param_2;
              puVar15 = puVar9;
            }
          }
          else {
            LOCK();
            puVar15 = (ulong *)*plVar16;
            if (puVar9 == puVar15) {
              *plVar16 = (long)param_2;
              puVar15 = puVar9;
            }
            UNLOCK();
          }
        } while (puVar9 != puVar15);
      }
      if (((puVar9 != (ulong *)0x0) && ((param_3 & 1) != 0)) &&
         (uVar4 != ((uint)(puVar9[1] >> 4) & 0xfffffff))) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("invalid fastbin entry (free)");
      }
    }
  }
  else {
    puVar9 = param_2 + 2;
    if (param_2[3] == DAT_0094a998) {
      lVar6 = *(long *)(in_FS_OFFSET + -0x30);
      puVar15 = *(ulong **)(lVar6 + 0x80 + uVar8 * 8);
      if (puVar15 != (ulong *)0x0) {
        do {
          if (DAT_0093e138 == uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bdd0("free(): too many chunks detected in tcache");
          }
          if (((ulong)puVar15 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bdd0("free(): unaligned chunk detected in tcache 2");
          }
          if (puVar15 == puVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bdd0("free(): double free detected in tcache 2");
          }
          uVar3 = *puVar15;
          uVar14 = (ulong)puVar15 >> 0xc;
          uVar7 = uVar7 + 1;
          puVar15 = (ulong *)(uVar3 ^ uVar14);
        } while (uVar3 != uVar14);
      }
    }
    uVar1 = *(ushort *)(lVar6 + uVar8 * 2);
    if (DAT_0093e138 <= uVar1) goto LAB_0070cc29;
    param_2[3] = DAT_0094a998;
    param_2[2] = (ulong)puVar9 >> 0xc ^ *(ulong *)(lVar6 + 0x80 + uVar8 * 8);
    *(ulong **)(lVar6 + 0x80 + uVar8 * 8) = puVar9;
    *(ushort *)(lVar6 + uVar8 * 2) = uVar1 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0070d4b5:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

