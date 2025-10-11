
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _Unwind_IteratePhdrCallback(ulong *param_1,ulong param_2,ulong *param_3)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  char *pcVar4;
  bool bVar5;
  char *pcVar6;
  byte bVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  char *pcVar12;
  byte bVar13;
  int *piVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  int *piVar21;
  int *piVar22;
  ulong *puVar23;
  ulong uVar24;
  char *pcVar25;
  ulong *local_80;
  undefined8 local_78;
  char *local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar8 = frame_hdr_cache_head;
  piVar11 = (int *)param_1[2];
  uVar19 = *param_1;
  if (((int)param_3[5] == 0) || (param_2 < 0x30)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
LAB_006c4dfd:
    local_80 = (ulong *)0x0;
    puVar23 = (ulong *)0x0;
  }
  else if ((param_1[4] == adds_1) && (subs_2 == param_1[5])) {
    if (frame_hdr_cache_head == (ulong *)0x0) goto LAB_006c4dfd;
    uVar24 = *frame_hdr_cache_head;
    uVar10 = frame_hdr_cache_head[1];
    local_80 = (ulong *)0x0;
    puVar23 = frame_hdr_cache_head;
    while( true ) {
      if ((uVar24 <= *param_3) && (*param_3 < uVar10)) {
        uVar19 = puVar23[2];
        piVar22 = (int *)puVar23[3];
        if (puVar23 != frame_hdr_cache_head) {
          frame_hdr_cache_head = puVar23;
          local_80[5] = puVar23[5];
          puVar23[5] = (ulong)puVar8;
        }
        goto LAB_006c4ee8;
      }
      if ((uVar24 == 0 && uVar10 == 0) || (puVar3 = (ulong *)puVar23[5], puVar3 == (ulong *)0x0))
      break;
      uVar24 = *puVar3;
      uVar10 = puVar3[1];
      local_80 = puVar23;
      puVar23 = puVar3;
    }
  }
  else {
    puVar16 = &DAT_00938690;
    adds_1 = param_1[4];
    subs_2 = param_1[5];
    do {
      puVar16[-6] = 0;
      puVar16[-5] = 0;
      puVar16[-1] = puVar16;
      puVar16 = puVar16 + 6;
    } while (puVar16 != &seen_objects);
    puVar23 = (ulong *)0x0;
    _DAT_009387d8 = 0;
    frame_hdr_cache_head = &frame_hdr_cache;
    *(undefined4 *)(param_3 + 5) = 0;
    local_80 = (ulong *)0x0;
  }
  puVar8 = frame_hdr_cache_head;
  if ((ushort)param_1[3] == 0) {
    return 0;
  }
  uVar24 = 0;
  uVar10 = 0;
  bVar5 = false;
  piVar1 = piVar11 + (ulong)(ushort)param_1[3] * 0xe;
  piVar14 = (int *)0x0;
  piVar21 = (int *)0x0;
LAB_006c4e5c:
  do {
    iVar2 = *piVar11;
    piVar22 = piVar21;
    if (iVar2 == 1) {
      uVar18 = *(long *)(piVar11 + 4) + uVar19;
      if (uVar18 <= *param_3) {
        if (*param_3 < *(long *)(piVar11 + 10) + uVar18) {
          bVar5 = true;
          uVar24 = *(long *)(piVar11 + 10) + uVar18;
          uVar10 = uVar18;
        }
        piVar11 = piVar11 + 0xe;
        if (piVar1 == piVar11) break;
        goto LAB_006c4e5c;
      }
    }
    else {
      piVar22 = piVar11;
      if ((iVar2 != 0x6474e550) && (piVar22 = piVar21, iVar2 == 2)) {
        piVar14 = piVar11;
      }
    }
    piVar11 = piVar11 + 0xe;
    piVar21 = piVar22;
  } while (piVar1 != piVar11);
  if (!bVar5) {
    return 0;
  }
  if (0x2f < param_2) {
    if ((puVar23 != (ulong *)0x0) && (local_80 != (ulong *)0x0)) {
      frame_hdr_cache_head = puVar23;
      local_80[5] = puVar23[5];
      puVar23[5] = (ulong)puVar8;
      puVar8 = puVar23;
    }
    puVar8[2] = uVar19;
    puVar8[3] = (ulong)piVar22;
    puVar8[4] = (ulong)piVar14;
    *puVar8 = uVar10;
    puVar8[1] = uVar24;
  }
