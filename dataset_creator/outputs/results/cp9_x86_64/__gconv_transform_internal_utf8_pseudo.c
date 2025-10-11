
ulong __gconv_transform_internal_utf8
                (long param_1,undefined8 *param_2,long *param_3,uint *param_4,undefined8 *param_5,
                long *param_6,uint param_7,int param_8)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  ulong local_b8;
  code *local_a8;
  uint local_8c;
  long local_68;
  byte *local_60;
  uint *local_58;
  byte *local_50;
  undefined4 local_44;
  long local_40 [2];
  
  uVar3 = local_44;
  uVar12 = *(uint *)(param_2 + 2);
  local_8c = param_7;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (code *)0x0;
  if (((uVar12 & 1) == 0) && (local_a8 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0)
     ) {
    local_a8 = (code *)(((ulong)local_a8 >> 0x11 | (long)local_a8 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    pbVar10 = (byte *)param_2[1];
    puVar9 = (uint *)*param_3;
    puVar6 = param_5;
    if (param_5 == (undefined8 *)0x0) {
      puVar6 = param_2;
    }
    pbVar14 = (byte *)*puVar6;
    local_68 = 0;
    plVar7 = (long *)0x0;
    if (param_6 != (long *)0x0) {
      plVar7 = &local_68;
    }
    if (param_8 == 0) goto LAB_006ceb70;
    puVar8 = (uint *)param_2[4];
    if ((*puVar8 & 7) == 0) goto LAB_006ceb70;
    if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                    "__gconv_transform_internal_utf8");
    }
    local_58 = puVar9;
    local_50 = pbVar14;
    if (4 < (*puVar8 & 7)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(state->__count & 7) <= sizeof (state->__value)","../iconv/loop.c",0x18a,
                    "internal_utf8_loop_single");
    }
    local_44 = CONCAT31(local_44._1_3_,(byte)puVar8[1]);
    if ((*puVar8 & 6) == 0) {
      if ((uint *)((long)puVar9 + 3U) <= param_4) {
        if (pbVar10 <= pbVar14) goto LAB_006cee9e;
        lVar16 = 1;
LAB_006cf30e:
        local_b8 = lVar16 + 1;
        *(byte *)((long)local_40 + lVar16 + -4) = (byte)*puVar9;
        if ((uint *)((long)puVar9 + 1U) < param_4) {
          local_b8 = lVar16 + 2;
          *(byte *)((long)local_40 + lVar16 + -3) = *(byte *)((long)puVar9 + 1);
          if ((local_b8 < 4) && ((uint *)((long)puVar9 + 2U) < param_4)) {
            local_b8 = 4;
            local_44 = CONCAT13(*(byte *)((long)puVar9 + 2),(undefined3)local_44);
          }
        }
LAB_006cf389:
        if (local_44 < 0x80) {
          local_50 = pbVar14 + 1;
          uVar12 = local_44;
LAB_006cf3ba:
          *pbVar14 = (byte)uVar12;
          local_58 = (uint *)local_40;
          if (local_58 == &local_44) {
LAB_006cf422:
            uVar12 = *(uint *)(param_2 + 2);
            puVar9 = (uint *)*param_3;
            goto LAB_006ceb70;
          }
        }
        else {
          local_58 = &local_44;
          if ((0x7ff < local_44 - 0xd800) && (-1 < (int)local_44)) {
            if ((local_44 & 0xfffff800) == 0) {
              bVar15 = 0xc0;
              lVar16 = 2;
            }
            else if ((local_44 & 0xffff0000) == 0) {
              bVar15 = 0xe0;
              lVar16 = 3;
            }
            else if ((local_44 & 0xffe00000) == 0) {
              bVar15 = 0xf0;
              lVar16 = 4;
            }
            else {
              bVar15 = (-((local_44 & 0xfc000000) == 0) & 0xfcU) - 4;
              lVar16 = 6 - (ulong)((local_44 & 0xfc000000) == 0);
            }
            if (pbVar10 < pbVar14 + lVar16) goto LAB_006cee9e;
            *pbVar14 = bVar15;
            local_50 = pbVar14 + lVar16;
            pbVar14[lVar16 + -1] = (byte)local_44 & 0x3f | 0x80;
            uVar12 = local_44 >> 6;
            if (lVar16 != 2) {
              pbVar14[lVar16 + -2] = (byte)uVar12 & 0x3f | 0x80;
              uVar12 = local_44 >> 0xc;
              if (lVar16 != 3) {
                pbVar14[lVar16 + -3] = (byte)uVar12 & 0x3f | 0x80;
                uVar12 = local_44 >> 0x12;
                if (lVar16 != 4) {
                  pbVar14[lVar16 + -4] = (byte)uVar12 & 0x3f | 0x80;
                  uVar12 = local_44 >> 0x18;
                  if (lVar16 != 5) {
                    uVar12 = local_44 >> 0x1e;
                    pbVar14[1] = (byte)(local_44 >> 0x18) & 0x3f | 0x80;
                  }
                }
              }
            }
            uVar12 = *pbVar14 | uVar12;
            goto LAB_006cf3ba;
          }
          if (plVar7 == (long *)0x0) goto LAB_006cf705;
          if ((uVar12 & 8) != 0) {
            pbVar17 = (byte *)((long)&local_44 + local_b8);
            uVar3 = __gconv_transliterate(param_1,param_2,puVar9,&local_58,pbVar17,&local_50,plVar7)
            ;
            uVar18 = (ulong)uVar3;
            if (uVar3 == 6) {
              puVar9 = local_58;
              if ((uVar12 & 2) != 0) goto LAB_006cf6e5;
              goto LAB_006cf6fa;
            }
            if (local_58 != &local_44) goto LAB_006cf3d8;
            if (uVar3 == 7) {
              if (pbVar17 == (byte *)local_40) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("inend != &bytebuf[MAX_NEEDED_INPUT]","../iconv/loop.c",0x1e2,
                              "internal_utf8_loop_single");
              }
              uVar12 = *puVar8 & 0xfffffff8;
              *param_3 = *param_3 + (local_b8 - (*puVar8 & 7));
              if ((long)local_b8 <= (long)(int)uVar12) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("inend - inptr > (state->__count & ~7)","../iconv/loop.c",0x1ec,
                              "internal_utf8_loop_single");
              }
              if (4 < local_b8) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("inend - inptr <= sizeof (state->__value.__wchb)","../iconv/loop.c",
                              0x1ed,"internal_utf8_loop_single");
              }
              *puVar8 = uVar12 | (uint)local_b8;
              if (local_b8 != 0) {
                *(byte *)(puVar8 + 1) = (byte)local_44;
                if (local_b8 != 1) {
                  *(byte *)((long)puVar8 + 5) = local_44._1_1_;
                  if (local_b8 != 2) {
                    *(byte *)((long)puVar8 + 6) = local_44._2_1_;
                    if (local_b8 == 4) {
                      *(byte *)((long)puVar8 + 7) = local_44._3_1_;
                    }
                  }
                }
              }
              goto LAB_006cf643;
            }
            if (uVar3 != 0) goto LAB_006cecca;
            goto LAB_006cf422;
          }
          puVar9 = &local_44;
          if ((uVar12 & 2) == 0) {
LAB_006cf705:
            uVar18 = 6;
            goto LAB_006cecca;
          }
