
ulong __gconv_transform_utf8_internal
                (long param_1,ulong *param_2,ulong *param_3,byte *param_4,ulong *param_5,
                long *param_6,int param_7,int param_8)

{
  uint *puVar1;
  uint uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  sbyte sVar21;
  byte *pbVar22;
  uint *puVar23;
  long lVar24;
  long in_FS_OFFSET;
  code *local_a0;
  sbyte local_60;
  long local_58;
  uint *local_50;
  byte abStack_47 [7];
  long local_40;
  
  uVar2 = (uint)param_2[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (code *)0x0;
  if (((uVar2 & 1) == 0) && (local_a0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_a0 = (code *)(((ulong)local_a0 >> 0x11 | (long)local_a0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    puVar1 = (uint *)param_2[1];
    pbVar22 = (byte *)*param_3;
    puVar3 = param_5;
    if (param_5 == (ulong *)0x0) {
      puVar3 = param_2;
    }
    puVar23 = (uint *)*puVar3;
    local_58 = 0;
    plVar4 = (long *)0x0;
    if (param_6 != (long *)0x0) {
      plVar4 = &local_58;
    }
    if (param_8 != 0) {
      puVar13 = (uint *)param_2[4];
      uVar9 = *puVar13;
      uVar8 = uVar9 & 7;
      if (uVar8 != 0) {
        if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                        "__gconv_transform_utf8_internal");
        }
        uVar14 = puVar13[1];
        uVar5 = (ulong)(uVar9 & 0xff);
        abStack_47[1] = "ch != 0xc0 && ch != 0xc1"[(long)((int)uVar9 >> 8) + 0x17];
        uVar6 = (long)((int)uVar9 >> 8);
        do {
          uVar10 = uVar6 - 1;
          if (uVar10 < uVar5) {
            abStack_47[uVar6] = (byte)uVar14 & 0x3f | 0x80;
          }
          uVar14 = uVar14 >> 6;
          uVar6 = uVar10;
        } while (1 < uVar10);
        puVar15 = puVar23 + 1;
        abStack_47[1] = abStack_47[1] | (byte)uVar14;
        if (puVar1 < puVar15) {
          uVar9 = 5;
          goto LAB_006cfd55;
        }
        lVar18 = uVar5 + 1;
        abStack_47[uVar5 + 1] = *pbVar22;
        if ((uVar5 != 5) && (pbVar22 + 1 < param_4)) {
          lVar18 = uVar5 + 2;
          abStack_47[uVar5 + 2] = pbVar22[1];
          if (uVar5 == 4) goto LAB_006d02e9;
          if (pbVar22 + 2 < param_4) {
            lVar18 = uVar5 + 3;
            abStack_47[uVar5 + 3] = pbVar22[2];
            if ((uVar5 != 3) && (pbVar22 + 3 < param_4)) {
              lVar18 = uVar5 + 4;
              abStack_47[uVar5 + 4] = pbVar22[3];
              if (uVar5 == 2) {
LAB_006d02e9:
                lVar18 = 6;
              }
              else if (pbVar22 + 4 < param_4) {
                abStack_47[uVar5 + 5] = pbVar22[4];
                if (uVar5 == 1) goto LAB_006d02e9;
                if (pbVar22 + 5 < param_4) {
                  lVar18 = 6;
                  abStack_47[6] = pbVar22[5];
                }
                else {
                  lVar18 = 5;
                }
              }
            }
          }
        }
        uVar14 = (uint)abStack_47[1];
        uVar9 = (uint)abStack_47[1];
        if ((char)abStack_47[1] < '\0') {
          pbVar12 = abStack_47 + lVar18 + 1;
          if (abStack_47[1] - 0xc2 < 0x1e) {
            local_60 = 6;
            lVar24 = 2;
            uVar9 = uVar9 & 0x1f;
LAB_006d032d:
            if (pbVar12 < abStack_47 + lVar24 + 1) {
              pbVar16 = abStack_47 + 2;
              if (pbVar16 < pbVar12) {
                lVar19 = 1;
                pbVar17 = pbVar16;
                do {
                  if ((*pbVar17 & 0xc0) != 0x80) break;
                  lVar19 = lVar19 + 1;
                  pbVar17 = pbVar17 + 1;
                } while (pbVar17 < pbVar12);
                if (pbVar12 != pbVar17) goto LAB_006d044e;
                if (pbVar12 == (byte *)&local_40) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("inend != &bytebuf[MAX_NEEDED_INPUT]","../iconv/loop.c",0x1e2,
                                "utf8_internal_loop_single");
                }
              }
              else if (pbVar12 != pbVar16) goto LAB_006d0448;
              *param_3 = (ulong)(pbVar22 + (lVar18 - (int)uVar8));
              *puVar13 = (uint)lVar18;
              if (abStack_47[1] - 0xc0 < 2) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("ch != 0xc0 && ch != 0xc1","../iconv/loop.c",0x1e8,
                              "utf8_internal_loop_single");
              }
              if (abStack_47[1] - 0xc2 < 0x1e) {
                uVar14 = uVar14 & 0x1f;
                uVar2 = 0x200;
                cVar11 = '\x01';
              }
              else if ((abStack_47[1] & 0xf0) == 0xe0) {
                uVar14 = uVar14 & 0xf;
                uVar2 = 0x300;
                cVar11 = '\x02';
              }
              else if ((abStack_47[1] & 0xf8) == 0xf0) {
                uVar14 = uVar14 & 7;
                uVar2 = 0x400;
                cVar11 = '\x03';
              }
              else if ((abStack_47[1] & 0xfc) == 0xf8) {
                uVar14 = uVar14 & 3;
                uVar2 = 0x500;
                cVar11 = '\x04';
              }
              else {
                uVar14 = uVar14 & 1;
                uVar2 = 0x600;
                cVar11 = '\x05';
              }
              pbVar22 = pbVar16;
              if (pbVar16 < pbVar12) {
                do {
                  pbVar17 = pbVar22 + 1;
                  uVar14 = uVar14 << 6 | *pbVar22 & 0x3f;
                  pbVar22 = pbVar17;
                } while (pbVar12 != pbVar17);
                cVar11 = cVar11 + ((char)pbVar16 - (char)pbVar12);
              }
              uVar9 = 7;
              *puVar13 = uVar2 | (uint)lVar18;
              puVar13[1] = uVar14 << (cVar11 * '\x06' & 0x1fU);
              goto LAB_006cfd55;
            }
            if ((abStack_47[2] & 0xc0) == 0x80) {
              uVar9 = abStack_47[2] & 0x3f | uVar9 << 6;
              if (lVar24 == 2) {
                *puVar23 = uVar9;
                lVar19 = 2;
                uVar8 = *puVar13 & 7;
                goto LAB_006cff8b;
              }
              if ((abStack_47[3] & 0xc0) == 0x80) {
                uVar9 = abStack_47[3] & 0x3f | uVar9 << 6;
                if (lVar24 == 3) {
                  lVar19 = 3;
                }
                else {
                  if ((abStack_47[4] & 0xc0) != 0x80) {
                    lVar19 = 3;
                    goto LAB_006d044e;
                  }
                  uVar9 = abStack_47[4] & 0x3f | uVar9 << 6;
                  if (lVar24 == 4) {
                    lVar19 = 4;
                  }
                  else {
                    if ((abStack_47[5] & 0xc0) != 0x80) {
                      lVar19 = 4;
                      goto LAB_006d044e;
                    }
                    uVar9 = abStack_47[5] & 0x3f | uVar9 << 6;
                    if (lVar24 == 6) {
                      if ((abStack_47[6] & 0xc0) != 0x80) {
                        lVar19 = 5;
                        goto LAB_006d044e;
                      }
                      lVar19 = 6;
                      uVar9 = abStack_47[6] & 0x3f | uVar9 << 6;
                    }
                    else {
                      lVar19 = 5;
                    }
                  }
                }
                if ((uVar9 >> local_60 != 0) && (0x7ff < uVar9 - 0xd800)) {
                  *puVar23 = uVar9;
                  uVar8 = *puVar13 & 7;
                  lVar19 = lVar24;
                  goto LAB_006cff8b;
                }
              }
              else {
                lVar19 = 2;
              }
            }
            else {
LAB_006d0448:
              lVar19 = 1;
            }
          }
          else {
            if ((abStack_47[1] & 0xf0) == 0xe0) {
              local_60 = 0xb;
              lVar24 = 3;
              uVar9 = uVar9 & 0xf;
              goto LAB_006d032d;
            }
            if ((abStack_47[1] & 0xf8) == 0xf0) {
              local_60 = 0x10;
              lVar24 = 4;
              uVar9 = uVar9 & 7;
              goto LAB_006d032d;
            }
            if ((abStack_47[1] & 0xfc) == 0xf8) {
              local_60 = 0x15;
              lVar24 = 5;
              uVar9 = uVar9 & 3;
              goto LAB_006d032d;
            }
            if ((abStack_47[1] & 0xfe) == 0xfc) {
              local_60 = 0x1a;
              lVar24 = 6;
              uVar9 = uVar9 & 1;
              goto LAB_006d032d;
            }
            lVar18 = 0;
            do {
              lVar19 = lVar18 + 1;
              if ((pbVar12 <= abStack_47 + lVar18 + 2) || ((abStack_47[lVar18 + 2] & 0xc0) != 0x80))
              break;
              lVar18 = lVar19;
            } while (lVar19 != 5);
          }
LAB_006d044e:
          uVar9 = 6;
          if ((plVar4 == (long *)0x0) || ((uVar2 & 2) == 0)) goto LAB_006cfd55;
          *plVar4 = *plVar4 + 1;
          puVar15 = puVar23;
        }
        else {
          *puVar23 = uVar9;
          uVar8 = *puVar13 & 7;
          lVar19 = 1;
        }
LAB_006cff8b:
        if (lVar19 <= (int)uVar8) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("inptr - bytebuf > (state->__count & 7)","../iconv/loop.c",0x1d0,
                        "utf8_internal_loop_single");
        }
        uVar2 = (uint)param_2[2];
        pbVar22 = pbVar22 + (lVar19 - (int)uVar8);
        *param_3 = (ulong)pbVar22;
        *puVar13 = 0;
        puVar23 = puVar15;
      }
    }
LAB_006cfa88:
    puVar13 = puVar23;
    if (param_4 == pbVar22) {
      uVar9 = 4;
      pbVar12 = param_4;
    }
    else {
      puVar15 = puVar23 + 1;
      pbVar12 = pbVar22;
      if (puVar1 < puVar15) {
        uVar9 = 5;
      }
      else {
        uVar9 = 4;
        do {
          bVar7 = *pbVar12;
          uVar8 = (uint)bVar7;
          pbVar16 = pbVar12 + 1;
          if ((char)bVar7 < '\0') {
            uVar8 = (uint)bVar7;
            if (bVar7 - 0xc2 < 0x1e) {
              uVar8 = uVar8 & 0x1f;
              sVar21 = 6;
              lVar18 = 2;
              goto LAB_006cfb01;
            }
            if ((bVar7 & 0xf0) == 0xe0) {
              lVar18 = 3;
              uVar8 = uVar8 & 0xf;
              sVar21 = 0xb;
              pbVar17 = pbVar12 + 3;
joined_r0x006cfb08:
              if (param_4 < pbVar17) {
                if (pbVar16 < param_4) {
                  lVar18 = 1;
                  do {
                    if ((*pbVar16 & 0xc0) != 0x80) break;
                    lVar18 = lVar18 + 1;
                    pbVar16 = pbVar16 + 1;
                  } while (lVar18 != (long)param_4 - (long)pbVar12);
                }
                else {
                  lVar18 = 1;
                }
                if (param_4 == pbVar16) {
                  uVar9 = 7;
                  *param_3 = (ulong)pbVar12;
                  goto joined_r0x006cfd3f;
                }
              }
              else if ((pbVar12[1] & 0xc0) == 0x80) {
                uVar8 = pbVar12[1] & 0x3f | uVar8 << 6;
                pbVar16 = pbVar17;
                if (lVar18 == 2) goto LAB_006cfab8;
                if ((pbVar12[2] & 0xc0) == 0x80) {
                  uVar8 = uVar8 << 6 | pbVar12[2] & 0x3f;
                  if (lVar18 != 3) {
                    if ((pbVar12[3] & 0xc0) != 0x80) {
                      lVar18 = 3;
                      goto LAB_006cfc90;
                    }
                    uVar8 = uVar8 << 6 | pbVar12[3] & 0x3f;
                    if (lVar18 != 4) {
                      if ((pbVar12[4] & 0xc0) != 0x80) {
                        lVar18 = 4;
                        goto LAB_006cfc90;
                      }
                      uVar8 = uVar8 << 6 | pbVar12[4] & 0x3f;
                      if (lVar18 == 6) {
                        if ((pbVar12[5] & 0xc0) != 0x80) {
                          lVar18 = 5;
                          goto LAB_006cfc90;
                        }
                        uVar8 = uVar8 << 6 | pbVar12[5] & 0x3f;
                      }
                      else {
                        lVar18 = 5;
                      }
                    }
                  }
                  if ((uVar8 >> sVar21 != 0) && (0x7ff < uVar8 - 0xd800)) goto LAB_006cfab8;
                }
                else {
                  lVar18 = 2;
                }
              }
              else {
                lVar18 = 1;
              }
            }
            else {
              if ((bVar7 & 0xf8) == 0xf0) {
                uVar8 = uVar8 & 7;
                sVar21 = 0x10;
                lVar18 = 4;
LAB_006cfb01:
                pbVar17 = pbVar12 + lVar18;
                goto joined_r0x006cfb08;
              }
              if ((bVar7 & 0xfc) == 0xf8) {
                uVar8 = uVar8 & 3;
                sVar21 = 0x15;
                lVar18 = 5;
                goto LAB_006cfb01;
              }
              if ((bVar7 & 0xfe) == 0xfc) {
                uVar8 = uVar8 & 1;
                sVar21 = 0x1a;
                lVar18 = 6;
                goto LAB_006cfb01;
              }
              lVar18 = 0;
              do {
                lVar18 = lVar18 + 1;
                if ((param_4 <= pbVar12 + lVar18) || ((pbVar12[lVar18] & 0xc0) != 0x80)) break;
              } while (lVar18 != 5);
            }
LAB_006cfc90:
            if ((plVar4 == (long *)0x0) || ((uVar2 & 2) == 0)) {
              uVar9 = 6;
              goto LAB_006cfbe8;
            }
            *plVar4 = *plVar4 + 1;
            pbVar12 = pbVar12 + lVar18;
            uVar9 = 6;
          }
          else {
LAB_006cfab8:
            pbVar12 = pbVar16;
            *puVar13 = uVar8;
            puVar13 = puVar15;
          }
          if (param_4 == pbVar12) goto LAB_006cfbe8;
          puVar15 = puVar13 + 1;
        } while (puVar15 <= puVar1);
        uVar9 = 5;
      }
    }
LAB_006cfbe8:
    *param_3 = (ulong)pbVar12;
joined_r0x006cfd3f:
    if (param_5 != (ulong *)0x0) {
      *param_5 = (ulong)puVar13;
      goto LAB_006cfd55;
    }
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
    if ((param_2[2] & 1) == 0) {
      if (puVar13 <= puVar23) goto LAB_006cfd90;
      local_50 = (uint *)*param_2;
      _dl_mcount_wrapper_check(local_a0);
      uVar2 = (*local_a0)(param_1 + 0x68,param_2 + 6,&local_50,puVar13,0,param_6,0,param_8);
      puVar15 = local_50;
      if (uVar2 == 4) {
        if (uVar9 != 5) goto LAB_006cfd90;
      }
      else {
        if (puVar13 != local_50) {
          uVar6 = param_2[2];
          *param_3 = (ulong)pbVar22;
          pbVar12 = pbVar22;
          puVar13 = puVar23;
          if (param_4 == pbVar22) {
LAB_006d016b:
            *param_3 = (ulong)pbVar12;
            if (puVar13 == puVar15) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                            "__gconv_transform_utf8_internal");
            }
LAB_006d017c:
                    /* WARNING: Subroutine does not return */
            __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                          "__gconv_transform_utf8_internal");
          }
          puVar20 = puVar23 + 1;
          if (puVar20 <= local_50) {
            do {
              bVar7 = *pbVar12;
              uVar9 = (uint)bVar7;
              pbVar16 = pbVar12 + 1;
              uVar8 = (uint)bVar7;
              pbVar22 = pbVar16;
              if ((char)bVar7 < '\0') {
                if (uVar8 - 0xc2 < 0x1e) {
                  uVar9 = uVar9 & 0x1f;
                  sVar21 = 6;
                  lVar18 = 2;
LAB_006d0073:
                  pbVar22 = pbVar12 + lVar18;
                  if (param_4 < pbVar22) {
                    if (pbVar16 < param_4) {
                      lVar18 = 1;
                      do {
                        if ((*pbVar16 & 0xc0) != 0x80) break;
                        lVar18 = lVar18 + 1;
                        pbVar16 = pbVar16 + 1;
                      } while ((long)param_4 - (long)pbVar12 != lVar18);
                    }
                    else {
                      lVar18 = 1;
                    }
                    if (param_4 == pbVar16) goto LAB_006d016b;
                  }
                  else if ((pbVar12[1] & 0xc0) == 0x80) {
                    uVar8 = pbVar12[1] & 0x3f | uVar9 << 6;
                    if (lVar18 == 2) goto LAB_006d0028;
                    if ((pbVar12[2] & 0xc0) == 0x80) {
                      uVar8 = uVar8 << 6 | pbVar12[2] & 0x3f;
                      if (lVar18 != 3) {
                        if ((pbVar12[3] & 0xc0) != 0x80) {
                          lVar18 = 3;
                          goto LAB_006d0152;
                        }
                        uVar8 = uVar8 << 6 | pbVar12[3] & 0x3f;
                        if (lVar18 != 4) {
                          if ((pbVar12[4] & 0xc0) != 0x80) {
                            lVar18 = 4;
                            goto LAB_006d0152;
                          }
                          uVar8 = uVar8 << 6 | pbVar12[4] & 0x3f;
                          if (lVar18 == 6) {
                            if ((pbVar12[5] & 0xc0) != 0x80) {
                              lVar18 = 5;
                              goto LAB_006d0152;
                            }
                            uVar8 = uVar8 << 6 | pbVar12[5] & 0x3f;
                          }
                          else {
                            lVar18 = 5;
                          }
                        }
                      }
                      if ((uVar8 >> sVar21 != 0) && (0x7ff < uVar8 - 0xd800)) goto LAB_006d0028;
                    }
                    else {
                      lVar18 = 2;
                    }
                  }
                  else {
                    lVar18 = 1;
                  }
                }
                else {
                  if ((bVar7 & 0xf0) == 0xe0) {
                    uVar9 = uVar9 & 0xf;
                    sVar21 = 0xb;
                    lVar18 = 3;
                    goto LAB_006d0073;
                  }
                  if ((bVar7 & 0xf8) == 0xf0) {
                    uVar9 = uVar9 & 7;
                    sVar21 = 0x10;
                    lVar18 = 4;
                    goto LAB_006d0073;
                  }
                  if ((bVar7 & 0xfc) == 0xf8) {
                    uVar9 = uVar9 & 3;
                    sVar21 = 0x15;
                    lVar18 = 5;
                    goto LAB_006d0073;
                  }
                  if ((bVar7 & 0xfe) == 0xfc) {
                    uVar9 = uVar9 & 1;
                    sVar21 = 0x1a;
                    lVar18 = 6;
                    goto LAB_006d0073;
                  }
                  lVar18 = 0;
                  do {
                    lVar18 = lVar18 + 1;
                    if ((param_4 <= pbVar12 + lVar18) || ((pbVar12[lVar18] & 0xc0) != 0x80)) break;
                  } while (lVar18 != 5);
                }
LAB_006d0152:
                if ((plVar4 == (long *)0x0) || ((uVar6 & 2) == 0)) goto LAB_006d016b;
                *plVar4 = *plVar4 + 1;
                pbVar22 = pbVar12 + lVar18;
              }
              else {
LAB_006d0028:
                *puVar13 = uVar8;
                puVar13 = puVar20;
              }
              pbVar12 = pbVar22;
              if (param_4 == pbVar22) goto LAB_006d016b;
              puVar20 = puVar13 + 1;
            } while (puVar20 <= puVar15);
          }
          *param_3 = (ulong)pbVar22;
          if (puVar13 != puVar15) goto LAB_006d017c;
          if (puVar13 == puVar23) {
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
          }
        }
        uVar9 = uVar2;
        if (uVar2 != 0) goto LAB_006cfd90;
      }
      uVar2 = (uint)param_2[2];
      pbVar22 = (byte *)*param_3;
      puVar23 = (uint *)*param_2;
      goto LAB_006cfa88;
    }
    *param_2 = (ulong)puVar13;
    *param_6 = *param_6 + local_58;
