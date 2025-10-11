
/* WARNING: Instruction at (ram,0x0070eecf) overlaps instruction at (ram,0x0070eece)
    */

ulong * FUN_0070eae0(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ushort uVar31;
  undefined8 *puVar32;
  ulong uVar33;
  uint uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  ulong local_c0;
  ulong local_b8;
  uint local_ac;
  ulong local_78;
  uint local_6c;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  
  if (param_2 < 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return (ulong *)0x0;
  }
  local_68 = param_2 + 0x17;
  if (local_68 < 0x20) {
    if (param_1 != (undefined4 *)0x0) {
      if (DAT_0094a9c0 < 0x20) {
        lVar21 = 0x80;
        uVar34 = 2;
        uVar33 = 0x20;
      }
      else {
        lVar21 = 0x10;
        uVar34 = 2;
        uVar33 = 0x20;
        uVar14 = *(ulong *)(param_1 + 4);
        puVar2 = param_1;
joined_r0x0070ee97:
        if (uVar14 != 0) {
          if ((uVar14 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bdd0("malloc(): unaligned fastbin chunk detected 2");
          }
          puVar17 = (ulong *)(lVar21 + (long)param_1);
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            puVar16 = (ulong *)(uVar14 + 0x10);
            *(ulong *)(puVar2 + 4) = *(ulong *)(uVar14 + 0x10) ^ (ulong)puVar16 >> 0xc;
LAB_0070ed66:
            if (((uint)(*(ulong *)(uVar14 + 8) >> 4) & 0xfffffff) != uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_0070bdd0("malloc(): memory corruption (fast)");
            }
            lVar21 = *(long *)(in_FS_OFFSET + -0x30);
            uVar33 = uVar33 - 0x11 >> 4;
            if (((lVar21 != 0) && (uVar33 < DAT_0093e128)) &&
               (*(ushort *)(lVar21 + uVar33 * 2) < DAT_0093e138)) {
              while (uVar14 = *(ulong *)(puVar2 + 4), uVar14 != 0) {
                if ((uVar14 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0070bdd0("malloc(): unaligned fastbin chunk detected 3");
                }
                if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
                  uVar29 = uVar14 + 0x10;
                  uVar25 = uVar29 >> 0xc;
                  *(ulong *)(puVar2 + 4) = *(ulong *)(uVar14 + 0x10) ^ uVar25;
                }
                else {
                  while( true ) {
                    uVar29 = uVar14 + 0x10;
                    uVar25 = uVar29 >> 0xc;
                    uVar20 = uVar25 ^ *(ulong *)(uVar14 + 0x10);
                    if ((uVar25 != *(ulong *)(uVar14 + 0x10)) && ((uVar20 & 0xf) != 0))
                    goto LAB_0070f450;
                    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
                      uVar15 = *puVar17;
                      if (uVar14 == uVar15) {
                        *puVar17 = uVar20;
                        uVar15 = uVar14;
                      }
                    }
                    else {
                      LOCK();
                      uVar15 = *puVar17;
                      if (uVar14 == uVar15) {
                        *puVar17 = uVar20;
                        uVar15 = uVar14;
                      }
                      UNLOCK();
                    }
                    if (uVar15 == uVar14) break;
                    uVar14 = uVar15;
                    if (uVar15 == 0) goto joined_r0x0070f184;
                  }
                }
                uVar11 = DAT_0094a998;
                *(ulong *)(uVar14 + 0x10) = uVar25 ^ *(ulong *)(lVar21 + (uVar33 + 0x10) * 8);
                *(undefined8 *)(uVar14 + 0x18) = uVar11;
                sVar5 = *(short *)(lVar21 + uVar33 * 2);
                *(ulong *)(lVar21 + (uVar33 + 0x10) * 8) = uVar29;
                uVar31 = sVar5 + 1;
                *(ushort *)(lVar21 + uVar33 * 2) = uVar31;
                if (DAT_0093e138 <= uVar31) break;
              }
            }
            goto joined_r0x0070f184;
          }
          do {
            puVar16 = (ulong *)(uVar14 + 0x10);
            uVar29 = (ulong)puVar16 >> 0xc ^ *(ulong *)(uVar14 + 0x10);
            if (((ulong)puVar16 >> 0xc != *(ulong *)(uVar14 + 0x10)) && ((uVar29 & 0xf) != 0)) {
LAB_0070f450:
                    /* WARNING: Subroutine does not return */
              FUN_0070bdd0("malloc(): unaligned fastbin chunk detected");
            }
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              uVar25 = *puVar17;
              if (uVar14 == uVar25) {
                *puVar17 = uVar29;
                uVar25 = uVar14;
              }
            }
            else {
              LOCK();
              uVar25 = *puVar17;
              if (uVar14 == uVar25) {
                *puVar17 = uVar29;
                uVar25 = uVar14;
              }
              UNLOCK();
            }
            if (uVar25 == uVar14) goto LAB_0070ed66;
            uVar14 = uVar25;
          } while (uVar25 != 0);
        }
        lVar21 = (ulong)(uVar34 * 2 + 0xc) << 3;
      }
LAB_0070eb36:
      lVar6 = *(long *)((long)param_1 + lVar21 + 8);
      lVar1 = (long)param_1 + lVar21 + -0x10;
      if (lVar1 == lVar6) {
        local_68 = uVar33 >> 9;
        local_78 = uVar33 >> 6;
        local_48 = 0x6e;
        local_6c = (int)local_78 + 0x30;
        local_44 = (int)local_68 + 0x5b;
        local_4c = 0x77;
        local_50 = 0x7c;
        local_58 = 0;
        local_60 = 0;
        local_ac = uVar34;
LAB_0070ef65:
        uVar14 = uVar33 - 0x11 >> 4;
        local_b8 = 0;
        if ((*(long *)(in_FS_OFFSET + -0x30) != 0) && (local_b8 = 0, uVar14 < DAT_0093e128)) {
          local_b8 = uVar33;
        }
        puVar2 = param_1 + 0x18;
        local_c0 = 0;
LAB_0070efb3:
        uVar11 = DAT_0094a998;
        uVar25 = DAT_0093e140;
        uVar29 = DAT_0093e138;
        if (*(undefined4 **)(param_1 + 0x1e) != puVar2) {
          bVar35 = DAT_0093e140 != 0;
          iVar27 = 0;
          bVar10 = false;
          lVar21 = *(long *)(in_FS_OFFSET + -0x30);
          puVar22 = *(undefined4 **)(param_1 + 0x1e);
          do {
            while( true ) {
              uVar20 = *(ulong *)(puVar22 + 2);
              uVar15 = uVar20 & 0xfffffffffffffff8;
              puVar17 = (ulong *)((long)puVar22 + uVar15);
              if ((uVar15 < 0x11) || (*(ulong *)(param_1 + 0x222) < uVar15)) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bdd0("malloc(): invalid size (unsorted)");
              }
              uVar9 = puVar17[1];
              if ((uVar9 < 0x10) || (*(ulong *)(param_1 + 0x222) < uVar9)) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bdd0("malloc(): invalid next size (unsorted)");
              }
              if ((*puVar17 & 0xfffffffffffffff8) != uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bdd0("malloc(): mismatching next->prev_size (unsorted)");
              }
              puVar23 = *(undefined4 **)(puVar22 + 6);
              if ((*(undefined4 **)(puVar23 + 4) != puVar22) ||
                 (*(undefined4 **)(puVar22 + 4) != puVar2)) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bdd0("malloc(): unsorted double linked list corrupted");
              }
              if ((uVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bdd0("malloc(): invalid next->prev_inuse (unsorted)");
              }
              if ((((uVar33 < 0x400) && (puVar23 == puVar2)) &&
                  (*(undefined4 **)(param_1 + 0x1a) == puVar22)) && (uVar33 + 0x20 < uVar15)) {
                lVar21 = (long)puVar22 + uVar33;
                uVar15 = uVar15 - uVar33;
                *(long *)(param_1 + 0x1e) = lVar21;
                *(long *)(param_1 + 0x1a) = lVar21;
                *(long *)(param_1 + 0x1c) = lVar21;
                *(undefined4 **)(lVar21 + 0x10) = puVar2;
                *(undefined4 **)(lVar21 + 0x18) = puVar2;
                if (0x3ff < uVar15) {
                  *(undefined1 (*) [16])(lVar21 + 0x20) = (undefined1  [16])0x0;
                }
                puVar16 = (ulong *)(puVar22 + 4);
                *(ulong *)(puVar22 + 2) = (ulong)(param_1 != &DAT_0093e160) << 2 | uVar33 | 1;
                *(ulong *)(lVar21 + 8) = uVar15 | 1;
                *puVar17 = uVar15;
                uVar34 = DAT_0094a9bc;
                goto joined_r0x0070f4ff;
              }
              *(undefined4 **)(param_1 + 0x1e) = puVar23;
              *(undefined4 **)(puVar23 + 4) = puVar2;
              if (uVar15 != uVar33) break;
              puVar17[1] = uVar9 | 1;
              if (param_1 != &DAT_0093e160) {
                *(ulong *)(puVar22 + 2) = *(ulong *)(puVar22 + 2) | 4;
              }
              puVar16 = (ulong *)(puVar22 + 4);
              if ((local_b8 == 0) || (uVar31 = *(ushort *)(lVar21 + uVar14 * 2), uVar29 <= uVar31))
              goto joined_r0x0070f184;
              *(undefined8 *)(puVar22 + 6) = uVar11;
              *(ulong *)(puVar22 + 4) =
                   (ulong)puVar16 >> 0xc ^ *(ulong *)(lVar21 + (uVar14 + 0x10) * 8);
              *(ulong **)(lVar21 + (uVar14 + 0x10) * 8) = puVar16;
              *(ushort *)(lVar21 + uVar14 * 2) = uVar31 + 1;
LAB_0070f14f:
              if (puVar2 == puVar23) {
LAB_0070f110:
                puVar17 = *(ulong **)(lVar21 + (uVar14 + 0x10) * 8);
                if (((ulong)puVar17 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0070bdd0("malloc(): unaligned tcache chunk detected");
                }
                *(ulong *)(lVar21 + (uVar14 + 0x10) * 8) = (ulong)puVar17 >> 0xc ^ *puVar17;
                psVar3 = (short *)(lVar21 + uVar14 * 2);
                *psVar3 = *psVar3 + -1;
                puVar17[1] = 0;
                return puVar17;
              }
              bVar10 = true;
              puVar22 = puVar23;
            }
            if (uVar15 < 0x400) {
              iVar18 = (int)((uVar20 & 0xfffffff8) >> 4);
              puVar30 = *(undefined8 **)(param_1 + (long)(iVar18 * 2 + 0xc) * 2);
              puVar32 = (undefined8 *)((long)(param_1 + (long)(iVar18 * 2 + 0xc) * 2) + -0x10);
            }
            else {
              iVar18 = (int)(uVar20 >> 6) + 0x30;
              if (((0xc3f < uVar15) && (iVar18 = (int)(uVar20 >> 9) + 0x5b, 0x29ff < uVar15)) &&
                 ((iVar18 = (int)(uVar20 >> 0xc) + 0x6e, 0xafff < uVar15 &&
                  (iVar18 = (int)(uVar20 >> 0xf) + 0x77, 0x27fff < uVar15)))) {
                uVar20 = uVar20 >> 0x12;
                if (2 < uVar20) {
                  uVar20 = 2;
                }
                iVar18 = (int)uVar20 + 0x7c;
              }
              puVar32 = (undefined8 *)(param_1 + (long)(iVar18 * 2 + 0xc) * 2);
              puVar26 = (undefined8 *)*puVar32;
              puVar30 = puVar32 + -2;
              if (puVar30 == puVar26) {
                *(undefined4 **)(puVar22 + 8) = puVar22;
                *(undefined4 **)(puVar22 + 10) = puVar22;
                puVar32 = puVar30;
              }
              else {
                puVar32 = (undefined8 *)puVar32[1];
                uVar15 = uVar15 | 1;
                uVar20 = puVar32[1];
                if ((uVar20 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0070bf60("chunk_main_arena (bck->bk)","malloc.c",0x1009,"_int_malloc");
                }
                if (uVar15 < uVar20) {
                  lVar1 = puVar26[5];
                  *(undefined8 **)(puVar22 + 8) = puVar26;
                  *(long *)(puVar22 + 10) = lVar1;
                  *(undefined4 **)(lVar1 + 0x20) = puVar22;
                  puVar26[5] = puVar22;
                }
                else {
                  uVar20 = puVar26[1];
                  if ((uVar20 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0070bf60("chunk_main_arena (fwd)","malloc.c",0x1016,"_int_malloc");
                  }
                  while (uVar15 < uVar20) {
                    puVar26 = (undefined8 *)puVar26[4];
                    uVar20 = puVar26[1];
                    if ((uVar20 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0070bf60("chunk_main_arena (fwd)","malloc.c",0x101a,"_int_malloc");
                    }
                  }
                  if (uVar15 == uVar20) {
                    puVar26 = (undefined8 *)puVar26[2];
                  }
                  else {
                    uVar4 = puVar26[5];
                    *(undefined8 **)(puVar22 + 8) = puVar26;
                    *(undefined8 *)(puVar22 + 10) = uVar4;
                    if (*(undefined8 **)(puVar26[5] + 0x20) != puVar26) {
                    /* WARNING: Subroutine does not return */
                      FUN_0070bdd0("malloc(): largebin double linked list corrupted (nextsize)");
                    }
                    puVar26[5] = puVar22;
                    *(undefined4 **)(*(long *)(puVar22 + 10) + 0x20) = puVar22;
                  }
                  puVar30 = puVar26;
                  puVar32 = (undefined8 *)puVar26[3];
                  if ((undefined8 *)((undefined8 *)puVar26[3])[2] != puVar26) {
                    /* WARNING: Subroutine does not return */
                    FUN_0070bdd0("malloc(): largebin double linked list corrupted (bk)");
                  }
                }
              }
            }
            local_c0 = local_c0 + 1;
            param_1[(long)(iVar18 >> 5) + 0x218] =
                 param_1[(long)(iVar18 >> 5) + 0x218] | 1 << ((byte)iVar18 & 0x1f);
            *(undefined8 **)(puVar22 + 4) = puVar30;
            *(undefined8 **)(puVar22 + 6) = puVar32;
            puVar30[3] = puVar22;
            puVar32[2] = puVar22;
            if (bVar10) {
              if (((uVar25 < local_c0) && (bVar35)) || (iVar27 = iVar27 + 1, 9999 < iVar27))
              goto LAB_0070f110;
              puVar23 = *(undefined4 **)(param_1 + 0x1e);
              goto LAB_0070f14f;
            }
            iVar27 = iVar27 + 1;
          } while ((iVar27 < 10000) &&
                  (puVar22 = *(undefined4 **)(param_1 + 0x1e), puVar22 != puVar2));
        }
        if (uVar33 < 0x400) {
LAB_0070f363:
          puVar22 = param_1 + (ulong)(local_ac * 2 + 0xe) * 2 + -4;
          uVar28 = local_ac + 1 >> 5;
          uVar24 = param_1[(ulong)uVar28 + 0x218];
          uVar12 = 1 << ((byte)(local_ac + 1) & 0x1f);
          do {
            if ((uVar24 < uVar12) || (uVar13 = uVar12, uVar12 == 0)) {
              if (uVar28 == 3) goto LAB_0070f595;
              uVar24 = param_1[(ulong)(uVar28 + 1) + 0x218];
              uVar12 = uVar28 + 1;
              if (uVar24 == 0) {
                if (uVar28 == 2) goto LAB_0070f595;
                uVar24 = param_1[(ulong)(uVar28 + 2) + 0x218];
                uVar12 = uVar28 + 2;
                if (uVar24 == 0) {
                  if ((uVar28 == 1) || (uVar24 = param_1[0x21b], uVar24 == 0)) goto LAB_0070f595;
                  uVar12 = 3;
                }
              }
              uVar28 = uVar12;
              puVar22 = param_1 + (ulong)(uVar28 * 0x40 + 0xc) * 2 + -4;
              uVar13 = 1;
            }
            while ((uVar13 & uVar24) == 0) {
              puVar22 = puVar22 + 4;
              uVar13 = uVar13 * 2;
              if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("bit != 0","malloc.c",0x10bb,"_int_malloc");
              }
            }
            puVar23 = *(undefined4 **)(puVar22 + 6);
            if (puVar22 != puVar23) {
              uVar14 = *(ulong *)(puVar23 + 2) & 0xfffffffffffffff8;
              if (uVar14 < uVar33) {
                    /* WARNING: Subroutine does not return */
                FUN_0070bf60("(unsigned long) (size) >= (unsigned long) (nb)","malloc.c",0x10ce,
                             "_int_malloc");
              }
              uVar29 = uVar14 - uVar33;
              FUN_0070c8e0(puVar23);
              if (uVar29 < 0x20) {
                puVar17 = (ulong *)((long)puVar23 + uVar14 + 8);
                *puVar17 = *puVar17 | 1;
                if (param_1 != &DAT_0093e160) {
                  *(ulong *)(puVar23 + 2) = *(ulong *)(puVar23 + 2) | 4;
                }
              }
              else {
                lVar1 = *(long *)(param_1 + 0x1c);
                lVar21 = (long)puVar23 + uVar33;
                if (*(undefined4 **)(lVar1 + 0x18) != puVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_0070bdd0("malloc(): corrupted unsorted chunks 2");
                }
                *(long *)(lVar21 + 0x10) = lVar1;
                *(undefined4 **)(lVar21 + 0x18) = puVar2;
                *(long *)(param_1 + 0x1c) = lVar21;
                *(long *)(lVar1 + 0x18) = lVar21;
                if (uVar33 < 0x400) {
                  *(long *)(param_1 + 0x1a) = lVar21;
                }
                if (0x3ff < uVar29) {
                  *(undefined1 (*) [16])(lVar21 + 0x20) = (undefined1  [16])0x0;
                }
                *(ulong *)(puVar23 + 2) = (ulong)(param_1 != &DAT_0093e160) << 2 | uVar33 | 1;
                *(ulong *)(lVar21 + 8) = uVar29 | 1;
                *(ulong *)((long)puVar23 + uVar14) = uVar29;
              }
              puVar16 = (ulong *)(puVar23 + 4);
              uVar34 = DAT_0094a9bc;
              goto joined_r0x0070f9bd;
            }
            puVar22 = puVar22 + 4;
            uVar12 = uVar13 * 2;
            uVar24 = uVar24 & ~uVar13;
            param_1[(ulong)uVar28 + 0x218] = uVar24;
          } while( true );
        }
        puVar30 = (undefined8 *)(param_1 + (ulong)(local_ac * 2 + 0xc) * 2);
        puVar32 = (undefined8 *)*puVar30;
        if ((puVar32 == puVar30 + -2) || ((ulong)puVar32[1] < uVar33)) goto LAB_0070f363;
        lVar21 = puVar32[5];
        while( true ) {
          uVar14 = *(ulong *)(lVar21 + 8) & 0xfffffffffffffff8;
          if (uVar33 <= uVar14) break;
          lVar21 = *(long *)(lVar21 + 0x28);
        }
        if ((puVar30[1] != lVar21) &&
           (*(ulong *)(lVar21 + 8) == *(ulong *)(*(long *)(lVar21 + 0x10) + 8))) {
          lVar21 = *(long *)(lVar21 + 0x10);
        }
        FUN_0070c8e0(lVar21);
        uVar29 = uVar14 - uVar33;
        if (uVar29 < 0x20) {
          puVar17 = (ulong *)(lVar21 + 8 + uVar14);
          *puVar17 = *puVar17 | 1;
          if (param_1 != &DAT_0093e160) {
            *(ulong *)(lVar21 + 8) = *(ulong *)(lVar21 + 8) | 4;
          }
        }
        else {
          lVar6 = *(long *)(param_1 + 0x1c);
          lVar1 = lVar21 + uVar33;
          if (*(undefined4 **)(lVar6 + 0x18) != puVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bdd0("malloc(): corrupted unsorted chunks");
          }
          *(long *)(lVar1 + 0x10) = lVar6;
          *(undefined4 **)(lVar1 + 0x18) = puVar2;
          *(long *)(param_1 + 0x1c) = lVar1;
          *(long *)(lVar6 + 0x18) = lVar1;
          if (0x3ff < uVar29) {
            *(undefined1 (*) [16])(lVar1 + 0x20) = (undefined1  [16])0x0;
          }
          *(ulong *)(lVar21 + 8) = (ulong)(param_1 != &DAT_0093e160) << 2 | uVar33 | 1;
          *(ulong *)(lVar1 + 8) = uVar29 | 1;
          *(ulong *)(lVar21 + uVar14) = uVar29;
        }
        puVar16 = (ulong *)(lVar21 + 0x10);
        uVar34 = DAT_0094a9bc;
joined_r0x0070f4ff:
        if (uVar34 == 0) {
          return puVar16;
        }
        goto LAB_0070f505;
      }
      lVar19 = *(long *)(lVar6 + 0x18);
      if (*(long *)(lVar19 + 0x10) != lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("malloc(): smallbin double linked list corrupted");
      }
      puVar17 = (ulong *)(lVar6 + 8 + uVar33);
      *puVar17 = *puVar17 | 1;
      *(long *)((long)param_1 + lVar21 + 8) = lVar19;
      *(long *)(lVar19 + 0x10) = lVar1;
      if (param_1 != &DAT_0093e160) {
        *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) | 4;
      }
      uVar11 = DAT_0094a998;
      uVar14 = DAT_0093e138;
      lVar7 = *(long *)(in_FS_OFFSET + -0x30);
      if ((lVar7 != 0) && (uVar29 = uVar33 - 0x11 >> 4, uVar29 < DAT_0093e128)) {
        uVar31 = *(ushort *)(lVar7 + uVar29 * 2);
        while ((uVar31 < uVar14 && (lVar1 != lVar19))) {
          lVar8 = *(long *)(lVar19 + 0x18);
          puVar17 = (ulong *)(lVar19 + 8 + uVar33);
          *puVar17 = *puVar17 | 1;
          if (param_1 != &DAT_0093e160) {
            *(ulong *)(lVar19 + 8) = *(ulong *)(lVar19 + 8) | 4;
          }
          *(long *)((long)param_1 + lVar21 + 8) = lVar8;
          uVar31 = uVar31 + 1;
          *(long *)(lVar8 + 0x10) = lVar1;
          *(undefined8 *)(lVar19 + 0x18) = uVar11;
          *(ulong *)(lVar19 + 0x10) =
               lVar19 + 0x10U >> 0xc ^ *(ulong *)(lVar7 + (uVar29 + 0x10) * 8);
          *(ulong *)(lVar7 + (uVar29 + 0x10) * 8) = lVar19 + 0x10U;
          *(ushort *)(lVar7 + uVar29 * 2) = uVar31;
          lVar19 = lVar8;
        }
      }
      puVar16 = (ulong *)(lVar6 + 0x10);
      goto joined_r0x0070f184;
    }
    uVar33 = 0x20;
  }
  else {
    uVar33 = local_68 & 0xfffffffffffffff0;
    if (param_1 != (undefined4 *)0x0) {
      uVar34 = (uint)((local_68 & 0xfffffff0) >> 4);
      if (uVar33 <= DAT_0094a9c0) {
        lVar21 = (ulong)(uVar34 - 2) * 8 + 0x10;
        uVar14 = *(ulong *)(param_1 + (ulong)(uVar34 - 2) * 2 + 4);
        puVar2 = param_1 + (ulong)(uVar34 - 2) * 2;
        goto joined_r0x0070ee97;
      }
      if (0x3ff < uVar33) {
        local_60 = local_68 >> 0xc;
        uVar14 = local_68 >> 0x12;
        local_58 = local_68 >> 0xf;
        local_78 = local_68 >> 6;
        local_48 = (int)local_60 + 0x6e;
        local_68 = local_68 >> 9;
        local_4c = (int)local_58 + 0x77;
        if (2 < uVar14) {
          uVar14 = 2;
        }
        local_44 = (int)local_68 + 0x5b;
        local_50 = (int)uVar14 + 0x7c;
        local_6c = (int)local_78 + 0x30;
        local_ac = local_6c;
        if ((((0x30 < local_78) && (local_ac = local_44, 0x14 < local_68)) &&
            (local_ac = local_48, 10 < local_60)) && (local_ac = local_50, local_58 < 5)) {
          local_ac = local_4c;
        }
        if (param_1[2] != 0) {
          FUN_0070c9c0();
        }
        goto LAB_0070ef65;
      }
      lVar21 = (ulong)(uVar34 * 2 - 2) * 8 + 0x70;
      goto LAB_0070eb36;
    }
  }
  puVar16 = (ulong *)FUN_0070e1b0(uVar33,0);
  if (puVar16 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
joined_r0x0070f184:
  if (DAT_0094a9bc != 0) {
    puVar16 = (ulong *)thunk_FUN_00713720(puVar16,DAT_0094a9bc ^ 0xff,param_2);
  }
  return puVar16;
LAB_0070f595:
  lVar21 = *(long *)(param_1 + 0x18);
  uVar29 = *(ulong *)(lVar21 + 8) & 0xfffffffffffffff8;
  if (*(ulong *)(param_1 + 0x222) < uVar29) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bdd0("malloc(): corrupted top size");
  }
  if (uVar33 + 0x20 <= uVar29) {
    *(ulong *)(param_1 + 0x18) = lVar21 + uVar33;
    puVar16 = (ulong *)(lVar21 + 0x10);
    *(ulong *)(lVar21 + 8) = (ulong)(param_1 != &DAT_0093e160) << 2 | uVar33 | 1;
    uVar34 = DAT_0094a9bc;
    *(ulong *)(lVar21 + uVar33 + 8) = uVar29 - uVar33 | 1;
    goto joined_r0x0070f4ff;
  }
  if (param_1[2] == 0) {
    puVar16 = (ulong *)FUN_0070e1b0(uVar33,param_1);
    uVar34 = DAT_0094a9bc;
    if (puVar16 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
joined_r0x0070f9bd:
    DAT_0094a9bc = uVar34;
    if (uVar34 == 0) {
      return puVar16;
    }
LAB_0070f505:
    puVar17 = (ulong *)thunk_FUN_00713720(puVar16,uVar34 ^ 0xff,param_2);
    return puVar17;
  }
  FUN_0070c9c0();
  local_ac = uVar34;
  if ((((0x3ff < uVar33) && (local_ac = local_6c, 0x30 < local_78)) &&
      (local_ac = local_44, 0x14 < local_68)) &&
     ((local_ac = local_48, 10 < local_60 && (local_ac = local_4c, 4 < local_58)))) {
    local_ac = local_50;
  }
  goto LAB_0070efb3;
}

