
ulong __gconv_transform_ucs2reverse_internal
                (long param_1,ulong *param_2,ulong *param_3,byte *param_4,ulong *param_5,
                long *param_6,uint param_7,int param_8)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  long *plVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long in_FS_OFFSET;
  code *local_a8;
  uint local_5c;
  long local_50;
  uint *local_48;
  long local_40;
  
  uVar3 = (uint)param_2[2];
  local_5c = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (code *)0x0;
  if (((uVar3 & 1) == 0) && (local_a8 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_a8 = (code *)(((ulong)local_a8 >> 0x11 | (long)local_a8 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    pbVar17 = (byte *)*param_3;
    puVar1 = (uint *)param_2[1];
    puVar5 = param_5;
    if (param_5 == (ulong *)0x0) {
      puVar5 = param_2;
    }
    puVar14 = (uint *)*puVar5;
    local_50 = 0;
    plVar6 = (long *)0x0;
    if (param_6 != (long *)0x0) {
      plVar6 = &local_50;
    }
    if (param_8 == 0) goto LAB_006d22a0;
    puVar9 = (uint *)param_2[4];
    uVar18 = *puVar9;
    uVar4 = uVar18 & 7;
    if (uVar4 == 0) goto LAB_006d22a0;
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                    "__gconv_transform_ucs2reverse_internal");
    }
    if (4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(state->__count & 7) <= sizeof (state->__value)","../iconv/loop.c",0x18a,
                    "ucs2reverse_internal_loop_single");
    }
    if (uVar4 == 1) {
      if (param_4 < pbVar17 + 1) {
        pbVar7 = (byte *)0x1;
        goto LAB_006d2a48;
      }
      if (puVar14 + 1 <= puVar1) {
        uVar10 = CONCAT11(*pbVar17,(char)puVar9[1]) << 8 | (ushort)*pbVar17;
        if ((ushort)(uVar10 + 0x2800) < 0x800) {
          if ((plVar6 == (long *)0x0) || ((uVar3 & 2) == 0)) {
            uVar3 = 6;
            goto LAB_006d2470;
          }
          uVar11 = 1;
          *plVar6 = *plVar6 + 1;
        }
        else {
          *puVar14 = (uint)uVar10;
          uVar18 = *puVar9;
          uVar11 = (ulong)(uVar18 & 7);
          if ((uVar18 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("inptr - bytebuf > (state->__count & 7)","../iconv/loop.c",0x1d0,
                          "ucs2reverse_internal_loop_single");
          }
          uVar3 = (uint)param_2[2];
          puVar14 = puVar14 + 1;
        }
        pbVar17 = pbVar17 + (2 - uVar11);
        *param_3 = (ulong)pbVar17;
        *puVar9 = uVar18 & 0xfffffff8;
LAB_006d22a0:
        lVar16 = local_50;
        if (param_6 != (long *)0x0) {
          lVar16 = local_50 + *param_6;
        }
        puVar9 = puVar14;
        if (param_4 == pbVar17) {
          uVar18 = 4;
          pbVar7 = param_4;
        }
        else {
          pbVar12 = pbVar17 + 2;
          pbVar7 = pbVar17;
          if (param_4 < pbVar12) {
            uVar18 = 7;
          }
          else {
            puVar8 = puVar14 + 1;
            if (puVar1 < puVar8) {
              uVar18 = 5;
            }
            else {
              if ((uVar3 & 2) == 0) {
                if (plVar6 == (long *)0x0) {
                  do {
                    puVar9 = puVar8;
                    pbVar7 = pbVar12;
                    puVar8 = puVar9 + -1;
                    pbVar12 = pbVar7 + -2;
                    uVar10 = *(ushort *)(pbVar7 + -2) << 8 | *(ushort *)(pbVar7 + -2) >> 8;
                    if ((ushort)(uVar10 + 0x2800) < 0x800) goto LAB_006d2390;
                    puVar9[-1] = (uint)uVar10;
                    if (pbVar7 == param_4) goto LAB_006d259b;
                    if (param_4 < pbVar7 + 2) goto LAB_006d24a0;
                    pbVar12 = pbVar7 + 2;
                    puVar8 = puVar9 + 1;
                  } while (puVar9 + 1 <= puVar1);
                }
                else {
                  do {
                    puVar9 = puVar8;
                    pbVar7 = pbVar12;
                    puVar8 = puVar9 + -1;
                    pbVar12 = pbVar7 + -2;
                    uVar10 = *(ushort *)(pbVar7 + -2) << 8 | *(ushort *)(pbVar7 + -2) >> 8;
                    if ((ushort)(uVar10 + 0x2800) < 0x800) goto LAB_006d2390;
                    puVar9[-1] = (uint)uVar10;
                    if (param_4 == pbVar7) goto LAB_006d259b;
                    if (param_4 < pbVar7 + 2) goto LAB_006d24a0;
                    pbVar12 = pbVar7 + 2;
                    puVar8 = puVar9 + 1;
                  } while (puVar9 + 1 <= puVar1);
                }
              }
              else {
                if (plVar6 != (long *)0x0) {
                  do {
                    pbVar7 = pbVar12;
                    uVar10 = *(ushort *)(pbVar7 + -2) << 8 | *(ushort *)(pbVar7 + -2) >> 8;
                    if ((ushort)(uVar10 + 0x2800) < 0x800) {
                      *plVar6 = *plVar6 + 1;
                    }
                    else {
                      *puVar9 = (uint)uVar10;
                      puVar9 = puVar8;
                    }
                    if (param_4 == pbVar7) goto LAB_006d259b;
                    if (param_4 < pbVar7 + 2) {
                      uVar18 = 7;
                      goto LAB_006d239e;
                    }
                    puVar8 = puVar9 + 1;
                    pbVar12 = pbVar7 + 2;
                  } while (puVar8 <= puVar1);
                  uVar18 = 5;
                  goto LAB_006d239e;
                }
                do {
                  puVar9 = puVar8;
                  pbVar7 = pbVar12;
                  puVar8 = puVar9 + -1;
                  pbVar12 = pbVar7 + -2;
                  uVar10 = *(ushort *)(pbVar7 + -2) << 8 | *(ushort *)(pbVar7 + -2) >> 8;
                  if ((ushort)(uVar10 + 0x2800) < 0x800) goto LAB_006d2390;
                  puVar9[-1] = (uint)uVar10;
                  if (param_4 == pbVar7) goto LAB_006d259b;
                  if (param_4 < pbVar7 + 2) goto LAB_006d24a0;
                  pbVar12 = pbVar7 + 2;
                  puVar8 = puVar9 + 1;
                } while (puVar9 + 1 <= puVar1);
              }
              uVar18 = 5;
            }
          }
        }
        goto LAB_006d239e;
      }
    }
    else if (param_4 < pbVar17) {
      pbVar7 = (byte *)0x2;
LAB_006d2a48:
      *param_3 = (ulong)param_4;
      param_4 = param_4 + ((long)pbVar7 - (long)pbVar17);
      if ((byte *)0x4 < param_4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("inlen_after <= sizeof (state->__value.__wchb)","../iconv/loop.c",0x1a7,
                      "ucs2reverse_internal_loop_single");
      }
      if (pbVar7 < param_4) {
        *(byte *)((long)puVar9 + (long)(pbVar7 + 4)) = *pbVar17;
        if ((pbVar7 + 1 < param_4) &&
           (*(byte *)((long)puVar9 + (long)(pbVar7 + 5)) = pbVar17[1],
           (byte *)((ulong)(pbVar7 + 1 != (byte *)0x2) + 3) < param_4)) {
          *(byte *)((long)puVar9 + 7) = pbVar17[2];
        }
      }
      uVar3 = 7;
      goto LAB_006d2470;
    }
    uVar3 = 5;
  }
  else {
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_ucs2reverse_internal");
    }
    uVar3 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((param_2[2] & 1) == 0) {
      _dl_mcount_wrapper_check(local_a8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006d2837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*local_a8)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar11;
      }
      goto LAB_006d2b6e;
    }
  }
  goto LAB_006d2470;
