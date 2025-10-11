
ulong __gconv_transform_ascii_internal
                (long param_1,ulong *param_2,long *param_3,byte *param_4,ulong *param_5,
                long *param_6,int param_7,undefined4 param_8)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong *puVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  byte *pbVar16;
  uint *puVar17;
  long in_FS_OFFSET;
  code *local_a0;
  long local_50;
  uint *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (uint)param_2[2];
  local_a0 = (code *)0x0;
  if (((uVar2 & 1) == 0) && (local_a0 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0))
  {
    local_a0 = (code *)(((ulong)local_a0 >> 0x11 | (long)local_a0 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 != 0) {
    if (param_5 != (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_ascii_internal");
    }
    uVar5 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((param_2[2] & 1) == 0) {
      _dl_mcount_wrapper_check(local_a0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006cdb7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*local_a0)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar9;
      }
    }
    else {
LAB_006cd9ca:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  puVar3 = (uint *)param_2[1];
  puVar6 = param_5;
  if (param_5 == (ulong *)0x0) {
    puVar6 = param_2;
  }
  puVar17 = (uint *)*puVar6;
  local_50 = 0;
  plVar7 = (long *)0x0;
  if (param_6 != (long *)0x0) {
    plVar7 = &local_50;
  }
LAB_006cd80f:
  pbVar16 = (byte *)*param_3;
  lVar15 = local_50;
  if (param_6 != (long *)0x0) {
    lVar15 = local_50 + *param_6;
  }
  puVar11 = puVar17;
  if (param_4 == pbVar16) {
    uVar2 = 4;
    pbVar8 = param_4;
    goto LAB_006cd885;
  }
  puVar4 = puVar17 + 1;
  pbVar8 = pbVar16;
  if (puVar3 < puVar4) {
    uVar2 = 5;
    goto LAB_006cd885;
  }
  pbVar10 = pbVar16;
  if ((uVar2 & 2) == 0) {
    if (plVar7 == (long *)0x0) {
      do {
        puVar11 = puVar4;
        bVar1 = *pbVar8;
        if ((char)bVar1 < '\0') {
          uVar2 = 6;
          puVar11 = puVar11 + -1;
          goto LAB_006cd885;
        }
        pbVar8 = pbVar8 + 1;
        puVar11[-1] = (uint)bVar1;
        if (param_4 == pbVar8) {
          uVar2 = 4;
          goto LAB_006cd885;
        }
        puVar4 = puVar11 + 1;
      } while (puVar11 + 1 <= puVar3);
    }
    else {
      do {
        puVar11 = puVar4;
        if ((char)*pbVar10 < '\0') goto LAB_006cd87b;
        pbVar8 = pbVar10 + 1;
        puVar11[-1] = (uint)*pbVar10;
        if (param_4 == pbVar8) goto LAB_006cda18;
        pbVar10 = pbVar8;
        puVar4 = puVar11 + 1;
      } while (puVar11 + 1 <= puVar3);
    }
  }
  else if (plVar7 == (long *)0x0) {
    do {
      puVar11 = puVar4;
      if ((char)*pbVar10 < '\0') goto LAB_006cd87b;
      pbVar8 = pbVar10 + 1;
      puVar11[-1] = (uint)*pbVar10;
      if (param_4 == pbVar8) goto LAB_006cda18;
      pbVar10 = pbVar8;
      puVar4 = puVar11 + 1;
    } while (puVar11 + 1 <= puVar3);
  }
  else {
    uVar2 = 4;
    puVar12 = puVar17;
    do {
      puVar11 = puVar4;
      pbVar8 = pbVar10 + 1;
      if ((char)*pbVar10 < '\0') {
        uVar2 = 6;
        *plVar7 = *plVar7 + 1;
        puVar11 = puVar12;
      }
      else {
        *puVar12 = (uint)*pbVar10;
      }
      if (param_4 == pbVar8) goto LAB_006cd885;
      puVar12 = puVar11;
      puVar4 = puVar11 + 1;
      pbVar10 = pbVar8;
    } while (puVar11 + 1 <= puVar3);
  }
  uVar2 = 5;
  *param_3 = (long)pbVar8;
  goto joined_r0x006cd950;
LAB_006cd87b:
  uVar2 = 6;
  pbVar8 = pbVar10;
  puVar11 = puVar11 + -1;
  goto LAB_006cd885;
LAB_006cda18:
  uVar2 = 4;
LAB_006cd885:
  *param_3 = (long)pbVar8;
joined_r0x006cd950:
  uVar5 = uVar2;
  if (param_5 != (ulong *)0x0) {
    *param_5 = (ulong)puVar11;
    goto LAB_006cd9ca;
  }
  *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
  if ((param_2[2] & 1) != 0) {
    *param_2 = (ulong)puVar11;
    *param_6 = *param_6 + local_50;
    goto LAB_006cd9ca;
  }
  if (puVar11 <= puVar17) goto LAB_006cd9ca;
  local_48 = (uint *)*param_2;
  _dl_mcount_wrapper_check(local_a0);
  uVar5 = (*local_a0)(param_1 + 0x68,param_2 + 6,&local_48,puVar11,0,param_6,0,param_8);
  puVar4 = local_48;
  if (uVar5 == 4) {
    uVar5 = uVar2;
    if (uVar2 != 5) goto LAB_006cd9ca;
  }
  else {
    if (puVar11 != local_48) {
      lVar13 = 0;
      if (param_6 != (long *)0x0) {
        lVar13 = *param_6;
      }
      if (lVar13 + local_50 == lVar15) {
        lVar13 = (long)puVar11 - (long)local_48;
        lVar15 = lVar13 + 3;
        if (-1 < lVar13) {
          lVar15 = lVar13;
        }
        *param_3 = *param_3 - (lVar15 >> 2);
      }
      else {
        *param_3 = (long)pbVar16;
        puVar11 = puVar17;
        if (param_4 == pbVar16) {
LAB_006cdaa6:
          *param_3 = (long)pbVar16;
          if (puVar11 == puVar4) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                          "__gconv_transform_ascii_internal");
          }
LAB_006cdab2:
                    /* WARNING: Subroutine does not return */
          __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                        "__gconv_transform_ascii_internal");
        }
        puVar12 = puVar17 + 1;
        puVar14 = puVar17;
        if (puVar12 <= local_48) {
          if ((param_2[2] & 2) == 0) {
            if (plVar7 == (long *)0x0) {
              do {
                puVar14 = puVar12;
                bVar1 = *pbVar16;
                puVar11 = puVar14 + -1;
                if ((char)bVar1 < '\0') goto LAB_006cdaa6;
                pbVar16 = pbVar16 + 1;
                puVar14[-1] = (uint)bVar1;
                puVar11 = puVar14;
                if (param_4 == pbVar16) goto LAB_006cdaa6;
                puVar12 = puVar14 + 1;
              } while (puVar14 + 1 <= local_48);
            }
            else {
              do {
                puVar14 = puVar12;
                bVar1 = *pbVar16;
                puVar11 = puVar14 + -1;
                if ((char)bVar1 < '\0') goto LAB_006cdaa6;
                pbVar16 = pbVar16 + 1;
                puVar14[-1] = (uint)bVar1;
                puVar11 = puVar14;
                if (param_4 == pbVar16) goto LAB_006cdaa6;
                puVar12 = puVar14 + 1;
              } while (puVar14 + 1 <= local_48);
            }
          }
          else {
            pbVar8 = pbVar16;
            if (plVar7 == (long *)0x0) {
              do {
                puVar14 = puVar12;
                bVar1 = *pbVar16;
                puVar11 = puVar14 + -1;
                if ((char)bVar1 < '\0') goto LAB_006cdaa6;
                pbVar16 = pbVar16 + 1;
                puVar14[-1] = (uint)bVar1;
                puVar11 = puVar14;
                if (param_4 == pbVar16) goto LAB_006cdaa6;
                puVar12 = puVar14 + 1;
              } while (puVar14 + 1 <= local_48);
            }
            else {
              do {
                pbVar16 = pbVar8 + 1;
                if ((char)*pbVar8 < '\0') {
                  *plVar7 = *plVar7 + 1;
                }
                else {
                  *puVar11 = (uint)*pbVar8;
                  puVar11 = puVar12;
                }
                if (param_4 == pbVar16) goto LAB_006cdaa6;
                puVar12 = puVar11 + 1;
                puVar14 = puVar11;
                pbVar8 = pbVar16;
              } while (puVar12 <= puVar4);
            }
          }
        }
        *param_3 = (long)pbVar16;
        if (puVar14 != puVar4) goto LAB_006cdab2;
        if (puVar14 == puVar17) {
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
        }
      }
    }
    if (uVar5 != 0) goto LAB_006cd9ca;
  }
  puVar17 = (uint *)*param_2;
  uVar2 = (uint)param_2[2];
  goto LAB_006cd80f;
}

