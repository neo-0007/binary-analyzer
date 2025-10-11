
ulong __gconv_transform_internal_ucs2reverse
                (long param_1,ulong *param_2,ulong *param_3,uint *param_4,ulong *param_5,
                long *param_6,uint param_7,int param_8)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  ushort *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint *puVar19;
  ushort *puVar20;
  long in_FS_OFFSET;
  ulong local_b8;
  code *local_a0;
  uint local_7c;
  long local_68;
  ushort *local_60;
  uint *local_58;
  ushort *local_50;
  undefined4 local_44;
  long local_40 [2];
  
  uVar7 = local_44;
  uVar6 = (uint)param_2[2];
  local_7c = param_7;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (code *)0x0;
  if (((uVar6 & 1) == 0) && (local_a0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_a0 = (code *)(((ulong)local_a0 >> 0x11 | (long)local_a0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 != 0) {
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_internal_ucs2reverse");
    }
    uVar7 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((param_2[2] & 1) == 0) {
      _dl_mcount_wrapper_check(local_a0);
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006d328a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (*local_a0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar15;
      }
      goto LAB_006d3924;
    }
    goto LAB_006d2e4d;
  }
  puVar19 = (uint *)*param_3;
  puVar9 = param_5;
  if (param_5 == (ulong *)0x0) {
    puVar9 = param_2;
  }
  puVar20 = (ushort *)*puVar9;
  puVar4 = (ushort *)param_2[1];
  local_68 = 0;
  plVar10 = (long *)0x0;
  if (param_6 != (long *)0x0) {
    plVar10 = &local_68;
  }
  if (param_8 == 0) {
LAB_006d2cc8:
    lVar18 = local_68;
    if (param_6 != (long *)0x0) {
      lVar18 = local_68 + *param_6;
    }
    local_58 = puVar19;
    local_50 = puVar20;
    puVar12 = puVar20;
    if (param_4 == puVar19) {
      uVar7 = 4;
      puVar13 = param_4;
    }
    else {
      uVar7 = 4;
      puVar14 = puVar19;
      do {
        puVar13 = puVar14 + 1;
        if (param_4 < puVar13) {
          uVar7 = 7;
          *param_3 = (ulong)puVar14;
          if (param_5 == (ulong *)0x0) goto LAB_006d2d74;
          goto LAB_006d2e42;
        }
        puVar1 = puVar12 + 1;
        if (puVar4 < puVar1) {
          uVar7 = 5;
          puVar13 = puVar14;
          break;
        }
        uVar3 = *puVar14;
        if (uVar3 < 0x10000) {
          if (uVar3 - 0xd800 < 0x800) {
            if ((plVar10 == (long *)0x0) || ((uVar6 & 2) == 0)) goto LAB_006d2eb9;
            *plVar10 = *plVar10 + 1;
            local_58 = puVar13;
          }
          else {
            *puVar12 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
            local_50 = puVar1;
            local_58 = puVar13;
            puVar12 = puVar1;
          }
        }
        else if (uVar3 >> 7 == 0x1c00) {
          local_58 = puVar13;
        }
        else {
          if (plVar10 == (long *)0x0) {
LAB_006d2eb9:
            uVar7 = 6;
            puVar13 = puVar14;
            break;
          }
          if (((param_2[2] & 8) == 0) ||
             (uVar7 = __gconv_transliterate
                                (param_1,param_2,*param_3,&local_58,param_4,&local_50,plVar10),
             puVar12 = local_50, puVar14 = local_58, uVar7 == 6)) {
            if ((uVar6 & 2) == 0) goto LAB_006d2eb9;
            uVar7 = 6;
            local_58 = puVar14 + 1;
            *plVar10 = *plVar10 + 1;
            puVar13 = puVar14 + 1;
          }
          else {
            puVar13 = local_58;
            if (uVar7 == 5) break;
          }
        }
        puVar14 = puVar13;
      } while (param_4 != puVar13);
    }
    *param_3 = (ulong)puVar13;
    if (param_5 != (ulong *)0x0) {
LAB_006d2e42:
      *param_5 = (ulong)puVar12;
      goto LAB_006d2e4d;
    }
LAB_006d2d74:
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
    if ((param_2[2] & 1) == 0) {
      if (puVar20 < puVar12) {
        local_60 = (ushort *)*param_2;
        _dl_mcount_wrapper_check(local_a0);
        uVar6 = (*local_a0)(param_1 + 0x68,param_2 + 6,&local_60,puVar12,0,param_6,0,param_8);
        puVar1 = local_60;
        if (uVar6 != 4) {
          uVar7 = uVar6;
          if (local_60 != puVar12) {
            lVar11 = 0;
            if (param_6 != (long *)0x0) {
              lVar11 = *param_6;
            }
            if (lVar11 + local_68 == lVar18) {
              *param_3 = *param_3 + ((long)puVar12 - (long)local_60) * -2;
            }
            else {
              local_58 = puVar19;
              local_50 = puVar20;
              *param_3 = (ulong)puVar19;
              puVar12 = puVar20;
              if (param_4 == puVar19) {
LAB_006d31c1:
                *param_3 = (ulong)puVar19;
                if (local_60 == puVar12) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                                "__gconv_transform_internal_ucs2reverse");
                }
LAB_006d31d2:
                    /* WARNING: Subroutine does not return */
                __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                              "__gconv_transform_internal_ucs2reverse");
              }
              uVar6 = (uint)param_2[2] & 2;
              while( true ) {
                puVar13 = puVar19 + 1;
                if (param_4 < puVar13) goto LAB_006d31c1;
                puVar2 = puVar12 + 1;
                if (puVar1 < puVar2) break;
                uVar3 = *puVar19;
                if (uVar3 < 0x10000) {
                  if (uVar3 - 0xd800 < 0x800) {
                    if ((plVar10 == (long *)0x0) || (uVar6 == 0)) goto LAB_006d31c1;
                    local_58 = puVar13;
                    *plVar10 = *plVar10 + 1;
                  }
                  else {
                    *puVar12 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
                    local_50 = puVar2;
                    local_58 = puVar13;
                    puVar12 = puVar2;
                  }
                }
                else if (uVar3 >> 7 == 0x1c00) {
                  local_58 = puVar13;
                }
                else {
                  if (plVar10 == (long *)0x0) goto LAB_006d31c1;
                  if (((param_2[2] & 8) == 0) ||
                     (iVar8 = __gconv_transliterate
                                        (param_1,param_2,*param_3,&local_58,param_4,&local_50,
                                         plVar10), puVar12 = local_50, puVar19 = local_58,
                     iVar8 == 6)) {
                    if (uVar6 == 0) goto LAB_006d31c1;
                    local_58 = puVar19 + 1;
                    *plVar10 = *plVar10 + 1;
                    puVar13 = puVar19 + 1;
                  }
                  else {
                    puVar13 = local_58;
                    if (iVar8 == 5) break;
                  }
                }
                puVar19 = puVar13;
                if (param_4 == puVar13) goto LAB_006d31c1;
              }
              *param_3 = (ulong)puVar19;
              if (puVar12 != local_60) goto LAB_006d31d2;
              if (puVar20 == puVar12) {
                *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
              }
            }
          }
          goto LAB_006d2e01;
        }
        if (uVar7 != 5) goto LAB_006d2e01;
      }
      else {
LAB_006d2e01:
        if (uVar7 != 0) goto LAB_006d2fe4;
      }
      uVar6 = (uint)param_2[2];
      puVar19 = (uint *)*param_3;
      puVar20 = (ushort *)*param_2;
      goto LAB_006d2cc8;
    }
    *param_2 = (ulong)puVar12;
    *param_6 = *param_6 + local_68;