LAB_006d2390:
  uVar18 = 6;
  pbVar7 = pbVar12;
  puVar9 = puVar8;
  goto LAB_006d239e;
LAB_006d259b:
  uVar18 = 4;
LAB_006d239e:
  *param_3 = (ulong)pbVar7;
joined_r0x006d24b1:
  uVar3 = uVar18;
  if (param_5 != (ulong *)0x0) {
    *param_5 = (ulong)puVar9;
    goto LAB_006d2470;
  }
  *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
  if ((param_2[2] & 1) != 0) {
    *param_2 = (ulong)puVar9;
    *param_6 = *param_6 + local_50;
LAB_006d2457:
    if ((param_8 != 0) && (uVar3 == 7)) {
      puVar2 = (undefined1 *)*param_3;
      uVar11 = (long)param_4 - (long)puVar2;
      if (4 < uVar11) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                      0x31e,"__gconv_transform_ucs2reverse_internal");
      }
      puVar1 = (uint *)param_2[4];
      if (uVar11 != 0) {
        *(undefined1 *)(puVar1 + 1) = *puVar2;
        if (((uVar11 != 1) && (*(undefined1 *)((long)puVar1 + 5) = puVar2[1], uVar11 != 2)) &&
           (*(undefined1 *)((long)puVar1 + 6) = puVar2[2], uVar11 == 4)) {
          *(undefined1 *)((long)puVar1 + 7) = puVar2[3];
        }
        local_5c = (uint)uVar11;
      }
      uVar18 = *puVar1;
      *param_3 = (ulong)param_4;
      *puVar1 = uVar18 & 0xfffffff8 | local_5c;
    }
LAB_006d2470:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar3;
    }
