
ulong __gconv_transform_ucs2_internal
                (long param_1,ulong *param_2,ulong *param_3,undefined1 *param_4,ulong *param_5,
                long *param_6,uint param_7,int param_8)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  ushort uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  code *local_a0;
  uint local_5c;
  long local_50;
  uint *local_48;
  long local_40;
  
  uVar3 = (uint)param_2[2];
  local_5c = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (code *)0x0;
  if (((uVar3 & 1) == 0) && (local_a0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_a0 = (code *)(((ulong)local_a0 >> 0x11 | (long)local_a0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    puVar2 = (uint *)param_2[1];
    puVar18 = (undefined1 *)*param_3;
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
    if (param_8 == 0) goto LAB_006d0af0;
    puVar9 = (uint *)param_2[4];
    uVar16 = *puVar9;
    uVar4 = uVar16 & 7;
    if (uVar4 == 0) goto LAB_006d0af0;
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                    "__gconv_transform_ucs2_internal");
    }
    if (4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(state->__count & 7) <= sizeof (state->__value)","../iconv/loop.c",0x18a,
                    "ucs2_internal_loop_single");
    }
    if (uVar4 == 1) {
      if (param_4 < puVar18 + 1) {
        puVar7 = (undefined1 *)0x1;
        goto LAB_006d1226;
      }
      if (puVar14 + 1 <= puVar2) {
        uVar11 = CONCAT11(*puVar18,(char)puVar9[1]);
        if ((ushort)(uVar11 + 0x2800) < 0x800) {
          if ((plVar6 == (long *)0x0) || ((uVar3 & 2) == 0)) {
            uVar3 = 6;
            goto LAB_006d0cd0;
          }
          uVar12 = 1;
          *plVar6 = *plVar6 + 1;
        }
        else {
          *puVar14 = (uint)uVar11;
          uVar16 = *puVar9;
          uVar12 = (ulong)(uVar16 & 7);
          if ((uVar16 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("inptr - bytebuf > (state->__count & 7)","../iconv/loop.c",0x1d0,
                          "ucs2_internal_loop_single");
          }
          uVar3 = (uint)param_2[2];
          puVar14 = puVar14 + 1;
        }
        puVar18 = puVar18 + (2 - uVar12);
        *param_3 = (ulong)puVar18;
        *puVar9 = uVar16 & 0xfffffff8;
LAB_006d0af0:
        lVar15 = local_50;
        if (param_6 != (long *)0x0) {
          lVar15 = local_50 + *param_6;
        }
        puVar9 = puVar14;
        if (param_4 == puVar18) {
          uVar16 = 4;
          puVar7 = param_4;
        }
        else {
          puVar1 = puVar18 + 2;
          puVar7 = puVar18;
          if (param_4 < puVar1) {
            uVar16 = 7;
          }
          else {
            puVar8 = puVar14 + 1;
            if (puVar2 < puVar8) {
              uVar16 = 5;
            }
            else {
              if ((uVar3 & 2) == 0) {
                if (plVar6 == (long *)0x0) {
                  do {
                    puVar9 = puVar8;
                    puVar7 = puVar1;
                    if ((ushort)(*(ushort *)(puVar7 + -2) + 0x2800) < 0x800) {
                      uVar16 = 6;
                      puVar7 = puVar7 + -2;
                      puVar9 = puVar9 + -1;
                      goto LAB_006d0bf0;
                    }
                    puVar9[-1] = (uint)*(ushort *)(puVar7 + -2);
                    if (param_4 == puVar7) goto LAB_006d0fea;
                    if (param_4 < puVar7 + 2) goto LAB_006d0d00;
                    puVar1 = puVar7 + 2;
                    puVar8 = puVar9 + 1;
                  } while (puVar9 + 1 <= puVar2);
                }
                else {
                  do {
                    puVar9 = puVar8;
                    puVar7 = puVar1;
                    if ((ushort)(*(ushort *)(puVar7 + -2) + 0x2800) < 0x800) goto LAB_006d0be0;
                    puVar9[-1] = (uint)*(ushort *)(puVar7 + -2);
                    if (param_4 == puVar7) goto LAB_006d0fea;
                    if (param_4 < puVar7 + 2) goto LAB_006d0d00;
                    puVar1 = puVar7 + 2;
                    puVar8 = puVar9 + 1;
                  } while (puVar9 + 1 <= puVar2);
                }
              }
              else {
                if (plVar6 != (long *)0x0) {
                  uVar16 = 4;
                  do {
                    puVar7 = puVar1;
                    if ((ushort)(*(ushort *)(puVar7 + -2) + 0x2800) < 0x800) {
                      uVar16 = 6;
                      *plVar6 = *plVar6 + 1;
                    }
                    else {
                      *puVar9 = (uint)*(ushort *)(puVar7 + -2);
                      puVar9 = puVar8;
                    }
                    if (param_4 == puVar7) goto LAB_006d0bf0;
                    if (param_4 < puVar7 + 2) {
                      uVar16 = 7;
                      goto LAB_006d0bf0;
                    }
                    puVar8 = puVar9 + 1;
                    puVar1 = puVar7 + 2;
                  } while (puVar8 <= puVar2);
                  uVar16 = 5;
                  goto LAB_006d0bf0;
                }
                do {
                  puVar9 = puVar8;
                  puVar7 = puVar1;
                  if ((ushort)(*(ushort *)(puVar7 + -2) + 0x2800) < 0x800) goto LAB_006d0be0;
                  puVar9[-1] = (uint)*(ushort *)(puVar7 + -2);
                  if (param_4 == puVar7) goto LAB_006d0fea;
                  if (param_4 < puVar7 + 2) goto LAB_006d0d00;
                  puVar1 = puVar7 + 2;
                  puVar8 = puVar9 + 1;
                } while (puVar9 + 1 <= puVar2);
              }
              uVar16 = 5;
            }
          }
        }
        goto LAB_006d0bf0;
      }
    }
    else if (param_4 < puVar18) {
      puVar7 = (undefined1 *)0x2;
LAB_006d1226:
      *param_3 = (ulong)param_4;
      param_4 = param_4 + ((long)puVar7 - (long)puVar18);
      if ((undefined1 *)0x4 < param_4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("inlen_after <= sizeof (state->__value.__wchb)","../iconv/loop.c",0x1a7,
                      "ucs2_internal_loop_single");
      }
      if (puVar7 < param_4) {
        *(undefined1 *)((long)puVar9 + (long)(puVar7 + 4)) = *puVar18;
        if ((puVar7 + 1 < param_4) &&
           (*(undefined1 *)((long)puVar9 + (long)(puVar7 + 5)) = puVar18[1],
           (undefined1 *)((ulong)(puVar7 + 1 != (undefined1 *)0x2) + 3) < param_4)) {
          *(undefined1 *)((long)puVar9 + 7) = puVar18[2];
        }
      }
      uVar3 = 7;
      goto LAB_006d0cd0;
    }
    uVar3 = 5;
  }
  else {
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_ucs2_internal");
    }
    uVar3 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((param_2[2] & 1) == 0) {
      _dl_mcount_wrapper_check(local_a0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006d1079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar12 = (*local_a0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar12;
      }
      goto LAB_006d13f9;
    }
  }
  goto LAB_006d0cd0;
LAB_006d0fea:
  uVar16 = 4;
  goto LAB_006d0bf0;
LAB_006d0d00:
  uVar16 = 7;
  *param_3 = (ulong)puVar7;
  goto joined_r0x006d0d13;
LAB_006d0be0:
  uVar16 = 6;
  puVar7 = puVar7 + -2;
  puVar9 = puVar9 + -1;
LAB_006d0bf0:
  *param_3 = (ulong)puVar7;
joined_r0x006d0d13:
  uVar3 = uVar16;
  if (param_5 != (ulong *)0x0) {
    *param_5 = (ulong)puVar9;
    goto LAB_006d0cd0;
  }
  *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
  if ((param_2[2] & 1) != 0) {
    *param_2 = (ulong)puVar9;
    *param_6 = *param_6 + local_50;
LAB_006d0cb6:
    if ((param_8 != 0) && (uVar3 == 7)) {
      puVar18 = (undefined1 *)*param_3;
      uVar12 = (long)param_4 - (long)puVar18;
      if (4 < uVar12) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                      0x31e,"__gconv_transform_ucs2_internal");
      }
      puVar2 = (uint *)param_2[4];
      if (uVar12 != 0) {
        *(undefined1 *)(puVar2 + 1) = *puVar18;
        if (((uVar12 != 1) && (*(undefined1 *)((long)puVar2 + 5) = puVar18[1], uVar12 != 2)) &&
           (*(undefined1 *)((long)puVar2 + 6) = puVar18[2], uVar12 == 4)) {
          *(undefined1 *)((long)puVar2 + 7) = puVar18[3];
        }
        local_5c = (uint)uVar12;
      }
      uVar16 = *puVar2;
      *param_3 = (ulong)param_4;
      *puVar2 = uVar16 & 0xfffffff8 | local_5c;
    }
