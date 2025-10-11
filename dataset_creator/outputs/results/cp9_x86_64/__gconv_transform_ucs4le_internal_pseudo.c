
ulong __gconv_transform_ucs4le_internal
                (long param_1,ulong *param_2,ulong *param_3,undefined1 *param_4,ulong *param_5,
                long *param_6,uint param_7,int param_8)

{
  undefined1 *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  long in_FS_OFFSET;
  undefined1 *local_b8;
  code *local_b0;
  long local_a8;
  uint local_5c;
  long local_50;
  int *local_48;
  long local_40;
  
  local_5c = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)param_2[2];
  local_b0 = (code *)0x0;
  if (((uVar6 & 1) == 0) && (local_b0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_b0 = (code *)(((ulong)local_b0 >> 0x11 | (long)local_b0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    piVar2 = (int *)param_2[1];
    puVar7 = param_5;
    if (param_5 == (ulong *)0x0) {
      puVar7 = param_2;
    }
    piVar17 = (int *)*puVar7;
    local_50 = 0;
    plVar8 = (long *)0x0;
    if (param_6 != (long *)0x0) {
      plVar8 = &local_50;
    }
    if (param_8 != 0) {
      puVar3 = (uint *)param_2[4];
      uVar16 = *puVar3;
      if ((uVar16 & 7) != 0) {
        if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                        "__gconv_transform_ucs4le_internal");
        }
        puVar1 = (undefined1 *)*param_3;
        uVar14 = (ulong)(int)(uVar16 & 7);
        uVar13 = uVar14;
        local_b8 = puVar1;
        if (puVar1 < param_4) {
          if ((uVar16 & 4) == 0) {
            local_b8 = puVar1 + 1;
            uVar13 = uVar14 + 1;
            *param_3 = (ulong)local_b8;
            *(undefined1 *)((long)puVar3 + uVar14 + 4) = *puVar1;
            if (param_4 <= local_b8) goto LAB_006cd4c9;
            if (uVar13 != 4) {
              local_b8 = puVar1 + 2;
              *param_3 = (ulong)local_b8;
              *(undefined1 *)((long)puVar3 + uVar14 + 5) = puVar1[1];
              uVar13 = uVar14 + 2;
              if (param_4 <= local_b8) goto LAB_006cd4c9;
              if (uVar14 + 2 == 3) {
                *param_3 = (ulong)(puVar1 + 3);
                *(undefined1 *)((long)puVar3 + 7) = puVar1[2];
                local_b8 = puVar1 + 3;
              }
            }
          }
        }
        else {
LAB_006cd4c9:
          if (uVar13 < 4) {
            uVar6 = 7;
            *puVar3 = uVar16 & 0xfffffff8 | (uint)uVar13;
            goto LAB_006cd150;
          }
        }
        if (*(byte *)((long)puVar3 + 7) < 0x81) {
          *(char *)piVar17 = (char)puVar3[1];
          *(undefined1 *)((long)piVar17 + 1) = *(undefined1 *)((long)puVar3 + 5);
          *(undefined1 *)((long)piVar17 + 2) = *(undefined1 *)((long)puVar3 + 6);
          *(undefined1 *)((long)piVar17 + 3) = *(undefined1 *)((long)puVar3 + 7);
          local_b8 = (undefined1 *)*param_3;
          uVar16 = *puVar3;
          uVar6 = (uint)param_2[2];
          piVar17 = piVar17 + 1;
        }
        else if ((uVar6 & 2) == 0) {
          uVar6 = 6;
          goto LAB_006cd150;
        }
        *puVar3 = uVar16 & 0xfffffff8;
        goto LAB_006ccfad;
      }
    }
    local_b8 = (undefined1 *)*param_3;
LAB_006ccfad:
LAB_006ccfc0:
    local_a8 = local_50;
    if (param_6 != (long *)0x0) {
      local_a8 = local_50 + *param_6;
    }
    puVar1 = local_b8 + 4;
    puVar9 = local_b8;
    piVar10 = piVar17;
    if (param_4 < puVar1) {
LAB_006cd200:
      *param_3 = (ulong)puVar9;
      uVar16 = (uint)(param_4 != puVar9) * 3 + 4;
      piVar12 = piVar10;
    }
    else {
      piVar12 = piVar17 + 1;
      if (piVar2 < piVar12) {
        *param_3 = (ulong)local_b8;
        if (param_4 == local_b8) goto LAB_006cd3cf;
      }
      else {
        if ((uVar6 & 2) == 0) {
          puVar5 = puVar1;
          if (plVar8 == (long *)0x0) {
            do {
              piVar10 = piVar12;
              puVar9 = puVar5;
              if (*(int *)(puVar9 + -4) < 0) goto LAB_006cd12e;
              piVar10[-1] = *(int *)(puVar9 + -4);
              if (param_4 < puVar9 + 4) goto LAB_006cd200;
              piVar12 = piVar10 + 1;
              puVar5 = puVar9 + 4;
            } while (piVar12 <= piVar2);
          }
          else {
            do {
              piVar10 = piVar12;
              puVar9 = puVar5;
              piVar12 = piVar10 + -1;
              if (*(int *)(puVar9 + -4) < 0) {
                *param_3 = (ulong)(puVar9 + -4);
                uVar16 = 6;
                goto LAB_006cd043;
              }
              piVar10[-1] = *(int *)(puVar9 + -4);
              if (param_4 < puVar9 + 4) goto LAB_006cd200;
              piVar12 = piVar10 + 1;
              puVar5 = puVar9 + 4;
            } while (piVar12 <= piVar2);
          }
LAB_006cd180:
          *param_3 = (ulong)puVar9;
        }
        else {
          puVar5 = puVar1;
          if (plVar8 == (long *)0x0) {
            do {
              piVar10 = piVar12;
              puVar9 = puVar5;
              if (*(int *)(puVar9 + -4) < 0) goto LAB_006cd12e;
              piVar10[-1] = *(int *)(puVar9 + -4);
              if (param_4 < puVar9 + 4) goto LAB_006cd200;
              piVar12 = piVar10 + 1;
              puVar5 = puVar9 + 4;
            } while (piVar12 <= piVar2);
            goto LAB_006cd180;
          }
          do {
            puVar9 = puVar5;
            if (*(int *)(puVar9 + -4) < 0) {
              *plVar8 = *plVar8 + 1;
            }
            else {
              *piVar10 = *(int *)(puVar9 + -4);
              piVar10 = piVar12;
            }
            if (param_4 < puVar9 + 4) goto LAB_006cd200;
            piVar12 = piVar10 + 1;
            puVar5 = puVar9 + 4;
          } while (piVar12 <= piVar2);
          *param_3 = (ulong)puVar9;
        }
        if (puVar9 == param_4) {
LAB_006cd3cf:
          uVar16 = 4;
          piVar12 = piVar10;
          goto LAB_006cd043;
        }
        if (piVar12 <= piVar2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("*outptrp + 4 > outend","gconv_simple.c",0x293,"ucs4le_internal_loop");
        }
      }
      uVar16 = 5;
      piVar12 = piVar10;
    }
LAB_006cd043:
    uVar6 = uVar16;
    if (param_5 == (ulong *)0x0) goto LAB_006cd04f;
    goto LAB_006cd148;
  }
  if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                  "__gconv_transform_ucs4le_internal");
  }
  uVar6 = 0;
  *(undefined8 *)param_2[4] = 0;
  if ((param_2[2] & 1) == 0) {
    _dl_mcount_wrapper_check(local_b0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006cd56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*local_b0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
      return uVar13;
    }
    goto LAB_006cd705;
  }
  goto LAB_006cd150;
