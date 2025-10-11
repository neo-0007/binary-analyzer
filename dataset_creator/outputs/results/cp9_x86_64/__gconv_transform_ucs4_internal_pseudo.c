
ulong __gconv_transform_ucs4_internal
                (long param_1,undefined8 *param_2,ulong *param_3,uint *param_4,undefined8 *param_5,
                long *param_6,uint param_7,int param_8)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  long in_FS_OFFSET;
  uint *puVar18;
  code *local_b0;
  uint local_5c;
  long local_50;
  uint *local_48;
  long local_40;
  
  local_5c = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = *(uint *)(param_2 + 2);
  local_b0 = (code *)0x0;
  puVar18 = (uint *)(ulong)uVar10;
  if (((uVar10 & 1) == 0) && (local_b0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0)
     ) {
    local_b0 = (code *)(((ulong)local_b0 >> 0x11 | (long)local_b0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    puVar1 = (uint *)param_2[1];
    puVar5 = param_5;
    if (param_5 == (undefined8 *)0x0) {
      puVar5 = param_2;
    }
    puVar17 = (uint *)*puVar5;
    local_50 = 0;
    plVar6 = (long *)0x0;
    if (param_6 != (long *)0x0) {
      plVar6 = &local_50;
    }
    if (param_8 == 0) goto LAB_006cc1c8;
    puVar12 = (uint *)param_2[4];
    uVar4 = *puVar12;
    if ((uVar4 & 7) == 0) goto LAB_006cc1c8;
    if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                    "__gconv_transform_ucs4_internal");
    }
    puVar16 = (uint *)*param_3;
    uVar15 = (ulong)(int)(uVar4 & 7);
    puVar18 = puVar16;
    uVar11 = uVar15;
    if (puVar16 < param_4) {
      if ((uVar4 & 4) == 0) {
        puVar18 = (uint *)((long)puVar16 + 1);
        uVar11 = uVar15 + 1;
        *param_3 = (ulong)puVar18;
        *(char *)((long)puVar12 + uVar15 + 4) = (char)*puVar16;
        if (param_4 <= puVar18) goto LAB_006cc621;
        if (uVar11 != 4) {
          puVar18 = (uint *)((long)puVar16 + 2);
          uVar11 = uVar15 + 2;
          *param_3 = (ulong)puVar18;
          *(undefined1 *)((long)puVar12 + uVar15 + 5) = *(undefined1 *)((long)puVar16 + 1);
          if (param_4 <= puVar18) goto LAB_006cc621;
          if (uVar11 == 3) {
            *param_3 = (long)puVar16 + 3U;
            *(undefined1 *)((long)puVar12 + 7) = *(undefined1 *)((long)puVar16 + 2);
            puVar18 = (uint *)((long)puVar16 + 3U);
            uVar11 = 4;
          }
          else {
            uVar11 = 4;
          }
        }
      }
    }
    else {
LAB_006cc621:
      if (uVar11 < 4) {
        uVar10 = 7;
        *puVar12 = uVar4 & 0xfffffff8 | (uint)uVar11;
        goto LAB_006cc35b;
      }
    }
    if ((byte)puVar12[1] < 0x81) {
      *(undefined1 *)puVar17 = *(undefined1 *)((long)puVar12 + 7);
      *(undefined1 *)((long)puVar17 + 1) = *(undefined1 *)((long)puVar12 + 6);
      *(undefined1 *)((long)puVar17 + 2) = *(undefined1 *)((long)puVar12 + 5);
      *(char *)((long)puVar17 + 3) = (char)puVar12[1];
      uVar4 = *puVar12;
      uVar10 = *(uint *)(param_2 + 2);
      puVar17 = puVar17 + 1;
    }
    else if ((uVar10 & 2) == 0) {
      uVar10 = 6;
      *param_3 = (ulong)((long)puVar18 + (uVar15 - uVar11));
      goto LAB_006cc35b;
    }
    puVar18 = (uint *)(ulong)uVar10;
    *puVar12 = uVar4 & 0xfffffff8;
LAB_006cc1c8:
    puVar12 = puVar18;
LAB_006cc1d5:
    puVar16 = (uint *)*param_3;
    lVar14 = local_50;
    if (param_6 != (long *)0x0) {
      lVar14 = local_50 + *param_6;
    }
    puVar3 = puVar16 + 1;
    puVar7 = puVar16;
    puVar9 = puVar17;
    if ((puVar3 <= param_4) && (puVar8 = puVar17 + 1, puVar8 <= puVar1)) {
      puVar18 = puVar3;
      if (((ulong)puVar12 & 2) == 0) {
        puVar12 = puVar8;
        if (plVar6 == (long *)0x0) {
          do {
            puVar7 = puVar18;
            uVar10 = puVar7[-1];
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            if ((int)uVar10 < 0) goto LAB_006cc704;
            puVar12[-1] = uVar10;
            puVar18 = puVar7 + 1;
            puVar9 = puVar12;
          } while ((puVar18 <= param_4) && (puVar12 = puVar12 + 1, puVar12 <= puVar1));
        }
        else {
          do {
            puVar9 = puVar8;
            puVar7 = puVar18;
            uVar10 = puVar7[-1];
            puVar12 = puVar9 + -1;
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            puVar18 = (uint *)(ulong)uVar10;
            if ((int)uVar10 < 0) {
              *param_3 = (ulong)(puVar7 + -1);
              uVar10 = 6;
              puVar9 = puVar12;
              goto joined_r0x006cc34d;
            }
            puVar9[-1] = uVar10;
            puVar18 = puVar7 + 1;
          } while ((puVar18 <= param_4) && (puVar8 = puVar9 + 1, puVar12 = puVar8, puVar8 <= puVar1)
                  );
        }
      }
      else {
        puVar12 = puVar8;
        if (plVar6 == (long *)0x0) {
          do {
            puVar7 = puVar18;
            uVar10 = puVar7[-1];
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            if ((int)uVar10 < 0) goto LAB_006cc704;
            puVar12[-1] = uVar10;
            puVar18 = puVar7 + 1;
            puVar9 = puVar12;
          } while ((puVar18 <= param_4) && (puVar12 = puVar12 + 1, puVar12 <= puVar1));
        }
        else {
          do {
            puVar7 = puVar18;
            uVar10 = puVar7[-1];
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            if ((int)uVar10 < 0) {
              *plVar6 = *plVar6 + 1;
            }
            else {
              *puVar9 = uVar10;
              puVar9 = puVar8;
            }
            puVar18 = puVar7 + 1;
            puVar12 = puVar9;
          } while ((puVar18 <= param_4) && (puVar8 = puVar9 + 1, puVar8 <= puVar1));
        }
      }
    }
    *param_3 = (ulong)puVar7;
    uVar10 = 4;
    if (puVar7 != param_4) {
      uVar10 = (-(uint)(puVar1 < puVar9 + 1) & 0xfffffffe) + 7;
    }
    goto joined_r0x006cc34d;
  }
  if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                  "__gconv_transform_ucs4_internal");
  }
  uVar10 = 0;
  *(undefined8 *)param_2[4] = 0;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    _dl_mcount_wrapper_check(local_b0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006cc6ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*local_b0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
      return uVar11;
    }
    goto LAB_006cc8a8;
  }
  goto LAB_006cc35b;