LAB_006cfd90:
    if ((uVar9 == 7) && (param_8 != 0)) {
      puVar1 = (uint *)param_2[4];
      pbVar22 = (byte *)*param_3;
      bVar7 = *pbVar22;
      uVar2 = (uint)bVar7;
      uVar8 = (int)param_4 - (int)pbVar22;
      *puVar1 = uVar8;
      if (bVar7 - 0xc0 < 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("ch != 0xc0 && ch != 0xc1","../iconv/skeleton.c",0x319,
                      "__gconv_transform_utf8_internal");
      }
      if (bVar7 - 0xc2 < 0x1e) {
        uVar2 = uVar2 & 0x1f;
        bVar7 = 6;
        cVar11 = '\x01';
        uVar14 = 0x200;
      }
      else if ((bVar7 & 0xf0) == 0xe0) {
        uVar2 = uVar2 & 0xf;
        bVar7 = 0xc;
        cVar11 = '\x02';
        uVar14 = 0x300;
      }
      else if ((bVar7 & 0xf8) == 0xf0) {
        uVar2 = uVar2 & 7;
        bVar7 = 0x12;
        cVar11 = '\x03';
        uVar14 = 0x400;
      }
      else if ((bVar7 & 0xfc) == 0xf8) {
        uVar2 = uVar2 & 3;
        bVar7 = 0x18;
        cVar11 = '\x04';
        uVar14 = 0x500;
      }
      else {
        uVar2 = uVar2 & 1;
        bVar7 = 0x1e;
        cVar11 = '\x05';
        uVar14 = 0x600;
      }
      pbVar12 = pbVar22 + 1;
      *param_3 = (ulong)pbVar12;
      if (pbVar12 < param_4) {
        do {
          bVar7 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          *param_3 = (ulong)pbVar12;
          uVar2 = uVar2 << 6 | bVar7 & 0x3f;
        } while (pbVar12 != param_4);
        bVar7 = (cVar11 + '\x01' + ((char)pbVar22 - (char)pbVar12)) * '\x06';
      }
      *puVar1 = uVar14 | uVar8;
      puVar1[1] = uVar2 << (bVar7 & 0x1f);
    }
  }
  else {
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_utf8_internal");
    }
    uVar9 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((param_2[2] & 1) == 0) {
      _dl_mcount_wrapper_check(local_a0,param_2,0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006d026f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*local_a0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar6;
      }
      goto LAB_006d07fd;
    }
  }
LAB_006cfd55:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar9;
  }
LAB_006d07fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