LAB_006cd12e:
  uVar16 = 6;
  piVar12 = piVar17;
  uVar6 = uVar16;
  if (param_5 != (ulong *)0x0) {
LAB_006cd148:
    *param_5 = (ulong)piVar12;
    goto LAB_006cd150;
  }
LAB_006cd04f:
  *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
  uVar6 = uVar16;
  if ((param_2[2] & 1) == 0) {
    if (piVar12 <= piVar17) goto LAB_006cd25a;
    local_48 = (int *)*param_2;
    _dl_mcount_wrapper_check(local_b0);
    uVar6 = (*local_b0)(param_1 + 0x68,param_2 + 6,&local_48,piVar12,0,param_6,0,param_8);
    piVar10 = local_48;
    if (uVar6 == 4) {
      uVar6 = uVar16;
      if (uVar16 != 5) goto LAB_006cd25a;
      goto LAB_006cd0e4;
    }
    if (local_48 != piVar12) {
      lVar15 = 0;
      if (param_6 != (long *)0x0) {
        lVar15 = *param_6;
      }
      if (lVar15 + local_50 != local_a8) {
        uVar13 = param_2[2];
        *param_3 = (ulong)local_b8;
        piVar12 = piVar17;
        if (param_4 < puVar1) {
LAB_006cd610:
          *param_3 = (ulong)local_b8;
          piVar4 = piVar12;
        }
        else {
          piVar11 = piVar17 + 1;
          if (piVar11 <= local_48) {
            piVar4 = piVar17;
            if ((uVar13 & 2) == 0) {
              if (plVar8 == (long *)0x0) {
                do {
                  local_b8 = puVar1;
                  piVar12 = piVar11;
                  if (*(int *)(local_b8 + -4) < 0) goto joined_r0x006cd479;
                  piVar12[-1] = *(int *)(local_b8 + -4);
                  if (param_4 < local_b8 + 4) goto LAB_006cd610;
                  piVar11 = piVar12 + 1;
                  puVar1 = local_b8 + 4;
                } while (piVar12 + 1 <= local_48);
              }
              else {
                do {
                  local_b8 = puVar1;
                  piVar12 = piVar11;
                  if (*(int *)(local_b8 + -4) < 0) {
                    *param_3 = (ulong)(local_b8 + -4);
                    piVar4 = piVar12 + -1;
                    goto joined_r0x006cd479;
                  }
                  piVar12[-1] = *(int *)(local_b8 + -4);
                  if (param_4 < local_b8 + 4) goto LAB_006cd610;
                  piVar11 = piVar12 + 1;
                  puVar1 = local_b8 + 4;
                } while (piVar12 + 1 <= local_48);
              }
            }
            else if (plVar8 == (long *)0x0) {
              do {
                local_b8 = puVar1;
                piVar12 = piVar11;
                if (*(int *)(local_b8 + -4) < 0) goto joined_r0x006cd479;
                piVar12[-1] = *(int *)(local_b8 + -4);
                if (param_4 < local_b8 + 4) goto LAB_006cd610;
                piVar11 = piVar12 + 1;
                puVar1 = local_b8 + 4;
              } while (piVar12 + 1 <= local_48);
            }
            else {
              do {
                local_b8 = puVar1;
                if (*(int *)(local_b8 + -4) < 0) {
                  *plVar8 = *plVar8 + 1;
                }
                else {
                  *piVar12 = *(int *)(local_b8 + -4);
                  piVar12 = piVar11;
                }
                if (param_4 < local_b8 + 4) goto LAB_006cd610;
                piVar11 = piVar12 + 1;
                puVar1 = local_b8 + 4;
              } while (piVar11 <= piVar10);
            }
          }
          *param_3 = (ulong)local_b8;
          piVar4 = piVar12;
          if (param_4 != local_b8) {
            if (piVar10 != piVar12) goto LAB_006cd621;
            if (piVar10 == piVar17) {
              *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
            }
            goto LAB_006cd0dc;
          }
        }
joined_r0x006cd479:
        if (piVar10 == piVar4) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                        "__gconv_transform_ucs4le_internal");
        }
LAB_006cd621:
                    /* WARNING: Subroutine does not return */
        __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                      "__gconv_transform_ucs4le_internal");
      }
      *param_3 = *param_3 - ((long)piVar12 - (long)local_48);
    }