LAB_006cc704:
  puVar18 = (uint *)(ulong)uVar10;
  uVar10 = 6;
  puVar9 = puVar17;
joined_r0x006cc34d:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = puVar9;
    goto LAB_006cc35b;
  }
  *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
  uVar4 = uVar10;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    if (puVar9 <= puVar17) goto LAB_006cc3ea;
    local_48 = (uint *)*param_2;
    _dl_mcount_wrapper_check(local_b0,puVar12,puVar18);
    puVar18 = (uint *)0x0;
    uVar4 = (*local_b0)(param_1 + 0x68,param_2 + 6,&local_48,puVar9,0,param_6,0,param_8);
    puVar12 = local_48;
    if (uVar4 == 4) {
      uVar4 = uVar10;
      if (uVar10 != 5) goto LAB_006cc3ea;
      goto LAB_006cc30d;
    }
    if (local_48 != puVar9) {
      lVar13 = 0;
      if (param_6 != (long *)0x0) {
        lVar13 = *param_6;
      }
      if (lVar13 + local_50 != lVar14) {
        uVar10 = *(uint *)(param_2 + 2);
        *param_3 = (ulong)puVar16;
        puVar18 = puVar17;
        if (param_4 < puVar3) {
LAB_006cc795:
          *param_3 = (ulong)puVar16;
          if ((puVar16 != param_4) && (puVar12 < puVar18 + 1)) {
LAB_006cc7db:
            if (puVar12 != puVar18) goto LAB_006cc7af;
            if (puVar12 == puVar17) {
              *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
            }
            goto LAB_006cc305;
          }
        }
        else {
          puVar9 = puVar17 + 1;
          if (puVar9 <= local_48) {
            if ((uVar10 & 2) == 0) {
              if (plVar6 == (long *)0x0) {
                do {
                  puVar16 = puVar3;
                  uVar10 = puVar16[-1];
                  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                           uVar10 << 0x18;
                  puVar18 = puVar17;
                  if ((int)uVar10 < 0) goto joined_r0x006cc89d;
                  puVar9[-1] = uVar10;
                  puVar18 = puVar9;
                } while ((puVar16 + 1 <= param_4) &&
                        (puVar9 = puVar9 + 1, puVar3 = puVar16 + 1, puVar9 <= local_48));
              }
              else {
                do {
                  puVar16 = puVar3;
                  uVar10 = puVar16[-1];
                  puVar18 = puVar9 + -1;
                  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                           uVar10 << 0x18;
                  if ((int)uVar10 < 0) {
                    *param_3 = (ulong)(puVar16 + -1);
                    goto joined_r0x006cc89d;
                  }
                  puVar9[-1] = uVar10;
                  puVar18 = puVar9;
                } while ((puVar16 + 1 <= param_4) &&
                        (puVar9 = puVar9 + 1, puVar3 = puVar16 + 1, puVar9 <= local_48));
              }
            }
            else {
              if (plVar6 != (long *)0x0) {
                do {
                  puVar16 = puVar3;
                  uVar10 = puVar16[-1];
                  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                           uVar10 << 0x18;
                  if ((int)uVar10 < 0) {
                    *plVar6 = *plVar6 + 1;
                  }
                  else {
                    *puVar18 = uVar10;
                    puVar18 = puVar9;
                  }
                  if (param_4 < puVar16 + 1) goto LAB_006cc795;
                  puVar9 = puVar18 + 1;
                  puVar3 = puVar16 + 1;
                } while (puVar9 <= puVar12);
                goto LAB_006cc7d3;
              }
              do {
                puVar16 = puVar3;
                uVar10 = puVar16[-1];
                uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                         uVar10 << 0x18;
                puVar18 = puVar17;
                if ((int)uVar10 < 0) goto joined_r0x006cc89d;
                puVar9[-1] = uVar10;
                puVar18 = puVar9;
              } while ((puVar16 + 1 <= param_4) &&
                      (puVar9 = puVar9 + 1, puVar3 = puVar16 + 1, puVar9 <= local_48));
            }
            goto LAB_006cc795;
          }
LAB_006cc7d3:
          *param_3 = (ulong)puVar16;
          if (param_4 != puVar16) goto LAB_006cc7db;
        }
joined_r0x006cc89d:
        if (puVar12 == puVar18) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                        "__gconv_transform_ucs4_internal");
        }