LAB_006cf6e5:
          *plVar7 = *plVar7 + 1;
          local_58 = puVar9 + 1;
LAB_006cf6fa:
          if (local_58 == &local_44) goto LAB_006cf705;
        }
LAB_006cf3d8:
        uVar3 = *puVar8;
        lVar16 = (long)local_58 - (long)&local_44;
        uVar18 = (ulong)(uVar3 & 7);
        if (lVar16 <= (long)uVar18) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("inptr - bytebuf > (state->__count & 7)","../iconv/loop.c",0x1d0,
                        "internal_utf8_loop_single");
        }
        uVar12 = *(uint *)(param_2 + 2);
        puVar9 = (uint *)((lVar16 - uVar18) + *param_3);
        *param_3 = (long)puVar9;
        *puVar8 = uVar3 & 0xfffffff8;
        pbVar14 = local_50;
LAB_006ceb70:
        do {
          pbVar17 = pbVar14;
          local_58 = puVar9;
          local_50 = pbVar14;
          if (param_4 == puVar9) {
            uVar18 = 4;
            puVar8 = param_4;
          }
          else {
            uVar18 = 4;
            puVar8 = puVar9;
            do {
              if (param_4 < puVar8 + 1) {
                uVar18 = 7;
                *param_3 = (long)puVar8;
                goto joined_r0x006cecbc;
              }
              if (pbVar10 <= pbVar17) {
LAB_006ced00:
                uVar18 = 5;
                break;
              }
              uVar3 = *puVar8;
              if (uVar3 < 0x80) {
                local_50 = pbVar17 + 1;
LAB_006cebc6:
                *pbVar17 = (byte)uVar3;
                local_58 = local_58 + 1;
                puVar8 = local_58;
                pbVar17 = local_50;
              }
              else {
                if ((0x7ff < uVar3 - 0xd800) && (-1 < (int)uVar3)) {
                  if ((uVar3 & 0xfffff800) == 0) {
                    bVar15 = 0xc0;
                    lVar16 = 2;
                  }
                  else if ((uVar3 & 0xffff0000) == 0) {
                    bVar15 = 0xe0;
                    lVar16 = 3;
                  }
                  else if ((uVar3 & 0xffe00000) == 0) {
                    bVar15 = 0xf0;
                    lVar16 = 4;
                  }
                  else {
                    bVar15 = (-((uVar3 & 0xfc000000) == 0) & 0xfcU) - 4;
                    lVar16 = 6 - (ulong)((uVar3 & 0xfc000000) == 0);
                  }
                  if (pbVar10 < pbVar17 + lVar16) goto LAB_006ced00;
                  *pbVar17 = bVar15;
                  local_50 = local_50 + lVar16;
                  pbVar17[lVar16 + -1] = (byte)uVar3 & 0x3f | 0x80;
                  uVar5 = uVar3 >> 6;
                  if (lVar16 != 2) {
                    pbVar17[lVar16 + -2] = (byte)uVar5 & 0x3f | 0x80;
                    uVar5 = uVar3 >> 0xc;
                    if (lVar16 != 3) {
                      pbVar17[lVar16 + -3] = (byte)uVar5 & 0x3f | 0x80;
                      uVar5 = uVar3 >> 0x12;
                      if (lVar16 != 4) {
                        pbVar17[lVar16 + -4] = (byte)uVar5 & 0x3f | 0x80;
                        uVar5 = uVar3 >> 0x18;
                        if (lVar16 != 5) {
                          pbVar17[1] = (byte)(uVar3 >> 0x18) & 0x3f | 0x80;
                          uVar5 = uVar3 >> 0x1e;
                        }
                      }
                    }
                  }
                  uVar3 = *pbVar17 | uVar5;
                  goto LAB_006cebc6;
                }
                if (plVar7 == (long *)0x0) {
LAB_006cf27d:
                  uVar18 = 6;
                  break;
                }
                if ((*(byte *)(param_2 + 2) & 8) == 0) {
LAB_006cf020:
                  if ((uVar12 & 2) == 0) goto LAB_006cf27d;
                  uVar18 = 6;
                  local_58 = puVar8 + 1;
                  *plVar7 = *plVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
                else {
                  uVar3 = __gconv_transliterate
                                    (param_1,param_2,*param_3,&local_58,param_4,&local_50,plVar7);
                  uVar18 = (ulong)uVar3;
                  puVar8 = local_58;
                  pbVar17 = local_50;
                  if (uVar3 == 6) goto LAB_006cf020;
                  if (uVar3 == 5) break;
                }
              }
            } while (param_4 != puVar8);
          }
          *param_3 = (long)puVar8;
joined_r0x006cecbc:
          if (param_5 != (undefined8 *)0x0) {
            *param_5 = pbVar17;
            goto LAB_006cecca;
          }
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
          if ((*(byte *)(param_2 + 2) & 1) != 0) {
            *param_2 = pbVar17;
            *param_6 = *param_6 + local_68;
            goto LAB_006ceec1;
          }
          uVar12 = (uint)uVar18;
          if (pbVar14 < pbVar17) {
            local_60 = (byte *)*param_2;
            _dl_mcount_wrapper_check(local_a8);
            uVar3 = (*local_a8)(param_1 + 0x68,param_2 + 6,&local_60,pbVar17,0,param_6,0,param_8);
            pbVar2 = local_60;
            if (uVar3 != 4) {
              uVar12 = uVar3;
              if (local_60 != pbVar17) {
                *param_3 = (long)puVar9;
                uVar3 = *(uint *)(param_2 + 2);
                pbVar17 = pbVar14;
                local_58 = puVar9;
                local_50 = pbVar14;
                if (param_4 == puVar9) {
LAB_006cefda:
                  *param_3 = (long)puVar9;
                  if (pbVar17 == local_60) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                                  "__gconv_transform_internal_utf8");
                  }
LAB_006cefeb:
                    /* WARNING: Subroutine does not return */
                  __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                                "__gconv_transform_internal_utf8");
                }
LAB_006cef86:
                if (param_4 < puVar9 + 1) goto LAB_006cefda;
                if (pbVar2 <= pbVar17) goto LAB_006cf135;
                uVar5 = *puVar9;
                if (uVar5 < 0x80) {
                  local_50 = pbVar17 + 1;
LAB_006cefb2:
                  *pbVar17 = (byte)uVar5;
                  local_58 = local_58 + 1;
                  pbVar17 = local_50;
                  puVar9 = local_58;
LAB_006cefd0:
                  if (param_4 == puVar9) goto LAB_006cefda;
                  goto LAB_006cef86;
                }
                if ((uVar5 - 0xd800 < 0x800) || ((int)uVar5 < 0)) {
                  if (plVar7 == (long *)0x0) goto LAB_006cefda;
                  if (((*(byte *)(param_2 + 2) & 8) == 0) ||
                     (iVar4 = __gconv_transliterate
                                        (param_1,param_2,*param_3,&local_58,param_4,&local_50,plVar7
                                        ), pbVar17 = local_50, puVar9 = local_58, iVar4 == 6)) {
                    if ((uVar3 & 2) == 0) goto LAB_006cefda;
                    local_58 = puVar9 + 1;
                    *plVar7 = *plVar7 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  else if (iVar4 == 5) goto LAB_006cf135;
                  goto LAB_006cefd0;
                }
                if ((uVar5 & 0xfffff800) == 0) {
                  bVar15 = 0xc0;
                  lVar16 = 2;
                }
                else if ((uVar5 & 0xffff0000) == 0) {
                  bVar15 = 0xe0;
                  lVar16 = 3;
                }
                else if ((uVar5 & 0xffe00000) == 0) {
                  bVar15 = 0xf0;
                  lVar16 = 4;
                }
                else {
                  bVar15 = (-((uVar5 & 0xfc000000) == 0) & 0xfcU) - 4;
                  lVar16 = 6 - (ulong)((uVar5 & 0xfc000000) == 0);
                }
                if (pbVar17 + lVar16 <= pbVar2) {
                  *pbVar17 = bVar15;
                  local_50 = local_50 + lVar16;
                  pbVar17[lVar16 + -1] = (byte)uVar5 & 0x3f | 0x80;
                  uVar11 = uVar5 >> 6;
                  if (lVar16 != 2) {
                    pbVar17[lVar16 + -2] = (byte)uVar11 & 0x3f | 0x80;
                    uVar11 = uVar5 >> 0xc;
                    if (lVar16 != 3) {
                      pbVar17[lVar16 + -3] = (byte)uVar11 & 0x3f | 0x80;
                      uVar11 = uVar5 >> 0x12;
                      if (lVar16 != 4) {
                        pbVar17[lVar16 + -4] = (byte)uVar11 & 0x3f | 0x80;
                        uVar11 = uVar5 >> 0x18;
                        if (lVar16 != 5) {
                          uVar11 = uVar5 >> 0x1e;
                          pbVar17[1] = (byte)(uVar5 >> 0x18) & 0x3f | 0x80;
                        }
                      }
                    }
                  }
                  uVar5 = *pbVar17 | uVar11;
                  goto LAB_006cefb2;
                }
LAB_006cf135:
                *param_3 = (long)puVar9;
                if (pbVar17 != local_60) goto LAB_006cefeb;
                if (pbVar14 == pbVar17) {
                  *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
                }
              }
              goto LAB_006cec87;
            }
            if (uVar12 != 5) goto LAB_006cec87;
          }
          else {
LAB_006cec87:
            if (uVar12 != 0) goto LAB_006cf275;
          }
          uVar12 = *(uint *)(param_2 + 2);
          puVar9 = (uint *)*param_3;
          pbVar14 = (byte *)*param_2;
        } while( true );
      }
      pbVar10 = (byte *)0x1;
