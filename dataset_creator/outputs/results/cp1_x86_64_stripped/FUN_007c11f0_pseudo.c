
undefined8
FUN_007c11f0(long *param_1,long param_2,int param_3,undefined8 *param_4,uint param_5,long *param_6,
            long param_7,ulong param_8,int *param_9,undefined4 *param_10,uint *param_11,
            undefined8 *param_12)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  short *psVar13;
  short *psVar14;
  int iVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  ulong *puVar27;
  short *psVar28;
  ushort uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  code *local_658;
  int local_650;
  int local_648;
  byte local_63c;
  undefined8 *local_608;
  undefined8 *local_600;
  ulong *local_5f0;
  int local_5d0;
  undefined8 *local_5b8;
  undefined8 local_5b0;
  short local_5a8 [48];
  undefined1 local_548 [248];
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  long local_40;
  
  bVar30 = 0;
  uVar9 = (ulong)(-(int)param_7 & 7);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_8 <= uVar9) || (param_8 = param_8 - uVar9, param_8 < 400)) {
LAB_007c1330:
    *param_9 = 0x22;
    *param_10 = 0xffffffff;
    uVar8 = 0xfffffffe;
    goto LAB_007c12e9;
  }
  local_648 = (int)param_8 + -400;
  *param_6 = 0;
  if (param_8 - 400 != (long)local_648) {
    local_648 = 0x7fffffff;
  }
  if (param_5 == 0xc) {
    local_658 = FUN_007c4340;
  }
  else {
    if ((0xffffffffeffffffdU >> ((ulong)param_5 & 0x3f) & 1) != 0) {
      *param_9 = 2;
      uVar8 = 0xffffffff;
      goto LAB_007c12e9;
    }
    local_658 = FUN_007c3f90;
  }
  uVar29 = *(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8;
  if (*(short *)(param_2 + 4) == 0x100) {
    if (param_8 <= (ulong)uVar29 * 8 + 0x198) goto LAB_007c1330;
    puVar22 = (ushort *)(param_3 + param_2);
    iVar5 = FUN_007c3dd0(param_2,puVar22,param_2 + 0xc,local_548,0xff);
    if (iVar5 == -1) {
LAB_007c1620:
      iVar5 = *(int *)(in_FS_OFFSET + -0x58);
    }
    else {
      puVar24 = (undefined8 *)(param_7 + uVar9);
      puVar12 = puVar24 + (ulong)uVar29 + 0x33;
      local_648 = local_648 - ((uint)uVar29 * 8 + 8);
      iVar6 = FUN_007c3c60(local_548,puVar12,(long)local_648);
      if (iVar6 != -1) {
        if (iVar5 < 0) goto LAB_007c1620;
        iVar6 = (*local_658)(puVar12);
        if (iVar6 == 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4a;
          *param_9 = 0x4a;
          *param_10 = 3;
          uVar8 = 0xffffffff;
          goto LAB_007c12e9;
        }
        puVar21 = (ushort *)(param_2 + 0x10 + (long)iVar5);
        local_63c = (byte)param_5;
        uVar9 = 0x10000002L >> (local_63c & 0x3f);
        puVar18 = puVar12;
        local_5b8 = param_4;
        if ((uVar9 & 1) == 0) {
LAB_007c1496:
          local_650 = uVar29 - 1;
          local_5f0 = puVar24 + 0x32;
          *puVar24 = 0;
          param_6[1] = (long)puVar24;
          puVar24[0x32] = 0;
          param_6[3] = (long)local_5f0;
          local_5b0 = local_5f0;
          if ((uVar29 != 0) && (puVar21 < puVar22)) {
            local_5d0 = 0;
            local_608 = param_4;
            local_600 = puVar24;
            while (iVar5 = FUN_007c3dd0(param_2,puVar22,puVar21,local_548,0xff), puVar12 = puVar18,
                  iVar5 != -1) {
              iVar6 = FUN_007c3c60(local_548,puVar18,(long)local_648);
              if (iVar6 == -1) {
LAB_007c1318:
                if (*(int *)(in_FS_OFFSET + -0x58) == 0x5a) goto LAB_007c1330;
                break;
              }
              if ((iVar5 < 0) || (iVar6 = (*local_658)(puVar18), iVar6 == 0)) break;
              puVar11 = (ushort *)((long)iVar5 + (long)puVar21);
              puVar21 = puVar11 + 5;
              if (puVar22 < puVar21) break;
              uVar26 = *(uint *)(puVar11 + 2);
              uVar29 = puVar11[4] << 8 | puVar11[4] >> 8;
              uVar25 = (ulong)uVar29;
              if ((long)puVar22 - (long)puVar21 < (long)uVar25) break;
              if (puVar11[1] == 0x100) {
                uVar23 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                         uVar26 << 0x18;
                uVar4 = *puVar11 << 8 | *puVar11 >> 8;
                uVar26 = (uint)uVar4;
                if ((uVar9 & 1) == 0) {
                  if ((param_5 != 0xc) || (uVar26 != 5)) goto LAB_007c171c;
                  if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                    *param_11 = uVar23;
                  }
                  iVar5 = FUN_007c8450(param_2,puVar22,puVar21,&local_448,0x401);
                  if ((iVar5 < 0) || (iVar6 = FUN_007c4340(&local_448), iVar6 == 0)) break;
                  puVar21 = (ushort *)((long)iVar5 + (long)puVar21);
                  iVar5 = thunk_FUN_007129d0(&local_448);
                  uVar26 = iVar5 + 1;
                  if (local_648 < (int)uVar26) goto LAB_007c1330;
                  if (0xff < (int)uVar26) break;
                  uVar25 = (ulong)uVar26;
                  if (uVar26 < 8) {
                    if ((uVar26 & 4) == 0) {
                      if (uVar26 != 0) {
                        *(undefined1 *)puVar18 = (undefined1)local_448;
                        if ((uVar26 & 2) != 0) {
                          *(undefined2 *)((long)puVar18 + (uVar25 - 2)) =
                               *(undefined2 *)((long)&uStack_450 + uVar25 + 6);
                        }
                      }
                    }
                    else {
                      *(undefined4 *)puVar18 = local_448;
                      *(undefined4 *)((long)puVar18 + (uVar25 - 4)) =
                           *(undefined4 *)((long)&uStack_450 + uVar25 + 4);
                    }
                  }
                  else {
                    *puVar18 = CONCAT44(uStack_444,local_448);
                    *(undefined8 *)((long)puVar18 + (uVar25 - 8)) =
                         *(undefined8 *)((long)&uStack_450 + uVar25);
                    lVar20 = (long)puVar18 - (long)((ulong)(puVar18 + 1) & 0xfffffffffffffff8);
                    puVar12 = (undefined8 *)((long)&local_448 - lVar20);
                    puVar19 = (undefined8 *)((ulong)(puVar18 + 1) & 0xfffffffffffffff8);
                    for (uVar16 = (ulong)(uVar26 + (int)lVar20 >> 3); uVar16 != 0;
                        uVar16 = uVar16 - 1) {
                      *puVar19 = *puVar12;
                      puVar12 = puVar12 + (ulong)bVar30 * -2 + 1;
                      puVar19 = puVar19 + (ulong)bVar30 * -2 + 1;
                    }
                  }
                  local_648 = local_648 - uVar26;
                  puVar12 = (undefined8 *)((long)puVar18 + uVar25);
                  local_608 = puVar18;
                }
                else if (uVar26 == 5) {
                  if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                    *param_11 = uVar23;
                  }
                  if (local_600 < puVar24 + 0x2f) {
                    iVar5 = FUN_007c8450(param_2,puVar22,puVar21,&local_448,0x401);
                    if ((iVar5 < 0) || (iVar6 = (*local_658)(&local_448), iVar6 == 0)) break;
                    *local_600 = puVar18;
                    local_600 = local_600 + 1;
                    iVar6 = thunk_FUN_007129d0(puVar18);
                    iVar6 = iVar6 + 1;
                    if (0xff < iVar6) break;
                    local_648 = local_648 - iVar6;
                    puVar12 = (undefined8 *)((long)puVar18 + (long)iVar6);
                    iVar6 = thunk_FUN_007129d0(&local_448);
                    uVar26 = iVar6 + 1;
                    if (local_648 < (int)uVar26) goto LAB_007c1330;
                    if (0xff < (int)uVar26) break;
                    uVar25 = (ulong)uVar26;
                    *param_6 = (long)puVar12;
                    puVar21 = (ushort *)((long)iVar5 + (long)puVar21);
                    if (uVar26 < 8) {
                      if ((uVar26 & 4) == 0) {
                        if (uVar26 != 0) {
                          *(undefined1 *)puVar12 = (undefined1)local_448;
                          if ((uVar26 & 2) != 0) {
                            *(undefined2 *)((long)puVar12 + (uVar25 - 2)) =
                                 *(undefined2 *)((long)&uStack_450 + uVar25 + 6);
                          }
                        }
                      }
                      else {
                        *(undefined4 *)puVar12 = local_448;
                        *(undefined4 *)((long)puVar12 + (uVar25 - 4)) =
                             *(undefined4 *)((long)&uStack_450 + uVar25 + 4);
                      }
                    }
                    else {
                      *puVar12 = CONCAT44(uStack_444,local_448);
                      *(undefined8 *)((long)puVar12 + (uVar25 - 8)) =
                           *(undefined8 *)((long)&uStack_450 + uVar25);
                      lVar20 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
                      puVar18 = (undefined8 *)((long)&local_448 - lVar20);
                      puVar19 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
                      for (uVar16 = (ulong)((int)lVar20 + uVar26 >> 3); uVar16 != 0;
                          uVar16 = uVar16 - 1) {
                        *puVar19 = *puVar18;
                        puVar18 = puVar18 + (ulong)bVar30 * -2 + 1;
                        puVar19 = puVar19 + (ulong)bVar30 * -2 + 1;
                      }
                    }
                    local_648 = local_648 - uVar26;
                    puVar12 = (undefined8 *)((long)puVar12 + uVar25);
                  }
                }
                else {
LAB_007c171c:
                  if (param_5 == uVar26) {
                    if (uVar4 == 0xc) {
                      iVar5 = thunk_FUN_007a30f0(local_608,puVar18);
                      if (iVar5 == 0) {
                        iVar5 = FUN_007c3dd0(param_2,puVar22,puVar21,local_548,0xff);
                        if (iVar5 != -1) {
                          iVar6 = FUN_007c3c60(local_548,puVar18,(long)local_648);
                          if (iVar6 == -1) goto LAB_007c1318;
                          if ((-1 < iVar5) && (iVar5 = FUN_007c3f90(puVar18), iVar5 != 0)) {
                            if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                              *param_11 = uVar23;
                            }
                            *param_6 = (long)puVar18;
                            *param_10 = 0;
                            uVar8 = 1;
                            goto LAB_007c12e9;
                          }
                        }
                        break;
                      }
                    }
                    else {
                      uVar26 = (uint)uVar29;
                      if (uVar4 == 0x1c) {
                        iVar5 = thunk_FUN_007a30f0(*param_6,puVar18);
                        if (iVar5 == 0) {
                          uVar7 = 0x10;
LAB_007c178f:
                          if (uVar26 != uVar7) break;
                          if (uVar7 == *(uint *)((long)param_6 + 0x14)) {
                            if (local_5d0 == 0) {
                              if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                                *param_11 = uVar23;
                              }
                              if (param_12 != (undefined8 *)0x0) {
                                *param_12 = puVar18;
                              }
                              *param_6 = (long)puVar18;
                              iVar5 = thunk_FUN_007129d0(puVar18);
                              local_648 = local_648 - (iVar5 + 1);
                              puVar18 = (undefined8 *)((long)puVar18 + (long)(iVar5 + 1));
                            }
                            uVar16 = (long)puVar18 + 3U & 0xfffffffffffffffc;
                            local_648 = local_648 - ((int)uVar16 - (int)puVar18);
                            if ((int)uVar26 <= local_648) {
                              *local_5f0 = uVar16;
                              local_5f0 = local_5f0 + 1;
                              puVar12 = (undefined8 *)thunk_FUN_00713820(uVar16,puVar21,uVar25);
                              local_5d0 = local_5d0 + 1;
                              local_648 = local_648 - uVar26;
                              puVar21 = (ushort *)((long)puVar21 + uVar25);
                              goto LAB_007c1890;
                            }
                            goto LAB_007c1330;
                          }
                        }
                      }
                      else {
                        if (uVar4 != 1) {
                          uVar8 = FUN_00405297();
                          return uVar8;
                        }
                        iVar5 = thunk_FUN_007a30f0(*param_6,puVar18);
                        if (iVar5 == 0) {
                          uVar7 = 4;
                          goto LAB_007c178f;
                        }
                      }
                    }
                  }
                  puVar21 = (ushort *)((long)puVar21 + uVar25);
                }
              }
              else {
                puVar21 = (ushort *)((long)puVar21 + uVar25);
              }
LAB_007c1890:
              local_650 = local_650 + -1;
              if ((local_650 == -1) || (puVar18 = puVar12, puVar22 <= puVar21)) break;
            }
            if (local_5d0 == 0) {
LAB_007c1bb8:
              *param_10 = 3;
              *param_9 = 2;
              if ((puVar24 == local_600) || ((uVar9 & 1) == 0)) {
                uVar8 = 0xfffffffe;
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              *local_600 = 0;
              *local_5f0 = 0;
              if ((param_5 == 1) && (1 < local_5d0)) {
                lVar20 = param_1[1];
                if (lVar20 == 0) {
                  uVar25 = (ulong)(*(byte *)(*param_1 + 0x188) >> 4);
                }
                else {
                  uVar25 = *(ulong *)(lVar20 + 0x30);
                }
                if (uVar25 != 0) {
                  psVar28 = (short *)((long)&local_5b0 + 6);
                  if (0x30 < local_5d0) {
                    local_5d0 = 0x30;
                  }
                  iVar5 = 0;
                  iVar6 = 0;
                  puVar27 = local_5b0;
                  do {
                    if (lVar20 == 0) {
                      lVar2 = *param_1;
                      bVar17 = *(byte *)(lVar2 + 0x188) >> 4;
                      uVar16 = 0;
                      if (((((((bVar17 == 0) ||
                              (uVar26 = *(uint *)*puVar27,
                              *(uint *)(lVar2 + 0x18c) == (*(uint *)(lVar2 + 400) & uVar26))) ||
                             (uVar16 = 1, uVar25 == 1)) ||
                            ((bVar17 == 1 ||
                             ((*(uint *)(lVar2 + 0x198) & uVar26) == *(uint *)(lVar2 + 0x194))))) ||
                           (uVar16 = 2, uVar25 == 2)) ||
                          (((((bVar17 == 2 ||
                              ((*(uint *)(lVar2 + 0x1a0) & uVar26) == *(uint *)(lVar2 + 0x19c))) ||
                             ((uVar16 = 3, uVar25 == 3 ||
                              (((bVar17 == 3 ||
                                ((*(uint *)(lVar2 + 0x1a8) & uVar26) == *(uint *)(lVar2 + 0x1a4)))
                               || (uVar16 = 4, uVar25 == 4)))))) ||
                            ((bVar17 == 4 ||
                             (*(uint *)(lVar2 + 0x1ac) == (*(uint *)(lVar2 + 0x1b0) & uVar26))))) ||
                           (uVar16 = 5, uVar25 == 5)))) ||
                         (((bVar17 == 5 ||
                           (*(uint *)(lVar2 + 0x1b4) == (*(uint *)(lVar2 + 0x1b8) & uVar26))) ||
                          ((uVar16 = 6, uVar25 == 6 || (bVar17 == 6)))))) goto LAB_007c1615;
                      if ((*(uint *)(lVar2 + 0x1c0) & uVar26) == *(uint *)(lVar2 + 0x1bc)) {
                        iVar15 = 6;
                        uVar10 = 6;
                      }
                      else {
                        uVar16 = 7;
                        if (((((uVar25 == 7) || (bVar17 == 7)) ||
                             ((*(uint *)(lVar2 + 0x1c8) & uVar26) == *(uint *)(lVar2 + 0x1c4))) ||
                            ((uVar16 = 8, uVar25 == 8 || (bVar17 == 8)))) ||
                           (((*(uint *)(lVar2 + 0x1d0) & uVar26) == *(uint *)(lVar2 + 0x1cc) ||
                            ((uVar16 = 9, uVar25 == 9 || (bVar17 == 9)))))) goto LAB_007c1615;
                        if ((uVar26 & *(uint *)(lVar2 + 0x1d8)) == *(uint *)(lVar2 + 0x1d4)) {
                          iVar15 = 9;
                          uVar10 = 9;
                        }
                        else {
                          iVar15 = 10;
                          uVar10 = 10;
                        }
                      }
                    }
                    else {
                      uVar10 = 0;
                      do {
                        iVar15 = (int)uVar10;
                        if (uVar10 == *(ulong *)(lVar20 + 0x30)) goto LAB_007c15b0;
                        uVar16 = uVar10 & 0xffffffff;
                        if ((*(uint *)*puVar27 &
                            *(uint *)(*(long *)(lVar20 + 0x28) + 4 + uVar10 * 8)) ==
                            *(uint *)(*(long *)(lVar20 + 0x28) + uVar10 * 8)) break;
                        uVar10 = uVar10 + 1;
                        uVar16 = (ulong)(iVar15 + 1);
                      } while (uVar10 != uVar25);
LAB_007c1615:
                      uVar10 = uVar16;
                      iVar15 = (int)uVar10;
                    }
LAB_007c15b0:
                    psVar28[1] = (short)uVar10;
                    if (((iVar5 == 0) && (0 < iVar6)) && (iVar5 = 0, iVar15 < *psVar28)) {
                      iVar5 = iVar6;
                    }
                    iVar6 = iVar6 + 1;
                    puVar27 = puVar27 + 1;
                    psVar28 = psVar28 + 1;
                  } while (local_5d0 != iVar6);
                  if ((iVar5 != 0) && (iVar5 < local_5d0)) {
                    uVar26 = iVar5 - 1;
                    psVar28 = local_5a8 + iVar5;
                    puVar18 = puVar24 + (long)iVar5 + 0x31;
                    do {
                      psVar13 = psVar28;
                      puVar19 = puVar18;
                      do {
                        sVar1 = psVar13[-1];
                        if (sVar1 <= *psVar13) break;
                        uVar8 = *puVar19;
                        uVar3 = puVar19[1];
                        psVar13[-1] = *psVar13;
                        psVar14 = psVar13 + -1;
                        *psVar13 = sVar1;
                        *puVar19 = uVar3;
                        puVar19[1] = uVar8;
                        psVar13 = psVar14;
                        puVar19 = puVar19 + -1;
                      } while (psVar28 + (-1 - (ulong)uVar26) != psVar14);
                      uVar26 = uVar26 + 1;
                      psVar28 = psVar28 + 1;
                      puVar18 = puVar18 + 1;
                    } while (local_5d0 - 1U != uVar26);
                  }
                }
              }
              if (*param_6 == 0) {
                iVar5 = thunk_FUN_007129d0(local_5b8);
                uVar26 = iVar5 + 1;
                if (local_648 < (int)uVar26) goto LAB_007c1330;
                if (0xff < (int)uVar26) goto LAB_007c1bb8;
                uVar9 = (ulong)(int)uVar26;
                *param_6 = (long)puVar12;
                if (uVar9 < 8) {
                  if ((uVar9 & 4) == 0) {
                    if ((uVar9 != 0) &&
                       (*(undefined1 *)puVar12 = *(undefined1 *)local_5b8, (uVar26 & 2) != 0)) {
                      *(undefined2 *)((long)puVar12 + (uVar9 - 2)) =
                           *(undefined2 *)((long)local_5b8 + (uVar9 - 2));
                    }
                  }
                  else {
                    *(undefined4 *)puVar12 = *(undefined4 *)local_5b8;
                    *(undefined4 *)((long)puVar12 + (uVar9 - 4)) =
                         *(undefined4 *)((long)local_5b8 + (uVar9 - 4));
                  }
                }
                else {
                  *puVar12 = *local_5b8;
                  *(undefined8 *)((long)puVar12 + (uVar9 - 8)) =
                       *(undefined8 *)((long)local_5b8 + (uVar9 - 8));
                  lVar20 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
                  puVar24 = (undefined8 *)((long)local_5b8 - lVar20);
                  puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
                  for (uVar9 = uVar9 + lVar20 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *puVar12 = *puVar24;
                    puVar24 = puVar24 + (ulong)bVar30 * -2 + 1;
                    puVar12 = puVar12 + (ulong)bVar30 * -2 + 1;
                  }
                }
              }
              *param_10 = 0;
              uVar8 = 1;
            }
            goto LAB_007c12e9;
          }
        }
        else {
          iVar5 = thunk_FUN_007129d0(puVar12);
          iVar5 = iVar5 + 1;
          if (iVar5 < 0x100) {
            puVar18 = (undefined8 *)((long)iVar5 + (long)puVar12);
            local_648 = local_648 - iVar5;
            *param_6 = (long)puVar12;
            local_5b8 = puVar12;
            if (local_648 < 0) goto LAB_007c1330;
            goto LAB_007c1496;
          }
        }
        *param_10 = 3;
        *param_9 = 2;
        uVar8 = 0xfffffffe;
        goto LAB_007c12e9;
      }
      iVar5 = *(int *)(in_FS_OFFSET + -0x58);
      if (iVar5 == 0x5a) goto LAB_007c1330;
    }
    *param_9 = iVar5;
  }
  *param_10 = 3;
  uVar8 = 0xffffffff;
LAB_007c12e9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