LAB_006cd0dc:
    if (uVar6 != 0) goto LAB_006cd25a;
LAB_006cd0e4:
    piVar17 = (int *)*param_2;
    uVar6 = (uint)param_2[2];
    local_b8 = (undefined1 *)*param_3;
    goto LAB_006ccfc0;
  }
  *param_2 = (ulong)piVar12;
  *param_6 = *param_6 + local_50;
LAB_006cd25a:
  if ((uVar6 == 7) && (param_8 != 0)) {
    puVar1 = (undefined1 *)*param_3;
    uVar13 = (long)param_4 - (long)puVar1;
    if (4 < uVar13) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                    0x31e,"__gconv_transform_ucs4le_internal");
    }
    puVar3 = (uint *)param_2[4];
    if (uVar13 != 0) {
      *(undefined1 *)(puVar3 + 1) = *puVar1;
      if (((uVar13 != 1) && (*(undefined1 *)((long)puVar3 + 5) = puVar1[1], uVar13 != 2)) &&
         (*(undefined1 *)((long)puVar3 + 6) = puVar1[2], uVar13 == 4)) {
        *(undefined1 *)((long)puVar3 + 7) = puVar1[3];
      }
      local_5c = (uint)uVar13;
    }
    uVar16 = *puVar3;
    *param_3 = (ulong)param_4;
    *puVar3 = uVar16 & 0xfffffff8 | local_5c;
  }
LAB_006cd150:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar6;
  }
LAB_006cd705:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