LAB_006d2fe4:
    if ((param_8 != 0) && (uVar7 == 7)) {
      puVar5 = (undefined1 *)*param_3;
      uVar15 = (long)param_4 - (long)puVar5;
      if (4 < uVar15) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                      0x31e,"__gconv_transform_internal_ucs2reverse");
      }
      puVar19 = (uint *)param_2[4];
      if (uVar15 != 0) {
        *(undefined1 *)(puVar19 + 1) = *puVar5;
        if (((uVar15 != 1) && (*(undefined1 *)((long)puVar19 + 5) = puVar5[1], uVar15 != 2)) &&
           (*(undefined1 *)((long)puVar19 + 6) = puVar5[2], uVar15 == 4)) {
          *(undefined1 *)((long)puVar19 + 7) = puVar5[3];
        }
        local_7c = (uint)uVar15;
      }
      uVar6 = *puVar19;
      *param_3 = (ulong)param_4;
      *puVar19 = uVar6 & 0xfffffff8 | local_7c;
    }
  }
  else {
    puVar13 = (uint *)param_2[4];
    if ((*puVar13 & 7) == 0) goto LAB_006d2cc8;
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                    "__gconv_transform_internal_ucs2reverse");
    }
    local_58 = puVar19;
    local_50 = puVar20;
    if (4 < (*puVar13 & 7)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(state->__count & 7) <= sizeof (state->__value)","../iconv/loop.c",0x18a,
                    "internal_ucs2reverse_loop_single");
    }
    local_44 = CONCAT31(local_44._1_3_,(byte)puVar13[1]);
    if ((*puVar13 & 6) == 0) {
      if ((uint *)((long)puVar19 + 3U) <= param_4) {
        if (puVar4 < puVar20 + 1) goto LAB_006d2f96;
        lVar18 = 1;
LAB_006d32c7:
        local_b8 = lVar18 + 1;
        *(byte *)((long)local_40 + lVar18 + -4) = (byte)*puVar19;
        if ((uint *)((long)puVar19 + 1U) < param_4) {
          local_b8 = lVar18 + 2;
          *(byte *)((long)local_40 + lVar18 + -3) = *(byte *)((long)puVar19 + 1);
          if (((uint *)((long)puVar19 + 2U) < param_4) && (local_b8 < 4)) {
            local_b8 = 4;
            local_44 = CONCAT13(*(byte *)((long)puVar19 + 2),(undefined3)local_44);
          }
        }
LAB_006d3342:
        local_58 = &local_44;
        if (local_44 < 0x10000) {
          if (0x7ff < local_44 - 0xd800) {
            *puVar20 = (ushort)local_44 << 8 | (ushort)local_44 >> 8;
            local_50 = puVar20 + 1;
            goto LAB_006d338b;
          }
          if ((plVar10 == (long *)0x0) || ((uVar6 & 2) == 0)) goto LAB_006d35bb;
          local_58 = (uint *)local_40;
          lVar18 = 4;
          *plVar10 = *plVar10 + 1;
        }
        else {
          if (local_44 >> 7 != 0x1c00) {
            if (plVar10 != (long *)0x0) {
              if ((uVar6 & 8) == 0) {
                if ((uVar6 & 2) != 0) {
                  puVar19 = (uint *)local_40;
                  local_58 = puVar19;
                  *plVar10 = *plVar10 + 1;
LAB_006d3595:
                  lVar18 = (long)puVar19 - (long)&local_44;
                  goto LAB_006d33a1;
                }
              }
              else {
                pbVar17 = (byte *)((long)&local_44 + local_b8);
                uVar7 = __gconv_transliterate
                                  (param_1,param_2,puVar19,&local_58,pbVar17,&local_50,plVar10);
                if (uVar7 != 6) {
                  if (local_58 == &local_44) {
                    if (uVar7 == 7) {
                      if (pbVar17 == (byte *)local_40) {
                    /* WARNING: Subroutine does not return */
                        __assert_fail("inend != &bytebuf[MAX_NEEDED_INPUT]","../iconv/loop.c",0x1e2,
                                      "internal_ucs2reverse_loop_single");
                      }
                      uVar6 = *puVar13 & 0xfffffff8;
                      *param_3 = *param_3 + (local_b8 - (*puVar13 & 7));
                      if ((long)local_b8 <= (long)(int)uVar6) {
                    /* WARNING: Subroutine does not return */
                        __assert_fail("inend - inptr > (state->__count & ~7)","../iconv/loop.c",
                                      0x1ec,"internal_ucs2reverse_loop_single");
                      }
                      if (4 < local_b8) {
                    /* WARNING: Subroutine does not return */
                        __assert_fail("inend - inptr <= sizeof (state->__value.__wchb)",
                                      "../iconv/loop.c",0x1ed,"internal_ucs2reverse_loop_single");
                      }
                      *puVar13 = uVar6 | (uint)local_b8;
                      if (local_b8 != 0) {
                        *(byte *)(puVar13 + 1) = (byte)local_44;
                        if (local_b8 != 1) {
                          *(byte *)((long)puVar13 + 5) = local_44._1_1_;
                          if (local_b8 != 2) {
                            *(byte *)((long)puVar13 + 6) = local_44._2_1_;
                            if (local_b8 == 4) {
                              *(byte *)((long)puVar13 + 7) = local_44._3_1_;
                            }
                          }
                        }
                      }
                      goto LAB_006d36bb;
                    }
                    if (uVar7 != 0) goto LAB_006d2e4d;
                    uVar6 = (uint)param_2[2];
                    puVar19 = (uint *)*param_3;
                    goto LAB_006d2cc8;
                  }
LAB_006d3745:
                  lVar18 = (long)local_58 - (long)&local_44;
                  goto LAB_006d33a1;
                }
                if ((uVar6 & 2) == 0) {
                  if (local_58 != &local_44) goto LAB_006d3745;
                }
                else {
                  puVar19 = local_58 + 1;
                  local_58 = puVar19;
                  *plVar10 = *plVar10 + 1;
                  if (puVar19 != &local_44) goto LAB_006d3595;
                }
              }
            }
LAB_006d35bb:
            uVar7 = 6;
            goto LAB_006d2e4d;
          }
LAB_006d338b:
          local_58 = (uint *)local_40;
          lVar18 = 4;
        }
LAB_006d33a1:
        uVar7 = *puVar13;
        uVar15 = (ulong)(uVar7 & 7);
        if (lVar18 <= (long)uVar15) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("inptr - bytebuf > (state->__count & 7)","../iconv/loop.c",0x1d0,
                        "internal_ucs2reverse_loop_single");
        }
        uVar6 = (uint)param_2[2];
        puVar19 = (uint *)((lVar18 - uVar15) + *param_3);
        *param_3 = (ulong)puVar19;
        *puVar13 = uVar7 & 0xfffffff8;
        puVar20 = local_50;
        goto LAB_006d2cc8;
      }
      pbVar17 = (byte *)0x1;
