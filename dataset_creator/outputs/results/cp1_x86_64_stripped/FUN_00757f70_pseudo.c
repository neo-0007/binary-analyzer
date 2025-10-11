
uint * FUN_00757f70(undefined4 *param_1,uint *param_2,uint *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  uint *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  uint *puVar36;
  long lVar37;
  byte *pbVar38;
  long in_FS_OFFSET;
  bool bVar39;
  undefined1 local_40e8 [16376];
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  ulong local_e0;
  long local_d8;
  uint *local_d0;
  long local_c8;
  uint *local_c0;
  uint *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  uint *local_a0;
  undefined8 local_98;
  uint *local_90;
  ulong local_88;
  undefined4 *local_80;
  uint *local_78;
  uint *local_70;
  ulong local_68;
  uint *local_60;
  byte *local_58;
  ulong local_50;
  long local_40;
  undefined1 *puVar28;
  
  puVar29 = auStack_e8;
  puVar26 = auStack_e8;
  local_80 = param_1;
  local_98 = param_2;
  local_78 = param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar25 = *(long *)(param_4 + 0x18);
  local_88 = (ulong)*(uint *)(lVar25 + 0x40);
  if ((ulong)*(uint *)(lVar25 + 0x40) == 0) {
    local_f0 = 0x75819f;
    local_60 = (uint *)thunk_FUN_007564d0(param_2);
    puVar29 = auStack_e8;
    puVar33 = local_60;
    if (local_78 != (uint *)0x0) {
      puVar33 = local_78;
      if ((uint *)((long)local_60 + 1) <= local_78) {
        puVar33 = (uint *)((long)local_60 + 1);
      }
      local_f0 = 0x7581cc;
      FUN_007a9160(local_80,local_98,puVar33);
      puVar29 = auStack_e8;
      puVar33 = local_60;
    }
  }
  else {
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(lVar25 + 0x90);
      local_c8 = *(long *)(lVar25 + 0x48);
      local_68 = *(ulong *)(lVar25 + 0x98);
      local_50 = *(ulong *)(lVar25 + 0x88);
      local_70 = *(uint **)(lVar25 + 0xa0);
      if ((*(ulong *)(lVar25 + 0x88) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = 0x7581f5;
        FUN_006e2220("((uintptr_t) l_data.table) % __alignof__ (l_data.table[0]) == 0",
                     "../string/strxfrm_l.c",0x2c0,"__wcsxfrm_l");
      }
      if ((uVar4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = 0x758214;
        FUN_006e2220("((uintptr_t) l_data.weights) % __alignof__ (l_data.weights[0]) == 0",
                     "../string/strxfrm_l.c",0x2c1,"__wcsxfrm_l");
      }
      if ((*(ulong *)(lVar25 + 0x98) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = 0x758233;
        FUN_006e2220("((uintptr_t) l_data.extra) % __alignof__ (l_data.extra[0]) == 0",
                     "../string/strxfrm_l.c",0x2c2,"__wcsxfrm_l");
      }
      if (((ulong)*(uint **)(lVar25 + 0xa0) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = 0x758252;
        FUN_006e2220("((uintptr_t) l_data.indirect) % __alignof__ (l_data.indirect[0]) == 0",
                     "../string/strxfrm_l.c",0x2c3,"__wcsxfrm_l");
      }
      puVar6 = auStack_e8;
      while (puVar26 != local_40e8) {
        puVar29 = puVar6 + -0x1000;
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        puVar26 = puVar6 + -0x1000;
        puVar6 = puVar6 + -0x1000;
      }
      puVar27 = puVar29 + -0x10;
      *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
      uVar10 = (ulong)(puVar29 + -1) & 0xfffffffffffffff0;
      puVar28 = puVar29 + -0x10;
      puVar6 = puVar29 + -0x10;
      while (puVar28 != puVar29 + -0x1010) {
        puVar27 = puVar6 + -0x1000;
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        puVar28 = puVar6 + -0x1000;
        puVar6 = puVar6 + -0x1000;
      }
      *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
      local_58 = (byte *)((ulong)(puVar27 + -1) & 0xfffffffffffffff0);
      puVar33 = local_98;
      uVar31 = 0;
LAB_0075809c:
      uVar7 = *puVar33;
      puVar21 = puVar33 + 1;
      *(undefined8 *)(puVar27 + -0x18) = 0x7580ab;
      uVar7 = FUN_00790900(local_50,uVar7);
      if ((int)uVar7 < 0) {
        puVar20 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_007580c1:
        uVar7 = *puVar20;
        uVar17 = (ulong)(int)puVar20[1];
        puVar36 = puVar20 + 2;
        if ((int)uVar7 < 0) goto LAB_00758127;
        while( true ) {
          uVar13 = 0xfffffffffffffffe;
          if (uVar17 != 0xffffffffffffffff) {
            uVar13 = uVar17;
          }
          uVar12 = uVar17;
          if (uVar17 == 0) break;
          uVar11 = 0;
          do {
            if (puVar20[uVar11 + 2] != puVar33[uVar11 + 1]) break;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar13);
          uVar12 = uVar17 * 4;
          if (uVar17 == uVar11) break;
          while( true ) {
            puVar20 = (uint *)(uVar12 + (long)puVar36);
            uVar7 = *puVar20;
            uVar17 = (ulong)(int)puVar20[1];
            puVar36 = puVar20 + 2;
            if (-1 < (int)uVar7) break;
LAB_00758127:
            lVar25 = 0;
            if (uVar17 != 1) {
              do {
                if (puVar20[lVar25 + 2] != puVar33[lVar25 + 1]) {
                  puVar20 = puVar36 + uVar17 * 2;
                  goto LAB_007580c1;
                }
                lVar25 = lVar25 + 1;
              } while (lVar25 != uVar17 - 1);
            }
            uVar24 = puVar33[uVar17];
            uVar12 = uVar17 * 8;
            if (((int)puVar36[uVar17 - 1] <= (int)uVar24) &&
               ((int)uVar24 <= (int)puVar36[uVar17 * 2 + -1])) {
              puVar21 = puVar21 + uVar17;
              uVar7 = local_70[(long)(int)(uVar24 - puVar36[uVar17 - 1]) + (long)(int)-uVar7];
              goto LAB_0075829c;
            }
          }
        }
        puVar21 = (uint *)((long)puVar21 + uVar12);
      }
LAB_0075829c:
      uVar24 = *puVar21;
      *(uint *)(uVar10 + uVar31 * 4) = uVar7 & 0xffffff;
      local_58[uVar31] = (byte)(uVar7 >> 0x18);
      local_b0 = uVar31 + 1;
      if (uVar24 != 0) goto code_r0x007582c1;
      lVar25 = uVar31 * 4 + -4;
      local_58[local_b0] = 0;
      local_d0 = (uint *)(uVar10 + lVar25);
      local_c0 = (uint *)(uVar10 + 4 + lVar25);
      local_a0 = (uint *)0x0;
      local_d8 = *local_58 * local_88 + local_c8;
      local_50 = 0;
      puVar33 = (uint *)(uVar10 - 4);
      puVar21 = local_a0;
      do {
        local_a0 = puVar21;
        uVar7 = (uint)*(byte *)(local_d8 + local_50);
        local_60 = local_a0;
        if ((*(byte *)(local_d8 + local_50) & 4) == 0) {
          uVar10 = 0xffffffffffffffff;
          local_90 = (uint *)(local_50 + local_c8);
          puVar21 = puVar33;
          uVar17 = 0;
          do {
            if ((uVar7 & 1) == 0) {
              if (uVar10 == 0xffffffffffffffff) {
                uVar10 = uVar17;
              }
            }
            else {
              if ((uVar10 != 0xffffffffffffffff) && (uVar10 < uVar17)) {
                local_70 = puVar33 + uVar10;
                puVar20 = puVar21;
                do {
                  while( true ) {
                    uVar7 = *puVar20;
                    uVar24 = *(uint *)(uVar4 + (long)(int)uVar7 * 4);
                    uVar10 = (ulong)uVar24;
                    uVar9 = uVar7 + 1;
                    lVar25 = (long)(int)uVar7 * 4;
                    *puVar20 = uVar9;
                    puVar36 = (uint *)(uVar10 + (long)local_60);
                    local_a8 = puVar21;
                    if (puVar36 < local_78) break;
                    *puVar20 = uVar9 + uVar24;
                    local_60 = puVar36;
LAB_007599b2:
                    puVar20 = puVar20 + -1;
                    if (local_70 == puVar20) goto LAB_00759917;
                  }
                  uVar13 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_007599b2;
                  local_98 = (uint *)((long)local_60 * 4);
                  if (((long)(local_80 + (long)local_60) - (uVar4 + 8 + lVar25) < 9) || (uVar13 < 3)
                     ) {
                    puVar14 = local_60;
                    do {
                      puVar22 = (uint *)((long)puVar14 + 1);
                      local_80[(long)puVar14] =
                           *(undefined4 *)
                            (lVar25 + (long)local_60 * -4 + uVar4 + 4 + (long)puVar14 * 4);
                      puVar14 = puVar22;
                    } while (puVar36 != puVar22);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar25 + lVar32);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)(local_80 + (long)local_60) + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while (lVar32 != (ulong)(uVar24 >> 2) * 0x10);
                    uVar12 = uVar10 & 0xfffffffffffffffc;
                    pbVar38 = (byte *)((long)local_60 + uVar12);
                    iVar16 = uVar9 + (int)uVar12;
                    if (uVar10 != uVar12) {
                      local_80[(long)pbVar38] = *(undefined4 *)(uVar4 + (long)iVar16 * 4);
                      if (uVar13 != uVar12) {
                        lVar25 = (long)(iVar16 + 1);
                        local_80[(long)(pbVar38 + 1)] = *(undefined4 *)(uVar4 + lVar25 * 4);
                        if (uVar13 - uVar12 != 1) {
                          local_80[(long)(pbVar38 + 2)] = *(undefined4 *)(uVar4 + 4 + lVar25 * 4);
                        }
                      }
                    }
                  }
                  puVar14 = puVar20 + -1;
                  *puVar20 = uVar7 + 2 + (int)uVar13;
                  puVar20 = puVar14;
                  local_60 = puVar36;
                } while (local_70 != puVar14);
              }
LAB_00759917:
              uVar7 = puVar21[1];
              uVar9 = uVar7 + 1;
              lVar25 = (long)(int)uVar7 * 4;
              uVar24 = *(uint *)(uVar4 + (long)(int)uVar7 * 4);
              uVar10 = (ulong)uVar24;
              puVar21[1] = uVar9;
              puVar20 = (uint *)(uVar10 + (long)local_60);
              if (puVar20 < local_78) {
                uVar13 = uVar10 - 1;
                if (uVar10 == 0) {
                  uVar10 = 0xffffffffffffffff;
                }
                else {
                  local_70 = (uint *)((long)local_60 * 4);
                  if ((((long)local_70 + (long)local_80) - (uVar4 + 8 + lVar25) < 9) || (uVar13 < 3)
                     ) {
                    puVar36 = local_60;
                    do {
                      puVar14 = (uint *)((long)puVar36 + 1);
                      local_80[(long)puVar36] =
                           *(undefined4 *)
                            (lVar25 + (long)local_60 * -4 + uVar4 + 4 + (long)puVar36 * 4);
                      puVar36 = puVar14;
                    } while (puVar20 != puVar14);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar25 + lVar32);
                      uVar5 = puVar1[1];
                      pbVar38 = (byte *)((long)local_70 + (long)local_80) + lVar32;
                      *(undefined8 *)pbVar38 = *puVar1;
                      *(undefined8 *)(pbVar38 + 8) = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while ((ulong)(uVar24 >> 2) * 0x10 != lVar32);
                    uVar12 = uVar10 & 0xfffffffffffffffc;
                    pbVar38 = (byte *)((long)local_60 + uVar12);
                    iVar16 = uVar9 + (int)uVar12;
                    if (uVar10 != uVar12) {
                      local_80[(long)pbVar38] = *(undefined4 *)(uVar4 + (long)iVar16 * 4);
                      if (uVar13 != uVar12) {
                        lVar25 = (long)(iVar16 + 1);
                        local_80[(long)(pbVar38 + 1)] = *(undefined4 *)(uVar4 + lVar25 * 4);
                        if (uVar13 - uVar12 != 1) {
                          local_80[(long)(pbVar38 + 2)] = *(undefined4 *)(uVar4 + 4 + lVar25 * 4);
                        }
                      }
                    }
                  }
                  puVar21[1] = uVar7 + 2 + (int)uVar13;
                  uVar10 = 0xffffffffffffffff;
                  local_60 = puVar20;
                }
              }
              else {
                puVar21[1] = uVar9 + uVar24;
                uVar10 = 0xffffffffffffffff;
                local_60 = puVar20;
              }
            }
            puVar21 = puVar21 + 1;
            uVar7 = (uint)(byte)*(uint *)((long)local_90 + local_58[uVar17 + 1] * local_88);
            bVar39 = uVar31 != uVar17;
            uVar17 = uVar17 + 1;
          } while (bVar39);
          if ((uVar10 != 0xffffffffffffffff) && (uVar10 < local_b0)) {
            local_70 = puVar33 + uVar10;
            puVar21 = local_c0;
            do {
              uVar7 = *puVar21;
              uVar24 = *(uint *)(uVar4 + (long)(int)uVar7 * 4);
              uVar10 = (ulong)uVar24;
              uVar9 = uVar7 + 1;
              lVar25 = (long)(int)uVar7 * 4;
              *puVar21 = uVar9;
              puVar20 = (uint *)(uVar10 + (long)local_60);
              if (puVar20 < local_78) {
                uVar17 = uVar10 - 1;
                if (uVar10 != 0) {
                  if (((long)local_80 + ((long)local_60 * 4 - (uVar4 + 8 + lVar25)) < 9) ||
                     (uVar17 < 3)) {
                    puVar36 = local_60;
                    do {
                      puVar14 = (uint *)((long)puVar36 + 1);
                      local_80[(long)puVar36] =
                           *(undefined4 *)
                            (lVar25 + (long)local_60 * -4 + uVar4 + 4 + (long)puVar36 * 4);
                      puVar36 = puVar14;
                    } while (puVar20 != puVar14);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar25 + lVar32);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar32 + (long)local_60 * 4);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while (lVar32 != (ulong)(uVar24 >> 2) * 0x10);
                    uVar13 = uVar10 & 0xfffffffffffffffc;
                    pbVar38 = (byte *)((long)local_60 + uVar13);
                    iVar16 = uVar9 + (int)uVar13;
                    if (uVar10 != uVar13) {
                      local_80[(long)pbVar38] = *(undefined4 *)(uVar4 + (long)iVar16 * 4);
                      if (uVar17 != uVar13) {
                        lVar25 = (long)(iVar16 + 1);
                        local_80[(long)(pbVar38 + 1)] = *(undefined4 *)(uVar4 + lVar25 * 4);
                        if (uVar17 - uVar13 != 1) {
                          local_80[(long)(pbVar38 + 2)] = *(undefined4 *)(uVar4 + 4 + lVar25 * 4);
                        }
                      }
                    }
                  }
                  *puVar21 = uVar7 + 2 + (int)uVar17;
                  local_60 = puVar20;
                }
              }
              else {
                *puVar21 = uVar9 + uVar24;
                local_60 = puVar20;
              }
              puVar21 = puVar21 + -1;
            } while (local_70 != puVar21);
          }
        }
        else {
          uVar24 = 1;
          local_90 = (uint *)(local_c8 + local_50);
          uVar10 = 0xffffffffffffffff;
          uVar17 = 0;
          local_70 = puVar33;
          do {
            local_98 = (uint *)(CONCAT44(local_98._4_4_,uVar7) & 0xffffffff00000001);
            if ((uVar7 & 1) == 0) {
              if (uVar10 == 0xffffffffffffffff) {
                uVar10 = uVar17;
              }
            }
            else {
              if ((uVar10 != 0xffffffffffffffff) && (uVar10 < uVar17)) {
                puVar21 = local_70;
                puVar20 = local_60;
                uVar7 = uVar24;
                do {
                  while( true ) {
                    uVar9 = *puVar21 + 1;
                    lVar25 = (long)(int)*puVar21 * 4;
                    *puVar21 = uVar9;
                    uVar24 = *(uint *)(uVar4 + lVar25);
                    uVar13 = (ulong)uVar24;
                    local_e0 = uVar17;
                    if (uVar13 != 0) break;
                    puVar21 = puVar21 + -1;
                    local_60 = puVar20;
                    uVar24 = uVar7 + 1;
                    uVar7 = uVar7 + 1;
                    if (puVar33 + uVar10 == puVar21) goto LAB_00759b02;
                  }
                  local_60 = (uint *)((long)puVar20 + uVar13 + 1);
                  if (local_60 < local_78) {
                    local_b8 = local_80 + (long)puVar20;
                    *local_b8 = uVar7;
                    lVar32 = (long)puVar20 * 4 + 4;
                    lVar23 = (long)(int)uVar9;
                    if (((long)local_80 + (lVar32 - (uVar4 + 8 + lVar25)) < 9) || (uVar13 - 1 < 3))
                    {
                      uVar12 = 0;
                      do {
                        local_b8[uVar12 + 1] = ((uint *)(uVar4 + lVar25))[uVar12 + 1];
                        uVar12 = uVar12 + 1;
                      } while (uVar13 != uVar12);
                    }
                    else {
                      lVar37 = 0;
                      do {
                        puVar1 = (undefined8 *)(uVar4 + 4 + lVar25 + lVar37);
                        uVar5 = puVar1[1];
                        puVar2 = (undefined8 *)((long)local_80 + lVar37 + lVar32);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar5;
                        lVar37 = lVar37 + 0x10;
                      } while ((ulong)(uVar24 >> 2) * 0x10 != lVar37);
                      uVar12 = uVar13 & 0xfffffffffffffffc;
                      if (uVar13 != uVar12) {
                        local_80[(long)((long)puVar20 + uVar12 + 1)] =
                             *(undefined4 *)(uVar4 + (uVar12 + lVar23) * 4);
                        if (uVar12 + 1 < uVar13) {
                          local_80[(long)((long)puVar20 + uVar12 + 2)] =
                               *(undefined4 *)(uVar4 + (uVar12 + 1 + lVar23) * 4);
                          if (uVar12 + 2 < uVar13) {
                            local_80[(long)((long)puVar20 + uVar12 + 3)] =
                                 *(undefined4 *)(uVar4 + (uVar12 + 2 + lVar23) * 4);
                          }
                        }
                      }
                    }
                  }
                  puVar36 = puVar21 + -1;
                  *puVar21 = uVar9 + uVar24;
                  puVar21 = puVar36;
                  puVar20 = local_60;
                  uVar24 = (uint)local_98;
                  uVar7 = (uint)local_98;
                } while (puVar33 + uVar10 != puVar36);
              }
LAB_00759b02:
              lVar25 = (long)(int)local_70[1] * 4;
              uVar9 = local_70[1] + 1;
              local_a8 = (uint *)(uVar4 + lVar25);
              local_70[1] = uVar9;
              uVar7 = *local_a8;
              uVar10 = (ulong)uVar7;
              if (uVar10 == 0) {
                uVar24 = uVar24 + 1;
                uVar10 = 0xffffffffffffffff;
              }
              else {
                puVar21 = (uint *)(uVar10 + 1 + (long)local_60);
                if (puVar21 < local_78) {
                  lVar23 = (long)(int)uVar9;
                  local_80[(long)local_60] = uVar24;
                  lVar32 = (long)local_60 * 4 + 4;
                  if (((long)local_80 + (lVar32 - (uVar4 + 8 + lVar25)) < 9) || (uVar10 - 1 < 3)) {
                    uVar13 = 0;
                    do {
                      (local_80 + (long)local_60)[uVar13 + 1] = local_a8[uVar13 + 1];
                      uVar13 = uVar13 + 1;
                    } while (uVar10 != uVar13);
                  }
                  else {
                    lVar37 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar25 + lVar37);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar37 + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar37 = lVar37 + 0x10;
                    } while ((ulong)(uVar7 >> 2) << 4 != lVar37);
                    uVar13 = uVar10 & 0xfffffffffffffffc;
                    if (uVar10 != uVar13) {
                      local_80[(long)((long)local_60 + uVar13 + 1)] =
                           *(undefined4 *)(uVar4 + (uVar13 + lVar23) * 4);
                      if (uVar13 + 1 < uVar10) {
                        local_80[(long)((long)local_60 + uVar13 + 2)] =
                             *(undefined4 *)(uVar4 + (uVar13 + 1 + lVar23) * 4);
                        if (uVar13 + 2 < uVar10) {
                          local_80[(long)((long)local_60 + uVar13 + 3)] =
                               *(undefined4 *)(uVar4 + (uVar13 + 2 + lVar23) * 4);
                        }
                      }
                    }
                  }
                }
                local_70[1] = uVar9 + uVar7;
                uVar10 = 0xffffffffffffffff;
                local_60 = puVar21;
                uVar24 = (uint)local_98;
              }
            }
            local_70 = local_70 + 1;
            uVar7 = (uint)(byte)*(uint *)((long)local_90 + local_58[uVar17 + 1] * local_88);
            bVar39 = uVar31 != uVar17;
            uVar17 = uVar17 + 1;
          } while (bVar39);
          if ((uVar10 != 0xffffffffffffffff) && (uVar10 < uVar31)) {
            local_90 = puVar33 + uVar10;
            puVar21 = local_60;
            puVar20 = local_d0;
            do {
              lVar25 = (long)(int)*puVar20 * 4;
              uVar9 = *puVar20 + 1;
              *puVar20 = uVar9;
              uVar7 = *(uint *)(uVar4 + lVar25);
              uVar10 = (ulong)uVar7;
              local_70 = (uint *)CONCAT44(local_70._4_4_,uVar7);
              if (uVar10 == 0) {
                uVar24 = uVar24 + 1;
                local_60 = puVar21;
              }
              else {
                local_60 = (uint *)((long)puVar21 + uVar10 + 1);
                if (local_60 < local_78) {
                  lVar23 = (long)(int)uVar9;
                  lVar32 = (long)puVar21 * 4 + 4;
                  local_80[(long)puVar21] = uVar24;
                  if (((long)local_80 + (lVar32 - (uVar4 + 8 + lVar25)) < 9) || (uVar10 - 1 < 3)) {
                    uVar17 = 0;
                    do {
                      (local_80 + (long)puVar21)[uVar17 + 1] =
                           ((uint *)(uVar4 + lVar25))[uVar17 + 1];
                      uVar17 = uVar17 + 1;
                    } while (uVar10 != uVar17);
                  }
                  else {
                    lVar37 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar25 + lVar37);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar37 + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar37 = lVar37 + 0x10;
                    } while ((ulong)(uVar7 >> 2) * 0x10 != lVar37);
                    uVar17 = uVar10 & 0xfffffffffffffffc;
                    if (uVar10 != uVar17) {
                      local_80[(long)((long)puVar21 + uVar17 + 1)] =
                           *(undefined4 *)(uVar4 + (uVar17 + lVar23) * 4);
                      if (uVar17 + 1 < uVar10) {
                        local_80[(long)((long)puVar21 + uVar17 + 2)] =
                             *(undefined4 *)(uVar4 + (uVar17 + 1 + lVar23) * 4);
                        if (uVar17 + 2 < uVar10) {
                          local_80[(long)((long)puVar21 + uVar17 + 3)] =
                               *(undefined4 *)(uVar4 + (uVar17 + 2 + lVar23) * 4);
                        }
                      }
                    }
                  }
                }
                uVar24 = 1;
                *puVar20 = uVar9 + uVar7;
              }
              puVar20 = puVar20 + -1;
              puVar21 = local_60;
            } while (local_90 != puVar20);
          }
        }
        local_50 = local_50 + 1;
        if (local_60 < local_78) {
          local_80[(long)local_60] = (uint)(local_50 < local_88);
        }
        puVar21 = (uint *)((long)local_60 + 1U);
      } while (local_88 != local_50);
      puVar29 = puVar27 + -0x10;
      local_68 = uVar31;
      puVar33 = local_60;
      if ((((uint *)((long)local_60 + 1U) < (uint *)0x3) ||
          (puVar29 = puVar27 + -0x10, local_60 != local_a0)) ||
         (puVar33 = (uint *)((long)local_60 + -1), puVar29 = puVar27 + -0x10, local_78 < local_60))
      goto LAB_00758171;
      goto LAB_0075981c;
    }
    local_60 = (uint *)0x0;
    puVar29 = auStack_e8;
    puVar33 = local_60;
    if (param_3 != (uint *)0x0) {
      *param_1 = 0;
      puVar29 = auStack_e8;
    }
  }
  goto LAB_00758171;
