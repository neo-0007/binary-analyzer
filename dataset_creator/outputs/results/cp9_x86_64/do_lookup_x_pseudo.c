
undefined8
do_lookup_x(byte *param_1,ulong param_2,ulong *param_3,long param_4,long *param_5,long *param_6,
           ulong param_7,undefined8 param_8,uint param_9,long *param_10,uint param_11,long param_12)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  uint *local_b8;
  uint local_b0;
  uint local_68;
  int local_44;
  uint *local_40 [2];
  
  uVar3 = *(uint *)(param_6 + 1);
  lVar4 = *param_6;
  uVar7 = param_11 & 2;
  local_68 = param_11 & 1;
  do {
    plVar19 = *(long **)(*(long *)(lVar4 + param_7 * 8) + 0x28);
    if ((plVar19 != param_10) &&
       (((uVar7 == 0 || ((*(byte *)((long)plVar19 + 0x31c) & 3) != 0)) &&
        ((*(byte *)((long)plVar19 + 0x31e) & 2) == 0)))) {
      if (((byte)_dl_debug_mask & 8) != 0) {
        pcVar15 = (char *)plVar19[1];
        if ((*pcVar15 == '\0') && (pcVar15 = *(char **)_dl_argv, pcVar15 == (char *)0x0)) {
          pcVar15 = "<main program>";
        }
        _dl_debug_printf("symbol=%s;  lookup in file=%s [%lu]\n",param_1,pcVar15,plVar19[6]);
      }
      uVar14 = *(uint *)((long)plVar19 + 0x2f4);
      if (uVar14 != 0) {
        local_44 = 0;
        local_40[0] = (uint *)0x0;
        lVar21 = *(long *)(plVar19[0xe] + 8);
        lVar9 = 0;
        if ((*(byte *)((long)plVar19 + 0x31e) & 0x20) != 0) {
          lVar9 = *plVar19;
          lVar21 = lVar21 + lVar9;
        }
        lVar9 = lVar9 + *(long *)(plVar19[0xd] + 8);
        if (plVar19[0x60] == 0) {
          uVar10 = (ulong)uVar14;
          if (*param_3 == 0xffffffff) {
            lVar18 = 0;
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
                      uVar14 = (uint)uVar22;
                      pbVar17 = param_1 + 5;
                      bVar6 = param_1[5];
                      while (bVar6 != 0) {
                        pbVar17 = pbVar17 + 1;
                        uVar22 = (ulong)bVar6 + uVar22 * 0x10;
                        uVar22 = (uint)(uVar22 >> 0x18) & 0xf0 ^ uVar22;
                        uVar14 = (uint)uVar22;
                        bVar6 = *pbVar17;
                      }
                      uVar22 = (ulong)(uVar14 & 0xfffffff);
                      lVar18 = (uVar22 % uVar10) * 4;
                      goto LAB_007ae595;
                    }
                  }
                }
              }
              lVar18 = (uVar22 % uVar10) * 4;
            }