LAB_006cc7af:
                    /* WARNING: Subroutine does not return */
        __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                      "__gconv_transform_ucs4_internal");
      }
      *param_3 = *param_3 - ((long)puVar9 - (long)local_48);
    }
LAB_006cc305:
    puVar18 = puVar12;
    if (uVar4 != 0) goto LAB_006cc3ea;
LAB_006cc30d:
    puVar17 = (uint *)*param_2;
    puVar12 = (uint *)(ulong)*(uint *)(param_2 + 2);
    goto LAB_006cc1d5;
  }
  *param_2 = puVar9;
  *param_6 = *param_6 + local_50;
LAB_006cc3ea:
  uVar10 = uVar4;
  if ((uVar4 == 7) && (param_8 != 0)) {
    puVar2 = (undefined1 *)*param_3;
    uVar11 = (long)param_4 - (long)puVar2;
    if (4 < uVar11) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                    0x31e,"__gconv_transform_ucs4_internal");
    }
    puVar18 = (uint *)param_2[4];
    if (uVar11 != 0) {
      *(undefined1 *)(puVar18 + 1) = *puVar2;
      if (((uVar11 != 1) && (*(undefined1 *)((long)puVar18 + 5) = puVar2[1], uVar11 != 2)) &&
         (*(undefined1 *)((long)puVar18 + 6) = puVar2[2], uVar11 == 4)) {
        *(undefined1 *)((long)puVar18 + 7) = puVar2[3];
      }
      local_5c = (uint)uVar11;
    }
    uVar4 = *puVar18;
    *param_3 = (ulong)param_4;
    *puVar18 = uVar4 & 0xfffffff8 | local_5c;
  }
LAB_006cc35b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar10;
  }
LAB_006cc8a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