code_r0x007582c1:
  puVar33 = puVar21;
  uVar31 = local_b0;
  if (local_b0 == 0xfff) goto LAB_007582df;
  goto LAB_0075809c;
LAB_007582df:
  local_58[0xfff] = 0;
  local_d0 = (uint *)0x0;
  local_b0 = 0;
  puVar33 = local_d0;
  do {
    local_d0 = puVar33;
    puVar33 = local_98;
    lVar25 = (long)(int)local_b0;
    uVar7 = *local_98;
    *(undefined8 *)(puVar27 + -0x18) = 0x758319;
    uVar7 = FUN_00790900(local_50,uVar7);
    if ((int)uVar7 < 0) {
      puVar21 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_00758332:
      uVar7 = *puVar21;
      uVar24 = puVar21[1];
      while( true ) {
        uVar10 = (ulong)(int)uVar24;
        if ((int)uVar7 < 0) break;
        uVar31 = 0xfffffffffffffffe;
        if (uVar10 != 0xffffffffffffffff) {
          uVar31 = uVar10;
        }
        if (uVar10 == 0) goto LAB_007583f5;
        uVar17 = 0;
        do {
          if (puVar21[uVar17 + 2] != puVar33[uVar17 + 1]) break;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar31);
        if (uVar10 == uVar17) goto LAB_007583f5;
        puVar21 = puVar21 + uVar10 + 2;
        uVar7 = *puVar21;
        uVar24 = puVar21[1];
      }
      lVar32 = 0;
      if (uVar10 != 1) {
        do {
          if (puVar21[lVar32 + 2] != puVar33[lVar32 + 1]) {
            puVar21 = puVar21 + uVar10 * 2 + 2;
            goto LAB_00758332;
          }
          lVar32 = lVar32 + 1;
        } while (uVar10 - 1 != lVar32);
      }
      uVar24 = puVar33[uVar10];
      if (((int)uVar24 < (int)puVar21[uVar10 + 1]) || ((int)puVar21[uVar10 * 2 + 1] < (int)uVar24))
      {
        puVar21 = puVar21 + uVar10 * 2 + 2;
        goto LAB_00758332;
      }
      uVar7 = local_70[(long)(int)(uVar24 - puVar21[uVar10 + 1]) + (long)(int)-uVar7];
    }
LAB_007583f5:
    uVar24 = *local_98;
    if ((*(byte *)(((int)uVar7 >> 0x18 & 0xff) * local_88 + local_c8 + lVar25) & 4) == 0) {
      if (uVar24 == 0) goto LAB_00759831;
      puVar33 = (uint *)0x0;
      local_58 = (byte *)0x0;
      local_60 = local_d0;
      iVar16 = (int)local_b0;
      local_d8 = local_b0 + local_c8;
      local_90 = local_98;
      do {
        puVar21 = local_90 + 1;
        *(undefined8 *)(puVar27 + -0x18) = 0x758bd4;
        uVar7 = FUN_00790900(local_50);
        if ((int)uVar7 < 0) {
          puVar20 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_00758bf1:
          uVar7 = *puVar20;
          uVar10 = (ulong)(int)puVar20[1];
          puVar36 = puVar20 + 2;
          if ((int)uVar7 < 0) goto LAB_00758c55;
          while( true ) {
            uVar31 = 0xfffffffffffffffe;
            if (uVar10 != 0xffffffffffffffff) {
              uVar31 = uVar10;
            }
            uVar17 = uVar10;
            if (uVar10 == 0) break;
            uVar13 = 0;
            do {
              if (puVar20[uVar13 + 2] != local_90[uVar13 + 1]) break;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar31);
            uVar17 = uVar10 * 4;
            if (uVar13 == uVar10) break;
            while( true ) {
              puVar20 = (uint *)(uVar17 + (long)puVar36);
              uVar7 = *puVar20;
              uVar10 = (ulong)(int)puVar20[1];
              puVar36 = puVar20 + 2;
              if (-1 < (int)uVar7) break;
LAB_00758c55:
              lVar25 = 0;
              if (uVar10 != 1) {
                do {
                  if (puVar20[lVar25 + 2] != local_90[lVar25 + 1]) {
                    puVar20 = puVar36 + uVar10 * 2;
                    goto LAB_00758bf1;
                  }
                  lVar25 = lVar25 + 1;
                } while (lVar25 != uVar10 - 1);
              }
              uVar24 = local_90[uVar10];
              uVar17 = uVar10 * 8;
              if (((int)puVar36[uVar10 - 1] <= (int)uVar24) &&
                 ((int)uVar24 <= (int)puVar36[uVar10 * 2 + -1])) {
                puVar21 = puVar21 + uVar10;
                uVar7 = local_70[(long)(int)(uVar24 - puVar36[uVar10 - 1]) + (long)(int)-uVar7];
                goto LAB_00758cbf;
              }
            }
          }
          puVar21 = (uint *)((long)puVar21 + uVar17);
        }
LAB_00758cbf:
        iVar15 = (uVar7 & 0xffffff) + 1;
        puVar20 = (uint *)(ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
        if (0 < iVar16) {
          iVar8 = 0;
          do {
            iVar30 = iVar15 + (int)puVar20;
            iVar8 = iVar8 + 1;
            iVar15 = iVar30 + 1;
            puVar20 = (uint *)(ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
          } while (iVar8 != iVar16);
        }
        if ((*(byte *)(local_d8 + ((int)uVar7 >> 0x18 & 0xff) * local_88) & 1) == 0) {
          uVar7 = *puVar21;
          if (puVar33 == (uint *)0x0) {
            puVar33 = local_90;
          }
          local_58 = local_58 + (long)puVar20;
          puVar20 = local_90;
          puVar34 = local_80;
        }
        else {
          if (puVar33 != (uint *)0x0) {
            if (local_58 != (byte *)0x0) {
              local_a0 = (uint *)CONCAT44(local_a0._4_4_,iVar15);
              pbVar38 = local_58;
              local_a8 = puVar21;
              local_90 = puVar20;
              do {
                puVar21 = puVar33 + 1;
                *(undefined8 *)(puVar27 + -0x18) = 0x758e7f;
                uVar7 = FUN_00790900(local_50);
                if ((int)uVar7 < 0) {
                  puVar20 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_00758e96:
                  uVar7 = *puVar20;
                  uVar24 = puVar20[1];
                  while( true ) {
                    uVar10 = (ulong)(int)uVar24;
                    if ((int)uVar7 < 0) break;
                    uVar31 = 0xfffffffffffffffe;
                    if (uVar10 != 0xffffffffffffffff) {
                      uVar31 = uVar10;
                    }
                    uVar17 = uVar10;
                    if (uVar10 == 0) {
LAB_007590ce:
                      puVar21 = (uint *)((long)puVar21 + uVar17);
                      goto LAB_00758f6b;
                    }
                    uVar13 = 0;
                    do {
                      if (puVar20[uVar13 + 2] != puVar33[uVar13 + 1]) break;
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar31);
                    uVar17 = uVar10 * 4;
                    if (uVar10 == uVar13) goto LAB_007590ce;
                    puVar20 = puVar20 + uVar10 + 2;
                    uVar7 = *puVar20;
                    uVar24 = puVar20[1];
                  }
                  lVar25 = 0;
                  if (uVar10 != 1) {
                    do {
                      if (puVar20[lVar25 + 2] != puVar33[lVar25 + 1]) {
                        puVar20 = puVar20 + uVar10 * 2 + 2;
                        goto LAB_00758e96;
                      }
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != uVar10 - 1);
                  }
                  uVar24 = puVar33[uVar10];
                  if (((int)uVar24 < (int)puVar20[uVar10 + 1]) ||
                     ((int)puVar20[uVar10 * 2 + 1] < (int)uVar24)) {
                    puVar20 = puVar20 + uVar10 * 2 + 2;
                    goto LAB_00758e96;
                  }
                  puVar21 = puVar21 + uVar10;
                  uVar7 = local_70[(long)(int)(uVar24 - puVar20[uVar10 + 1]) + (long)(int)-uVar7];
                }
LAB_00758f6b:
                iVar15 = (uVar7 & 0xffffff) + 1;
                uVar10 = (ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
                if (0 < iVar16) {
                  iVar8 = 0;
                  do {
                    iVar30 = (int)uVar10 + iVar15;
                    iVar8 = iVar8 + 1;
                    iVar15 = iVar30 + 1;
                    uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
                  } while (iVar8 != iVar16);
                }
                puVar33 = (uint *)(pbVar38 + (long)local_60);
                if ((puVar33 < local_78) && (uVar10 != 0)) {
                  puVar34 = local_80 + ((long)puVar33 - uVar10);
                  lVar25 = (long)iVar15 * 4 + 4;
                  if (((long)puVar34 - (uVar4 + lVar25) < 9) || (uVar10 - 1 < 3)) {
                    puVar18 = (undefined4 *)((uVar4 - 4) + lVar25);
                    do {
                      uVar3 = *puVar18;
                      puVar35 = puVar34 + 1;
                      puVar18 = puVar18 + 1;
                      *puVar34 = uVar3;
                      puVar34 = puVar35;
                    } while (local_80 + (long)puVar33 != puVar35);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)((uVar4 - 4) + lVar25 + lVar32);
                      uVar5 = puVar1[1];
                      *(undefined8 *)((long)puVar34 + lVar32) = *puVar1;
                      ((undefined8 *)((long)puVar34 + lVar32))[1] = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while (lVar32 != (uVar10 >> 2) * 0x10);
                    uVar31 = uVar10 & 0xfffffffffffffffc;
                    iVar15 = iVar15 + (int)uVar31;
                    if (uVar10 != uVar31) {
                      local_80[(long)((uVar31 - uVar10) + (long)puVar33)] =
                           *(undefined4 *)(uVar4 + (long)iVar15 * 4);
                      lVar25 = (uVar10 - uVar31) + -1;
                      if (lVar25 != 0) {
                        lVar32 = (long)(iVar15 + 1);
                        local_80[(long)puVar33 - lVar25] = *(undefined4 *)(uVar4 + lVar32 * 4);
                        lVar25 = (uVar10 - uVar31) + -2;
                        if (lVar25 != 0) {
                          local_80[(long)puVar33 - lVar25] = *(undefined4 *)(uVar4 + 4 + lVar32 * 4)
                          ;
                        }
                      }
                    }
                  }
                }
                pbVar38 = pbVar38 + -uVar10;
                puVar33 = puVar21;
              } while (pbVar38 != (byte *)0x0);
              puVar20 = local_90;
              puVar21 = local_a8;
              iVar15 = (int)local_a0;
            }
            local_60 = (uint *)(local_58 + (long)local_60);
            local_58 = (byte *)0x0;
          }
          puVar33 = (uint *)((long)local_60 + (long)puVar20);
          puVar36 = puVar33;
          if ((puVar33 < local_78) &&
             (puVar14 = (uint *)((long)puVar20 - 1), puVar36 = local_60, puVar20 != (uint *)0x0)) {
            lVar25 = (long)iVar15 * 4 + 4;
            if (((long)local_80 + ((long)local_60 * 4 - (uVar4 + lVar25)) < 9) ||
               (puVar14 < (uint *)0x3)) {
              puVar20 = local_60;
              do {
                puVar14 = (uint *)((long)puVar20 + 1);
                local_80[(long)puVar20] =
                     *(undefined4 *)
                      ((long)iVar15 * 4 + (long)local_60 * -4 + uVar4 + (long)puVar20 * 4);
                puVar20 = puVar14;
                puVar36 = puVar33;
              } while (puVar33 != puVar14);
            }
            else {
              lVar32 = 0;
              do {
                puVar1 = (undefined8 *)((uVar4 - 4) + lVar25 + lVar32);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)((long)local_80 + lVar32 + (long)local_60 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                lVar32 = lVar32 + 0x10;
              } while (((ulong)puVar20 >> 2) * 0x10 != lVar32);
              puVar22 = (uint *)((ulong)puVar20 & 0xfffffffffffffffc);
              iVar15 = iVar15 + (int)puVar22;
              pbVar38 = (byte *)((long)local_60 + (long)puVar22);
              puVar36 = puVar33;
              if (puVar20 != puVar22) {
                local_80[(long)pbVar38] = *(undefined4 *)(uVar4 + (long)iVar15 * 4);
                if (puVar14 != puVar22) {
                  lVar25 = (long)(iVar15 + 1);
                  local_80[(long)(pbVar38 + 1)] = *(undefined4 *)(uVar4 + lVar25 * 4);
                  if ((long)puVar14 - (long)puVar22 != 1) {
                    local_80[(long)(pbVar38 + 2)] = *(undefined4 *)(uVar4 + 4 + lVar25 * 4);
                  }
                }
              }
            }
          }
          local_60 = puVar36;
          puVar33 = (uint *)0x0;
          uVar7 = *puVar21;
          puVar20 = local_90;
          puVar34 = local_80;
        }
        local_90 = puVar21;
        local_80 = puVar34;
      } while (uVar7 != 0);
      local_90 = puVar20;
      pbVar38 = local_58;
      if (puVar33 != (uint *)0x0) {
        for (; pbVar38 != (byte *)0x0; pbVar38 = pbVar38 + -uVar10) {
          uVar7 = *puVar33;
          local_90 = puVar33 + 1;
          *(undefined8 *)(puVar27 + -0x18) = 0x758d88;
          uVar7 = FUN_00790900(local_50,uVar7);
          puVar21 = local_90;
          if ((int)uVar7 < 0) {
            puVar21 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_00758da5:
            uVar7 = *puVar21;
            uVar10 = (ulong)(int)puVar21[1];
            puVar20 = puVar21 + 2;
            if ((int)uVar7 < 0) goto LAB_00758e07;
            while( true ) {
              uVar31 = 0xfffffffffffffffe;
              if (uVar10 != 0xffffffffffffffff) {
                uVar31 = uVar10;
              }
              uVar17 = uVar10;
              if (uVar10 == 0) break;
              uVar13 = 0;
              do {
                if (puVar21[uVar13 + 2] != puVar33[uVar13 + 1]) break;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar31);
              uVar17 = uVar10 * 4;
              if (uVar10 == uVar13) break;
              while( true ) {
                puVar21 = (uint *)(uVar17 + (long)puVar20);
                uVar7 = *puVar21;
                uVar10 = (ulong)(int)puVar21[1];
                puVar20 = puVar21 + 2;
                if (-1 < (int)uVar7) break;
LAB_00758e07:
                lVar25 = 0;
                if (uVar10 != 1) {
                  do {
                    if (puVar21[lVar25 + 2] != puVar33[lVar25 + 1]) {
                      puVar21 = puVar20 + uVar10 * 2;
                      goto LAB_00758da5;
                    }
                    lVar25 = lVar25 + 1;
                  } while (lVar25 != uVar10 - 1);
                }
                uVar24 = puVar33[uVar10];
                uVar17 = uVar10 * 8;
                if (((int)puVar20[uVar10 - 1] <= (int)uVar24) &&
                   ((int)uVar24 <= (int)puVar20[uVar10 * 2 + -1])) {
                  uVar7 = local_70[(long)(int)(uVar24 - puVar20[uVar10 - 1]) + (long)(int)-uVar7];
                  puVar21 = local_90 + uVar10;
                  goto LAB_00759125;
                }
              }
            }
            puVar21 = (uint *)((long)local_90 + uVar17);
          }
LAB_00759125:
          iVar15 = (uVar7 & 0xffffff) + 1;
          uVar10 = (ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
          if (0 < iVar16) {
            iVar8 = 0;
            do {
              iVar30 = (int)uVar10 + iVar15;
              iVar8 = iVar8 + 1;
              iVar15 = iVar30 + 1;
              uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
            } while (iVar8 != iVar16);
          }
          puVar33 = (uint *)(pbVar38 + (long)local_60);
          if ((puVar33 < local_78) && (uVar10 != 0)) {
            lVar25 = (long)iVar15 * 4 + 4;
            puVar18 = puVar34 + ((long)puVar33 - uVar10);
            if (((long)puVar18 - (uVar4 + lVar25) < 9) || (uVar10 - 1 < 3)) {
              puVar35 = (undefined4 *)((uVar4 - 4) + lVar25);
              do {
                uVar3 = *puVar35;
                puVar19 = puVar18 + 1;
                puVar35 = puVar35 + 1;
                *puVar18 = uVar3;
                puVar18 = puVar19;
              } while (puVar19 != puVar34 + (long)puVar33);
            }
            else {
              lVar32 = 0;
              do {
                puVar1 = (undefined8 *)((uVar4 - 4) + lVar25 + lVar32);
                uVar5 = puVar1[1];
                *(undefined8 *)((long)puVar18 + lVar32) = *puVar1;
                ((undefined8 *)((long)puVar18 + lVar32))[1] = uVar5;
                lVar32 = lVar32 + 0x10;
              } while (lVar32 != (uVar10 >> 2) * 0x10);
              uVar31 = uVar10 & 0xfffffffffffffffc;
              iVar15 = iVar15 + (int)uVar31;
              if (uVar10 != uVar31) {
                puVar34[(long)((uVar31 - uVar10) + (long)puVar33)] =
                     *(undefined4 *)(uVar4 + (long)iVar15 * 4);
                lVar25 = (uVar10 - uVar31) + -1;
                if (lVar25 != 0) {
                  lVar32 = (long)(iVar15 + 1);
                  puVar34[(long)puVar33 - lVar25] = *(undefined4 *)(uVar4 + lVar32 * 4);
                  lVar25 = (uVar10 - uVar31) + -2;
                  if (lVar25 != 0) {
                    puVar34[(long)puVar33 - lVar25] = *(undefined4 *)(uVar4 + 4 + lVar32 * 4);
                  }
                }
              }
            }
          }
          puVar33 = puVar21;
        }
        local_60 = (uint *)((long)local_60 + (long)local_58);
      }
    }
    else if (uVar24 == 0) {
LAB_00759831:
      local_60 = local_d0;
    }
    else {
      puVar33 = (uint *)0x0;
      local_58 = (byte *)0x0;
      local_60 = local_d0;
      local_90 = (uint *)CONCAT44(local_90._4_4_,1);
      local_d8 = local_b0 + local_c8;
      puVar21 = local_98;
      uVar10 = local_b0;
      do {
        local_a0 = puVar21 + 1;
        local_a8 = (uint *)CONCAT44(local_a8._4_4_,(int)uVar10);
        *(undefined8 *)(puVar27 + -0x18) = 0x75848f;
        uVar7 = FUN_00790900(local_50,uVar24);
        uVar10 = (ulong)local_a8;
        iVar16 = (int)local_a8;
        if ((int)uVar7 < 0) {
          puVar20 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_007584ab:
          uVar7 = *puVar20;
          uVar31 = (ulong)(int)puVar20[1];
          puVar36 = puVar20 + 2;
          if ((int)uVar7 < 0) goto LAB_0075850e;
          while( true ) {
            uVar17 = 0xfffffffffffffffe;
            if (uVar31 != 0xffffffffffffffff) {
              uVar17 = uVar31;
            }
            uVar13 = uVar31;
            if (uVar31 == 0) break;
            uVar12 = 0;
            do {
              if (puVar20[uVar12 + 2] != puVar21[uVar12 + 1]) break;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar17);
            uVar13 = uVar31 * 4;
            if (uVar31 == uVar12) break;
            while( true ) {
              puVar20 = (uint *)(uVar13 + (long)puVar36);
              uVar7 = *puVar20;
              uVar31 = (ulong)(int)puVar20[1];
              puVar36 = puVar20 + 2;
              if (-1 < (int)uVar7) break;
LAB_0075850e:
              lVar25 = 0;
              if (uVar31 != 1) {
                do {
                  if (puVar20[lVar25 + 2] != puVar21[lVar25 + 1]) {
                    puVar20 = puVar36 + uVar31 * 2;
                    goto LAB_007584ab;
                  }
                  lVar25 = lVar25 + 1;
                } while (uVar31 - 1 != lVar25);
              }
              uVar24 = puVar21[uVar31];
              uVar13 = uVar31 * 8;
              if (((int)puVar36[uVar31 - 1] <= (int)uVar24) &&
                 ((int)uVar24 <= (int)puVar36[uVar31 * 2 + -1])) {
                local_a0 = local_a0 + uVar31;
                uVar7 = local_70[(long)(int)(uVar24 - puVar36[uVar31 - 1]) + (long)(int)-uVar7];
                goto LAB_0075857d;
              }
            }
          }
          local_a0 = (uint *)((long)local_a0 + uVar13);
        }
LAB_0075857d:
        iVar15 = (uVar7 & 0xffffff) + 1;
        puVar20 = (uint *)(ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
        if (0 < (int)local_a8) {
          iVar8 = 0;
          do {
            iVar30 = (int)puVar20 + iVar15;
            iVar8 = iVar8 + 1;
            iVar15 = iVar30 + 1;
            puVar20 = (uint *)(ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
          } while (iVar8 != (int)local_a8);
        }
        local_a8 = puVar20;
        local_e0 = CONCAT44(local_e0._4_4_,iVar15);
        if ((*(byte *)(local_d8 + ((int)uVar7 >> 0x18 & 0xff) * local_88) & 1) == 0) {
          if (puVar33 == (uint *)0x0) {
            puVar33 = puVar21;
          }
          local_58 = local_58 + 1;
          uVar24 = *local_a0;
          puVar21 = local_a0;
        }
        else {
          if ((puVar33 != (uint *)0x0) && (local_58 != (byte *)0x0)) {
            local_b8 = puVar33 + 1;
            do {
              *(undefined8 *)(puVar27 + -0x18) = 0x758779;
              uVar7 = FUN_00790900(local_50);
              puVar21 = local_b8;
              if ((int)uVar7 < 0) {
                puVar21 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_00758797:
                uVar7 = *puVar21;
                uVar31 = (ulong)(int)puVar21[1];
                puVar20 = puVar21 + 2;
                if ((int)uVar7 < 0) goto LAB_007587f6;
                while( true ) {
                  uVar17 = 0xfffffffffffffffe;
                  if (uVar31 != 0xffffffffffffffff) {
                    uVar17 = uVar31;
                  }
                  uVar13 = uVar31;
                  if (uVar31 == 0) break;
                  uVar12 = 0;
                  do {
                    if (puVar21[uVar12 + 2] != puVar33[uVar12 + 1]) break;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar17);
                  uVar13 = uVar31 * 4;
                  if (uVar12 == uVar31) break;
                  while( true ) {
                    puVar21 = (uint *)(uVar13 + (long)puVar20);
                    uVar7 = *puVar21;
                    uVar31 = (ulong)(int)puVar21[1];
                    puVar20 = puVar21 + 2;
                    if (-1 < (int)uVar7) break;
LAB_007587f6:
                    lVar25 = 0;
                    if (uVar31 != 1) {
                      do {
                        if (puVar21[lVar25 + 2] != puVar33[lVar25 + 1]) {
                          puVar21 = puVar20 + uVar31 * 2;
                          goto LAB_00758797;
                        }
                        lVar25 = lVar25 + 1;
                      } while (uVar31 - 1 != lVar25);
                    }
                    uVar24 = puVar33[uVar31];
                    uVar13 = uVar31 * 8;
                    if (((int)puVar20[uVar31 - 1] <= (int)uVar24) &&
                       ((int)uVar24 <= (int)puVar20[uVar31 * 2 + -1])) {
                      puVar21 = local_b8 + uVar31;
                      uVar7 = local_70[(long)(int)(uVar24 - puVar20[uVar31 - 1]) + (long)(int)-uVar7
                                      ];
                      goto LAB_00758869;
                    }
                  }
                }
                puVar21 = (uint *)((long)local_b8 + uVar13);
              }
LAB_00758869:
              iVar15 = (uVar7 & 0xffffff) + 1;
              uVar31 = (ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
              if (0 < iVar16) {
                iVar8 = 0;
                do {
                  iVar30 = (int)uVar31 + iVar15;
                  iVar8 = iVar8 + 1;
                  iVar15 = iVar30 + 1;
                  uVar31 = (ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
                } while (iVar8 != iVar16);
              }
              if (local_58 != (byte *)0x1) {
                pbVar38 = (byte *)0x1;
                local_c0 = puVar33;
                do {
                  puVar20 = puVar21 + 1;
                  *(undefined8 *)(puVar27 + -0x18) = 0x7588d0;
                  uVar7 = FUN_00790900(local_50);
                  if ((int)uVar7 < 0) {
                    puVar33 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_007588e7:
                    uVar7 = *puVar33;
                    uVar24 = puVar33[1];
                    while( true ) {
                      uVar31 = (ulong)(int)uVar24;
                      if ((int)uVar7 < 0) break;
                      uVar17 = 0xfffffffffffffffe;
                      if (uVar31 != 0xffffffffffffffff) {
                        uVar17 = uVar31;
                      }
                      uVar13 = uVar31;
                      if (uVar31 == 0) {
LAB_00758a6b:
                        puVar20 = (uint *)((long)puVar20 + uVar13);
                        goto LAB_007589c5;
                      }
                      uVar12 = 0;
                      do {
                        if (puVar33[uVar12 + 2] != puVar21[uVar12 + 1]) break;
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < uVar17);
                      uVar13 = uVar31 * 4;
                      if (uVar31 == uVar12) goto LAB_00758a6b;
                      puVar33 = puVar33 + uVar31 + 2;
                      uVar7 = *puVar33;
                      uVar24 = puVar33[1];
                    }
                    lVar25 = 0;
                    if (uVar31 != 1) {
                      do {
                        if (puVar33[lVar25 + 2] != puVar21[lVar25 + 1]) {
                          puVar33 = puVar33 + uVar31 * 2 + 2;
                          goto LAB_007588e7;
                        }
                        lVar25 = lVar25 + 1;
                      } while (uVar31 - 1 != lVar25);
                    }
                    uVar24 = puVar21[uVar31];
                    if (((int)uVar24 < (int)puVar33[uVar31 + 1]) ||
                       ((int)puVar33[uVar31 * 2 + 1] < (int)uVar24)) {
                      puVar33 = puVar33 + uVar31 * 2 + 2;
                      goto LAB_007588e7;
                    }
                    puVar20 = puVar20 + uVar31;
                    uVar7 = local_70[(long)(int)(uVar24 - puVar33[uVar31 + 1]) + (long)(int)-uVar7];
                  }
LAB_007589c5:
                  iVar15 = (uVar7 & 0xffffff) + 1;
                  uVar31 = (ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
                  if (0 < iVar16) {
                    iVar8 = 0;
                    do {
                      iVar30 = (int)uVar31 + iVar15;
                      iVar8 = iVar8 + 1;
                      iVar15 = iVar30 + 1;
                      uVar31 = (ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
                    } while (iVar8 != iVar16);
                  }
                  pbVar38 = pbVar38 + 1;
                  puVar33 = local_c0;
                  puVar21 = puVar20;
                } while (pbVar38 != local_58);
              }
              if (uVar31 == 0) {
                local_90 = (uint *)CONCAT44(local_90._4_4_,(int)local_90 + 1);
              }
              else {
                puVar21 = (uint *)((long)local_60 + uVar31 + 1);
                if (puVar21 < local_78) {
                  lVar32 = (long)local_60 * 4 + 4;
                  local_80[(long)local_60] = (int)local_90;
                  lVar23 = (long)iVar15;
                  lVar25 = lVar23 * 4 + 4;
                  if (((long)local_80 + (lVar32 - (uVar4 + lVar25)) < 9) || (uVar31 - 1 < 3)) {
                    uVar17 = 0;
                    do {
                      (local_80 + (long)local_60)[uVar17 + 1] =
                           *(int *)((uVar4 - 4) + lVar25 + uVar17 * 4);
                      uVar17 = uVar17 + 1;
                    } while (uVar31 != uVar17);
                  }
                  else {
                    lVar37 = 0;
                    do {
                      puVar1 = (undefined8 *)((uVar4 - 4) + lVar25 + lVar37);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar37 + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar37 = lVar37 + 0x10;
                    } while (lVar37 != (uVar31 >> 2) * 0x10);
                    uVar17 = uVar31 & 0xfffffffffffffffc;
                    if (uVar31 != uVar17) {
                      local_80[(long)((long)local_60 + uVar17 + 1)] =
                           *(undefined4 *)(uVar4 + (uVar17 + lVar23) * 4);
                      if (uVar17 + 1 < uVar31) {
                        local_80[(long)((long)local_60 + uVar17 + 2)] =
                             *(undefined4 *)(uVar4 + (uVar17 + 1 + lVar23) * 4);
                        if (uVar17 + 2 < uVar31) {
                          local_80[(long)((long)local_60 + uVar17 + 3)] =
                               *(undefined4 *)(uVar4 + (uVar17 + 2 + lVar23) * 4);
                        }
                      }
                    }
                  }
                }
                local_90 = (uint *)CONCAT44(local_90._4_4_,1);
                local_60 = puVar21;
              }
              local_58 = local_58 + -1;
            } while (local_58 != (byte *)0x0);
          }
          if (local_a8 == (uint *)0x0) {
            local_90 = (uint *)CONCAT44(local_90._4_4_,(int)local_90 + 1);
          }
          else {
            if ((byte *)((long)local_a8 + 1) + (long)local_60 < local_78) {
              pbVar38 = (byte *)((long)local_60 + 1);
              lVar32 = (long)local_60 * 4 + 4;
              local_80[(long)local_60] = (int)local_90;
              lVar23 = (long)(int)local_e0;
              lVar25 = lVar23 * 4 + 4;
              if (((long)local_80 + (lVar32 - (uVar4 + lVar25)) < 9) ||
                 ((byte *)((long)local_a8 - 1U) < (byte *)0x3)) {
                puVar33 = (uint *)0x0;
                do {
                  (local_80 + (long)local_60)[(long)((long)puVar33 + 1)] =
                       *(int *)((uVar4 - 4) + lVar25 + (long)puVar33 * 4);
                  puVar33 = (uint *)((long)puVar33 + 1);
                } while (local_a8 != puVar33);
              }
              else {
                lVar37 = 0;
                do {
                  puVar1 = (undefined8 *)((uVar4 - 4) + lVar25 + lVar37);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)local_80 + lVar37 + lVar32);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  lVar37 = lVar37 + 0x10;
                } while (((ulong)local_a8 >> 2) << 4 != lVar37);
                puVar33 = (uint *)((ulong)local_a8 & 0xfffffffffffffffc);
                if (local_a8 != puVar33) {
                  local_80[(long)((long)puVar33 + (long)pbVar38)] =
                       *(undefined4 *)(uVar4 + (long)((long)puVar33 + lVar23) * 4);
                  puVar21 = (uint *)((long)puVar33 + 1);
                  if (puVar21 < local_a8) {
                    puVar33 = (uint *)((long)puVar33 + 2);
                    local_80[(long)((long)puVar21 + (long)pbVar38)] =
                         *(undefined4 *)(uVar4 + (long)((long)puVar21 + lVar23) * 4);
                    if (puVar33 < local_a8) {
                      local_80[(long)(pbVar38 + (long)puVar33)] =
                           *(undefined4 *)(uVar4 + (long)((long)puVar33 + lVar23) * 4);
                    }
                  }
                }
              }
            }
            local_90 = (uint *)CONCAT44(local_90._4_4_,1);
            local_60 = (uint *)((byte *)((long)local_a8 + 1) + (long)local_60);
          }
          puVar33 = (uint *)0x0;
          uVar24 = *local_a0;
          puVar21 = local_a0;
        }
      } while (uVar24 != 0);
      local_a0 = puVar21;
      if ((puVar33 != (uint *)0x0) && (local_58 != (byte *)0x0)) {
        local_a0 = puVar33 + 1;
        do {
          *(undefined8 *)(puVar27 + -0x18) = 0x75868b;
          uVar7 = FUN_00790900(local_50);
          puVar21 = local_a0;
          if ((int)uVar7 < 0) {
            puVar21 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_007586a8:
            uVar7 = *puVar21;
            uVar10 = (ulong)(int)puVar21[1];
            puVar20 = puVar21 + 2;
            if ((int)uVar7 < 0) goto LAB_0075870e;
            while( true ) {
              uVar31 = 0xfffffffffffffffe;
              if (uVar10 != 0xffffffffffffffff) {
                uVar31 = uVar10;
              }
              uVar17 = uVar10;
              if (uVar10 == 0) break;
              uVar13 = 0;
              do {
                if (puVar21[uVar13 + 2] != puVar33[uVar13 + 1]) break;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar31);
              uVar17 = uVar10 * 4;
              if (uVar10 == uVar13) break;
              while( true ) {
                puVar21 = (uint *)(uVar17 + (long)puVar20);
                uVar7 = *puVar21;
                uVar10 = (ulong)(int)puVar21[1];
                puVar20 = puVar21 + 2;
                if (-1 < (int)uVar7) break;
LAB_0075870e:
                lVar25 = 0;
                if (uVar10 != 1) {
                  do {
                    if (puVar21[lVar25 + 2] != puVar33[lVar25 + 1]) {
                      puVar21 = puVar20 + uVar10 * 2;
                      goto LAB_007586a8;
                    }
                    lVar25 = lVar25 + 1;
                  } while (lVar25 != uVar10 - 1);
                }
                uVar24 = puVar33[uVar10];
                uVar17 = uVar10 * 8;
                if (((int)puVar20[uVar10 - 1] <= (int)uVar24) &&
                   ((int)uVar24 <= (int)puVar20[uVar10 * 2 + -1])) {
                  puVar21 = local_a0 + uVar10;
                  uVar7 = local_70[(long)(int)(uVar24 - puVar20[uVar10 - 1]) + (long)(int)-uVar7];
                  goto LAB_00759214;
                }
              }
            }
            puVar21 = (uint *)((long)local_a0 + uVar17);
          }
LAB_00759214:
          iVar15 = (uVar7 & 0xffffff) + 1;
          uVar10 = (ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
          if (0 < iVar16) {
            iVar8 = 0;
            do {
              iVar30 = (int)uVar10 + iVar15;
              iVar8 = iVar8 + 1;
              iVar15 = iVar30 + 1;
              uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
            } while (iVar8 != iVar16);
          }
          if (local_58 != (byte *)0x1) {
            pbVar38 = (byte *)0x1;
            local_a8 = puVar33;
            do {
              puVar20 = puVar21 + 1;
              *(undefined8 *)(puVar27 + -0x18) = 0x759274;
              uVar7 = FUN_00790900(local_50);
              if ((int)uVar7 < 0) {
                puVar33 = (uint *)(local_68 + (long)(int)-uVar7 * 4);
LAB_0075928b:
                uVar7 = *puVar33;
                uVar24 = puVar33[1];
                while( true ) {
                  uVar10 = (ulong)(int)uVar24;
                  if ((int)uVar7 < 0) break;
                  uVar31 = 0xfffffffffffffffe;
                  if (uVar10 != 0xffffffffffffffff) {
                    uVar31 = uVar10;
                  }
                  uVar17 = uVar10;
                  if (uVar10 == 0) {
LAB_00759404:
                    puVar20 = (uint *)((long)puVar20 + uVar17);
                    goto LAB_00759363;
                  }
                  uVar13 = 0;
                  do {
                    if (puVar33[uVar13 + 2] != puVar21[uVar13 + 1]) break;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < uVar31);
                  uVar17 = uVar10 * 4;
                  if (uVar10 == uVar13) goto LAB_00759404;
                  puVar33 = puVar33 + uVar10 + 2;
                  uVar7 = *puVar33;
                  uVar24 = puVar33[1];
                }
                lVar25 = 0;
                if (uVar10 != 1) {
                  do {
                    if (puVar33[lVar25 + 2] != puVar21[lVar25 + 1]) {
                      puVar33 = puVar33 + uVar10 * 2 + 2;
                      goto LAB_0075928b;
                    }
                    lVar25 = lVar25 + 1;
                  } while (uVar10 - 1 != lVar25);
                }
                uVar24 = puVar21[uVar10];
                if (((int)uVar24 < (int)puVar33[uVar10 + 1]) ||
                   ((int)puVar33[uVar10 * 2 + 1] < (int)uVar24)) {
                  puVar33 = puVar33 + uVar10 * 2 + 2;
                  goto LAB_0075928b;
                }
                puVar20 = puVar20 + uVar10;
                uVar7 = local_70[(long)(int)(uVar24 - puVar33[uVar10 + 1]) + (long)(int)-uVar7];
              }
LAB_00759363:
              iVar15 = (uVar7 & 0xffffff) + 1;
              uVar10 = (ulong)*(uint *)(uVar4 + (long)(int)(uVar7 & 0xffffff) * 4);
              if (0 < iVar16) {
                iVar8 = 0;
                do {
                  iVar30 = (int)uVar10 + iVar15;
                  iVar8 = iVar8 + 1;
                  iVar15 = iVar30 + 1;
                  uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar30 * 4);
                } while (iVar8 != iVar16);
              }
              pbVar38 = pbVar38 + 1;
              puVar33 = local_a8;
              puVar21 = puVar20;
            } while (pbVar38 != local_58);
          }
          if (uVar10 == 0) {
            local_90 = (uint *)CONCAT44(local_90._4_4_,(int)local_90 + 1);
          }
          else {
            puVar21 = (uint *)((long)local_60 + uVar10 + 1);
            if (puVar21 < local_78) {
              lVar23 = (long)iVar15;
              lVar32 = (long)local_60 * 4 + 4;
              lVar25 = lVar23 * 4 + 4;
              local_80[(long)local_60] = (int)local_90;
              if (((long)local_80 + (lVar32 - (uVar4 + lVar25)) < 9) || (uVar10 - 1 < 3)) {
                uVar31 = 0;
                do {
                  (local_80 + (long)local_60)[uVar31 + 1] =
                       *(int *)((uVar4 - 4) + lVar25 + uVar31 * 4);
                  uVar31 = uVar31 + 1;
                } while (uVar10 != uVar31);
              }
              else {
                lVar37 = 0;
                do {
                  puVar1 = (undefined8 *)((uVar4 - 4) + lVar25 + lVar37);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)local_80 + lVar37 + lVar32);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  lVar37 = lVar37 + 0x10;
                } while ((uVar10 >> 2) * 0x10 != lVar37);
                uVar31 = uVar10 & 0xfffffffffffffffc;
                if (uVar10 != uVar31) {
                  local_80[(long)((long)local_60 + uVar31 + 1)] =
                       *(undefined4 *)(uVar4 + (uVar31 + lVar23) * 4);
                  if (uVar31 + 1 < uVar10) {
                    local_80[(long)((long)local_60 + uVar31 + 2)] =
                         *(undefined4 *)(uVar4 + (uVar31 + 1 + lVar23) * 4);
                    if (uVar31 + 2 < uVar10) {
                      local_80[(long)((long)local_60 + uVar31 + 3)] =
                           *(undefined4 *)(uVar4 + (uVar31 + 2 + lVar23) * 4);
                    }
                  }
                }
              }
            }
            local_90 = (uint *)CONCAT44(local_90._4_4_,1);
            local_60 = puVar21;
          }
          local_58 = local_58 + -1;
        } while (local_58 != (byte *)0x0);
        local_58 = (byte *)0x0;
      }
    }
    local_b0 = local_b0 + 1;
    if (local_60 < local_78) {
      local_80[(long)local_60] = (uint)(local_b0 < local_88);
    }
    puVar33 = (uint *)((long)local_60 + 1);
  } while (local_88 != local_b0);
  puVar29 = puVar27 + -0x10;
  puVar33 = local_60;
  if ((((uint *)0x2 < (uint *)((long)local_60 + 1)) &&
      (puVar29 = puVar27 + -0x10, local_60 == local_d0)) &&
     (puVar33 = (uint *)((long)local_60 + -1), puVar29 = puVar27 + -0x10, local_60 <= local_78)) {
LAB_0075981c:
    local_80[(long)((long)local_60 + -1)] = 0;
    puVar29 = puVar27 + -0x10;
  }
LAB_00758171:
  local_60 = puVar33;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar29 + -8) = 0x75a221;
  FUN_00771f60();
}

