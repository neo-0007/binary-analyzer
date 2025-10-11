
undefined8
getanswer_r_constprop_0
          (long *param_1,u_char *param_2,int param_3,char *param_4,uint param_5,long *param_6,
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
  size_t sVar10;
  ulong uVar11;
  ushort *puVar12;
  char *pcVar13;
  short *psVar14;
  short *psVar15;
  int iVar16;
  ulong uVar17;
  byte bVar18;
  char *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  ushort *__src;
  ushort *puVar22;
  uint uVar23;
  void *__dest;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  short *psVar28;
  ushort uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  code *local_658;
  int local_650;
  int local_648;
  byte local_63c;
  char *local_608;
  undefined8 *local_600;
  undefined8 *local_5f0;
  int local_5d0;
  char *local_5b8;
  undefined8 local_5b0;
  short local_5a8 [48];
  u_char local_548 [248];
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  long local_40;
  
  bVar30 = 0;
  uVar9 = (ulong)(-(int)param_7 & 7);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_8 <= uVar9) || (param_8 = param_8 - uVar9, param_8 < 400)) {
LAB_007b79f0:
    *param_9 = 0x22;
    *param_10 = 0xffffffff;
    uVar8 = 0xfffffffe;
    goto LAB_007b79a9;
  }
  local_648 = (int)param_8 + -400;
  *param_6 = 0;
  if (param_8 - 400 != (long)local_648) {
    local_648 = 0x7fffffff;
  }
  if (param_5 == 0xc) {
    local_658 = res_dnok;
  }
  else {
    if ((0xffffffffeffffffdU >> ((ulong)param_5 & 0x3f) & 1) != 0) {
      *param_9 = 2;
      uVar8 = 0xffffffff;
      goto LAB_007b79a9;
    }
    local_658 = res_hnok;
  }
  uVar29 = *(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8;
  if (*(short *)(param_2 + 4) == 0x100) {
    if (param_8 <= (ulong)uVar29 * 8 + 0x198) goto LAB_007b79f0;
    puVar22 = (ushort *)(param_2 + param_3);
    iVar5 = ns_name_unpack(param_2,(u_char *)puVar22,param_2 + 0xc,local_548,0xff);
    if (iVar5 == -1) {
LAB_007b7ce0:
      iVar5 = *(int *)(in_FS_OFFSET + -0x58);
    }
    else {
      puVar26 = (undefined8 *)(param_7 + uVar9);
      pcVar13 = (char *)(puVar26 + (ulong)uVar29 + 0x33);
      local_648 = local_648 - ((uint)uVar29 * 8 + 8);
      iVar6 = ns_name_ntop(local_548,pcVar13,(long)local_648);
      if (iVar6 != -1) {
        if (iVar5 < 0) goto LAB_007b7ce0;
        iVar6 = (*local_658)(pcVar13);
        if (iVar6 == 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4a;
          *param_9 = 0x4a;
          *param_10 = 3;
          uVar8 = 0xffffffff;
          goto LAB_007b79a9;
        }
        __src = (ushort *)(param_2 + (long)iVar5 + 0x10);
        local_63c = (byte)param_5;
        uVar9 = 0x10000002L >> (local_63c & 0x3f);
        pcVar19 = pcVar13;
        local_5b8 = param_4;
        if ((uVar9 & 1) == 0) {
LAB_007b7b56:
          local_650 = uVar29 - 1;
          local_5f0 = puVar26 + 0x32;
          *puVar26 = 0;
          param_6[1] = (long)puVar26;
          puVar26[0x32] = 0;
          param_6[3] = (long)local_5f0;
          local_5b0 = local_5f0;
          if ((uVar29 != 0) && (__src < puVar22)) {
            local_5d0 = 0;
            local_608 = param_4;
            local_600 = puVar26;
            while (iVar5 = ns_name_unpack(param_2,(u_char *)puVar22,(u_char *)__src,local_548,0xff),
                  pcVar13 = pcVar19, iVar5 != -1) {
              iVar6 = ns_name_ntop(local_548,pcVar19,(long)local_648);
              if (iVar6 == -1) {
LAB_007b79d8:
                if (*(int *)(in_FS_OFFSET + -0x58) == 0x5a) goto LAB_007b79f0;
                break;
              }
              if ((iVar5 < 0) || (iVar6 = (*local_658)(pcVar19), iVar6 == 0)) break;
              puVar12 = (ushort *)((long)iVar5 + (long)__src);
              __src = puVar12 + 5;
              if (puVar22 < __src) break;
              uVar27 = *(uint *)(puVar12 + 2);
              uVar29 = puVar12[4] << 8 | puVar12[4] >> 8;
              uVar24 = (ulong)uVar29;
              if ((long)puVar22 - (long)__src < (long)uVar24) break;
              if (puVar12[1] == 0x100) {
                uVar23 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                         uVar27 << 0x18;
                uVar4 = *puVar12 << 8 | *puVar12 >> 8;
                uVar27 = (uint)uVar4;
                if ((uVar9 & 1) == 0) {
                  if ((param_5 != 0xc) || (uVar27 != 5)) goto LAB_007b7ddc;
                  if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                    *param_11 = uVar23;
                  }
                  iVar5 = dn_expand(param_2,puVar22,__src,&local_448,0x401);
                  if ((iVar5 < 0) || (iVar6 = res_dnok(&local_448), iVar6 == 0)) break;
                  __src = (ushort *)((long)iVar5 + (long)__src);
                  sVar10 = strlen((char *)&local_448);
                  uVar27 = (int)sVar10 + 1;
                  if (local_648 < (int)uVar27) goto LAB_007b79f0;
                  if (0xff < (int)uVar27) break;
                  uVar24 = (ulong)uVar27;
                  if (uVar27 < 8) {
                    if ((uVar27 & 4) == 0) {
                      if (uVar27 != 0) {
                        *pcVar19 = (char)local_448;
                        if ((uVar27 & 2) != 0) {
                          *(undefined2 *)(pcVar19 + (uVar24 - 2)) =
                               *(undefined2 *)((long)&uStack_450 + uVar24 + 6);
                        }
                      }
                    }
                    else {
                      *(undefined4 *)pcVar19 = local_448;
                      *(undefined4 *)(pcVar19 + (uVar24 - 4)) =
                           *(undefined4 *)((long)&uStack_450 + uVar24 + 4);
                    }
                  }
                  else {
                    *(ulong *)pcVar19 = CONCAT44(uStack_444,local_448);
                    *(undefined8 *)(pcVar19 + (uVar24 - 8)) =
                         *(undefined8 *)((long)&uStack_450 + uVar24);
                    lVar21 = (long)pcVar19 - (long)((ulong)(pcVar19 + 8) & 0xfffffffffffffff8);
                    pcVar13 = (char *)((long)&local_448 + -lVar21);
                    puVar25 = (undefined8 *)((ulong)(pcVar19 + 8) & 0xfffffffffffffff8);
                    for (uVar17 = (ulong)(uVar27 + (int)lVar21 >> 3); uVar17 != 0;
                        uVar17 = uVar17 - 1) {
                      *puVar25 = *(undefined8 *)pcVar13;
                      pcVar13 = pcVar13 + ((ulong)bVar30 * -2 + 1) * 8;
                      puVar25 = puVar25 + (ulong)bVar30 * -2 + 1;
                    }
                  }
                  local_648 = local_648 - uVar27;
                  pcVar13 = pcVar19 + uVar24;
                  local_608 = pcVar19;
                }
                else if (uVar27 == 5) {
                  if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                    *param_11 = uVar23;
                  }
                  if (local_600 < puVar26 + 0x2f) {
                    iVar5 = dn_expand(param_2,puVar22,__src,&local_448,0x401);
                    if ((iVar5 < 0) || (iVar6 = (*local_658)(&local_448), iVar6 == 0)) break;
                    *local_600 = pcVar19;
                    local_600 = local_600 + 1;
                    sVar10 = strlen(pcVar19);
                    iVar6 = (int)sVar10 + 1;
                    if (0xff < iVar6) break;
                    local_648 = local_648 - iVar6;
                    pcVar13 = pcVar19 + iVar6;
                    sVar10 = strlen((char *)&local_448);
                    uVar27 = (int)sVar10 + 1;
                    if (local_648 < (int)uVar27) goto LAB_007b79f0;
                    if (0xff < (int)uVar27) break;
                    uVar24 = (ulong)uVar27;
                    *param_6 = (long)pcVar13;
                    __src = (ushort *)((long)iVar5 + (long)__src);
                    if (uVar27 < 8) {
                      if ((uVar27 & 4) == 0) {
                        if (uVar27 != 0) {
                          *pcVar13 = (char)local_448;
                          if ((uVar27 & 2) != 0) {
                            *(undefined2 *)(pcVar13 + (uVar24 - 2)) =
                                 *(undefined2 *)((long)&uStack_450 + uVar24 + 6);
                          }
                        }
                      }
                      else {
                        *(undefined4 *)pcVar13 = local_448;
                        *(undefined4 *)(pcVar13 + (uVar24 - 4)) =
                             *(undefined4 *)((long)&uStack_450 + uVar24 + 4);
                      }
                    }
                    else {
                      *(ulong *)pcVar13 = CONCAT44(uStack_444,local_448);
                      *(undefined8 *)(pcVar13 + (uVar24 - 8)) =
                           *(undefined8 *)((long)&uStack_450 + uVar24);
                      lVar21 = (long)pcVar13 - (long)((ulong)(pcVar13 + 8) & 0xfffffffffffffff8);
                      pcVar19 = (char *)((long)&local_448 + -lVar21);
                      puVar25 = (undefined8 *)((ulong)(pcVar13 + 8) & 0xfffffffffffffff8);
                      for (uVar17 = (ulong)((int)lVar21 + uVar27 >> 3); uVar17 != 0;
                          uVar17 = uVar17 - 1) {
                        *puVar25 = *(undefined8 *)pcVar19;
                        pcVar19 = pcVar19 + ((ulong)bVar30 * -2 + 1) * 8;
                        puVar25 = puVar25 + (ulong)bVar30 * -2 + 1;
                      }
                    }
                    local_648 = local_648 - uVar27;
                    pcVar13 = pcVar13 + uVar24;
                  }
                }
                else {
LAB_007b7ddc:
                  if (param_5 == uVar27) {
                    if (uVar4 == 0xc) {
                      iVar5 = strcasecmp(local_608,pcVar19);
                      if (iVar5 == 0) {
                        iVar5 = ns_name_unpack(param_2,(u_char *)puVar22,(u_char *)__src,local_548,
                                               0xff);
                        if (iVar5 != -1) {
                          iVar6 = ns_name_ntop(local_548,pcVar19,(long)local_648);
                          if (iVar6 == -1) goto LAB_007b79d8;
                          if ((-1 < iVar5) && (iVar5 = res_hnok(pcVar19), iVar5 != 0)) {
                            if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                              *param_11 = uVar23;
                            }
                            *param_6 = (long)pcVar19;
                            *param_10 = 0;
                            uVar8 = 1;
                            goto LAB_007b79a9;
                          }
                        }
                        break;
                      }
                    }
                    else {
                      uVar27 = (uint)uVar29;
                      if (uVar4 == 0x1c) {
                        iVar5 = strcasecmp((char *)*param_6,pcVar19);
                        if (iVar5 == 0) {
                          uVar7 = 0x10;
LAB_007b7e4f:
                          if (uVar27 != uVar7) break;
                          if (uVar7 == *(uint *)((long)param_6 + 0x14)) {
                            if (local_5d0 == 0) {
                              if ((param_11 != (uint *)0x0) && ((int)uVar23 < (int)*param_11)) {
                                *param_11 = uVar23;
                              }
                              if (param_12 != (undefined8 *)0x0) {
                                *param_12 = pcVar19;
                              }
                              *param_6 = (long)pcVar19;
                              sVar10 = strlen(pcVar19);
                              iVar5 = (int)sVar10 + 1;
                              local_648 = local_648 - iVar5;
                              pcVar19 = pcVar19 + iVar5;
                            }
                            __dest = (void *)((ulong)(pcVar19 + 3) & 0xfffffffffffffffc);
                            local_648 = local_648 - ((int)__dest - (int)pcVar19);
                            if ((int)uVar27 <= local_648) {
                              *local_5f0 = __dest;
                              local_5f0 = local_5f0 + 1;
                              pcVar13 = (char *)mempcpy(__dest,__src,uVar24);
                              local_5d0 = local_5d0 + 1;
                              local_648 = local_648 - uVar27;
                              __src = (ushort *)((long)__src + uVar24);
                              goto LAB_007b7f50;
                            }
                            goto LAB_007b79f0;
                          }
                        }
                      }
                      else {
                        if (uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
                          getanswer_r_constprop_0_cold();
                        }
                        iVar5 = strcasecmp((char *)*param_6,pcVar19);
                        if (iVar5 == 0) {
                          uVar7 = 4;
                          goto LAB_007b7e4f;
                        }
                      }
                    }
                  }
                  __src = (ushort *)((long)__src + uVar24);
                }
              }
              else {
                __src = (ushort *)((long)__src + uVar24);
              }
LAB_007b7f50:
              local_650 = local_650 + -1;
              if ((local_650 == -1) || (pcVar19 = pcVar13, puVar22 <= __src)) break;
            }
            if (local_5d0 == 0) {
LAB_007b8278:
              *param_10 = 3;
              *param_9 = 2;
              if ((puVar26 == local_600) || ((uVar9 & 1) == 0)) {
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
                lVar21 = param_1[1];
                if (lVar21 == 0) {
                  uVar24 = (ulong)(*(byte *)(*param_1 + 0x188) >> 4);
                }
                else {
                  uVar24 = *(ulong *)(lVar21 + 0x30);
                }
                if (uVar24 != 0) {
                  psVar28 = (short *)((long)&local_5b0 + 6);
                  if (0x30 < local_5d0) {
                    local_5d0 = 0x30;
                  }
                  iVar5 = 0;
                  iVar6 = 0;
                  puVar25 = local_5b0;
                  do {
                    if (lVar21 == 0) {
                      lVar2 = *param_1;
                      bVar18 = *(byte *)(lVar2 + 0x188) >> 4;
                      uVar17 = 0;
                      if (((((((bVar18 == 0) ||
                              (uVar27 = *(uint *)*puVar25,
                              *(uint *)(lVar2 + 0x18c) == (*(uint *)(lVar2 + 400) & uVar27))) ||
                             (uVar17 = 1, uVar24 == 1)) ||
                            ((bVar18 == 1 ||
                             ((*(uint *)(lVar2 + 0x198) & uVar27) == *(uint *)(lVar2 + 0x194))))) ||
                           (uVar17 = 2, uVar24 == 2)) ||
                          (((((bVar18 == 2 ||
                              ((*(uint *)(lVar2 + 0x1a0) & uVar27) == *(uint *)(lVar2 + 0x19c))) ||
                             ((uVar17 = 3, uVar24 == 3 ||
                              (((bVar18 == 3 ||
                                ((*(uint *)(lVar2 + 0x1a8) & uVar27) == *(uint *)(lVar2 + 0x1a4)))
                               || (uVar17 = 4, uVar24 == 4)))))) ||
                            ((bVar18 == 4 ||
                             (*(uint *)(lVar2 + 0x1ac) == (*(uint *)(lVar2 + 0x1b0) & uVar27))))) ||
                           (uVar17 = 5, uVar24 == 5)))) ||
                         (((bVar18 == 5 ||
                           (*(uint *)(lVar2 + 0x1b4) == (*(uint *)(lVar2 + 0x1b8) & uVar27))) ||
                          ((uVar17 = 6, uVar24 == 6 || (bVar18 == 6)))))) goto LAB_007b7cd5;
                      if ((*(uint *)(lVar2 + 0x1c0) & uVar27) == *(uint *)(lVar2 + 0x1bc)) {
                        iVar16 = 6;
                        uVar11 = 6;
                      }
                      else {
                        uVar17 = 7;
                        if (((((uVar24 == 7) || (bVar18 == 7)) ||
                             ((*(uint *)(lVar2 + 0x1c8) & uVar27) == *(uint *)(lVar2 + 0x1c4))) ||
                            ((uVar17 = 8, uVar24 == 8 || (bVar18 == 8)))) ||
                           (((*(uint *)(lVar2 + 0x1d0) & uVar27) == *(uint *)(lVar2 + 0x1cc) ||
                            ((uVar17 = 9, uVar24 == 9 || (bVar18 == 9)))))) goto LAB_007b7cd5;
                        if ((uVar27 & *(uint *)(lVar2 + 0x1d8)) == *(uint *)(lVar2 + 0x1d4)) {
                          iVar16 = 9;
                          uVar11 = 9;
                        }
                        else {
                          iVar16 = 10;
                          uVar11 = 10;
                        }
                      }
                    }
                    else {
                      uVar11 = 0;
                      do {
                        iVar16 = (int)uVar11;
                        if (uVar11 == *(ulong *)(lVar21 + 0x30)) goto LAB_007b7c70;
                        uVar17 = uVar11 & 0xffffffff;
                        if ((*(uint *)*puVar25 &
                            *(uint *)(*(long *)(lVar21 + 0x28) + 4 + uVar11 * 8)) ==
                            *(uint *)(*(long *)(lVar21 + 0x28) + uVar11 * 8)) break;
                        uVar11 = uVar11 + 1;
                        uVar17 = (ulong)(iVar16 + 1);
                      } while (uVar11 != uVar24);
LAB_007b7cd5:
                      uVar11 = uVar17;
                      iVar16 = (int)uVar11;
                    }
LAB_007b7c70:
                    psVar28[1] = (short)uVar11;
                    if (((iVar5 == 0) && (0 < iVar6)) && (iVar5 = 0, iVar16 < *psVar28)) {
                      iVar5 = iVar6;
                    }
                    iVar6 = iVar6 + 1;
                    puVar25 = puVar25 + 1;
                    psVar28 = psVar28 + 1;
                  } while (local_5d0 != iVar6);
                  if ((iVar5 != 0) && (iVar5 < local_5d0)) {
                    uVar27 = iVar5 - 1;
                    psVar28 = local_5a8 + iVar5;
                    puVar25 = puVar26 + (long)iVar5 + 0x31;
                    do {
                      psVar14 = psVar28;
                      puVar20 = puVar25;
                      do {
                        sVar1 = psVar14[-1];
                        if (sVar1 <= *psVar14) break;
                        uVar8 = *puVar20;
                        uVar3 = puVar20[1];
                        psVar14[-1] = *psVar14;
                        psVar15 = psVar14 + -1;
                        *psVar14 = sVar1;
                        *puVar20 = uVar3;
                        puVar20[1] = uVar8;
                        psVar14 = psVar15;
                        puVar20 = puVar20 + -1;
                      } while (psVar28 + (-1 - (ulong)uVar27) != psVar15);
                      uVar27 = uVar27 + 1;
                      psVar28 = psVar28 + 1;
                      puVar25 = puVar25 + 1;
                    } while (local_5d0 - 1U != uVar27);
                  }
                }
              }
              if (*param_6 == 0) {
                sVar10 = strlen(local_5b8);
                uVar27 = (int)sVar10 + 1;
                if (local_648 < (int)uVar27) goto LAB_007b79f0;
                if (0xff < (int)uVar27) goto LAB_007b8278;
                uVar9 = (ulong)(int)uVar27;
                *param_6 = (long)pcVar13;
                if (uVar9 < 8) {
                  if ((uVar9 & 4) == 0) {
                    if ((uVar9 != 0) && (*pcVar13 = *local_5b8, (uVar27 & 2) != 0)) {
                      *(undefined2 *)(pcVar13 + (uVar9 - 2)) =
                           *(undefined2 *)(local_5b8 + (uVar9 - 2));
                    }
                  }
                  else {
                    *(undefined4 *)pcVar13 = *(undefined4 *)local_5b8;
                    *(undefined4 *)(pcVar13 + (uVar9 - 4)) =
                         *(undefined4 *)(local_5b8 + (uVar9 - 4));
                  }
                }
                else {
                  *(undefined8 *)pcVar13 = *(undefined8 *)local_5b8;
                  *(undefined8 *)(pcVar13 + (uVar9 - 8)) = *(undefined8 *)(local_5b8 + (uVar9 - 8));
                  lVar21 = (long)pcVar13 - (long)((ulong)(pcVar13 + 8) & 0xfffffffffffffff8);
                  pcVar19 = local_5b8 + -lVar21;
                  puVar26 = (undefined8 *)((ulong)(pcVar13 + 8) & 0xfffffffffffffff8);
                  for (uVar9 = uVar9 + lVar21 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *puVar26 = *(undefined8 *)pcVar19;
                    pcVar19 = pcVar19 + ((ulong)bVar30 * -2 + 1) * 8;
                    puVar26 = puVar26 + (ulong)bVar30 * -2 + 1;
                  }
                }
              }
              *param_10 = 0;
              uVar8 = 1;
            }
            goto LAB_007b79a9;
          }
        }
        else {
          sVar10 = strlen(pcVar13);
          iVar5 = (int)sVar10 + 1;
          if (iVar5 < 0x100) {
            pcVar19 = pcVar13 + iVar5;
            local_648 = local_648 - iVar5;
            *param_6 = (long)pcVar13;
            local_5b8 = pcVar13;
            if (local_648 < 0) goto LAB_007b79f0;
            goto LAB_007b7b56;
          }
        }
        *param_10 = 3;
        *param_9 = 2;
        uVar8 = 0xfffffffe;
        goto LAB_007b79a9;
      }
      iVar5 = *(int *)(in_FS_OFFSET + -0x58);
      if (iVar5 == 0x5a) goto LAB_007b79f0;
    }
    *param_9 = iVar5;
  }
  *param_10 = 3;
  uVar8 = 0xffffffff;
LAB_007b79a9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