LAB_006d2b6e:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  if (puVar9 <= puVar14) goto LAB_006d2457;
  local_48 = (uint *)*param_2;
  _dl_mcount_wrapper_check(local_a8);
  uVar3 = (*local_a8)(param_1 + 0x68,param_2 + 6,&local_48,puVar9,0,param_6,0,param_8);
  puVar8 = local_48;
  if (uVar3 == 4) {
    uVar3 = uVar18;
    if (uVar18 != 5) goto LAB_006d2457;
    goto LAB_006d2439;
  }
  if (local_48 != puVar9) {
    lVar13 = 0;
    if (param_6 != (long *)0x0) {
      lVar13 = *param_6;
    }
    if (lVar13 + local_50 == lVar16) {
      *param_3 = *param_3 - ((long)puVar9 - (long)local_48) / 2;
    }
    else {
      pbVar7 = param_4;
      puVar9 = puVar14;
      if ((param_4 == pbVar17) || (pbVar12 = pbVar17 + 2, pbVar7 = pbVar17, param_4 < pbVar12)) {
LAB_006d29e6:
        *param_3 = (ulong)pbVar7;
        if (puVar8 == puVar9) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                        "__gconv_transform_ucs2reverse_internal");
        }
LAB_006d29c4:
                    /* WARNING: Subroutine does not return */
        __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                      "__gconv_transform_ucs2reverse_internal");
      }
      puVar9 = puVar14 + 1;
      if (local_48 < puVar9) {
        *param_3 = (ulong)pbVar17;
        if (local_48 != puVar14) goto LAB_006d29c4;
      }
      else {
        if ((param_2[2] & 2) == 0) {
          if (plVar6 == (long *)0x0) {
            do {
              pbVar17 = pbVar12;
              puVar15 = puVar9;
              uVar10 = *(ushort *)(pbVar17 + -2) << 8 | *(ushort *)(pbVar17 + -2) >> 8;
              pbVar7 = pbVar17 + -2;
              puVar9 = puVar15 + -1;
              if ((((ushort)(uVar10 + 0x2800) < 0x800) ||
                  (puVar15[-1] = (uint)uVar10, pbVar7 = pbVar17, puVar9 = puVar15,
                  param_4 == pbVar17)) || (param_4 < pbVar17 + 2)) goto LAB_006d29e6;
              puVar9 = puVar15 + 1;
              pbVar12 = pbVar17 + 2;
            } while (puVar15 + 1 <= local_48);
          }
          else {
            do {
              pbVar17 = pbVar12;
              puVar15 = puVar9;
              uVar10 = *(ushort *)(pbVar17 + -2) << 8 | *(ushort *)(pbVar17 + -2) >> 8;
              pbVar7 = pbVar17 + -2;
              puVar9 = puVar15 + -1;
              if ((((ushort)(uVar10 + 0x2800) < 0x800) ||
                  (puVar15[-1] = (uint)uVar10, pbVar7 = pbVar17, puVar9 = puVar15,
                  param_4 == pbVar17)) || (param_4 < pbVar17 + 2)) goto LAB_006d29e6;
              puVar9 = puVar15 + 1;
              pbVar12 = pbVar17 + 2;
            } while (puVar15 + 1 <= local_48);
          }
        }
        else {
          puVar15 = puVar14;
          if (plVar6 == (long *)0x0) {
            do {
              pbVar17 = pbVar12;
              puVar15 = puVar9;
              uVar10 = *(ushort *)(pbVar17 + -2) << 8 | *(ushort *)(pbVar17 + -2) >> 8;
              pbVar7 = pbVar17 + -2;
              puVar9 = puVar15 + -1;
              if ((((ushort)(uVar10 + 0x2800) < 0x800) ||
                  (puVar15[-1] = (uint)uVar10, pbVar7 = pbVar17, puVar9 = puVar15,
                  param_4 == pbVar17)) || (param_4 < pbVar17 + 2)) goto LAB_006d29e6;
              puVar9 = puVar15 + 1;
              pbVar12 = pbVar17 + 2;
            } while (puVar15 + 1 <= local_48);
          }
          else {
            do {
              pbVar17 = pbVar12;
              uVar10 = *(ushort *)(pbVar17 + -2) << 8 | *(ushort *)(pbVar17 + -2) >> 8;
              if ((ushort)(uVar10 + 0x2800) < 0x800) {
                *plVar6 = *plVar6 + 1;
              }
              else {
                *puVar15 = (uint)uVar10;
                puVar15 = puVar9;
              }
              pbVar7 = pbVar17;
              puVar9 = puVar15;
              if ((param_4 == pbVar17) || (param_4 < pbVar17 + 2)) goto LAB_006d29e6;
              puVar9 = puVar15 + 1;
              pbVar12 = pbVar17 + 2;
            } while (puVar9 <= puVar8);
          }
        }
        *param_3 = (ulong)pbVar17;
        if (puVar8 != puVar15) goto LAB_006d29c4;
        if (puVar14 != puVar8) goto LAB_006d2431;
      }
      *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
    }
  }
LAB_006d2431:
  if (uVar3 != 0) goto LAB_006d2457;
LAB_006d2439:
  puVar14 = (uint *)*param_2;
  pbVar17 = (byte *)*param_3;
  uVar3 = (uint)param_2[2];
  goto LAB_006d22a0;
LAB_006d24a0:
  uVar18 = 7;
  *param_3 = (ulong)pbVar7;
  goto joined_r0x006d24b1;
}

