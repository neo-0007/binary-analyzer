
ulong FUN_00757190(int *param_1,int *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  ulong uVar25;
  int iVar26;
  uint *puVar27;
  ulong uVar28;
  int *piVar29;
  uint uVar30;
  bool bVar31;
  ulong local_108;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  int *local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  int *local_a8;
  uint local_9c;
  uint local_90;
  int local_8c;
  int *local_88;
  int *local_80;
  byte local_5d;
  
  lVar13 = *(long *)(param_3 + 0x18);
  uVar2 = *(uint *)(lVar13 + 0x40);
  uVar16 = (ulong)uVar2;
  if (uVar16 == 0) {
    uVar16 = thunk_FUN_00756460();
    return uVar16;
  }
  if ((*param_1 == 0) || (*param_2 == 0)) {
    return (ulong)(((*param_1 != 0) - 1) + (uint)(*param_2 == 0));
  }
  lVar3 = *(long *)(lVar13 + 0x48);
  uVar4 = *(ulong *)(lVar13 + 0x88);
  uVar5 = *(ulong *)(lVar13 + 0x90);
  uVar6 = *(ulong *)(lVar13 + 0x98);
  uVar7 = *(ulong *)(lVar13 + 0xa0);
  if ((uVar4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("((uintptr_t) table) % __alignof__ (table[0]) == 0","../string/strcoll_l.c",0x11f,
                 "__wcscoll_l");
  }
  if ((uVar5 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("((uintptr_t) weights) % __alignof__ (weights[0]) == 0","../string/strcoll_l.c",
                 0x120,"__wcscoll_l");
  }
  if ((uVar6 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("((uintptr_t) extra) % __alignof__ (extra[0]) == 0","../string/strcoll_l.c",0x121,
                 "__wcscoll_l");
  }
  if ((uVar7 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("((uintptr_t) indirect) % __alignof__ (indirect[0]) == 0","../string/strcoll_l.c",
                 0x122,"__wcscoll_l");
  }
  local_108 = 0;
  uVar22 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_5d = 0;
LAB_00757276:
  iVar8 = 0;
  uVar18 = 0;
  local_b8 = 0;
  iVar26 = (int)local_108;
  local_b0 = 0;
  bVar1 = *(byte *)(lVar3 + local_108 + uVar22 * uVar16);
  uVar22 = 0;
  local_e0 = 0xffffffffffffffff;
  local_f8 = 0xffffffffffffffff;
  local_8c = 0;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffffffffffff;
  piVar29 = param_2;
  piVar17 = param_1;
  do {
    iVar24 = (int)uVar22;
    uVar11 = (uint)uVar18;
    if (iVar8 == 0) {
      local_c0 = 0;
      local_c8 = piVar17;
      do {
        local_c0 = local_c0 + 1;
        uVar11 = (uint)uVar18;
        if (local_f0 == 0xffffffffffffffff) {
          uVar30 = (uint)local_5d;
          iVar8 = *piVar17;
          uVar9 = uVar11;
          uVar25 = local_d8;
          while (uVar28 = uVar25, uVar12 = local_b0, iVar8 != 0) {
            uVar9 = (uint)uVar18;
            piVar23 = piVar17 + 1;
            uVar10 = FUN_00790900(uVar4,iVar8);
            if ((int)uVar10 < 0) {
              puVar20 = (uint *)(uVar6 + (long)(int)-uVar10 * 4);
LAB_00757869:
              uVar10 = *puVar20;
              uVar18 = (ulong)(int)puVar20[1];
              puVar27 = puVar20 + 2;
              if ((int)uVar10 < 0) goto LAB_007578d1;
              while( true ) {
                uVar28 = 0xfffffffffffffffe;
                if (uVar18 != 0xffffffffffffffff) {
                  uVar28 = uVar18;
                }
                uVar12 = uVar18;
                if (uVar18 == 0) break;
                uVar15 = 0;
                do {
                  if (puVar20[uVar15 + 2] != piVar17[uVar15 + 1]) break;
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar28);
                uVar12 = uVar18 * 4;
                if (uVar15 == uVar18) break;
                while( true ) {
                  puVar20 = (uint *)(uVar12 + (long)puVar27);
                  uVar10 = *puVar20;
                  uVar18 = (ulong)(int)puVar20[1];
                  puVar27 = puVar20 + 2;
                  if (-1 < (int)uVar10) break;
LAB_007578d1:
                  lVar13 = 0;
                  if (uVar18 != 1) {
                    do {
                      if (puVar20[lVar13 + 2] != piVar17[lVar13 + 1]) {
                        puVar20 = puVar27 + uVar18 * 2;
                        goto LAB_00757869;
                      }
                      lVar13 = lVar13 + 1;
                    } while (uVar18 - 1 != lVar13);
                  }
                  iVar8 = piVar17[uVar18];
                  uVar12 = uVar18 * 8;
                  if (((int)puVar27[uVar18 - 1] <= iVar8) &&
                     (iVar8 <= (int)puVar27[uVar18 * 2 + -1])) {
                    piVar23 = piVar23 + uVar18;
                    uVar10 = *(uint *)(uVar7 + ((long)(int)(iVar8 - puVar27[uVar18 - 1]) +
                                               (long)(int)-uVar10) * 4);
                    goto LAB_0075793f;
                  }
                }
              }
              piVar23 = (int *)((long)piVar23 + uVar12);
            }
LAB_0075793f:
            local_b0 = uVar25 + 1;
            uVar11 = uVar10 & 0xffffff;
            if (uVar25 == 0) {
              uVar30 = (int)uVar10 >> 0x18;
            }
            local_5d = (byte)uVar30;
            uVar28 = local_b0;
            piVar17 = piVar23;
            uVar12 = uVar25;
            if ((*(byte *)(lVar3 + (int)((uVar10 >> 0x18) * uVar2 + iVar26)) & 2) == 0) break;
            uVar18 = (ulong)uVar11;
            uVar25 = local_b0;
            iVar8 = *piVar23;
          }
          local_b0 = uVar12;
          uVar30 = uVar11;
          if (local_d8 < local_b0) {
            local_e8 = local_b0;
            if ((local_b0 < uVar28) &&
               (local_e8 = local_b0 - 1, uVar30 = uVar9, local_90 = uVar11, local_e8 <= local_d8)) {
              local_88 = local_c8;
              local_f0 = local_d8;
              local_c8 = piVar17;
            }
            else {
              local_88 = local_c8;
              local_e8 = local_e8 - 1;
              local_f0 = local_d8;
              local_c8 = piVar17;
            }
          }
          else if ((local_b0 == uVar28) || (local_b0 < local_d8)) {
            iVar8 = 0;
            local_f0 = local_d8;
            local_d8 = uVar28;
            break;
          }
        }
        else {
          uVar28 = local_d8;
          if (local_e8 == local_f0) {
            if (local_d8 <= local_b0) {
              uVar11 = 0;
              iVar8 = 0;
              break;
            }
            local_f0 = 0xffffffffffffffff;
            uVar30 = local_90;
          }
          else {
            uVar18 = local_f0;
            piVar17 = local_88;
            if (local_f0 < local_e8) {
              do {
                piVar23 = piVar17 + 1;
                uVar11 = FUN_00790900(uVar4);
                if ((int)uVar11 < 0) {
                  puVar20 = (uint *)(uVar6 + (long)(int)-uVar11 * 4);
LAB_007576e2:
                  uVar11 = *puVar20;
                  uVar25 = (ulong)(int)puVar20[1];
                  puVar27 = puVar20 + 2;
                  if ((int)uVar11 < 0) goto LAB_00757747;
                  while( true ) {
                    uVar12 = 0xfffffffffffffffe;
                    if (uVar25 != 0xffffffffffffffff) {
                      uVar12 = uVar25;
                    }
                    uVar15 = uVar25;
                    if (uVar25 == 0) break;
                    uVar14 = 0;
                    do {
                      if (puVar20[uVar14 + 2] != piVar17[uVar14 + 1]) break;
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < uVar12);
                    uVar15 = uVar25 * 4;
                    if (uVar14 == uVar25) break;
                    while( true ) {
                      puVar20 = (uint *)(uVar15 + (long)puVar27);
                      uVar11 = *puVar20;
                      uVar25 = (ulong)(int)puVar20[1];
                      puVar27 = puVar20 + 2;
                      if (-1 < (int)uVar11) break;
LAB_00757747:
                      lVar13 = 0;
                      if (uVar25 != 1) {
                        do {
                          if (puVar20[lVar13 + 2] != piVar17[lVar13 + 1]) {
                            puVar20 = puVar27 + uVar25 * 2;
                            goto LAB_007576e2;
                          }
                          lVar13 = lVar13 + 1;
                        } while (lVar13 != uVar25 - 1);
                      }
                      iVar8 = piVar17[uVar25];
                      uVar15 = uVar25 * 8;
                      if (((int)puVar27[uVar25 - 1] <= iVar8) &&
                         (iVar8 <= (int)puVar27[uVar25 * 2 + -1])) {
                        piVar23 = piVar23 + uVar25;
                        uVar11 = *(uint *)(uVar7 + ((long)(int)(iVar8 - puVar27[uVar25 - 1]) +
                                                   (long)(int)-uVar11) * 4);
                        goto LAB_007577bf;
                      }
                    }
                  }
                  piVar23 = (int *)((long)piVar23 + uVar15);
                }
LAB_007577bf:
                uVar18 = uVar18 + 1;
                piVar17 = piVar23;
              } while (uVar18 != local_e8);
              uVar11 = uVar11 & 0xffffff;
            }
            local_e8 = local_e8 - 1;
            piVar17 = local_c8;
            uVar30 = uVar11;
          }
        }
        local_d8 = uVar28;
        uVar18 = (ulong)(uVar30 + 1);
        iVar8 = *(int *)(uVar5 + (long)(int)uVar30 * 4);
        if (local_108 != 0) {
          iVar19 = 0;
          do {
            iVar8 = (int)uVar18 + iVar8;
            iVar19 = iVar19 + 1;
            uVar18 = (ulong)(iVar8 + 1);
            iVar8 = *(int *)(uVar5 + (long)iVar8 * 4);
          } while (iVar19 != iVar26);
        }
        uVar11 = (uint)uVar18;
      } while (iVar8 == 0);
    }
    else {
      local_c0 = 0;
    }
    if (local_8c == 0) {
      local_c8 = (int *)0x0;
      local_a8 = piVar29;
      do {
        local_c8 = (int *)((long)local_c8 + 1);
        uVar9 = (uint)uVar22;
        if (local_e0 == 0xffffffffffffffff) {
          iVar24 = *piVar29;
          uVar30 = uVar9;
          uVar18 = local_d0;
          while (uVar25 = uVar18, iVar24 != 0) {
            uVar30 = (uint)uVar22;
            piVar23 = piVar29 + 1;
            uVar10 = FUN_00790900(uVar4);
            if ((int)uVar10 < 0) {
              puVar20 = (uint *)(uVar6 + (long)(int)-uVar10 * 4);
LAB_00757a85:
              uVar10 = *puVar20;
              uVar22 = (ulong)(int)puVar20[1];
              puVar27 = puVar20 + 2;
              if ((int)uVar10 < 0) goto LAB_00757ae7;
              while( true ) {
                uVar25 = 0xfffffffffffffffe;
                if (uVar22 != 0xffffffffffffffff) {
                  uVar25 = uVar22;
                }
                uVar28 = uVar22;
                if (uVar22 == 0) break;
                uVar12 = 0;
                do {
                  if (puVar20[uVar12 + 2] != piVar29[uVar12 + 1]) break;
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar25);
                uVar28 = uVar22 * 4;
                if (uVar12 == uVar22) break;
                while( true ) {
                  puVar20 = (uint *)(uVar28 + (long)puVar27);
                  uVar10 = *puVar20;
                  uVar22 = (ulong)(int)puVar20[1];
                  puVar27 = puVar20 + 2;
                  if (-1 < (int)uVar10) break;
LAB_00757ae7:
                  lVar13 = 0;
                  if (uVar22 != 1) {
                    do {
                      if (puVar20[lVar13 + 2] != piVar29[lVar13 + 1]) {
                        puVar20 = puVar27 + uVar22 * 2;
                        goto LAB_00757a85;
                      }
                      lVar13 = lVar13 + 1;
                    } while (uVar22 - 1 != lVar13);
                  }
                  iVar24 = piVar29[uVar22];
                  uVar28 = uVar22 * 8;
                  if (((int)puVar27[uVar22 - 1] <= iVar24) &&
                     (iVar24 <= (int)puVar27[uVar22 * 2 + -1])) {
                    piVar23 = piVar23 + uVar22;
                    uVar10 = *(uint *)(uVar7 + ((long)(int)(iVar24 - puVar27[uVar22 - 1]) +
                                               (long)(int)-uVar10) * 4);
                    goto LAB_00757b5e;
                  }
                }
              }
              piVar23 = (int *)((long)piVar23 + uVar28);
            }
LAB_00757b5e:
            uVar25 = uVar18 + 1;
            uVar9 = uVar10 & 0xffffff;
            local_b8 = uVar18;
            piVar29 = piVar23;
            if ((*(byte *)(lVar3 + (int)(iVar26 + (uVar10 >> 0x18) * uVar2)) & 2) == 0) break;
            uVar22 = (ulong)uVar9;
            uVar18 = uVar25;
            local_b8 = uVar25;
            iVar24 = *piVar23;
          }
          if (local_d0 < local_b8) {
            uVar10 = uVar9;
            local_f8 = local_b8;
            if ((local_b8 < uVar25) &&
               (local_f8 = local_b8 - 1, uVar10 = uVar30, local_9c = uVar9, local_f8 <= local_d0)) {
              local_80 = local_a8;
              local_e0 = local_d0;
              local_d0 = uVar25;
              local_a8 = piVar29;
            }
            else {
              local_80 = local_a8;
              local_f8 = local_f8 - 1;
              local_e0 = local_d0;
              uVar30 = uVar10;
              local_d0 = uVar25;
              local_a8 = piVar29;
            }
          }
          else if ((local_b8 == uVar25) ||
                  (bVar31 = local_b8 < local_d0, uVar30 = uVar9, local_d0 = uVar25, bVar31))
          goto LAB_00757de9;
        }
        else if (local_f8 == local_e0) {
          uVar25 = local_d0;
          if (local_d0 <= local_b8) {
LAB_00757de9:
            local_d0 = uVar25;
            if (iVar8 != 0) {
              return 1;
            }
            if (local_108 == 0) {
              uVar11 = thunk_FUN_00756460(param_1);
              if (uVar11 == 0) {
                return (ulong)uVar11;
              }
            }
            local_108 = local_108 + 1;
            uVar22 = (ulong)local_5d;
            if (uVar16 == local_108) {
              return 0;
            }
            goto LAB_00757276;
          }
          local_e0 = 0xffffffffffffffff;
          uVar30 = local_9c;
        }
        else {
          uVar22 = local_e0;
          piVar29 = local_80;
          if (local_e0 < local_f8) {
            do {
              piVar23 = piVar29 + 1;
              uVar9 = FUN_00790900(uVar4);
              if ((int)uVar9 < 0) {
                puVar20 = (uint *)(uVar6 + (long)(int)-uVar9 * 4);
LAB_00757563:
                uVar9 = *puVar20;
                uVar18 = (ulong)(int)puVar20[1];
                puVar27 = puVar20 + 2;
                if ((int)uVar9 < 0) goto LAB_007575c7;
                while( true ) {
                  uVar25 = 0xfffffffffffffffe;
                  if (uVar18 != 0xffffffffffffffff) {
                    uVar25 = uVar18;
                  }
                  uVar28 = uVar18;
                  if (uVar18 == 0) break;
                  uVar12 = 0;
                  do {
                    if (puVar20[uVar12 + 2] != piVar29[uVar12 + 1]) break;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar25);
                  uVar28 = uVar18 * 4;
                  if (uVar18 == uVar12) break;
                  while( true ) {
                    puVar20 = (uint *)(uVar28 + (long)puVar27);
                    uVar9 = *puVar20;
                    uVar18 = (ulong)(int)puVar20[1];
                    puVar27 = puVar20 + 2;
                    if (-1 < (int)uVar9) break;
LAB_007575c7:
                    lVar13 = 0;
                    if (uVar18 != 1) {
                      do {
                        if (puVar20[lVar13 + 2] != piVar29[lVar13 + 1]) {
                          puVar20 = puVar27 + uVar18 * 2;
                          goto LAB_00757563;
                        }
                        lVar13 = lVar13 + 1;
                      } while (lVar13 != uVar18 - 1);
                    }
                    iVar24 = piVar29[uVar18];
                    uVar28 = uVar18 * 8;
                    if (((int)puVar27[uVar18 - 1] <= iVar24) &&
                       (iVar24 <= (int)puVar27[uVar18 * 2 + -1])) {
                      piVar23 = piVar23 + uVar18;
                      uVar9 = *(uint *)(uVar7 + ((long)(int)(iVar24 - puVar27[uVar18 - 1]) +
                                                (long)(int)-uVar9) * 4);
                      goto LAB_0075763f;
                    }
                  }
                }
                piVar23 = (int *)((long)piVar23 + uVar28);
              }
LAB_0075763f:
              uVar22 = uVar22 + 1;
              piVar29 = piVar23;
            } while (uVar22 != local_f8);
            uVar9 = uVar9 & 0xffffff;
          }
          local_f8 = local_f8 - 1;
          piVar29 = local_a8;
          uVar30 = uVar9;
        }
        uVar22 = (ulong)(uVar30 + 1);
        local_8c = *(int *)(uVar5 + (long)(int)uVar30 * 4);
        if (local_108 != 0) {
          iVar24 = 0;
          do {
            local_8c = (int)uVar22 + local_8c;
            iVar24 = iVar24 + 1;
            uVar22 = (ulong)(local_8c + 1);
            local_8c = *(int *)(uVar5 + (long)local_8c * 4);
          } while (iVar24 != iVar26);
        }
        iVar24 = (int)uVar22;
      } while (local_8c == 0);
    }
    else {
      local_c8 = (int *)0x0;
    }
    if (iVar8 == 0) {
      return 0xffffffff;
    }
    bVar31 = (bVar1 & 4) != 0;
    if (((int *)local_c0 != local_c8) && (bVar31)) {
      if (local_c8 < local_c0) {
        return 1;
      }
      return 0xffffffff;
    }
    uVar28 = (ulong)(int)(uVar11 + 1);
    uVar25 = (ulong)(iVar24 + 1);
    do {
      iVar21 = iVar8;
      iVar19 = local_8c;
      iVar8 = *(int *)((uVar5 - 4) + uVar28 * 4);
      iVar24 = *(int *)((uVar5 - 4) + uVar25 * 4);
      if (iVar8 != iVar24) {
        return (ulong)(uint)(iVar8 - iVar24);
      }
      iVar8 = iVar21 + -1;
      uVar18 = uVar28 & 0xffffffff;
      uVar22 = uVar25 & 0xffffffff;
      uVar28 = uVar28 + 1;
      local_8c = iVar19 + -1;
      uVar25 = uVar25 + 1;
    } while ((0 < iVar8) && (0 < local_8c));
    if ((iVar21 != iVar19) && (bVar31)) {
      return (ulong)(uint)(iVar21 - iVar19);
    }
  } while( true );
}

