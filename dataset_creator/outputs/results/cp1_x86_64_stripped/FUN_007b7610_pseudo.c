
undefined8
FUN_007b7610(byte *param_1,ulong param_2,ulong *param_3,long param_4,long *param_5,long *param_6,
            ulong param_7,undefined8 param_8,uint param_9,long *param_10,uint param_11,long param_12
            )

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  char *pcVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  uint *local_b8;
  uint local_b0;
  uint local_68;
  int local_44;
  uint *local_40 [2];
  
  uVar2 = *(uint *)(param_6 + 1);
  lVar3 = *param_6;
  uVar6 = param_11 & 2;
  local_68 = param_11 & 1;
  do {
    plVar18 = *(long **)(*(long *)(lVar3 + param_7 * 8) + 0x28);
    if ((plVar18 != param_10) &&
       (((uVar6 == 0 || ((*(byte *)((long)plVar18 + 0x31c) & 3) != 0)) &&
        ((*(byte *)((long)plVar18 + 0x31e) & 2) == 0)))) {
      if (((byte)DAT_0094b0e4 & 8) != 0) {
        pcVar14 = (char *)plVar18[1];
        if ((*pcVar14 == '\0') && (pcVar14 = *(char **)PTR_PTR_0093adf8, pcVar14 == (char *)0x0)) {
          pcVar14 = "<main program>";
        }
        FUN_00787060("symbol=%s;  lookup in file=%s [%lu]\n",param_1,pcVar14,plVar18[6]);
      }
      uVar13 = *(uint *)((long)plVar18 + 0x2f4);
      if (uVar13 != 0) {
        local_44 = 0;
        local_40[0] = (uint *)0x0;
        lVar21 = *(long *)(plVar18[0xe] + 8);
        lVar8 = 0;
        if ((*(byte *)((long)plVar18 + 0x31e) & 0x20) != 0) {
          lVar8 = *plVar18;
          lVar21 = lVar21 + lVar8;
        }
        lVar8 = lVar8 + *(long *)(plVar18[0xd] + 8);
        if (plVar18[0x60] == 0) {
          uVar9 = (ulong)uVar13;
          if (*param_3 == 0xffffffff) {
            lVar19 = 0;
            uVar22 = (ulong)*param_1;
            if (uVar22 != 0) {
              if (param_1[1] != 0) {
                uVar22 = uVar22 * 0x10 + (ulong)param_1[1];
                if (param_1[2] != 0) {
                  uVar22 = uVar22 * 0x10 + (ulong)param_1[2];
                  if (param_1[3] != 0) {
                    uVar22 = uVar22 * 0x10 + (ulong)param_1[3];
                    if (param_1[4] != 0) {
                      uVar22 = (ulong)param_1[4] + uVar22 * 0x10;
                      uVar13 = (uint)uVar22;
                      pbVar16 = param_1 + 5;
                      bVar5 = param_1[5];
                      while (bVar5 != 0) {
                        pbVar16 = pbVar16 + 1;
                        uVar22 = (ulong)bVar5 + uVar22 * 0x10;
                        uVar22 = (uint)(uVar22 >> 0x18) & 0xf0 ^ uVar22;
                        uVar13 = (uint)uVar22;
                        bVar5 = *pbVar16;
                      }
                      uVar22 = (ulong)(uVar13 & 0xfffffff);
                      lVar19 = (uVar22 % uVar9) * 4;
                      goto LAB_007b7ed5;
                    }
                  }
                }
              }
              lVar19 = (uVar22 % uVar9) * 4;
            }
LAB_007b7ed5:
            *param_3 = uVar22;
          }
          else {
            lVar19 = (*param_3 % uVar9) * 4;
          }
          uVar13 = *(uint *)(plVar18[0x62] + lVar19);
          if (uVar13 != 0) {
            do {
              uVar9 = (ulong)uVar13;
              puVar10 = (uint *)FUN_007b7460(param_1,param_4,param_8,param_9,param_11,
                                             lVar21 + uVar9 * 0x18,uVar9,lVar8,plVar18,local_40,
                                             &local_44);
              if (puVar10 != (uint *)0x0) goto LAB_007b78d0;
              uVar13 = *(uint *)(plVar18[0x61] + uVar9 * 4);
            } while (uVar13 != 0);
            goto LAB_007b7c7f;
          }
        }
        else {
          local_b0 = (uint)(param_2 >> 6);
          uVar9 = *(ulong *)(plVar18[0x60] + (ulong)(local_b0 & *(uint *)(plVar18 + 0x5f)) * 8);
          if ((((uint)(uVar9 >> ((byte)(param_2 >>
                                       ((byte)*(undefined4 *)((long)plVar18 + 0x2fc) & 0x3f)) & 0x3f
                                )) & (uint)(uVar9 >> ((byte)param_2 & 0x3f)) & 1) != 0) &&
             (uVar13 = *(uint *)(plVar18[0x61] + (param_2 % (ulong)uVar13) * 4), uVar13 != 0)) {
            puVar11 = (uint *)(plVar18[0x62] + (ulong)uVar13 * 4);
            do {
              uVar13 = *puVar11;
              if ((uVar13 ^ param_2) >> 1 == 0) {
                uVar9 = (long)puVar11 - plVar18[0x62] >> 2;
                puVar10 = (uint *)FUN_007b7460(param_1,param_4,param_8,param_9,param_11,
                                               lVar21 + (uVar9 & 0xffffffff) * 0x18,uVar9,lVar8,
                                               plVar18,local_40,&local_44);
                if (puVar10 != (uint *)0x0) goto LAB_007b78d0;
                uVar13 = *puVar11;
              }
              puVar11 = puVar11 + 1;
            } while ((uVar13 & 1) == 0);
LAB_007b7c7f:
            if ((local_44 == 1) && (puVar10 = local_40[0], local_40[0] != (uint *)0x0)) {
LAB_007b78d0:
              if (param_12 == 0) {
                if (((((*(byte *)((long)plVar18 + 0x31c) & 3) == 0) && (param_11 == 4)) &&
                    (plVar18[0xf] != 0)) &&
                   ((plVar18[0x10] != 0 && (uVar9 = *(ulong *)(plVar18[0x10] + 8), uVar9 != 0)))) {
                  lVar19 = *(long *)(plVar18[0xf] + 8);
                  if ((*(byte *)((long)plVar18 + 0x31e) & 0x20) != 0) {
                    lVar19 = lVar19 + *plVar18;
                  }
                  uVar9 = uVar9 / 0x18;
                  if ((int)uVar9 != 0) {
                    lVar17 = lVar19 + (uVar9 & 0xffffffff) * 0x18;
                    do {
                      uVar9 = *(ulong *)(lVar19 + 8);
                      uVar22 = uVar9 & 0xffffffff;
                      if ((((int)uVar9 != 7) && (uVar22 != 0x10)) &&
                         ((0x13 < uVar22 - 0x11 &&
                          ((uVar22 == 5 &&
                           (iVar7 = thunk_FUN_00712780((ulong)*(uint *)(lVar21 + (uVar9 >> 0x20) *
                                                                                 0x18) + lVar8,
                                                       param_1), iVar7 == 0)))))) goto LAB_007b772b;
                      lVar19 = lVar19 + 0x18;
                    } while (lVar19 != lVar17);
                  }
                }
                if (1 < (*(byte *)((long)puVar10 + 5) & 3) - 1) {
                  bVar5 = (byte)puVar10[1] >> 4;
                  if (bVar5 == 2) goto LAB_007b7a73;
LAB_007b7911:
                  if (bVar5 == 10) {
                    lVar21 = plVar18[6];
                    lVar19 = lVar21 * 0xa0;
                    lVar3 = lVar19 + 0x93eb88;
                    FUN_0070a340(lVar3);
                    puVar11 = *(uint **)(&DAT_0093ebb0 + lVar19);
                    uVar9 = *(ulong *)(&DAT_0093ebb8 + lVar19);
                    if (puVar11 != (uint *)0x0) {
                      uVar15 = param_2 % uVar9;
                      lVar19 = param_2 % (uVar9 - 2) + 1;
                      uVar22 = uVar15;
                      do {
                        puVar20 = puVar11 + uVar22 * 8;
                        do {
                          if (param_2 != *puVar20) {
                            if (*(long *)(puVar20 + 2) != 0) goto LAB_007b7b79;
                            uVar22 = uVar9;
                            local_b8 = puVar11;
                            if ((ulong)(*(long *)(&DAT_0093ebc0 + lVar21 * 0xa0) << 2) < uVar9 * 3)
                            goto LAB_007b7ce7;
                            uVar22 = FUN_007b9450(uVar9 + 1);
                            local_b8 = (uint *)FUN_00711600(0x20,uVar22);
                            if (local_b8 != (uint *)0x0) {
                              puVar20 = puVar11;
                              if (uVar9 != 0) {
                                do {
                                  lVar19 = *(long *)(puVar20 + 2);
                                  if (lVar19 != 0) {
                                    uVar2 = *puVar20;
                                    uVar4 = *(undefined8 *)(puVar20 + 6);
                                    uVar1 = *(undefined8 *)(puVar20 + 4);
                                    uVar15 = (ulong)uVar2 % uVar22;
                                    lVar17 = (ulong)uVar2 % (uVar22 - 2) + 1;
                                    do {
                                      puVar12 = local_b8 + uVar15 * 8;
                                      do {
                                        if (*(long *)(puVar12 + 2) == 0) {
                                          *puVar12 = uVar2;
                                          *(undefined8 *)(puVar12 + 6) = uVar4;
                                          *(long *)(puVar12 + 2) = lVar19;
                                          *(undefined8 *)(puVar12 + 4) = uVar1;
                                          goto LAB_007b811d;
                                        }
                                        uVar15 = uVar15 + lVar17;
                                        puVar12 = puVar12 + lVar17 * 8;
                                      } while (uVar15 < uVar22);
                                      uVar15 = uVar15 - uVar22;
                                    } while( true );
                                  }
LAB_007b811d:
                                  puVar20 = puVar20 + 8;
                                } while (puVar11 + uVar9 * 8 != puVar20);
                              }
                              lVar19 = lVar21 * 0xa0;
                              (**(code **)(&DAT_0093ebc8 + lVar19))(puVar11);
                              *(ulong *)(&DAT_0093ebb8 + lVar19) = uVar22;
                              *(uint **)(&DAT_0093ebb0 + lVar19) = local_b8;
                              *(code **)(&DAT_0093ebc8 + lVar19) = FUN_007104f0;
                              uVar15 = param_2 % uVar22;
                              lVar19 = param_2 % (uVar22 - 2) + 1;
                              goto LAB_007b7ce7;
                            }
                            goto LAB_007b82a6;
                          }
                          iVar7 = thunk_FUN_00712780(*(long *)(puVar20 + 2),param_1);
                          if (iVar7 == 0) {
                            if (uVar6 == 0) {
                              puVar10 = *(uint **)(puVar20 + 4);
                              plVar18 = *(long **)(puVar20 + 6);
                            }
                            param_5[1] = (long)plVar18;
                            *param_5 = (long)puVar10;
                            FUN_0070abb0(lVar3);
                            return 1;
                          }
LAB_007b7b79:
                          uVar22 = uVar22 + lVar19;
                          puVar20 = puVar20 + lVar19 * 8;
                        } while (uVar22 < uVar9);
                        uVar22 = uVar22 - uVar9;
                      } while( true );
                    }
                    local_b8 = (uint *)FUN_00711600(0x20,0x1f);
                    if (local_b8 == (uint *)0x0) {
LAB_007b82a6:
                      FUN_0070abb0(lVar3);
                    /* WARNING: Subroutine does not return */
                      FUN_007873c0("out of memory\n");
                    }
                    *(uint **)(&DAT_0093ebb0 + lVar19) = local_b8;
                    uVar22 = 0x1f;
                    *(undefined8 *)(&DAT_0093ebb8 + lVar19) = 0x1f;
                    *(code **)(&DAT_0093ebc8 + lVar19) = FUN_007104f0;
                    uVar15 = param_2 % 0x1f;
                    lVar19 = (long)param_2 % 0x1d + 1;
LAB_007b7ce7:
                    uVar2 = *puVar10;
                    if (uVar6 != 0) {
                      do {
                        puVar11 = local_b8 + uVar15 * 8;
                        do {
                          if (*(long *)(puVar11 + 2) == 0) {
                            *puVar11 = (uint)param_2;
                            *(ulong *)(puVar11 + 2) = (ulong)uVar2 + lVar8;
                            *(long *)(puVar11 + 4) = param_4;
                            *(long *)(puVar11 + 6) = param_12;
LAB_007b7d51:
                            *(long *)(&DAT_0093ebc0 + lVar21 * 0xa0) =
                                 *(long *)(&DAT_0093ebc0 + lVar21 * 0xa0) + 1;
                            FUN_0070abb0(lVar3);
                            *param_5 = (long)puVar10;
                            param_5[1] = (long)plVar18;
                            return 1;
                          }
                          uVar15 = uVar15 + lVar19;
                          puVar11 = puVar11 + lVar19 * 8;
                        } while (uVar15 < uVar22);
                        uVar15 = uVar15 - uVar22;
                      } while( true );
                    }
                    do {
                      puVar11 = local_b8 + uVar15 * 8;
                      do {
                        if (*(long *)(puVar11 + 2) == 0) {
                          *puVar11 = (uint)param_2;
                          *(long **)(puVar11 + 6) = plVar18;
                          *(ulong *)(puVar11 + 2) = (ulong)uVar2 + lVar8;
                          *(uint **)(puVar11 + 4) = puVar10;
                          if (((*(byte *)((long)plVar18 + 0x31c) & 3) == 2) &&
                             (*(char *)((long)plVar18 + 799) == '\0')) {
                            if ((param_9 & 8) == 0) {
                              if (((byte)DAT_0094b0e4 & 4) != 0) {
                                FUN_00787060("marking %s [%lu] as NODELETE due to unique symbol\n",
                                             plVar18[1],plVar18[6]);
                              }
                              *(undefined1 *)((long)plVar18 + 799) = 1;
                            }
                            else if ((char)plVar18[100] == '\0') {
                              if (((byte)DAT_0094b0e4 & 4) != 0) {
                                FUN_00787060("marking %s [%lu] as NODELETE due to unique symbol\n",
                                             plVar18[1],plVar18[6]);
                              }
                              *(undefined1 *)(plVar18 + 100) = 1;
                            }
                          }
                          goto LAB_007b7d51;
                        }
                        uVar15 = uVar15 + lVar19;
                        puVar11 = puVar11 + lVar19 * 8;
                      } while (uVar15 < uVar22);
                      uVar15 = uVar15 - uVar22;
                    } while( true );
                  }
                  if (bVar5 == 1) {
LAB_007b7921:
                    *param_5 = (long)puVar10;
                    param_5[1] = (long)plVar18;
                    return 1;
                  }
                }
              }
              else if (1 < (*(byte *)((long)puVar10 + 5) & 3) - 1) {
                if (((((*(byte *)((long)puVar10 + 5) & 3) == 3) &&
                     ((*(byte *)(param_12 + 0x31c) & 3) == 0)) &&
                    ((*(byte *)(param_12 + 0x32c) & 1) == 0)) &&
                   ((*(byte *)((long)plVar18 + 0x32c) & 1) != 0)) {
                  if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0078db10(0,plVar18[1],param_1,
                                 "copy relocation against non-copyable protected symbol");
                  }
                  if (((*(long *)(param_4 + 8) != 0) && (*(short *)(param_4 + 6) == 0)) &&
                     (local_68 != 0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_0078db10(0,plVar18[1],param_1,
                                 "non-canonical reference to canonical protected function");
                  }
                }
                bVar5 = (byte)puVar10[1] >> 4;
                if (bVar5 != 2) goto LAB_007b7911;
LAB_007b7a73:
                if (DAT_0094b0dc == 0) goto LAB_007b7921;
                if (*param_5 == 0) {
                  *param_5 = (long)puVar10;
                  param_5[1] = (long)plVar18;
                }
              }
            }
          }
        }
      }
    }
LAB_007b772b:
    param_7 = param_7 + 1;
    if (uVar2 <= param_7) {
      return 0;
    }
  } while( true );
}

