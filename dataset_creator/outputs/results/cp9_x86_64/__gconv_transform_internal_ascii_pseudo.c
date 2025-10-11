
ulong __gconv_transform_internal_ascii
                (long param_1,ulong *param_2,ulong *param_3,uint *param_4,ulong *param_5,
                long *param_6,uint param_7,int param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  ulong local_b0;
  code *local_a0;
  uint local_7c;
  long local_68;
  undefined1 *local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined4 local_44;
  long local_40 [2];
  
  uVar3 = local_44;
  uVar5 = (uint)param_2[2];
  local_7c = param_7;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (code *)0x0;
  if (((uVar5 & 1) == 0) && (local_a0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_a0 = (code *)(((ulong)local_a0 >> 0x11 | (long)local_a0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    puVar1 = (undefined1 *)param_2[1];
    puVar11 = (uint *)*param_3;
    puVar6 = param_5;
    if (param_5 == (ulong *)0x0) {
      puVar6 = param_2;
    }
    puVar18 = (undefined1 *)*puVar6;
    local_68 = 0;
    plVar7 = (long *)0x0;
    if (param_6 != (long *)0x0) {
      plVar7 = &local_68;
    }
    if (param_8 == 0) goto LAB_006cde68;
    puVar9 = (uint *)param_2[4];
    if ((*puVar9 & 7) == 0) goto LAB_006cde68;
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                    "__gconv_transform_internal_ascii");
    }
    local_58 = puVar11;
    local_50 = puVar18;
    if (4 < (*puVar9 & 7)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(state->__count & 7) <= sizeof (state->__value)","../iconv/loop.c",0x18a,
                    "internal_ascii_loop_single");
    }
    local_44 = CONCAT31(local_44._1_3_,(byte)puVar9[1]);
    if ((*puVar9 & 6) == 0) {
      if ((uint *)((long)puVar11 + 3U) <= param_4) {
        if (puVar1 <= puVar18) goto LAB_006ce108;
        lVar17 = 1;
LAB_006ce40a:
        local_b0 = lVar17 + 1;
        *(byte *)((long)local_40 + lVar17 + -4) = (byte)*puVar11;
        if ((uint *)((long)puVar11 + 1U) < param_4) {
          local_b0 = lVar17 + 2;
          *(byte *)((long)local_40 + lVar17 + -3) = *(byte *)((long)puVar11 + 1);
          if (((uint *)((long)puVar11 + 2U) < param_4) && (local_b0 < 4)) {
            local_b0 = 4;
            local_44 = CONCAT13(*(byte *)((long)puVar11 + 2),(undefined3)local_44);
          }
        }
LAB_006ce485:
        if (local_44 < 0x80) {
          local_50 = puVar18 + 1;
          *puVar18 = (char)local_44;
          local_58 = (uint *)local_40;
          if (local_58 != &local_44) goto LAB_006ce4db;
LAB_006ce631:
          puVar11 = (uint *)*param_3;
        }
        else {
          if (local_44 >> 7 != 0x1c00) {
            local_58 = &local_44;
            if (plVar7 != (long *)0x0) {
              if ((uVar5 & 8) == 0) {
                if ((uVar5 & 2) != 0) {
                  *plVar7 = *plVar7 + 1;
                  puVar11 = (uint *)local_40;
                  local_58 = puVar11;
LAB_006ce6c8:
                  lVar17 = (long)puVar11 - (long)&local_44;
                  goto LAB_006ce4de;
                }
              }
              else {
                pbVar15 = (byte *)((long)&local_44 + local_b0);
                uVar3 = __gconv_transliterate
                                  (param_1,param_2,puVar11,&local_58,pbVar15,&local_50,plVar7);
                uVar16 = (ulong)uVar3;
                if (uVar3 != 6) {
                  if (local_58 == &local_44) {
                    if (uVar3 == 7) {
                      if (pbVar15 == (byte *)local_40) {
                    /* WARNING: Subroutine does not return */
                        __assert_fail("inend != &bytebuf[MAX_NEEDED_INPUT]","../iconv/loop.c",0x1e2,
                                      "internal_ascii_loop_single");
                      }
                      uVar5 = *puVar9 & 0xfffffff8;
                      *param_3 = *param_3 + (local_b0 - (*puVar9 & 7));
                      if ((long)local_b0 <= (long)(int)uVar5) {
                    /* WARNING: Subroutine does not return */
                        __assert_fail("inend - inptr > (state->__count & ~7)","../iconv/loop.c",
                                      0x1ec,"internal_ascii_loop_single");
                      }
                      if (4 < local_b0) {
                    /* WARNING: Subroutine does not return */
                        __assert_fail("inend - inptr <= sizeof (state->__value.__wchb)",
                                      "../iconv/loop.c",0x1ed,"internal_ascii_loop_single");
                      }
                      *puVar9 = uVar5 | (uint)local_b0;
                      if (local_b0 != 0) {
                        *(byte *)(puVar9 + 1) = (byte)local_44;
                        if (local_b0 != 1) {
                          *(byte *)((long)puVar9 + 5) = local_44._1_1_;
                          if (local_b0 != 2) {
                            *(byte *)((long)puVar9 + 6) = local_44._2_1_;
                            if (local_b0 == 4) {
                              *(byte *)((long)puVar9 + 7) = local_44._3_1_;
                            }
                          }
                        }
                      }
                      goto LAB_006ce795;
                    }
                    if (uVar3 != 0) goto LAB_006cdfda;
                    goto LAB_006ce631;
                  }
LAB_006ce4db:
                  lVar17 = (long)local_58 - (long)&local_44;
                  goto LAB_006ce4de;
                }
                if ((uVar5 & 2) == 0) {
                  if (local_58 != &local_44) goto LAB_006ce4db;
                }
                else {
                  puVar11 = local_58 + 1;
                  local_58 = puVar11;
                  *plVar7 = *plVar7 + 1;
                  if (puVar11 != &local_44) goto LAB_006ce6c8;
                }
              }
            }
            uVar16 = 6;
            goto LAB_006cdfda;
          }
          local_58 = (uint *)local_40;
          lVar17 = 4;
LAB_006ce4de:
          uVar5 = *puVar9;
          uVar16 = (ulong)(uVar5 & 7);
          if (lVar17 <= (long)uVar16) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("inptr - bytebuf > (state->__count & 7)","../iconv/loop.c",0x1d0,
                          "internal_ascii_loop_single");
          }
          puVar11 = (uint *)((lVar17 - uVar16) + *param_3);
          *param_3 = (ulong)puVar11;
          *puVar9 = uVar5 & 0xfffffff8;
          puVar18 = local_50;
        }
        uVar5 = (uint)param_2[2];
LAB_006cde68:
        do {
          lVar17 = local_68;
          if (param_6 != (long *)0x0) {
            lVar17 = local_68 + *param_6;
          }
          local_58 = puVar11;
          local_50 = puVar18;
          puVar12 = puVar18;
          if (param_4 == puVar11) {
            uVar16 = 4;
            puVar9 = param_4;
          }
          else {
            uVar16 = 4;
            puVar9 = puVar11;
            do {
              puVar8 = puVar9 + 1;
              if (param_4 < puVar8) {
                uVar16 = 7;
                *param_3 = (ulong)puVar9;
                if (param_5 == (ulong *)0x0) goto LAB_006cdf04;
                goto LAB_006cdfd2;
              }
              if (puVar1 <= puVar12) {
                uVar16 = 5;
                break;
              }
              uVar3 = *puVar9;
              if (uVar3 < 0x80) {
                local_50 = puVar12 + 1;
                *puVar12 = (char)uVar3;
                local_58 = local_58 + 1;
                puVar8 = local_58;
                puVar12 = puVar12 + 1;
              }
              else {
                if (uVar3 >> 7 != 0x1c00) {
                  if (plVar7 != (long *)0x0) {
                    if ((param_2[2] & 8) != 0) {
                      uVar3 = __gconv_transliterate
                                        (param_1,param_2,*param_3,&local_58,param_4,&local_50,plVar7
                                        );
                      uVar16 = (ulong)uVar3;
                      puVar9 = local_58;
                      puVar12 = local_50;
                      if (uVar3 != 6) {
                        puVar8 = local_58;
                        if (uVar3 != 5) goto LAB_006cdee9;
                        break;
                      }
                    }
                    if ((uVar5 & 2) != 0) {
                      uVar16 = 6;
                      local_58 = puVar9 + 1;
                      *plVar7 = *plVar7 + 1;
                      puVar8 = puVar9 + 1;
                      goto LAB_006cdee9;
                    }
                  }
                  uVar16 = 6;
                  break;
                }
                local_58 = puVar8;
              }
LAB_006cdee9:
              puVar9 = puVar8;
            } while (param_4 != puVar8);
          }
          *param_3 = (ulong)puVar9;
          if (param_5 != (ulong *)0x0) {
LAB_006cdfd2:
            *param_5 = (ulong)puVar12;
            goto LAB_006cdfda;
          }
LAB_006cdf04:
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
          if ((param_2[2] & 1) != 0) {
            *param_2 = (ulong)puVar12;
            *param_6 = *param_6 + local_68;
            goto LAB_006ce151;
          }
          uVar5 = (uint)uVar16;
          if (puVar18 < puVar12) {
            local_60 = (undefined1 *)*param_2;
            _dl_mcount_wrapper_check(local_a0);
            uVar3 = (*local_a0)(param_1 + 0x68,param_2 + 6,&local_60,puVar12,0,param_6,0,param_8);
            puVar2 = local_60;
            if (uVar3 != 4) {
              uVar5 = uVar3;
              if (local_60 != puVar12) {
                lVar10 = 0;
                if (param_6 != (long *)0x0) {
                  lVar10 = *param_6;
                }
                if (lVar10 + local_68 == lVar17) {
                  *param_3 = *param_3 + ((long)puVar12 - (long)local_60) * -4;
                }
                else {
                  local_58 = puVar11;
                  local_50 = puVar18;
                  *param_3 = (ulong)puVar11;
                  uVar16 = param_2[2];
                  puVar12 = puVar18;
                  if (param_4 == puVar11) {
LAB_006ce306:
                    *param_3 = (ulong)puVar11;
                    if (local_60 == puVar12) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                                    "__gconv_transform_internal_ascii");
                    }
LAB_006ce317:
                    /* WARNING: Subroutine does not return */
                    __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                                  "__gconv_transform_internal_ascii");
                  }
                  while( true ) {
                    puVar9 = puVar11 + 1;
                    if (param_4 < puVar9) goto LAB_006ce306;
                    if (puVar2 <= puVar12) break;
                    uVar3 = *puVar11;
                    if (uVar3 < 0x80) {
                      local_50 = puVar12 + 1;
                      *puVar12 = (char)uVar3;
                      local_58 = local_58 + 1;
                      puVar12 = puVar12 + 1;
                      puVar9 = local_58;
                    }
                    else if (uVar3 >> 7 == 0x1c00) {
                      local_58 = puVar9;
                    }
                    else {
                      if (plVar7 == (long *)0x0) goto LAB_006ce306;
                      if (((param_2[2] & 8) == 0) ||
                         (iVar4 = __gconv_transliterate
                                            (param_1,param_2,*param_3,&local_58,param_4,&local_50,
                                             plVar7), puVar12 = local_50, puVar11 = local_58,
                         iVar4 == 6)) {
                        if ((uVar16 & 2) == 0) goto LAB_006ce306;
                        local_58 = puVar11 + 1;
                        *plVar7 = *plVar7 + 1;
                        puVar9 = puVar11 + 1;
                      }
                      else {
                        puVar9 = local_58;
                        if (iVar4 == 5) break;
                      }
                    }
                    puVar11 = puVar9;
                    if (param_4 == puVar9) goto LAB_006ce306;
                  }
                  *param_3 = (ulong)puVar11;
                  if (puVar12 != local_60) goto LAB_006ce317;
                  if (puVar18 == puVar12) {
                    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
                  }
                }
              }
              goto LAB_006cdf92;
            }
            if (uVar5 != 5) goto LAB_006cdf92;
          }
          else {
LAB_006cdf92:
            if (uVar5 != 0) goto LAB_006ce3e6;
          }
          puVar18 = (undefined1 *)*param_2;
          uVar5 = (uint)param_2[2];
          puVar11 = (uint *)*param_3;
        } while( true );
      }
      pbVar15 = (byte *)0x1;