LAB_007ae595:
            *param_3 = uVar22;
          }
          else {
            lVar18 = (*param_3 % uVar10) * 4;
          }
          uVar14 = *(uint *)(plVar19[0x62] + lVar18);
          if (uVar14 != 0) {
            do {
              uVar10 = (ulong)uVar14;
              puVar11 = (uint *)check_match(param_1,param_4,param_8,param_9,param_11,
                                            lVar21 + uVar10 * 0x18,uVar10,lVar9,plVar19,local_40,
                                            &local_44);
              if (puVar11 != (uint *)0x0) goto LAB_007adf90;
              uVar14 = *(uint *)(plVar19[0x61] + uVar10 * 4);
            } while (uVar14 != 0);
            goto LAB_007ae33f;
          }
        }
        else {
          local_b0 = (uint)(param_2 >> 6);
          uVar10 = *(ulong *)(plVar19[0x60] + (ulong)(local_b0 & *(uint *)(plVar19 + 0x5f)) * 8);
          if ((((uint)(uVar10 >>
                      ((byte)(param_2 >> ((byte)*(undefined4 *)((long)plVar19 + 0x2fc) & 0x3f)) &
                      0x3f)) & (uint)(uVar10 >> ((byte)param_2 & 0x3f)) & 1) != 0) &&
             (uVar14 = *(uint *)(plVar19[0x61] + (param_2 % (ulong)uVar14) * 4), uVar14 != 0)) {
            puVar12 = (uint *)(plVar19[0x62] + (ulong)uVar14 * 4);
            do {
              uVar14 = *puVar12;
              if ((uVar14 ^ param_2) >> 1 == 0) {
                uVar10 = (long)puVar12 - plVar19[0x62] >> 2;
                puVar11 = (uint *)check_match(param_1,param_4,param_8,param_9,param_11,
                                              lVar21 + (uVar10 & 0xffffffff) * 0x18,uVar10,lVar9,
                                              plVar19,local_40,&local_44);
                if (puVar11 != (uint *)0x0) goto LAB_007adf90;
                uVar14 = *puVar12;
              }
              puVar12 = puVar12 + 1;
            } while ((uVar14 & 1) == 0);
LAB_007ae33f:
            if ((local_44 == 1) && (puVar11 = local_40[0], local_40[0] != (uint *)0x0)) {
LAB_007adf90:
              if (param_12 == 0) {
                if (((((*(byte *)((long)plVar19 + 0x31c) & 3) == 0) && (param_11 == 4)) &&
                    (plVar19[0xf] != 0)) &&
                   ((plVar19[0x10] != 0 && (uVar10 = *(ulong *)(plVar19[0x10] + 8), uVar10 != 0))))
                {
                  lVar18 = *(long *)(plVar19[0xf] + 8);
                  if ((*(byte *)((long)plVar19 + 0x31e) & 0x20) != 0) {
                    lVar18 = lVar18 + *plVar19;
                  }
                  uVar10 = uVar10 / 0x18;
                  if ((int)uVar10 != 0) {
                    lVar1 = lVar18 + (uVar10 & 0xffffffff) * 0x18;
                    do {
                      uVar10 = *(ulong *)(lVar18 + 8);
                      uVar22 = uVar10 & 0xffffffff;
                      if ((((int)uVar10 != 7) && (uVar22 != 0x10)) &&
                         ((0x13 < uVar22 - 0x11 &&
                          ((uVar22 == 5 &&
                           (iVar8 = strcmp((char *)((ulong)*(uint *)(lVar21 + (uVar10 >> 0x20) *
                                                                              0x18) + lVar9),
                                           (char *)param_1), iVar8 == 0)))))) goto LAB_007addeb;
                      lVar18 = lVar18 + 0x18;
                    } while (lVar18 != lVar1);
                  }
                }
                if (1 < (*(byte *)((long)puVar11 + 5) & 3) - 1) {
                  bVar6 = (byte)puVar11[1] >> 4;
                  if (bVar6 == 2) goto LAB_007ae133;
LAB_007adfd1:
                  if (bVar6 == 10) {
                    lVar4 = plVar19[6];
                    lVar21 = lVar4 * 0xa0;
                    __mutex = (pthread_mutex_t *)(lVar21 + 0x931ba8);
                    pthread_mutex_lock(__mutex);
                    puVar12 = *(uint **)(&DAT_00931bd0 + lVar21);
                    uVar10 = *(ulong *)(&DAT_00931bd8 + lVar21);
                    if (puVar12 != (uint *)0x0) {
                      uVar16 = param_2 % uVar10;
                      lVar21 = param_2 % (uVar10 - 2) + 1;
                      uVar22 = uVar16;
                      do {
                        puVar20 = puVar12 + uVar22 * 8;
                        do {
                          if (param_2 != *puVar20) {
                            if (*(char **)(puVar20 + 2) != (char *)0x0) goto LAB_007ae239;
                            uVar22 = uVar10;
                            local_b8 = puVar12;
                            if ((ulong)(*(long *)(&DAT_00931be0 + lVar4 * 0xa0) << 2) < uVar10 * 3)
                            goto LAB_007ae3a7;
                            uVar22 = _dl_higher_prime_number(uVar10 + 1);
                            local_b8 = (uint *)calloc(0x20,uVar22);
                            if (local_b8 != (uint *)0x0) {
                              puVar20 = puVar12;
                              if (uVar10 != 0) {
                                do {
                                  lVar21 = *(long *)(puVar20 + 2);
                                  if (lVar21 != 0) {
                                    uVar3 = *puVar20;
                                    uVar5 = *(undefined8 *)(puVar20 + 6);
                                    uVar2 = *(undefined8 *)(puVar20 + 4);
                                    uVar16 = (ulong)uVar3 % uVar22;
                                    lVar18 = (ulong)uVar3 % (uVar22 - 2) + 1;
                                    do {
                                      puVar13 = local_b8 + uVar16 * 8;
                                      do {
                                        if (*(long *)(puVar13 + 2) == 0) {
                                          *puVar13 = uVar3;
                                          *(undefined8 *)(puVar13 + 6) = uVar5;
                                          *(long *)(puVar13 + 2) = lVar21;
                                          *(undefined8 *)(puVar13 + 4) = uVar2;
                                          goto LAB_007ae7dd;
                                        }
                                        uVar16 = uVar16 + lVar18;
                                        puVar13 = puVar13 + lVar18 * 8;
                                      } while (uVar16 < uVar22);
                                      uVar16 = uVar16 - uVar22;
                                    } while( true );
                                  }
LAB_007ae7dd:
                                  puVar20 = puVar20 + 8;
                                } while (puVar12 + uVar10 * 8 != puVar20);
                              }
                              lVar21 = lVar4 * 0xa0;
                              (**(code **)(&DAT_00931be8 + lVar21))(puVar12);
                              *(ulong *)(&DAT_00931bd8 + lVar21) = uVar22;
                              *(uint **)(&DAT_00931bd0 + lVar21) = local_b8;
                              *(code **)(&DAT_00931be8 + lVar21) = free;
                              uVar16 = param_2 % uVar22;
                              lVar21 = param_2 % (uVar22 - 2) + 1;
                              goto LAB_007ae3a7;
                            }
                            goto LAB_007ae966;
                          }
                          iVar8 = strcmp(*(char **)(puVar20 + 2),(char *)param_1);
                          if (iVar8 == 0) {
                            if (uVar7 == 0) {
                              puVar11 = *(uint **)(puVar20 + 4);
                              plVar19 = *(long **)(puVar20 + 6);
                            }
                            param_5[1] = (long)plVar19;
                            *param_5 = (long)puVar11;
                            pthread_mutex_unlock(__mutex);
                            return 1;
                          }
LAB_007ae239:
                          uVar22 = uVar22 + lVar21;
                          puVar20 = puVar20 + lVar21 * 8;
                        } while (uVar22 < uVar10);
                        uVar22 = uVar22 - uVar10;
                      } while( true );
                    }
                    local_b8 = (uint *)calloc(0x20,0x1f);
                    if (local_b8 == (uint *)0x0) {
LAB_007ae966:
                      pthread_mutex_unlock(__mutex);
                    /* WARNING: Subroutine does not return */
                      _dl_fatal_printf("out of memory\n");
                    }
                    *(uint **)(&DAT_00931bd0 + lVar21) = local_b8;
                    uVar22 = 0x1f;
                    *(undefined8 *)(&DAT_00931bd8 + lVar21) = 0x1f;
                    *(code **)(&DAT_00931be8 + lVar21) = free;
                    uVar16 = param_2 % 0x1f;
                    lVar21 = (long)param_2 % 0x1d + 1;
LAB_007ae3a7:
                    uVar3 = *puVar11;
                    if (uVar7 != 0) {
                      do {
                        puVar12 = local_b8 + uVar16 * 8;
                        do {
                          if (*(long *)(puVar12 + 2) == 0) {
                            *puVar12 = (uint)param_2;
                            *(ulong *)(puVar12 + 2) = (ulong)uVar3 + lVar9;
                            *(long *)(puVar12 + 4) = param_4;
                            *(long *)(puVar12 + 6) = param_12;
LAB_007ae411:
                            *(long *)(&DAT_00931be0 + lVar4 * 0xa0) =
                                 *(long *)(&DAT_00931be0 + lVar4 * 0xa0) + 1;
                            pthread_mutex_unlock(__mutex);
                            *param_5 = (long)puVar11;
                            param_5[1] = (long)plVar19;
                            return 1;
                          }
                          uVar16 = uVar16 + lVar21;
                          puVar12 = puVar12 + lVar21 * 8;
                        } while (uVar16 < uVar22);
                        uVar16 = uVar16 - uVar22;
                      } while( true );
                    }
                    do {
                      puVar12 = local_b8 + uVar16 * 8;
                      do {
                        if (*(long *)(puVar12 + 2) == 0) {
                          *puVar12 = (uint)param_2;
                          *(long **)(puVar12 + 6) = plVar19;
                          *(ulong *)(puVar12 + 2) = (ulong)uVar3 + lVar9;
                          *(uint **)(puVar12 + 4) = puVar11;
                          if (((*(byte *)((long)plVar19 + 0x31c) & 3) == 2) &&
                             (*(char *)((long)plVar19 + 799) == '\0')) {
                            if ((param_9 & 8) == 0) {
                              if (((byte)_dl_debug_mask & 4) != 0) {
                                _dl_debug_printf("marking %s [%lu] as NODELETE due to unique symbol\n"
                                                 ,plVar19[1],plVar19[6]);
                              }
                              *(undefined1 *)((long)plVar19 + 799) = 1;
                            }
                            else if ((char)plVar19[100] == '\0') {
                              if (((byte)_dl_debug_mask & 4) != 0) {
                                _dl_debug_printf("marking %s [%lu] as NODELETE due to unique symbol\n"
                                                 ,plVar19[1],plVar19[6]);
                              }
                              *(undefined1 *)(plVar19 + 100) = 1;
                            }
                          }
                          goto LAB_007ae411;
                        }
                        uVar16 = uVar16 + lVar21;
                        puVar12 = puVar12 + lVar21 * 8;
                      } while (uVar16 < uVar22);
                      uVar16 = uVar16 - uVar22;
                    } while( true );
                  }
                  if (bVar6 == 1) {
LAB_007adfe1:
                    *param_5 = (long)puVar11;
                    param_5[1] = (long)plVar19;
                    return 1;
                  }
                }
              }
              else if (1 < (*(byte *)((long)puVar11 + 5) & 3) - 1) {
                if (((((*(byte *)((long)puVar11 + 5) & 3) == 3) &&
                     ((*(byte *)(param_12 + 0x31c) & 3) == 0)) &&
                    ((*(byte *)(param_12 + 0x32c) & 1) == 0)) &&
                   ((*(byte *)((long)plVar19 + 0x32c) & 1) != 0)) {
                  if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                    _dl_signal_error(0,plVar19[1],param_1,
                                     "copy relocation against non-copyable protected symbol");
                  }
                  if (((*(long *)(param_4 + 8) != 0) && (*(short *)(param_4 + 6) == 0)) &&
                     (local_68 != 0)) {
                    /* WARNING: Subroutine does not return */
                    _dl_signal_error(0,plVar19[1],param_1,
                                     "non-canonical reference to canonical protected function");
                  }
                }
                bVar6 = (byte)puVar11[1] >> 4;
                if (bVar6 != 2) goto LAB_007adfd1;
LAB_007ae133:
                if (_dl_dynamic_weak == 0) goto LAB_007adfe1;
                if (*param_5 == 0) {
                  *param_5 = (long)puVar11;
                  param_5[1] = (long)plVar19;
                }
              }
            }
          }
        }
      }
    }
LAB_007addeb:
    param_7 = param_7 + 1;
    if (uVar3 <= param_7) {
      return 0;
    }
  } while( true );
}