LAB_006d363d:
      *param_3 = (ulong)param_4;
      pbVar16 = (byte *)((long)param_4 + ((long)pbVar17 - (long)puVar19));
      if ((byte *)0x4 < pbVar16) {
LAB_006d3614:
                    /* WARNING: Subroutine does not return */
        __assert_fail("inlen_after <= sizeof (state->__value.__wchb)","../iconv/loop.c",0x1a7,
                      "internal_ucs2reverse_loop_single");
      }
      if (pbVar17 < pbVar16) {
        local_58 = (uint *)((long)puVar19 + 1);
        *(byte *)((long)puVar13 + (long)(pbVar17 + 4)) = (byte)*puVar19;
        if (pbVar17 + 1 < pbVar16) {
          local_58 = (uint *)((long)puVar19 + 2);
          *(byte *)((long)puVar13 + (long)(pbVar17 + 5)) = *(byte *)((long)puVar19 + 1);
          if ((byte *)((ulong)(pbVar17 + 1 != (byte *)0x2) + 3) < pbVar16) {
            local_58 = (uint *)((long)puVar19 + 3);
            *(byte *)((long)puVar13 + 7) = *(byte *)((long)puVar19 + 2);
          }
        }
      }
LAB_006d36bb:
      uVar7 = 7;
    }
    else {
      local_44._2_2_ = SUB42(uVar7,2);
      local_44._0_2_ = CONCAT11(*(byte *)((long)puVar13 + 5),(byte)puVar13[1]);
      if ((*puVar13 & 7) < 3) {
        if (param_4 < (uint *)((long)puVar19 + 2U)) {
          pbVar17 = (byte *)0x2;
          goto LAB_006d363d;
        }
        lVar18 = 2;
        if (puVar20 + 1 <= puVar4) goto LAB_006d32c7;
      }
      else {
        local_44._3_1_ = SUB41(uVar7,3);
        local_44._0_3_ = CONCAT12(*(byte *)((long)puVar13 + 6),(undefined2)local_44);
        if ((*puVar13 & 4) == 0) {
          if (param_4 < (uint *)((long)puVar19 + 1U)) {
            pbVar17 = (byte *)0x3;
            goto LAB_006d363d;
          }
          if (puVar20 + 1 <= puVar4) {
            local_b8 = 4;
            local_44 = CONCAT13((byte)*puVar19,(undefined3)local_44);
            goto LAB_006d3342;
          }
        }
        else {
          local_44 = CONCAT13(*(byte *)((long)puVar13 + 7),(undefined3)local_44);
          if (param_4 < puVar19) {
            *param_3 = (ulong)param_4;
            if ((byte *)0x4 < (byte *)((long)param_4 + (4 - (long)puVar19))) goto LAB_006d3614;
            goto LAB_006d36bb;
          }
        }
      }
LAB_006d2f96:
      uVar7 = 5;
    }
  }
LAB_006d2e4d:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar7;
  }
LAB_006d3924:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