LAB_006ce715:
      *param_3 = (ulong)param_4;
      pbVar14 = (byte *)((long)param_4 + ((long)pbVar15 - (long)puVar11));
      if ((byte *)0x4 < pbVar14) {
LAB_006ce6ee:
                    /* WARNING: Subroutine does not return */
        __assert_fail("inlen_after <= sizeof (state->__value.__wchb)","../iconv/loop.c",0x1a7,
                      "internal_ascii_loop_single");
      }
      if (pbVar15 < pbVar14) {
        local_58 = (uint *)((long)puVar11 + 1);
        *(byte *)((long)puVar9 + (long)(pbVar15 + 4)) = (byte)*puVar11;
        if (pbVar15 + 1 < pbVar14) {
          local_58 = (uint *)((long)puVar11 + 2);
          *(byte *)((long)puVar9 + (long)(pbVar15 + 5)) = *(byte *)((long)puVar11 + 1);
          if ((byte *)((ulong)(pbVar15 + 1 != (byte *)0x2) + 3) < pbVar14) {
            local_58 = (uint *)((long)puVar11 + 3);
            *(byte *)((long)puVar9 + 7) = *(byte *)((long)puVar11 + 2);
          }
        }
      }
LAB_006ce795:
      uVar16 = 7;
    }
    else {
      local_44._2_2_ = SUB42(uVar3,2);
      local_44._0_2_ = CONCAT11(*(byte *)((long)puVar9 + 5),(byte)puVar9[1]);
      if ((*puVar9 & 7) < 3) {
        if (param_4 < (uint *)((long)puVar11 + 2U)) {
          pbVar15 = (byte *)0x2;
          goto LAB_006ce715;
        }
        lVar17 = 2;
        if (puVar18 < puVar1) goto LAB_006ce40a;
      }
      else {
        local_44._3_1_ = SUB41(uVar3,3);
        local_44._0_3_ = CONCAT12(*(byte *)((long)puVar9 + 6),(undefined2)local_44);
        if ((*puVar9 & 4) == 0) {
          if (param_4 < (uint *)((long)puVar11 + 1U)) {
            pbVar15 = (byte *)0x3;
            goto LAB_006ce715;
          }
          if (puVar18 < puVar1) {
            local_b0 = 4;
            local_44 = CONCAT13((byte)*puVar11,(undefined3)local_44);
            goto LAB_006ce485;
          }
        }
        else {
          local_44 = CONCAT13(*(byte *)((long)puVar9 + 7),(undefined3)local_44);
          if (param_4 < puVar11) {
            *param_3 = (ulong)param_4;
            if ((byte *)0x4 < (byte *)((long)param_4 + (4 - (long)puVar11))) goto LAB_006ce6ee;
            goto LAB_006ce795;
          }
        }
      }
LAB_006ce108:
      uVar16 = 5;
    }
  }
  else {
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_internal_ascii");
    }
    uVar16 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((param_2[2] & 1) == 0) {
      _dl_mcount_wrapper_check(local_a0);
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006ce3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (*local_a0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar16;
      }
      goto LAB_006cea0c;
    }
  }
  goto LAB_006cdfda;
LAB_006ce3e6:
  uVar16 = (ulong)uVar5;
LAB_006ce151:
  if ((param_8 != 0) && ((int)uVar16 == 7)) {
    puVar1 = (undefined1 *)*param_3;
    uVar13 = (long)param_4 - (long)puVar1;
    if (4 < uVar13) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                    0x31e,"__gconv_transform_internal_ascii");
    }
    puVar11 = (uint *)param_2[4];
    if (uVar13 != 0) {
      *(undefined1 *)(puVar11 + 1) = *puVar1;
      if (((uVar13 != 1) && (*(undefined1 *)((long)puVar11 + 5) = puVar1[1], uVar13 != 2)) &&
         (*(undefined1 *)((long)puVar11 + 6) = puVar1[2], uVar13 == 4)) {
        *(undefined1 *)((long)puVar11 + 7) = puVar1[3];
      }
      local_7c = (uint)uVar13;
    }
    uVar5 = *puVar11;
    *param_3 = (ulong)param_4;
    *puVar11 = uVar5 & 0xfffffff8 | local_7c;
  }
LAB_006cdfda:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
LAB_006cea0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