LAB_006c4ee8:
  if (piVar22 == (int *)0x0) {
    return 0;
  }
  pcVar20 = (char *)(uVar19 + *(long *)(piVar22 + 4));
  if (*pcVar20 != '\x01') {
    return 1;
  }
  bVar7 = pcVar20[1];
  if (bVar7 == 0xff) {
LAB_006c516b:
    uVar19 = 0;
  }
  else {
    bVar13 = bVar7 & 0x70;
    if (bVar13 != 0x20) {
      if (bVar13 < 0x21) {
        if ((bVar7 & 0x60) != 0) goto code_r0x00404562;
      }
      else {
        if (bVar13 == 0x30) {
          uVar19 = param_3[2];
          goto LAB_006c5098;
        }
        if (bVar13 != 0x50) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_006c516b;
    }
    uVar19 = param_3[1];
  }
LAB_006c5098:
  uVar9 = read_encoded_value_with_base(bVar7,uVar19,pcVar20 + 4,&local_78);
  bVar7 = pcVar20[2];
  if ((bVar7 != 0xff) && (pcVar20[3] == ';')) {
    bVar13 = bVar7 & 0x70;
    if (bVar13 == 0x20) {
      uVar19 = param_3[1];
    }
    else {
      if (bVar13 < 0x21) {
        if ((bVar7 & 0x60) != 0) goto code_r0x00404562;
      }
      else {
        if (bVar13 == 0x30) {
          uVar19 = param_3[2];
          goto LAB_006c51b7;
        }
        if (bVar13 != 0x50) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      uVar19 = 0;
    }
LAB_006c51b7:
    piVar11 = (int *)read_encoded_value_with_base(bVar7,uVar19,uVar9,&local_70);
    if (local_70 == (char *)0x0) {
      return 1;
    }
    pcVar4 = (char *)*param_3;
    pcVar25 = (char *)(ulong)((uint)piVar11 & 3);
    if (((ulong)piVar11 & 3) == 0) {
      if (pcVar4 < pcVar20 + *piVar11) {
        return 1;
      }
      piVar22 = piVar11 + (long)(local_70 + -1) * 2;
      pcVar6 = local_70 + -1;
      if (pcVar4 < pcVar20 + *piVar22) {
        do {
          pcVar15 = pcVar6;
          if (pcVar15 <= pcVar25) {
                    /* WARNING: Subroutine does not return */
            _Unwind_IteratePhdrCallback_cold();
          }
          pcVar12 = (char *)((ulong)(pcVar15 + (long)pcVar25) >> 1);
          piVar22 = piVar11 + (long)pcVar12 * 2;
          pcVar6 = pcVar12;
        } while ((pcVar4 < pcVar20 + *piVar22) ||
                (pcVar25 = pcVar12 + 1, pcVar6 = pcVar15,
                pcVar20 + piVar11[(long)pcVar12 * 2 + 2] <= pcVar4));
      }
      pcVar25 = pcVar20 + piVar22[1];
      bVar7 = get_cie_encoding(pcVar25 + (4 - (long)*(int *)(pcVar25 + 4)));
      if (bVar7 == 0xff) {
        lVar17 = 8;
      }
      else {
        bVar13 = bVar7 & 7;
        if (bVar13 == 2) {
          lVar17 = 10;
        }
        else {
          if (bVar13 < 3) {
            if ((bVar7 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          else {
            lVar17 = 0xc;
            if (bVar13 == 3) goto LAB_006c5287;
            if (bVar13 != 4) goto code_r0x00404562;
          }
          lVar17 = 0x10;
        }
      }
LAB_006c5287:
      read_encoded_value_with_base(bVar7 & 0xf,0,pcVar25 + lVar17,&local_68);
      local_70 = pcVar20 + *piVar22;
      if (pcVar4 < local_70 + local_68) {
        param_3[4] = (ulong)pcVar25;
      }
      goto LAB_006c5159;
    }
  }
  uVar19 = param_3[1];
  uVar24 = param_3[2];
  local_68 = 0;
  local_48 = 4;
  local_50 = local_78;
  local_60 = uVar19;
  local_58 = uVar24;
  uVar10 = linear_search_fdes(&local_68,local_78,*param_3);
  param_3[4] = uVar10;
  if (uVar10 == 0) {
    return 1;
  }
  bVar7 = get_cie_encoding((uVar10 + 4) - (long)*(int *)(uVar10 + 4));
  if (bVar7 == 0xff) {
LAB_006c5148:
    uVar19 = 0;
  }
  else {
    bVar13 = bVar7 & 0x70;
    if (bVar13 != 0x20) {
      if (bVar13 < 0x21) {
        if ((bVar7 & 0x60) != 0) {
code_r0x00404562:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        uVar19 = uVar24;
        if (bVar13 == 0x30) goto LAB_006c514a;
        if (bVar13 != 0x50) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_006c5148;
    }
  }
LAB_006c514a:
  read_encoded_value_with_base(bVar7,uVar19,uVar10 + 8,&local_70);
LAB_006c5159:
  param_3[3] = (ulong)local_70;
  return 1;
}

