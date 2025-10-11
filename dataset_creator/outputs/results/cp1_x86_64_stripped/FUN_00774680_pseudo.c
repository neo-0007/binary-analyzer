
undefined8 FUN_00774680(long *param_1)

{
  uint *puVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar23;
  long *plVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ushort *puVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint *puVar34;
  long in_FS_OFFSET;
  long local_c8;
  undefined8 *local_c0;
  int *local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  uint local_9c;
  int *local_98;
  ulong local_90;
  long *local_88;
  ulong local_80;
  int local_78;
  uint local_74;
  long local_70;
  undefined8 local_68;
  int local_60;
  undefined1 local_58 [16];
  long local_40;
  long *plVar22;
  
  plVar18 = &local_c8;
  plVar20 = &local_c8;
  plVar22 = &local_c8;
  plVar21 = &local_c8;
  plVar24 = &local_c8;
  plVar19 = &local_c8;
  plVar23 = &local_c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = param_1;
  iVar7 = FUN_007745b0(&local_68);
  if (iVar7 < 0) {
    uVar33 = 0xffffffff;
LAB_0077483f:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)plVar20 + -8) = 0x77534f;
      FUN_00771f60();
    }
    return uVar33;
  }
  iVar7 = FUN_00774240(&local_68,0x12);
  if (iVar7 < 0) {
  }
  else {
    local_60 = local_60 + 1;
    iVar7 = FUN_00774240(&local_68,0x16);
    puVar29 = (undefined8 *)local_58._0_8_;
    if (-1 < iVar7) {
      if ((undefined8 *)local_58._0_8_ == (undefined8 *)0x0) {
        uVar33 = 0;
        uVar30 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      }
      else {
        uVar26 = local_68._4_4_;
        lVar25 = 0;
        iVar7 = 0;
        uVar8 = 0;
        puVar15 = (undefined8 *)local_58._0_8_;
        do {
          puVar17 = (uint *)puVar15[1];
          uVar31 = puVar15[2];
          if (puVar17 != (uint *)0x0) {
            do {
              if (((uVar31 < 0x10) || (uVar10 = *puVar17, uVar10 < 0x10)) || (uVar31 < uVar10))
              break;
              if ((puVar17[3] == local_68._4_4_) && (puVar17[2] == *(uint *)(puVar15 + 3))) {
                if ((*(byte *)((long)puVar17 + 6) & 0x10) != 0) goto LAB_00774b63;
                sVar6 = (short)puVar17[1];
                if (sVar6 == 3) break;
                if (sVar6 == 0x10) {
                  puVar34 = puVar17 + 8;
                  for (uVar32 = (ulong)uVar10 - 0x20; 3 < uVar32; uVar32 = uVar32 - uVar12) {
                    uVar4 = (ushort)*puVar34;
                    uVar27 = (uint)uVar4;
                    if ((uVar4 < 4) || (uVar32 < uVar27)) break;
                    if (*(ushort *)((long)puVar34 + 2) == 7) {
                      lVar25 = ((ulong)uVar27 - 4) + lVar25;
                      uVar8 = uVar8 + 1;
                      goto LAB_0077474f;
                    }
                    uVar12 = (ulong)(uVar27 + 3 & 0x1fffc);
                    puVar34 = (uint *)((long)puVar34 + uVar12);
                  }
                  uVar8 = uVar8 + 1;
                }
                else {
                  iVar7 = iVar7 + (uint)(sVar6 == 0x14);
                }
              }
LAB_0077474f:
              uVar32 = (ulong)(uVar10 + 3 & 0xfffffffc);
              uVar31 = uVar31 - uVar32;
              puVar17 = (uint *)((long)puVar17 + uVar32);
            } while( true );
          }
          puVar15 = (undefined8 *)*puVar15;
        } while (puVar15 != (undefined8 *)0x0);
        local_74 = uVar8;
        if (iVar7 + uVar8 == 0) {
          uVar33 = 0;
          uVar30 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        }
        else {
          lVar16 = (ulong)(iVar7 + uVar8) * 0xb8;
          local_c8 = lVar16 + lVar25;
          local_70 = FUN_00711600(1,local_c8);
          if (local_70 == 0) {
            uVar33 = 0xffffffff;
          }
          else {
            local_90 = (ulong)local_74;
            uVar31 = local_90 * 4 + 0x17;
            plVar19 = &local_c8;
            while (plVar22 != (long *)((long)&local_c8 - (uVar31 & 0xfffffffffffff000))) {
              plVar21 = (long *)((long)plVar19 + -0x1000);
              *(undefined8 *)((long)plVar19 + -8) = *(undefined8 *)((long)plVar19 + -8);
              plVar22 = (long *)((long)plVar19 + -0x1000);
              plVar19 = (long *)((long)plVar19 + -0x1000);
            }
            uVar31 = (ulong)((uint)uVar31 & 0xff0);
            lVar25 = -uVar31;
            plVar24 = (long *)((long)plVar21 + lVar25);
            plVar23 = (long *)((long)plVar21 + lVar25);
            if (uVar31 != 0) {
              *(undefined8 *)((long)plVar21 + -8) = *(undefined8 *)((long)plVar21 + -8);
            }
            local_98 = (int *)((ulong)((long)plVar21 + lVar25 + 0xf) & 0xfffffffffffffff0);
            *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774928;
            thunk_FUN_00713720(local_98,0xffffffff);
            local_80 = lVar16 + local_70;
            local_78 = 0;
            local_c0 = puVar29;
            do {
              puVar17 = (uint *)puVar29[1];
              uVar31 = puVar29[2];
              if ((puVar17 != (uint *)0x0) && (0xf < uVar31)) {
LAB_00774996:
                uVar8 = *puVar17;
                if ((0xf < uVar8) && (uVar32 = (ulong)uVar8, uVar32 <= uVar31)) {
                  if ((uVar26 != puVar17[3]) || (puVar17[2] != *(uint *)(puVar29 + 3)))
                  goto LAB_00774980;
                  sVar6 = (short)puVar17[1];
                  if (sVar6 != 3) {
                    if (sVar6 != 0x10) {
                      if (sVar6 == 0x14) {
                        uVar32 = uVar32 - 0x18;
                        puVar34 = puVar17 + 6;
                        if ((int)local_74 < 1) goto LAB_00774b53;
                        local_b8 = local_98;
                        uVar12 = 0;
                        piVar13 = local_98;
                        while (*piVar13 != -1) {
                          if (puVar17[5] - 1 == *piVar13) {
                            lVar16 = uVar12 * 0xb8 + local_70;
                            goto LAB_00774d31;
                          }
                          uVar12 = uVar12 + 1;
                          piVar13 = piVar13 + 1;
                          if (local_90 == uVar12) goto LAB_00774b53;
                        }
                        *piVar13 = puVar17[5] - 1;
                        lVar16 = local_70 + uVar12 * 0xb8;
                        if ((int)uVar12 != 0) {
                          *(long *)(local_70 + -0xb8 + uVar12 * 0xb8) = lVar16;
                        }
LAB_00774d31:
                        lVar14 = (long)(int)(local_78 + local_74) * 0xb8;
                        lVar11 = local_70 + lVar14;
                        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar16 + 0x10);
                        if (0 < (int)(local_78 + local_74)) {
                          *(long *)(local_70 + -0xb8 + lVar14) = lVar11;
                        }
                        local_78 = local_78 + 1;
                        while (3 < uVar32) {
                          uVar4 = (ushort)*puVar34;
                          uVar8 = (uint)uVar4;
                          local_b0 = uVar31;
                          local_a8 = puVar29;
                          local_9c = uVar26;
                          if ((uVar4 < 4) || (uVar12 = (ulong)uVar4, uVar32 < uVar12)) break;
                          uVar4 = *(ushort *)((long)puVar34 + 2);
                          uVar31 = uVar12 - 4;
                          if (uVar4 == 3) {
                            if (0x11 < uVar12 - 3) {
                    /* WARNING: Subroutine does not return */
                              *(code **)((long)plVar21 + lVar25 + -8) = FUN_0040512b;
                              FUN_00404713(3,puVar34 + 1);
                            }
                            *(long *)(lVar11 + 8) = lVar11 + 0xa4;
                            *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774f7b;
                            puVar9 = (undefined1 *)thunk_FUN_00713820(lVar11 + 0xa4);
                            *puVar9 = 0;
                            goto LAB_00774e38;
                          }
                          if (uVar4 < 4) {
                            if (uVar4 == 1) {
                              if (*(long *)(lVar11 + 0x18) == 0) {
                                puVar28 = (ushort *)(lVar11 + 0x38);
                                *(ushort **)(lVar11 + 0x18) = puVar28;
                              }
                              else {
                                puVar28 = (ushort *)(lVar11 + 0x80);
                                *(ushort **)(lVar11 + 0x28) = puVar28;
                              }
                              bVar3 = (byte)puVar17[4];
                              *puVar28 = (ushort)bVar3;
                              if (bVar3 == 2) {
                                if (uVar31 == 4) {
                                  *(uint *)(puVar28 + 2) = puVar34[1];
                                  uVar8 = (uint)(ushort)*puVar34;
                                }
                              }
                              else if (bVar3 == 10) {
                                if (uVar31 == 0x10) {
                                  uVar33 = *(undefined8 *)(puVar34 + 3);
                                  *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(puVar34 + 1);
                                  *(undefined8 *)(puVar28 + 8) = uVar33;
                                  if (((puVar34[1] & 0xc0ff) != 0x80fe) &&
                                     (((char)puVar34[1] != -1 ||
                                      ((*(byte *)((long)puVar34 + 5) & 0xf) != 2))))
                                  goto LAB_00774e38;
                                  *(uint *)(puVar28 + 0xc) = puVar17[5];
                                  uVar8 = (uint)(ushort)*puVar34;
                                }
                              }
                              else if (uVar31 < 0x25) {
                                *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774ed8;
                                thunk_FUN_00713a50(puVar28 + 1);
                                uVar8 = (uint)(ushort)*puVar34;
                              }
                            }
                            else if (uVar4 == 2) {
                              if (*(long *)(lVar11 + 0x18) != 0) {
                                uVar33 = *(undefined8 *)(lVar11 + 0x38);
                                *(undefined1 (*) [16])(lVar11 + 0x38) = (undefined1  [16])0x0;
                                *(undefined4 *)(lVar11 + 0xa0) = *(undefined4 *)(lVar11 + 0x58);
                                *(long *)(lVar11 + 0x28) = lVar11 + 0x80;
                                *(undefined8 *)(lVar11 + 0x80) = uVar33;
                                *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar11 + 0x40);
                                *(undefined8 *)(lVar11 + 0x90) = *(undefined8 *)(lVar11 + 0x48);
                                *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(lVar11 + 0x50);
                                *(undefined4 *)(lVar11 + 0x58) = 0;
                                *(undefined1 (*) [16])(lVar11 + 0x48) = (undefined1  [16])0x0;
                              }
                              *(long *)(lVar11 + 0x18) = lVar11 + 0x38;
                              bVar3 = (byte)puVar17[4];
                              *(ushort *)(lVar11 + 0x38) = (ushort)bVar3;
                              if (bVar3 == 2) {
                                if (uVar31 == 4) {
                                  *(uint *)(lVar11 + 0x3c) = puVar34[1];
                                  uVar8 = (uint)(ushort)*puVar34;
                                  goto LAB_00774e3b;
                                }
                              }
                              else if (bVar3 == 10) {
                                if (uVar31 == 0x10) {
                                  uVar33 = *(undefined8 *)(puVar34 + 3);
                                  *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(puVar34 + 1);
                                  *(undefined8 *)(lVar11 + 0x48) = uVar33;
                                  if (((puVar34[1] & 0xc0ff) == 0x80fe) ||
                                     (((char)puVar34[1] == -1 &&
                                      ((*(byte *)((long)puVar34 + 5) & 0xf) == 2)))) {
                                    *(uint *)(lVar11 + 0x50) = puVar17[5];
                                    uVar8 = (uint)(ushort)*puVar34;
                                    goto LAB_00774e3b;
                                  }
                                }
                              }
                              else if (uVar31 < 0x25) {
                                *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x77522d;
                                thunk_FUN_00713a50(lVar11 + 0x3a);
                                uVar8 = (uint)(ushort)*puVar34;
                                goto LAB_00774e3b;
                              }
                              goto LAB_00774e38;
                            }
                          }
                          else if (uVar4 == 4) {
                            if (*(long *)(lVar11 + 0x28) != 0) {
                              *(undefined1 (*) [16])(lVar11 + 0x80) = (undefined1  [16])0x0;
                              *(undefined4 *)(lVar11 + 0xa0) = 0;
                              *(undefined1 (*) [16])(lVar11 + 0x90) = (undefined1  [16])0x0;
                            }
                            *(long *)(lVar11 + 0x28) = lVar11 + 0x80;
                            bVar3 = (byte)puVar17[4];
                            *(ushort *)(lVar11 + 0x80) = (ushort)bVar3;
                            if (bVar3 == 2) {
                              if (uVar31 == 4) {
                                *(uint *)(lVar11 + 0x84) = puVar34[1];
                                uVar8 = (uint)(ushort)*puVar34;
                                goto LAB_00774e3b;
                              }
                            }
                            else if (bVar3 == 10) {
                              if (uVar31 == 0x10) {
                                uVar33 = *(undefined8 *)(puVar34 + 3);
                                *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(puVar34 + 1);
                                *(undefined8 *)(lVar11 + 0x90) = uVar33;
                                if (((puVar34[1] & 0xc0ff) == 0x80fe) ||
                                   (((char)puVar34[1] == -1 &&
                                    ((*(byte *)((long)puVar34 + 5) & 0xf) == 2)))) {
                                  *(uint *)(lVar11 + 0x98) = puVar17[5];
                                  uVar8 = (uint)(ushort)*puVar34;
                                  goto LAB_00774e3b;
                                }
                              }
                            }
                            else if (uVar31 < 0x25) {
                              *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774f50;
                              thunk_FUN_00713a50(lVar11 + 0x82);
                              uVar8 = (uint)(ushort)*puVar34;
                              goto LAB_00774e3b;
                            }
LAB_00774e38:
                            uVar8 = (uint)(ushort)*puVar34;
                          }
LAB_00774e3b:
                          uVar31 = (ulong)(uVar8 + 3 & 0x1fffc);
                          puVar34 = (uint *)((long)puVar34 + uVar31);
                          uVar32 = uVar32 - uVar31;
                          puVar29 = local_a8;
                          uVar31 = local_b0;
                          uVar26 = local_9c;
                        }
                        if (*(long *)(lVar11 + 8) == 0) {
                          uVar32 = 0;
                          piVar13 = local_b8;
                          while (*piVar13 != -1) {
                            if (puVar17[5] - 1 == *piVar13) {
                              lVar16 = uVar32 * 0xb8 + local_70;
                              goto LAB_00775291;
                            }
                            uVar32 = uVar32 + 1;
                            piVar13 = piVar13 + 1;
                            if (local_90 == uVar32) goto LAB_00774b53;
                          }
                          *piVar13 = puVar17[5] - 1;
                          lVar16 = local_70 + uVar32 * 0xb8;
                          if ((int)uVar32 != 0) {
                            *(long *)(local_70 + -0xb8 + uVar32 * 0xb8) = lVar16;
                          }
LAB_00775291:
                          *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar16 + 8);
                        }
                        if (((*(short **)(lVar11 + 0x18) != (short *)0x0) &&
                            (sVar6 = **(short **)(lVar11 + 0x18), sVar6 != 0x11)) && (sVar6 != 0)) {
                          *(long *)(lVar11 + 0x20) = lVar11 + 0x5c;
                          if (sVar6 == 2) {
                            puVar15 = (undefined8 *)(lVar11 + 0x60);
                            uVar8 = 0x20;
                          }
                          else {
                            if (sVar6 != 10) {
                              *(short *)(lVar11 + 0x5c) = sVar6;
                              uVar8 = *puVar17;
                              goto LAB_00774980;
                            }
                            puVar15 = (undefined8 *)(lVar11 + 100);
                            uVar8 = 0x80;
                          }
                          *(short *)(lVar11 + 0x5c) = sVar6;
                          uVar10 = (uint)*(byte *)((long)puVar17 + 0x11);
                          if (uVar8 < *(byte *)((long)puVar17 + 0x11)) {
                            uVar10 = uVar8;
                          }
                          uVar8 = uVar10 >> 3;
                          if (uVar8 != 0) {
                            uVar32 = (ulong)uVar8;
                            if (uVar8 < 8) {
                              if ((uVar8 & 4) == 0) {
                                if ((uVar8 != 0) &&
                                   (*(undefined1 *)puVar15 = 0xff, (uVar8 & 2) != 0)) {
                                  *(undefined2 *)((long)puVar15 + (uVar32 - 2)) = 0xffff;
                                }
                              }
                              else {
                                *(undefined4 *)puVar15 = 0xffffffff;
                                *(undefined4 *)((long)puVar15 + (uVar32 - 4)) = 0xffffffff;
                              }
                            }
                            else {
                              *puVar15 = 0xffffffffffffffff;
                              *(undefined8 *)((long)puVar15 + (uVar32 - 8)) = 0xffffffffffffffff;
                              uVar8 = uVar8 + ((int)puVar15 -
                                              (int)((ulong)(puVar15 + 1) & 0xfffffffffffffff8)) &
                                      0xfffffff8;
                              if (7 < uVar8) {
                                uVar27 = 0;
                                do {
                                  uVar12 = (ulong)uVar27;
                                  uVar27 = uVar27 + 8;
                                  *(undefined8 *)
                                   (((ulong)(puVar15 + 1) & 0xfffffffffffffff8) + uVar12) =
                                       0xffffffffffffffff;
                                } while (uVar27 < uVar8);
                              }
                            }
                            puVar15 = (undefined8 *)((long)puVar15 + uVar32);
                          }
                          if ((uVar10 & 7) != 0) {
                            *(char *)puVar15 = (char)(0xff << (8U - (char)(uVar10 & 7) & 0x1f));
                          }
                        }
                        uVar8 = *puVar17;
                      }
                      goto LAB_00774980;
                    }
                    puVar34 = puVar17 + 8;
                    uVar32 = uVar32 - 0x20;
                    if (0 < (int)local_74) {
                      uVar12 = 0;
                      piVar13 = local_98;
                      while (*piVar13 != -1) {
                        if (puVar17[5] - 1 == *piVar13) {
                          lVar16 = local_70 + uVar12 * 0xb8;
                          goto LAB_00774a41;
                        }
                        uVar12 = uVar12 + 1;
                        piVar13 = piVar13 + 1;
                        if (local_90 == uVar12) goto LAB_00774b53;
                      }
                      *piVar13 = puVar17[5] - 1;
                      lVar16 = local_70 + uVar12 * 0xb8;
                      if ((int)uVar12 != 0) {
                        *(long *)(local_70 + -0xb8 + uVar12 * 0xb8) = lVar16;
                      }
LAB_00774a41:
                      local_b8 = (int *)(lVar16 + 0xa4);
                      *(uint *)(lVar16 + 0x10) = puVar17[6];
                      uVar12 = local_80;
                      if (3 < uVar32) {
                        do {
                          local_9c = uVar26;
                          local_a8 = puVar29;
                          local_b0 = uVar31;
                          uVar4 = (ushort)*puVar34;
                          uVar26 = (uint)uVar4;
                          if ((uVar4 < 4) || (uVar31 = (ulong)uVar4, uVar32 < uVar31)) break;
                          uVar4 = *(ushort *)((long)puVar34 + 2);
                          puVar1 = puVar34 + 1;
                          uVar2 = uVar31 - 4;
                          if (uVar4 == 3) {
                            if (uVar31 - 3 < 0x12) {
                              *(int **)(lVar16 + 8) = local_b8;
                              *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774c7d;
                              puVar9 = (undefined1 *)thunk_FUN_00713820(local_b8,puVar1);
                              *puVar9 = 0;
                              uVar26 = (uint)(ushort)*puVar34;
                            }
                          }
                          else if (uVar4 < 4) {
                            if (uVar4 == 1) {
                              if (uVar2 < 0x25) {
                                *(undefined2 *)(lVar16 + 0x38) = 0x11;
                                *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774b17;
                                local_80 = uVar2;
                                thunk_FUN_00713a50(lVar16 + 0x44,puVar1);
                                *(uint *)(lVar16 + 0x3c) = puVar17[5];
                                uVar5 = *(undefined2 *)((long)puVar17 + 0x12);
                                *(char *)(lVar16 + 0x43) = (char)local_80;
                                *(undefined2 *)(lVar16 + 0x40) = uVar5;
                                *(long *)(lVar16 + 0x18) = lVar16 + 0x38;
                                uVar26 = (uint)(ushort)*puVar34;
                              }
                            }
                            else if ((uVar4 == 2) && (uVar2 < 0x25)) {
                              *(undefined2 *)(lVar16 + 0x80) = 0x11;
                              *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x775078;
                              local_80 = uVar2;
                              thunk_FUN_00713a50(lVar16 + 0x8c,puVar1);
                              *(uint *)(lVar16 + 0x84) = puVar17[5];
                              uVar5 = *(undefined2 *)((long)puVar17 + 0x12);
                              *(char *)(lVar16 + 0x8b) = (char)local_80;
                              *(undefined2 *)(lVar16 + 0x88) = uVar5;
                              *(long *)(lVar16 + 0x28) = lVar16 + 0x80;
                              uVar26 = (uint)(ushort)*puVar34;
                            }
                          }
                          else if (uVar4 == 7) {
                            *(ulong *)(lVar16 + 0x30) = uVar12;
                            local_80 = uVar12 + uVar2;
                            *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774bb3;
                            thunk_FUN_00713a50(uVar12,puVar1);
                            uVar26 = (uint)(ushort)*puVar34;
                            uVar12 = local_80;
                          }
                          uVar31 = (ulong)(uVar26 + 3 & 0x1fffc);
                          uVar32 = uVar32 - uVar31;
                          puVar34 = (uint *)((long)puVar34 + uVar31);
                          uVar31 = local_b0;
                          puVar29 = local_a8;
                          uVar26 = local_9c;
                        } while (3 < uVar32);
                        uVar8 = *puVar17;
                        puVar29 = local_a8;
                        uVar31 = local_b0;
                        local_80 = uVar12;
                        uVar26 = local_9c;
                      }
                      goto LAB_00774980;
                    }
LAB_00774b53:
                    puVar29 = local_c0;
                    *(undefined8 *)((long)plVar21 + lVar25 + -8) = 0x774b63;
                    FUN_007104f0(local_70);
LAB_00774b63:
                    uVar33 = 0xfffffff5;
                    uVar30 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    plVar18 = plVar23;
                    goto LAB_00774820;
                  }
                }
              }
LAB_00774bc3:
              puVar29 = (undefined8 *)*puVar29;
            } while (puVar29 != (undefined8 *)0x0);
            if ((ulong)(local_c8 + local_70) < local_80) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)((long)plVar21 + lVar25 + -8) = &UNK_0077536e;
              FUN_006e2220("ifa_data_ptr <= (char *) &ifas[newlink + newaddr] + ifa_data_size",
                           "../sysdeps/unix/sysv/linux/ifaddrs.c",800,"getifaddrs_internal");
            }
            if ((local_78 != 0) && (local_74 != 0)) {
              uVar31 = 0;
              do {
                if (local_98[uVar31] == -1) {
                  *(ulong *)(local_70 + (ulong)((int)uVar31 - 1) * 0xb8) =
                       local_90 * 0xb8 + local_70;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 != local_90);
            }
            uVar33 = 0;
            *local_88 = local_70;
            puVar29 = local_c0;
          }
          uVar30 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          plVar18 = plVar24;
        }
LAB_00774820:
        do {
          puVar15 = (undefined8 *)*puVar29;
          *(undefined8 *)((long)plVar18 + -8) = 0x77482c;
          FUN_007104f0(puVar29);
          plVar19 = plVar18;
joined_r0x00774818:
          plVar18 = plVar19;
          puVar29 = puVar15;
        } while (puVar15 != (undefined8 *)0x0);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar30;
      syscall();
      plVar20 = plVar19;
      goto LAB_0077483f;
    }
  }
  uVar33 = 0xffffffff;
  uVar30 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  puVar15 = (undefined8 *)local_58._0_8_;
  plVar19 = &local_c8;
  goto joined_r0x00774818;
LAB_00774980:
  uVar32 = (ulong)(uVar8 + 3 & 0xfffffffc);
  uVar31 = uVar31 - uVar32;
  puVar17 = (uint *)((long)puVar17 + uVar32);
  if (uVar31 < 0x10) goto LAB_00774bc3;
  goto LAB_00774996;
}

