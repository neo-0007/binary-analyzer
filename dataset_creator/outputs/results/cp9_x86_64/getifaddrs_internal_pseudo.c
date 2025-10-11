
undefined8 getifaddrs_internal(undefined8 *param_1)

{
  uint *puVar1;
  void *__n;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  uint *puVar16;
  size_t *psVar17;
  size_t *psVar18;
  size_t *psVar19;
  size_t *psVar20;
  size_t *psVar22;
  size_t *psVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  undefined8 *__ptr;
  undefined4 uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  uint *puVar32;
  long in_FS_OFFSET;
  size_t local_c8;
  undefined8 *local_c0;
  int *local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  uint local_9c;
  int *local_98;
  ulong local_90;
  undefined8 *local_88;
  void *local_80;
  int local_78;
  uint local_74;
  void *local_70;
  undefined8 local_68;
  int local_60;
  undefined1 local_58 [16];
  long local_40;
  size_t *psVar21;
  
  psVar17 = &local_c8;
  psVar19 = &local_c8;
  psVar21 = &local_c8;
  psVar20 = &local_c8;
  psVar23 = &local_c8;
  psVar18 = &local_c8;
  psVar22 = &local_c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = param_1;
  iVar6 = __netlink_open(&local_68);
  if (iVar6 < 0) {
    uVar31 = 0xffffffff;
LAB_0076af0f:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)psVar19 + -8) = 0x76ba1f;
      __stack_chk_fail_local();
    }
    return uVar31;
  }
  iVar6 = __netlink_request(&local_68,0x12);
  if (iVar6 < 0) {
  }
  else {
    local_60 = local_60 + 1;
    iVar6 = __netlink_request(&local_68,0x16);
    __ptr = (undefined8 *)local_58._0_8_;
    if (-1 < iVar6) {
      if ((undefined8 *)local_58._0_8_ == (undefined8 *)0x0) {
        uVar31 = 0;
        uVar28 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      }
      else {
        uVar25 = local_68._4_4_;
        lVar24 = 0;
        iVar6 = 0;
        uVar7 = 0;
        puVar14 = (undefined8 *)local_58._0_8_;
        do {
          puVar16 = (uint *)puVar14[1];
          uVar29 = puVar14[2];
          if (puVar16 != (uint *)0x0) {
            do {
              if (((uVar29 < 0x10) || (uVar10 = *puVar16, uVar10 < 0x10)) || (uVar29 < uVar10))
              break;
              if ((puVar16[3] == local_68._4_4_) && (puVar16[2] == *(uint *)(puVar14 + 3))) {
                if ((*(byte *)((long)puVar16 + 6) & 0x10) != 0) goto LAB_0076b233;
                sVar5 = (short)puVar16[1];
                if (sVar5 == 3) break;
                if (sVar5 == 0x10) {
                  puVar32 = puVar16 + 8;
                  for (uVar30 = (ulong)uVar10 - 0x20; 3 < uVar30; uVar30 = uVar30 - uVar12) {
                    uVar3 = (ushort)*puVar32;
                    uVar26 = (uint)uVar3;
                    if ((uVar3 < 4) || (uVar30 < uVar26)) break;
                    if (*(ushort *)((long)puVar32 + 2) == 7) {
                      lVar24 = ((ulong)uVar26 - 4) + lVar24;
                      uVar7 = uVar7 + 1;
                      goto LAB_0076ae1f;
                    }
                    uVar12 = (ulong)(uVar26 + 3 & 0x1fffc);
                    puVar32 = (uint *)((long)puVar32 + uVar12);
                  }
                  uVar7 = uVar7 + 1;
                }
                else {
                  iVar6 = iVar6 + (uint)(sVar5 == 0x14);
                }
              }
LAB_0076ae1f:
              uVar30 = (ulong)(uVar10 + 3 & 0xfffffffc);
              uVar29 = uVar29 - uVar30;
              puVar16 = (uint *)((long)puVar16 + uVar30);
            } while( true );
          }
          puVar14 = (undefined8 *)*puVar14;
        } while (puVar14 != (undefined8 *)0x0);
        local_74 = uVar7;
        if (iVar6 + uVar7 == 0) {
          uVar31 = 0;
          uVar28 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        }
        else {
          lVar15 = (ulong)(iVar6 + uVar7) * 0xb8;
          local_c8 = lVar15 + lVar24;
          local_70 = calloc(1,local_c8);
          if (local_70 == (void *)0x0) {
            uVar31 = 0xffffffff;
          }
          else {
            local_90 = (ulong)local_74;
            uVar29 = local_90 * 4 + 0x17;
            psVar18 = &local_c8;
            while (psVar21 != (size_t *)((long)&local_c8 - (uVar29 & 0xfffffffffffff000))) {
              psVar20 = (size_t *)((long)psVar18 + -0x1000);
              *(undefined8 *)((long)psVar18 + -8) = *(undefined8 *)((long)psVar18 + -8);
              psVar21 = (size_t *)((long)psVar18 + -0x1000);
              psVar18 = (size_t *)((long)psVar18 + -0x1000);
            }
            uVar29 = (ulong)((uint)uVar29 & 0xff0);
            lVar24 = -uVar29;
            psVar23 = (size_t *)((long)psVar20 + lVar24);
            psVar22 = (size_t *)((long)psVar20 + lVar24);
            if (uVar29 != 0) {
              *(undefined8 *)((long)psVar20 + -8) = *(undefined8 *)((long)psVar20 + -8);
            }
            local_98 = (int *)((ulong)((long)psVar20 + lVar24 + 0xf) & 0xfffffffffffffff0);
            *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76aff8;
            memset(local_98,-1,local_90 * 4);
            local_80 = (void *)(lVar15 + (long)local_70);
            local_78 = 0;
            local_c0 = __ptr;
            do {
              puVar16 = (uint *)__ptr[1];
              uVar29 = __ptr[2];
              if ((puVar16 != (uint *)0x0) && (0xf < uVar29)) {
LAB_0076b066:
                uVar7 = *puVar16;
                if ((0xf < uVar7) && (uVar30 = (ulong)uVar7, uVar30 <= uVar29)) {
                  if ((uVar25 != puVar16[3]) || (puVar16[2] != *(uint *)(__ptr + 3)))
                  goto LAB_0076b050;
                  sVar5 = (short)puVar16[1];
                  if (sVar5 != 3) {
                    if (sVar5 != 0x10) {
                      if (sVar5 == 0x14) {
                        uVar30 = uVar30 - 0x18;
                        puVar32 = puVar16 + 6;
                        if ((int)local_74 < 1) goto LAB_0076b223;
                        local_b8 = local_98;
                        uVar12 = 0;
                        piVar13 = local_98;
                        while (*piVar13 != -1) {
                          if (puVar16[5] - 1 == *piVar13) {
                            pvVar9 = (void *)(uVar12 * 0xb8 + (long)local_70);
                            goto LAB_0076b401;
                          }
                          uVar12 = uVar12 + 1;
                          piVar13 = piVar13 + 1;
                          if (local_90 == uVar12) goto LAB_0076b223;
                        }
                        *piVar13 = puVar16[5] - 1;
                        pvVar9 = (void *)((long)local_70 + uVar12 * 0xb8);
                        if ((int)uVar12 != 0) {
                          *(void **)((long)local_70 + uVar12 * 0xb8 + -0xb8) = pvVar9;
                        }
LAB_0076b401:
                        lVar15 = (long)(int)(local_78 + local_74) * 0xb8;
                        pvVar11 = (void *)((long)local_70 + lVar15);
                        *(undefined4 *)((long)pvVar11 + 0x10) = *(undefined4 *)((long)pvVar9 + 0x10)
                        ;
                        if (0 < (int)(local_78 + local_74)) {
                          *(void **)((long)local_70 + lVar15 + -0xb8) = pvVar11;
                        }
                        local_78 = local_78 + 1;
                        while (3 < uVar30) {
                          uVar3 = (ushort)*puVar32;
                          uVar7 = (uint)uVar3;
                          local_b0 = uVar29;
                          local_a8 = __ptr;
                          local_9c = uVar25;
                          if ((uVar3 < 4) || (uVar12 = (ulong)uVar3, uVar30 < uVar12)) break;
                          uVar3 = *(ushort *)((long)puVar32 + 2);
                          puVar1 = puVar32 + 1;
                          uVar29 = uVar12 - 4;
                          if (uVar3 == 3) {
                            if (0x11 < uVar12 - 3) {
                    /* WARNING: Subroutine does not return */
                              *(code **)((long)psVar20 + lVar24 + -8) = __dl_iterate_phdr_cold;
                              abort();
                            }
                            *(void **)((long)pvVar11 + 8) = (void *)((long)pvVar11 + 0xa4);
                            *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b64b;
                            puVar8 = (undefined1 *)
                                     mempcpy((void *)((long)pvVar11 + 0xa4),puVar1,uVar29);
                            *puVar8 = 0;
                            goto LAB_0076b508;
                          }
                          if (uVar3 < 4) {
                            if (uVar3 == 1) {
                              if (*(long *)((long)pvVar11 + 0x18) == 0) {
                                puVar27 = (ushort *)((long)pvVar11 + 0x38);
                                *(ushort **)((long)pvVar11 + 0x18) = puVar27;
                              }
                              else {
                                puVar27 = (ushort *)((long)pvVar11 + 0x80);
                                *(ushort **)((long)pvVar11 + 0x28) = puVar27;
                              }
                              bVar2 = (byte)puVar16[4];
                              *puVar27 = (ushort)bVar2;
                              if (bVar2 == 2) {
                                if (uVar29 == 4) {
                                  *(uint *)(puVar27 + 2) = puVar32[1];
                                  uVar7 = (uint)(ushort)*puVar32;
                                }
                              }
                              else if (bVar2 == 10) {
                                if (uVar29 == 0x10) {
                                  uVar31 = *(undefined8 *)(puVar32 + 3);
                                  *(undefined8 *)(puVar27 + 4) = *(undefined8 *)(puVar32 + 1);
                                  *(undefined8 *)(puVar27 + 8) = uVar31;
                                  if (((puVar32[1] & 0xc0ff) != 0x80fe) &&
                                     (((char)puVar32[1] != -1 ||
                                      ((*(byte *)((long)puVar32 + 5) & 0xf) != 2))))
                                  goto LAB_0076b508;
                                  *(uint *)(puVar27 + 0xc) = puVar16[5];
                                  uVar7 = (uint)(ushort)*puVar32;
                                }
                              }
                              else if (uVar29 < 0x25) {
                                *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b5a8;
                                memcpy(puVar27 + 1,puVar1,uVar29);
                                uVar7 = (uint)(ushort)*puVar32;
                              }
                            }
                            else if (uVar3 == 2) {
                              if (*(long *)((long)pvVar11 + 0x18) != 0) {
                                uVar31 = *(undefined8 *)((long)pvVar11 + 0x38);
                                *(undefined1 (*) [16])((long)pvVar11 + 0x38) = (undefined1  [16])0x0
                                ;
                                *(undefined4 *)((long)pvVar11 + 0xa0) =
                                     *(undefined4 *)((long)pvVar11 + 0x58);
                                *(long *)((long)pvVar11 + 0x28) = (long)pvVar11 + 0x80;
                                *(undefined8 *)((long)pvVar11 + 0x80) = uVar31;
                                *(undefined8 *)((long)pvVar11 + 0x88) =
                                     *(undefined8 *)((long)pvVar11 + 0x40);
                                *(undefined8 *)((long)pvVar11 + 0x90) =
                                     *(undefined8 *)((long)pvVar11 + 0x48);
                                *(undefined8 *)((long)pvVar11 + 0x98) =
                                     *(undefined8 *)((long)pvVar11 + 0x50);
                                *(undefined4 *)((long)pvVar11 + 0x58) = 0;
                                *(undefined1 (*) [16])((long)pvVar11 + 0x48) = (undefined1  [16])0x0
                                ;
                              }
                              *(long *)((long)pvVar11 + 0x18) = (long)pvVar11 + 0x38;
                              bVar2 = (byte)puVar16[4];
                              *(ushort *)((long)pvVar11 + 0x38) = (ushort)bVar2;
                              if (bVar2 == 2) {
                                if (uVar29 == 4) {
                                  *(uint *)((long)pvVar11 + 0x3c) = puVar32[1];
                                  uVar7 = (uint)(ushort)*puVar32;
                                  goto LAB_0076b50b;
                                }
                              }
                              else if (bVar2 == 10) {
                                if (uVar29 == 0x10) {
                                  uVar31 = *(undefined8 *)(puVar32 + 3);
                                  *(undefined8 *)((long)pvVar11 + 0x40) =
                                       *(undefined8 *)(puVar32 + 1);
                                  *(undefined8 *)((long)pvVar11 + 0x48) = uVar31;
                                  if (((puVar32[1] & 0xc0ff) == 0x80fe) ||
                                     (((char)puVar32[1] == -1 &&
                                      ((*(byte *)((long)puVar32 + 5) & 0xf) == 2)))) {
                                    *(uint *)((long)pvVar11 + 0x50) = puVar16[5];
                                    uVar7 = (uint)(ushort)*puVar32;
                                    goto LAB_0076b50b;
                                  }
                                }
                              }
                              else if (uVar29 < 0x25) {
                                *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b8fd;
                                memcpy((void *)((long)pvVar11 + 0x3a),puVar1,uVar29);
                                uVar7 = (uint)(ushort)*puVar32;
                                goto LAB_0076b50b;
                              }
                              goto LAB_0076b508;
                            }
                          }
                          else if (uVar3 == 4) {
                            if (*(long *)((long)pvVar11 + 0x28) != 0) {
                              *(undefined1 (*) [16])((long)pvVar11 + 0x80) = (undefined1  [16])0x0;
                              *(undefined4 *)((long)pvVar11 + 0xa0) = 0;
                              *(undefined1 (*) [16])((long)pvVar11 + 0x90) = (undefined1  [16])0x0;
                            }
                            *(long *)((long)pvVar11 + 0x28) = (long)pvVar11 + 0x80;
                            bVar2 = (byte)puVar16[4];
                            *(ushort *)((long)pvVar11 + 0x80) = (ushort)bVar2;
                            if (bVar2 == 2) {
                              if (uVar29 == 4) {
                                *(uint *)((long)pvVar11 + 0x84) = puVar32[1];
                                uVar7 = (uint)(ushort)*puVar32;
                                goto LAB_0076b50b;
                              }
                            }
                            else if (bVar2 == 10) {
                              if (uVar29 == 0x10) {
                                uVar31 = *(undefined8 *)(puVar32 + 3);
                                *(undefined8 *)((long)pvVar11 + 0x88) = *(undefined8 *)(puVar32 + 1)
                                ;
                                *(undefined8 *)((long)pvVar11 + 0x90) = uVar31;
                                if (((puVar32[1] & 0xc0ff) == 0x80fe) ||
                                   (((char)puVar32[1] == -1 &&
                                    ((*(byte *)((long)puVar32 + 5) & 0xf) == 2)))) {
                                  *(uint *)((long)pvVar11 + 0x98) = puVar16[5];
                                  uVar7 = (uint)(ushort)*puVar32;
                                  goto LAB_0076b50b;
                                }
                              }
                            }
                            else if (uVar29 < 0x25) {
                              *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b620;
                              memcpy((void *)((long)pvVar11 + 0x82),puVar1,uVar29);
                              uVar7 = (uint)(ushort)*puVar32;
                              goto LAB_0076b50b;
                            }
LAB_0076b508:
                            uVar7 = (uint)(ushort)*puVar32;
                          }
LAB_0076b50b:
                          uVar29 = (ulong)(uVar7 + 3 & 0x1fffc);
                          puVar32 = (uint *)((long)puVar32 + uVar29);
                          uVar30 = uVar30 - uVar29;
                          __ptr = local_a8;
                          uVar29 = local_b0;
                          uVar25 = local_9c;
                        }
                        if (*(long *)((long)pvVar11 + 8) == 0) {
                          uVar30 = 0;
                          piVar13 = local_b8;
                          while (*piVar13 != -1) {
                            if (puVar16[5] - 1 == *piVar13) {
                              pvVar9 = (void *)(uVar30 * 0xb8 + (long)local_70);
                              goto LAB_0076b961;
                            }
                            uVar30 = uVar30 + 1;
                            piVar13 = piVar13 + 1;
                            if (local_90 == uVar30) goto LAB_0076b223;
                          }
                          *piVar13 = puVar16[5] - 1;
                          pvVar9 = (void *)((long)local_70 + uVar30 * 0xb8);
                          if ((int)uVar30 != 0) {
                            *(void **)((long)local_70 + uVar30 * 0xb8 + -0xb8) = pvVar9;
                          }
LAB_0076b961:
                          *(undefined8 *)((long)pvVar11 + 8) = *(undefined8 *)((long)pvVar9 + 8);
                        }
                        if (((*(short **)((long)pvVar11 + 0x18) != (short *)0x0) &&
                            (sVar5 = **(short **)((long)pvVar11 + 0x18), sVar5 != 0x11)) &&
                           (sVar5 != 0)) {
                          *(long *)((long)pvVar11 + 0x20) = (long)pvVar11 + 0x5c;
                          if (sVar5 == 2) {
                            puVar14 = (undefined8 *)((long)pvVar11 + 0x60);
                            uVar7 = 0x20;
                          }
                          else {
                            if (sVar5 != 10) {
                              *(short *)((long)pvVar11 + 0x5c) = sVar5;
                              uVar7 = *puVar16;
                              goto LAB_0076b050;
                            }
                            puVar14 = (undefined8 *)((long)pvVar11 + 100);
                            uVar7 = 0x80;
                          }
                          *(short *)((long)pvVar11 + 0x5c) = sVar5;
                          uVar10 = (uint)*(byte *)((long)puVar16 + 0x11);
                          if (uVar7 < *(byte *)((long)puVar16 + 0x11)) {
                            uVar10 = uVar7;
                          }
                          uVar7 = uVar10 >> 3;
                          if (uVar7 != 0) {
                            uVar30 = (ulong)uVar7;
                            if (uVar7 < 8) {
                              if ((uVar7 & 4) == 0) {
                                if ((uVar7 != 0) &&
                                   (*(undefined1 *)puVar14 = 0xff, (uVar7 & 2) != 0)) {
                                  *(undefined2 *)((long)puVar14 + (uVar30 - 2)) = 0xffff;
                                }
                              }
                              else {
                                *(undefined4 *)puVar14 = 0xffffffff;
                                *(undefined4 *)((long)puVar14 + (uVar30 - 4)) = 0xffffffff;
                              }
                            }
                            else {
                              *puVar14 = 0xffffffffffffffff;
                              *(undefined8 *)((long)puVar14 + (uVar30 - 8)) = 0xffffffffffffffff;
                              uVar7 = uVar7 + ((int)puVar14 -
                                              (int)((ulong)(puVar14 + 1) & 0xfffffffffffffff8)) &
                                      0xfffffff8;
                              if (7 < uVar7) {
                                uVar26 = 0;
                                do {
                                  uVar12 = (ulong)uVar26;
                                  uVar26 = uVar26 + 8;
                                  *(undefined8 *)
                                   (((ulong)(puVar14 + 1) & 0xfffffffffffffff8) + uVar12) =
                                       0xffffffffffffffff;
                                } while (uVar26 < uVar7);
                              }
                            }
                            puVar14 = (undefined8 *)((long)puVar14 + uVar30);
                          }
                          if ((uVar10 & 7) != 0) {
                            *(char *)puVar14 = (char)(0xff << (8U - (char)(uVar10 & 7) & 0x1f));
                          }
                        }
                        uVar7 = *puVar16;
                      }
                      goto LAB_0076b050;
                    }
                    puVar32 = puVar16 + 8;
                    uVar30 = uVar30 - 0x20;
                    if (0 < (int)local_74) {
                      uVar12 = 0;
                      piVar13 = local_98;
                      while (*piVar13 != -1) {
                        if (puVar16[5] - 1 == *piVar13) {
                          pvVar9 = (void *)((long)local_70 + uVar12 * 0xb8);
                          goto LAB_0076b111;
                        }
                        uVar12 = uVar12 + 1;
                        piVar13 = piVar13 + 1;
                        if (local_90 == uVar12) goto LAB_0076b223;
                      }
                      *piVar13 = puVar16[5] - 1;
                      pvVar9 = (void *)((long)local_70 + uVar12 * 0xb8);
                      if ((int)uVar12 != 0) {
                        *(void **)((long)local_70 + uVar12 * 0xb8 + -0xb8) = pvVar9;
                      }
LAB_0076b111:
                      local_b8 = (int *)((long)pvVar9 + 0xa4);
                      *(uint *)((long)pvVar9 + 0x10) = puVar16[6];
                      pvVar11 = local_80;
                      if (3 < uVar30) {
                        do {
                          local_9c = uVar25;
                          local_a8 = __ptr;
                          local_b0 = uVar29;
                          uVar3 = (ushort)*puVar32;
                          uVar25 = (uint)uVar3;
                          if ((uVar3 < 4) || (uVar29 = (ulong)uVar3, uVar30 < uVar29)) break;
                          uVar3 = *(ushort *)((long)puVar32 + 2);
                          puVar1 = puVar32 + 1;
                          __n = (void *)(uVar29 - 4);
                          if (uVar3 == 3) {
                            if (uVar29 - 3 < 0x12) {
                              *(int **)((long)pvVar9 + 8) = local_b8;
                              *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b34d;
                              puVar8 = (undefined1 *)mempcpy(local_b8,puVar1,(size_t)__n);
                              *puVar8 = 0;
                              uVar25 = (uint)(ushort)*puVar32;
                            }
                          }
                          else if (uVar3 < 4) {
                            if (uVar3 == 1) {
                              if (__n < (void *)0x25) {
                                *(undefined2 *)((long)pvVar9 + 0x38) = 0x11;
                                *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b1e7;
                                local_80 = __n;
                                memcpy((void *)((long)pvVar9 + 0x44),puVar1,(size_t)__n);
                                *(uint *)((long)pvVar9 + 0x3c) = puVar16[5];
                                uVar4 = *(undefined2 *)((long)puVar16 + 0x12);
                                *(char *)((long)pvVar9 + 0x43) = (char)local_80;
                                *(undefined2 *)((long)pvVar9 + 0x40) = uVar4;
                                *(long *)((long)pvVar9 + 0x18) = (long)pvVar9 + 0x38;
                                uVar25 = (uint)(ushort)*puVar32;
                              }
                            }
                            else if ((uVar3 == 2) && (__n < (void *)0x25)) {
                              *(undefined2 *)((long)pvVar9 + 0x80) = 0x11;
                              *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b748;
                              local_80 = __n;
                              memcpy((void *)((long)pvVar9 + 0x8c),puVar1,(size_t)__n);
                              *(uint *)((long)pvVar9 + 0x84) = puVar16[5];
                              uVar4 = *(undefined2 *)((long)puVar16 + 0x12);
                              *(char *)((long)pvVar9 + 0x8b) = (char)local_80;
                              *(undefined2 *)((long)pvVar9 + 0x88) = uVar4;
                              *(long *)((long)pvVar9 + 0x28) = (long)pvVar9 + 0x80;
                              uVar25 = (uint)(ushort)*puVar32;
                            }
                          }
                          else if (uVar3 == 7) {
                            *(void **)((long)pvVar9 + 0x30) = pvVar11;
                            local_80 = (void *)((long)pvVar11 + (long)__n);
                            *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b283;
                            memcpy(pvVar11,puVar1,(size_t)__n);
                            uVar25 = (uint)(ushort)*puVar32;
                            pvVar11 = local_80;
                          }
                          uVar29 = (ulong)(uVar25 + 3 & 0x1fffc);
                          uVar30 = uVar30 - uVar29;
                          puVar32 = (uint *)((long)puVar32 + uVar29);
                          uVar29 = local_b0;
                          __ptr = local_a8;
                          uVar25 = local_9c;
                        } while (3 < uVar30);
                        uVar7 = *puVar16;
                        __ptr = local_a8;
                        uVar29 = local_b0;
                        local_80 = pvVar11;
                        uVar25 = local_9c;
                      }
                      goto LAB_0076b050;
                    }
LAB_0076b223:
                    __ptr = local_c0;
                    *(undefined8 *)((long)psVar20 + lVar24 + -8) = 0x76b233;
                    free(local_70);
LAB_0076b233:
                    uVar31 = 0xfffffff5;
                    uVar28 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    psVar17 = psVar22;
                    goto LAB_0076aef0;
                  }
                }
              }
LAB_0076b293:
              __ptr = (undefined8 *)*__ptr;
            } while (__ptr != (undefined8 *)0x0);
            if ((void *)(local_c8 + (long)local_70) < local_80) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)((long)psVar20 + lVar24 + -8) = &UNK_0076ba3e;
              __assert_fail("ifa_data_ptr <= (char *) &ifas[newlink + newaddr] + ifa_data_size",
                            "../sysdeps/unix/sysv/linux/ifaddrs.c",800,"getifaddrs_internal");
            }
            if ((local_78 != 0) && (local_74 != 0)) {
              uVar29 = 0;
              do {
                if (local_98[uVar29] == -1) {
                  *(void **)((long)local_70 + (ulong)((int)uVar29 - 1) * 0xb8) =
                       (void *)(local_90 * 0xb8 + (long)local_70);
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 != local_90);
            }
            uVar31 = 0;
            *local_88 = local_70;
            __ptr = local_c0;
          }
          uVar28 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          psVar17 = psVar23;
        }
LAB_0076aef0:
        do {
          puVar14 = (undefined8 *)*__ptr;
          *(undefined8 *)((long)psVar17 + -8) = 0x76aefc;
          free(__ptr);
          psVar18 = psVar17;
joined_r0x0076aee8:
          psVar17 = psVar18;
          __ptr = puVar14;
        } while (puVar14 != (undefined8 *)0x0);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar28;
      syscall();
      psVar19 = psVar18;
      goto LAB_0076af0f;
    }
  }
  uVar31 = 0xffffffff;
  uVar28 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  puVar14 = (undefined8 *)local_58._0_8_;
  psVar18 = &local_c8;
  goto joined_r0x0076aee8;
LAB_0076b050:
  uVar30 = (ulong)(uVar7 + 3 & 0xfffffffc);
  uVar29 = uVar29 - uVar30;
  puVar16 = (uint *)((long)puVar16 + uVar30);
  if (uVar29 < 0x10) goto LAB_0076b293;
  goto LAB_0076b066;
}