LAB_006d0cd0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar3;
    }
LAB_006d13f9:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  if (puVar9 <= puVar14) goto LAB_006d0cb6;
  local_48 = (uint *)*param_2;
  _dl_mcount_wrapper_check(local_a0);
  uVar3 = (*local_a0)(param_1 + 0x68,param_2 + 6,&local_48,puVar9,0,param_6,0,param_8);
  puVar8 = local_48;
  if (uVar3 == 4) {
    uVar3 = uVar16;
    if (uVar16 != 5) goto LAB_006d0cb6;
  }
  else {
    if (local_48 != puVar9) {
      lVar13 = 0;
      if (param_6 != (long *)0x0) {
        lVar13 = *param_6;
      }
      if (lVar13 + local_50 == lVar15) {
        *param_3 = *param_3 - ((long)puVar9 - (long)local_48) / 2;
      }
      else {
        puVar7 = param_4;
        puVar9 = puVar14;
        if ((param_4 == puVar18) || (puVar1 = puVar18 + 2, puVar7 = puVar18, param_4 < puVar1)) {
LAB_006d1189:
          *param_3 = (ulong)puVar7;
          if (puVar9 == puVar8) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                          "__gconv_transform_ucs2_internal");
          }
LAB_006d1199:
                    /* WARNING: Subroutine does not return */
          __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                        "__gconv_transform_ucs2_internal");
        }
        puVar10 = puVar14 + 1;
        puVar17 = puVar14;
        if (puVar10 <= local_48) {
          if ((param_2[2] & 2) == 0) {
            if (plVar6 == (long *)0x0) {
              do {
                puVar18 = puVar1;
                puVar17 = puVar10;
                if ((ushort)(*(ushort *)(puVar18 + -2) + 0x2800) < 0x800) goto LAB_006d11dc;
                puVar17[-1] = (uint)*(ushort *)(puVar18 + -2);
                puVar7 = puVar18;
                puVar9 = puVar17;
                if ((param_4 == puVar18) || (param_4 < puVar18 + 2)) goto LAB_006d1189;
                puVar10 = puVar17 + 1;
                puVar1 = puVar18 + 2;
              } while (puVar17 + 1 <= local_48);
            }
            else {
              do {
                puVar18 = puVar1;
                puVar17 = puVar10;
                if ((ushort)(*(ushort *)(puVar18 + -2) + 0x2800) < 0x800) goto LAB_006d11dc;
                puVar17[-1] = (uint)*(ushort *)(puVar18 + -2);
                puVar7 = puVar18;
                puVar9 = puVar17;
                if ((param_4 == puVar18) || (param_4 < puVar18 + 2)) goto LAB_006d1189;
                puVar10 = puVar17 + 1;
                puVar1 = puVar18 + 2;
              } while (puVar17 + 1 <= local_48);
            }
          }
          else if (plVar6 == (long *)0x0) {
            do {
              puVar17 = puVar10;
              puVar18 = puVar1;
              puVar7 = puVar18 + -2;
              puVar9 = puVar17 + -1;
              if ((((ushort)(*(ushort *)(puVar18 + -2) + 0x2800) < 0x800) ||
                  (puVar17[-1] = (uint)*(ushort *)(puVar18 + -2), puVar7 = puVar18, puVar9 = puVar17
                  , param_4 == puVar18)) || (param_4 < puVar18 + 2)) goto LAB_006d1189;
              puVar1 = puVar18 + 2;
              puVar10 = puVar17 + 1;
            } while (puVar17 + 1 <= local_48);
          }
          else {
            do {
              puVar18 = puVar1;
              if ((ushort)(*(ushort *)(puVar18 + -2) + 0x2800) < 0x800) {
                *plVar6 = *plVar6 + 1;
              }
              else {
                *puVar9 = (uint)*(ushort *)(puVar18 + -2);
                puVar9 = puVar10;
              }
              puVar7 = puVar18;
              if ((param_4 == puVar18) || (param_4 < puVar18 + 2)) goto LAB_006d1189;
              puVar10 = puVar9 + 1;
              puVar1 = puVar18 + 2;
              puVar17 = puVar9;
            } while (puVar10 <= puVar8);
          }
        }
        *param_3 = (ulong)puVar18;
        if (puVar17 != puVar8) goto LAB_006d1199;
        if (puVar17 == puVar14) {
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
        }
      }
    }
    if (uVar3 != 0) goto LAB_006d0cb6;
  }
  puVar14 = (uint *)*param_2;
  uVar3 = (uint)param_2[2];
  puVar18 = (undefined1 *)*param_3;
  goto LAB_006d0af0;
LAB_006d11dc:
  puVar7 = puVar18 + -2;
  puVar9 = puVar17 + -1;
  goto LAB_006d1189;
}