LAB_006cf5c5:
      *param_3 = (long)param_4;
      pbVar14 = (byte *)((long)param_4 + ((long)pbVar10 - (long)puVar9));
      if ((byte *)0x4 < pbVar14) {
LAB_006cf59a:
                    /* WARNING: Subroutine does not return */
        __assert_fail("inlen_after <= sizeof (state->__value.__wchb)","../iconv/loop.c",0x1a7,
                      "internal_utf8_loop_single");
      }
      if (pbVar10 < pbVar14) {
        local_58 = (uint *)((long)puVar9 + 1);
        *(byte *)((long)puVar8 + (long)(pbVar10 + 4)) = (byte)*puVar9;
        if (pbVar10 + 1 < pbVar14) {
          local_58 = (uint *)((long)puVar9 + 2);
          *(byte *)((long)puVar8 + (long)(pbVar10 + 5)) = *(byte *)((long)puVar9 + 1);
          if ((byte *)((ulong)(pbVar10 + 1 != (byte *)0x2) + 3) < pbVar14) {
            local_58 = (uint *)((long)puVar9 + 3);
            *(byte *)((long)puVar8 + 7) = *(byte *)((long)puVar9 + 2);
          }
        }
      }
LAB_006cf643:
      uVar18 = 7;
    }
    else {
      local_44._2_2_ = SUB42(uVar3,2);
      local_44._0_2_ = CONCAT11(*(byte *)((long)puVar8 + 5),(byte)puVar8[1]);
      if ((*puVar8 & 7) < 3) {
        if (param_4 < (uint *)((long)puVar9 + 2U)) {
          pbVar10 = (byte *)0x2;
          goto LAB_006cf5c5;
        }
        lVar16 = 2;
        if (pbVar14 < pbVar10) goto LAB_006cf30e;
      }
      else {
        local_44._3_1_ = SUB41(uVar3,3);
        local_44._0_3_ = CONCAT12(*(byte *)((long)puVar8 + 6),(undefined2)local_44);
        if ((*puVar8 & 4) == 0) {
          if (param_4 < (uint *)((long)puVar9 + 1U)) {
            pbVar10 = (byte *)0x3;
            goto LAB_006cf5c5;
          }
          if (pbVar14 < pbVar10) {
            local_b8 = 4;
            local_44 = CONCAT13((byte)*puVar9,(undefined3)local_44);
            goto LAB_006cf389;
          }
        }
        else {
          local_44 = CONCAT13(*(byte *)((long)puVar8 + 7),(undefined3)local_44);
          if (param_4 < puVar9) {
            *param_3 = (long)param_4;
            if ((byte *)0x4 < (byte *)((long)param_4 + (4 - (long)puVar9))) goto LAB_006cf59a;
            goto LAB_006cf643;
          }
        }
      }
LAB_006cee9e:
      uVar18 = 5;
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_internal_utf8");
    }
    uVar18 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      _dl_mcount_wrapper_check(local_a8);
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006cf0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*local_a8)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar18;
      }
      goto LAB_006cf983;
    }
  }
  goto LAB_006cecca;
LAB_006cf275:
  uVar18 = (ulong)uVar12;
LAB_006ceec1:
  if ((param_8 != 0) && ((int)uVar18 == 7)) {
    puVar1 = (undefined1 *)*param_3;
    uVar13 = (long)param_4 - (long)puVar1;
    if (4 < uVar13) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                    0x31e,"__gconv_transform_internal_utf8");
    }
    puVar9 = (uint *)param_2[4];
    if (uVar13 != 0) {
      *(undefined1 *)(puVar9 + 1) = *puVar1;
      if (((uVar13 != 1) && (*(undefined1 *)((long)puVar9 + 5) = puVar1[1], uVar13 != 2)) &&
         (*(undefined1 *)((long)puVar9 + 6) = puVar1[2], uVar13 == 4)) {
        *(undefined1 *)((long)puVar9 + 7) = puVar1[3];
      }
      local_8c = (uint)uVar13;
    }
    uVar12 = *puVar9;
    *param_3 = (long)param_4;
    *puVar9 = uVar12 & 0xfffffff8 | local_8c;
  }
LAB_006cecca:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
LAB_006cf983:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

