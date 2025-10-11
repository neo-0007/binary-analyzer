
void _quicksort(undefined8 *param_1,ulong param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  undefined8 *local_470;
  undefined1 local_448 [16];
  undefined8 local_438 [127];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0078760e;
  uVar14 = param_3 * 4;
  puVar15 = (undefined8 *)((param_2 - 1) * param_3 + (long)param_1);
  if (4 < param_2) {
    uVar16 = param_3 - 1;
    lVar12 = -param_3;
    uVar5 = (param_3 - 0x10 >> 4) + 1;
    local_448 = (undefined1  [16])0x0;
    uVar6 = uVar5 * 0x10;
    uVar13 = param_3 + uVar5 * -0x10;
    local_470 = local_438;
    uVar9 = uVar13 - 1;
    local_4b0 = param_1;
    local_4a8 = puVar15;
    do {
      lVar7 = ((ulong)((long)local_4a8 - (long)local_4b0) / param_3 >> 1) * param_3;
      puVar24 = (undefined8 *)((long)local_4b0 + lVar7);
      iVar4 = (*param_4)(puVar24,local_4b0,param_5);
      if (iVar4 < 0) {
        if (((lVar7 == -0x10 || lVar7 + 0x10 < 0) || local_4b0 + 2 <= puVar24) && (6 < uVar16)) {
          if (uVar16 < 0xf) {
            uVar8 = 0;
            puVar25 = puVar24;
            puVar23 = local_4b0;
            uVar19 = param_3;
LAB_00787c49:
            puVar22 = (undefined8 *)(lVar7 + uVar8 + (long)local_4b0);
            uVar1 = *puVar22;
            *puVar22 = *(undefined8 *)(uVar8 + (long)local_4b0);
            *(undefined8 *)(uVar8 + (long)local_4b0) = uVar1;
            uVar8 = uVar19 & 0xfffffffffffffff8;
            puVar25 = (undefined8 *)((long)puVar25 + uVar8);
            puVar23 = (undefined8 *)((long)puVar23 + uVar8);
            uVar20 = uVar19 - uVar8;
            if (uVar19 != uVar8) {
LAB_00787c81:
              uVar21 = *(undefined1 *)puVar25;
              *(undefined1 *)puVar25 = *(undefined1 *)puVar23;
              *(undefined1 *)puVar23 = uVar21;
              if (uVar20 != 1) {
                uVar21 = *(undefined1 *)((long)puVar25 + 1);
                *(undefined1 *)((long)puVar25 + 1) = *(undefined1 *)((long)puVar23 + 1);
                *(undefined1 *)((long)puVar23 + 1) = uVar21;
                if (uVar20 != 2) {
                  uVar21 = *(undefined1 *)((long)puVar25 + 2);
                  *(undefined1 *)((long)puVar25 + 2) = *(undefined1 *)((long)puVar23 + 2);
                  *(undefined1 *)((long)puVar23 + 2) = uVar21;
                  if (uVar20 != 3) {
                    uVar21 = *(undefined1 *)((long)puVar25 + 3);
                    *(undefined1 *)((long)puVar25 + 3) = *(undefined1 *)((long)puVar23 + 3);
                    *(undefined1 *)((long)puVar23 + 3) = uVar21;
                    if (uVar20 != 4) {
                      uVar21 = *(undefined1 *)((long)puVar25 + 4);
                      *(undefined1 *)((long)puVar25 + 4) = *(undefined1 *)((long)puVar23 + 4);
                      *(undefined1 *)((long)puVar23 + 4) = uVar21;
                      if (uVar20 != 5) {
                        uVar21 = *(undefined1 *)((long)puVar25 + 5);
                        *(undefined1 *)((long)puVar25 + 5) = *(undefined1 *)((long)puVar23 + 5);
                        *(undefined1 *)((long)puVar23 + 5) = uVar21;
                        if (uVar20 != 6) {
                          uVar21 = *(undefined1 *)((long)puVar25 + 6);
                          *(undefined1 *)((long)puVar25 + 6) = *(undefined1 *)((long)puVar23 + 6);
                          *(undefined1 *)((long)puVar23 + 6) = uVar21;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar11 = 0;
            uVar8 = 0;
            do {
              uVar1 = *(undefined8 *)((long)puVar24 + lVar11);
              uVar2 = ((undefined8 *)((long)puVar24 + lVar11))[1];
              uVar3 = ((undefined8 *)((long)local_4b0 + lVar11))[1];
              uVar8 = uVar8 + 1;
              *(undefined8 *)((long)puVar24 + lVar11) = *(undefined8 *)((long)local_4b0 + lVar11);
              ((undefined8 *)((long)puVar24 + lVar11))[1] = uVar3;
              *(undefined8 *)((long)local_4b0 + lVar11) = uVar1;
              ((undefined8 *)((long)local_4b0 + lVar11))[1] = uVar2;
              lVar11 = lVar11 + 0x10;
            } while (uVar8 < uVar5);
            puVar25 = puVar24 + uVar5 * 2;
            puVar23 = local_4b0 + uVar5 * 2;
            if (param_3 != uVar6) {
              uVar8 = uVar6;
              uVar20 = uVar13;
              uVar19 = uVar13;
              if (6 < uVar9) goto LAB_00787c49;
              goto LAB_00787c81;
            }
          }
        }
        else {
          puVar25 = puVar24;
          puVar23 = local_4b0;
          do {
            uVar21 = *(undefined1 *)puVar25;
            puVar22 = (undefined8 *)((long)puVar25 + 1);
            *(undefined1 *)puVar25 = *(undefined1 *)puVar23;
            *(undefined1 *)puVar23 = uVar21;
            puVar25 = puVar22;
            puVar23 = (undefined8 *)((long)puVar23 + 1);
          } while (puVar22 != (undefined8 *)((long)puVar24 + param_3));
        }
      }
      iVar4 = (*param_4)(local_4a8,puVar24,param_5);
      if (iVar4 < 0) {
        if ((local_4a8 < (undefined8 *)((long)local_4b0 + lVar7 + 0x10) && puVar24 < local_4a8 + 2)
           || (uVar16 < 7)) {
          puVar25 = puVar24;
          puVar23 = local_4a8;
          do {
            uVar21 = *(undefined1 *)puVar25;
            puVar22 = (undefined8 *)((long)puVar25 + 1);
            *(undefined1 *)puVar25 = *(undefined1 *)puVar23;
            *(undefined1 *)puVar23 = uVar21;
            puVar25 = puVar22;
            puVar23 = (undefined8 *)((long)puVar23 + 1);
          } while (puVar22 != (undefined8 *)((long)puVar24 + param_3));
        }
        else if (uVar16 < 0xf) {
          uVar8 = 0;
          puVar23 = local_4a8;
          puVar25 = puVar24;
          uVar19 = param_3;
LAB_00787934:
          puVar22 = (undefined8 *)(lVar7 + uVar8 + (long)local_4b0);
          uVar1 = *puVar22;
          *puVar22 = *(undefined8 *)(uVar8 + (long)local_4a8);
          *(undefined8 *)(uVar8 + (long)local_4a8) = uVar1;
          uVar8 = uVar19 & 0xfffffffffffffff8;
          uVar20 = uVar19 - uVar8;
          puVar25 = (undefined8 *)((long)puVar25 + uVar8);
          puVar23 = (undefined8 *)((long)puVar23 + uVar8);
          if (uVar19 != uVar8) {
LAB_0078796b:
            uVar21 = *(undefined1 *)puVar25;
            *(undefined1 *)puVar25 = *(undefined1 *)puVar23;
            *(undefined1 *)puVar23 = uVar21;
            if (uVar20 != 1) {
              uVar21 = *(undefined1 *)((long)puVar25 + 1);
              *(undefined1 *)((long)puVar25 + 1) = *(undefined1 *)((long)puVar23 + 1);
              *(undefined1 *)((long)puVar23 + 1) = uVar21;
              if (uVar20 != 2) {
                uVar21 = *(undefined1 *)((long)puVar25 + 2);
                *(undefined1 *)((long)puVar25 + 2) = *(undefined1 *)((long)puVar23 + 2);
                *(undefined1 *)((long)puVar23 + 2) = uVar21;
                if (uVar20 != 3) {
                  uVar21 = *(undefined1 *)((long)puVar25 + 3);
                  *(undefined1 *)((long)puVar25 + 3) = *(undefined1 *)((long)puVar23 + 3);
                  *(undefined1 *)((long)puVar23 + 3) = uVar21;
                  if (uVar20 != 4) {
                    uVar21 = *(undefined1 *)((long)puVar25 + 4);
                    *(undefined1 *)((long)puVar25 + 4) = *(undefined1 *)((long)puVar23 + 4);
                    *(undefined1 *)((long)puVar23 + 4) = uVar21;
                    if (uVar20 != 5) {
                      uVar21 = *(undefined1 *)((long)puVar25 + 5);
                      *(undefined1 *)((long)puVar25 + 5) = *(undefined1 *)((long)puVar23 + 5);
                      *(undefined1 *)((long)puVar23 + 5) = uVar21;
                      if (uVar20 != 6) {
                        uVar21 = *(undefined1 *)((long)puVar25 + 6);
                        *(undefined1 *)((long)puVar25 + 6) = *(undefined1 *)((long)puVar23 + 6);
                        *(undefined1 *)((long)puVar23 + 6) = uVar21;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          lVar11 = 0;
          uVar8 = 0;
          do {
            uVar1 = *(undefined8 *)((long)puVar24 + lVar11);
            uVar2 = ((undefined8 *)((long)puVar24 + lVar11))[1];
            uVar3 = ((undefined8 *)((long)local_4a8 + lVar11))[1];
            uVar8 = uVar8 + 1;
            *(undefined8 *)((long)puVar24 + lVar11) = *(undefined8 *)((long)local_4a8 + lVar11);
            ((undefined8 *)((long)puVar24 + lVar11))[1] = uVar3;
            *(undefined8 *)((long)local_4a8 + lVar11) = uVar1;
            ((undefined8 *)((long)local_4a8 + lVar11))[1] = uVar2;
            lVar11 = lVar11 + 0x10;
          } while (uVar8 < uVar5);
          puVar25 = puVar24 + uVar5 * 2;
          puVar23 = local_4a8 + uVar5 * 2;
          if (param_3 != uVar6) {
            uVar8 = uVar6;
            uVar19 = uVar13;
            uVar20 = uVar13;
            if (6 < uVar9) goto LAB_00787934;
            goto LAB_0078796b;
          }
        }
        iVar4 = (*param_4)(puVar24,local_4b0,param_5);
        if (iVar4 < 0) {
          if ((puVar24 < local_4b0 + 2 && 0 < lVar7 + 0x10) || (uVar16 < 7)) {
            puVar25 = puVar24;
            puVar23 = local_4b0;
            do {
              uVar21 = *(undefined1 *)puVar25;
              puVar22 = (undefined8 *)((long)puVar25 + 1);
              *(undefined1 *)puVar25 = *(undefined1 *)puVar23;
              *(undefined1 *)puVar23 = uVar21;
              puVar25 = puVar22;
              puVar23 = (undefined8 *)((long)puVar23 + 1);
            } while (puVar22 != (undefined8 *)((long)puVar24 + param_3));
          }
          else if (uVar16 < 0xf) {
            uVar8 = 0;
            puVar25 = puVar24;
            puVar23 = local_4b0;
            uVar19 = param_3;
LAB_00787aaf:
            puVar22 = (undefined8 *)(lVar7 + uVar8 + (long)local_4b0);
            uVar1 = *puVar22;
            *puVar22 = *(undefined8 *)(uVar8 + (long)local_4b0);
            *(undefined8 *)(uVar8 + (long)local_4b0) = uVar1;
            uVar8 = uVar19 & 0xfffffffffffffff8;
            puVar25 = (undefined8 *)((long)puVar25 + uVar8);
            puVar23 = (undefined8 *)((long)puVar23 + uVar8);
            uVar20 = uVar19 - uVar8;
            if (uVar19 != uVar8) {
LAB_00787ae7:
              uVar21 = *(undefined1 *)puVar25;
              *(undefined1 *)puVar25 = *(undefined1 *)puVar23;
              *(undefined1 *)puVar23 = uVar21;
              if (uVar20 != 1) {
                uVar21 = *(undefined1 *)((long)puVar25 + 1);
                *(undefined1 *)((long)puVar25 + 1) = *(undefined1 *)((long)puVar23 + 1);
                *(undefined1 *)((long)puVar23 + 1) = uVar21;
                if (uVar20 != 2) {
                  uVar21 = *(undefined1 *)((long)puVar25 + 2);
                  *(undefined1 *)((long)puVar25 + 2) = *(undefined1 *)((long)puVar23 + 2);
                  *(undefined1 *)((long)puVar23 + 2) = uVar21;
                  if (uVar20 != 3) {
                    uVar21 = *(undefined1 *)((long)puVar25 + 3);
                    *(undefined1 *)((long)puVar25 + 3) = *(undefined1 *)((long)puVar23 + 3);
                    *(undefined1 *)((long)puVar23 + 3) = uVar21;
                    if (uVar20 != 4) {
                      uVar21 = *(undefined1 *)((long)puVar25 + 4);
                      *(undefined1 *)((long)puVar25 + 4) = *(undefined1 *)((long)puVar23 + 4);
                      *(undefined1 *)((long)puVar23 + 4) = uVar21;
                      if (uVar20 != 5) {
                        uVar21 = *(undefined1 *)((long)puVar25 + 5);
                        *(undefined1 *)((long)puVar25 + 5) = *(undefined1 *)((long)puVar23 + 5);
                        *(undefined1 *)((long)puVar23 + 5) = uVar21;
                        if (uVar20 != 6) {
                          uVar21 = *(undefined1 *)((long)puVar25 + 6);
                          *(undefined1 *)((long)puVar25 + 6) = *(undefined1 *)((long)puVar23 + 6);
                          *(undefined1 *)((long)puVar23 + 6) = uVar21;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar11 = 0;
            uVar8 = 0;
            do {
              uVar1 = *(undefined8 *)((long)puVar24 + lVar11);
              uVar2 = ((undefined8 *)((long)puVar24 + lVar11))[1];
              uVar3 = ((undefined8 *)((long)local_4b0 + lVar11))[1];
              uVar8 = uVar8 + 1;
              *(undefined8 *)((long)puVar24 + lVar11) = *(undefined8 *)((long)local_4b0 + lVar11);
              ((undefined8 *)((long)puVar24 + lVar11))[1] = uVar3;
              *(undefined8 *)((long)local_4b0 + lVar11) = uVar1;
              ((undefined8 *)((long)local_4b0 + lVar11))[1] = uVar2;
              lVar11 = lVar11 + 0x10;
            } while (uVar8 < uVar5);
            puVar25 = puVar24 + uVar5 * 2;
            puVar23 = local_4b0 + uVar5 * 2;
            if (param_3 != uVar6) {
              uVar20 = uVar13;
              uVar8 = uVar6;
              uVar19 = uVar13;
              if (6 < uVar9) goto LAB_00787aaf;
              goto LAB_00787ae7;
            }
          }
        }
      }
      puVar25 = (undefined8 *)((long)local_4a8 + lVar12);
      puVar23 = (undefined8 *)((long)local_4b0 + param_3);
      do {
        while (iVar4 = (*param_4)(puVar23,puVar24,param_5), iVar4 < 0) {
          puVar23 = (undefined8 *)((long)puVar23 + param_3);
        }
        while (iVar4 = (*param_4)(puVar24,puVar25,param_5), iVar4 < 0) {
          puVar25 = (undefined8 *)((long)puVar25 + lVar12);
        }
        puVar22 = puVar23;
        if (puVar23 < puVar25) {
          if (((undefined1 *)((long)puVar23 + (0xf - (long)puVar25)) < (undefined1 *)0x1f) ||
             (uVar16 < 7)) {
            puVar22 = (undefined8 *)(param_3 + (long)puVar23);
            puVar10 = puVar25;
            puVar17 = puVar23;
            do {
              uVar21 = *(undefined1 *)puVar17;
              puVar18 = (undefined8 *)((long)puVar17 + 1);
              *(undefined1 *)puVar17 = *(undefined1 *)puVar10;
              *(undefined1 *)puVar10 = uVar21;
              puVar10 = (undefined8 *)((long)puVar10 + 1);
              puVar17 = puVar18;
            } while (puVar22 != puVar18);
          }
          else if (uVar16 < 0xf) {
            uVar8 = 0;
            puVar10 = puVar25;
            uVar19 = param_3;
LAB_0078774d:
            uVar1 = *(undefined8 *)((long)puVar23 + uVar8);
            *(undefined8 *)((long)puVar23 + uVar8) = *(undefined8 *)(uVar8 + (long)puVar25);
            *(undefined8 *)(uVar8 + (long)puVar25) = uVar1;
            uVar8 = uVar19 & 0xfffffffffffffff8;
            uVar20 = uVar19 - uVar8;
            puVar22 = (undefined8 *)((long)puVar22 + uVar8);
            puVar10 = (undefined8 *)((long)puVar10 + uVar8);
            if (uVar19 != uVar8) {
LAB_0078777a:
              uVar21 = *(undefined1 *)puVar22;
              *(undefined1 *)puVar22 = *(undefined1 *)puVar10;
              *(undefined1 *)puVar10 = uVar21;
              if (uVar20 != 1) {
                uVar21 = *(undefined1 *)((long)puVar22 + 1);
                *(undefined1 *)((long)puVar22 + 1) = *(undefined1 *)((long)puVar10 + 1);
                *(undefined1 *)((long)puVar10 + 1) = uVar21;
                if (uVar20 != 2) {
                  uVar21 = *(undefined1 *)((long)puVar22 + 2);
                  *(undefined1 *)((long)puVar22 + 2) = *(undefined1 *)((long)puVar10 + 2);
                  *(undefined1 *)((long)puVar10 + 2) = uVar21;
                  if (uVar20 != 3) {
                    uVar21 = *(undefined1 *)((long)puVar22 + 3);
                    *(undefined1 *)((long)puVar22 + 3) = *(undefined1 *)((long)puVar10 + 3);
                    *(undefined1 *)((long)puVar10 + 3) = uVar21;
                    if (uVar20 != 4) {
                      uVar21 = *(undefined1 *)((long)puVar22 + 4);
                      *(undefined1 *)((long)puVar22 + 4) = *(undefined1 *)((long)puVar10 + 4);
                      *(undefined1 *)((long)puVar10 + 4) = uVar21;
                      if (uVar20 != 5) {
                        uVar21 = *(undefined1 *)((long)puVar22 + 5);
                        *(undefined1 *)((long)puVar22 + 5) = *(undefined1 *)((long)puVar10 + 5);
                        *(undefined1 *)((long)puVar10 + 5) = uVar21;
                        if (uVar20 != 6) {
                          uVar21 = *(undefined1 *)((long)puVar22 + 6);
                          *(undefined1 *)((long)puVar22 + 6) = *(undefined1 *)((long)puVar10 + 6);
                          *(undefined1 *)((long)puVar10 + 6) = uVar21;
                        }
                      }
                    }
                  }
                }
              }
            }
            puVar22 = (undefined8 *)(param_3 + (long)puVar23);
          }
          else {
            lVar7 = 0;
            uVar8 = 0;
            do {
              uVar1 = *(undefined8 *)((long)puVar23 + lVar7);
              uVar2 = ((undefined8 *)((long)puVar23 + lVar7))[1];
              uVar3 = ((undefined8 *)((long)puVar25 + lVar7))[1];
              uVar8 = uVar8 + 1;
              *(undefined8 *)((long)puVar23 + lVar7) = *(undefined8 *)((long)puVar25 + lVar7);
              ((undefined8 *)((long)puVar23 + lVar7))[1] = uVar3;
              *(undefined8 *)((long)puVar25 + lVar7) = uVar1;
              ((undefined8 *)((long)puVar25 + lVar7))[1] = uVar2;
              lVar7 = lVar7 + 0x10;
            } while (uVar8 < uVar5);
            puVar22 = puVar23 + uVar5 * 2;
            puVar10 = puVar25 + uVar5 * 2;
            if (param_3 != uVar6) {
              uVar8 = uVar6;
              uVar19 = uVar13;
              uVar20 = uVar13;
              if (6 < uVar9) goto LAB_0078774d;
              goto LAB_0078777a;
            }
          }
          puVar10 = puVar25;
          if ((puVar23 != puVar24) && (puVar10 = puVar24, puVar25 == puVar24)) {
            puVar10 = puVar23;
          }
          puVar25 = (undefined8 *)((long)puVar25 + lVar12);
        }
        else {
          puVar10 = puVar24;
          if (puVar23 == puVar25) {
            puVar22 = (undefined8 *)((long)puVar23 + param_3);
            puVar25 = (undefined8 *)((long)puVar25 + lVar12);
            break;
          }
        }
        puVar24 = puVar10;
        puVar23 = puVar22;
      } while (puVar22 <= puVar25);
      uVar8 = (long)local_4a8 - (long)puVar22;
      if (uVar14 < (ulong)((long)puVar25 - (long)local_4b0)) {
        if (uVar14 < uVar8) {
          if ((long)uVar8 < (long)puVar25 - (long)local_4b0) {
            *local_470 = local_4b0;
            local_470[1] = puVar25;
            local_4b0 = puVar22;
            puVar25 = local_4a8;
            local_470 = local_470 + 2;
          }
          else {
            *local_470 = puVar22;
            local_470[1] = local_4a8;
            local_470 = local_470 + 2;
          }
        }
      }
      else {
        local_4b0 = puVar22;
        puVar25 = local_4a8;
        if (uVar8 <= uVar14) {
          local_4b0 = (undefined8 *)local_470[-2];
          puVar25 = (undefined8 *)local_470[-1];
          local_470 = local_470 + -2;
        }
      }
      local_4a8 = puVar25;
    } while (local_448 < local_470);
  }
  puVar24 = (undefined8 *)(uVar14 + (long)param_1);
  if (puVar15 <= (undefined8 *)(uVar14 + (long)param_1)) {
    puVar24 = puVar15;
  }
  local_4b8 = (undefined8 *)(param_3 + (long)param_1);
  puVar23 = local_4b8;
  puVar25 = param_1;
  if (local_4b8 <= puVar24) {
    do {
      iVar4 = (*param_4)(puVar23,puVar25,param_5);
      if (iVar4 < 0) {
        puVar25 = puVar23;
      }
      puVar23 = (undefined8 *)((long)puVar23 + param_3);
    } while (puVar23 <= puVar24);
    if (puVar25 != param_1) {
      if (((undefined1 *)((long)param_1 + (0xf - (long)puVar25)) < (undefined1 *)0x1f) ||
         (param_3 - 1 < 7)) {
        do {
          uVar21 = *(undefined1 *)puVar25;
          puVar24 = (undefined8 *)((long)param_1 + 1);
          *(undefined1 *)puVar25 = *(undefined1 *)param_1;
          *(undefined1 *)param_1 = uVar21;
          param_1 = puVar24;
          puVar25 = (undefined8 *)((long)puVar25 + 1);
        } while (local_4b8 != puVar24);
      }
      else {
        uVar14 = param_3;
        if (param_3 - 1 < 0xf) {
LAB_007874e6:
          uVar1 = *puVar25;
          *puVar25 = *param_1;
          *param_1 = uVar1;
          uVar9 = uVar14 & 0xfffffffffffffff8;
          uVar16 = uVar14 - uVar9;
          puVar25 = (undefined8 *)((long)puVar25 + uVar9);
          param_1 = (undefined8 *)((long)param_1 + uVar9);
          if (uVar14 != uVar9) {
            uVar9 = uVar16 - 1;
LAB_0078750f:
            uVar21 = *(undefined1 *)puVar25;
            *(undefined1 *)puVar25 = *(undefined1 *)param_1;
            *(undefined1 *)param_1 = uVar21;
            if (uVar9 != 0) {
              uVar21 = *(undefined1 *)((long)puVar25 + 1);
              *(undefined1 *)((long)puVar25 + 1) = *(undefined1 *)((long)param_1 + 1);
              *(undefined1 *)((long)param_1 + 1) = uVar21;
              if (uVar16 != 2) {
                uVar21 = *(undefined1 *)((long)puVar25 + 2);
                *(undefined1 *)((long)puVar25 + 2) = *(undefined1 *)((long)param_1 + 2);
                *(undefined1 *)((long)param_1 + 2) = uVar21;
                if (uVar16 != 3) {
                  uVar21 = *(undefined1 *)((long)puVar25 + 3);
                  *(undefined1 *)((long)puVar25 + 3) = *(undefined1 *)((long)param_1 + 3);
                  *(undefined1 *)((long)param_1 + 3) = uVar21;
                  if (uVar16 != 4) {
                    uVar21 = *(undefined1 *)((long)puVar25 + 4);
                    *(undefined1 *)((long)puVar25 + 4) = *(undefined1 *)((long)param_1 + 4);
                    *(undefined1 *)((long)param_1 + 4) = uVar21;
                    if (uVar16 != 5) {
                      uVar21 = *(undefined1 *)((long)puVar25 + 5);
                      *(undefined1 *)((long)puVar25 + 5) = *(undefined1 *)((long)param_1 + 5);
                      *(undefined1 *)((long)param_1 + 5) = uVar21;
                      if (uVar16 != 6) {
                        uVar21 = *(undefined1 *)((long)puVar25 + 6);
                        *(undefined1 *)((long)puVar25 + 6) = *(undefined1 *)((long)param_1 + 6);
                        *(undefined1 *)((long)param_1 + 6) = uVar21;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          lVar12 = 0;
          uVar16 = 0;
          uVar14 = (param_3 - 0x10 >> 4) + 1;
          do {
            uVar1 = *(undefined8 *)((long)puVar25 + lVar12);
            uVar2 = ((undefined8 *)((long)puVar25 + lVar12))[1];
            uVar3 = ((undefined8 *)((long)param_1 + lVar12))[1];
            uVar16 = uVar16 + 1;
            *(undefined8 *)((long)puVar25 + lVar12) = *(undefined8 *)((long)param_1 + lVar12);
            ((undefined8 *)((long)puVar25 + lVar12))[1] = uVar3;
            *(undefined8 *)((long)param_1 + lVar12) = uVar1;
            ((undefined8 *)((long)param_1 + lVar12))[1] = uVar2;
            lVar12 = lVar12 + 0x10;
          } while (uVar16 < uVar14);
          puVar25 = puVar25 + uVar14 * 2;
          param_1 = param_1 + uVar14 * 2;
          uVar16 = param_3 + uVar14 * -0x10;
          if (param_3 != uVar14 * 0x10) {
            uVar9 = uVar16 - 1;
            uVar14 = uVar16;
            if (6 < uVar9) goto LAB_007874e6;
            goto LAB_0078750f;
          }
        }
      }
    }
  }
  puVar24 = (undefined8 *)((long)local_4b8 + param_3);
  if (puVar24 <= puVar15) {
    local_4b0 = (undefined8 *)((long)puVar24 - 1);
    do {
      local_4b0 = (undefined8 *)((long)local_4b0 + param_3);
      puVar25 = local_4b8;
      while (iVar4 = (*param_4)(puVar24,puVar25,param_5), iVar4 < 0) {
        puVar25 = (undefined8 *)((long)puVar25 + -param_3);
      }
      puVar25 = (undefined8 *)((long)puVar25 + param_3);
      if ((puVar25 != puVar24) && (puVar24 <= local_4b0)) {
        uVar21 = *(undefined1 *)local_4b0;
        puVar22 = (undefined8 *)((long)local_4b0 - param_3);
        puVar10 = puVar22;
        puVar17 = local_4b0;
        puVar23 = local_4b0;
        if (puVar22 < puVar25) goto LAB_0078769c;
        do {
          do {
            puVar18 = puVar10;
            *(undefined1 *)puVar17 = *(undefined1 *)puVar18;
            puVar10 = (undefined8 *)((long)puVar18 + -param_3);
            puVar17 = (undefined8 *)((long)puVar17 - param_3);
          } while (puVar25 <= puVar10);
          *(undefined1 *)puVar18 = uVar21;
          while( true ) {
            puVar23 = (undefined8 *)((long)puVar23 + -1);
            if (puVar23 == (undefined8 *)((long)puVar24 + -1)) goto LAB_007875fb;
            puVar22 = (undefined8 *)((long)puVar22 + -1);
            uVar21 = *(undefined1 *)puVar23;
            puVar10 = puVar22;
            puVar17 = puVar23;
            if (puVar25 <= puVar22) break;
LAB_0078769c:
            *(undefined1 *)puVar23 = uVar21;
          }
        } while( true );
      }
LAB_007875fb:
      puVar24 = (undefined8 *)((long)puVar24 + param_3);
      local_4b8 = (undefined8 *)((long)local_4b8 + param_3);
    } while (puVar24 <= puVar15);
  }
LAB_0078760e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

