
undefined8 FUN_00785100(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  
  if (param_1 == 0) {
    lVar3 = FUN_007101b0(0);
    if (lVar3 == 0) {
      return 0;
    }
    return 1;
  }
  uVar13 = 0;
  lVar3 = param_1;
  do {
    while (*(long *)(lVar3 + 0x28) != lVar3) {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) goto LAB_00785159;
    }
    pbVar1 = (byte *)(lVar3 + 0x31e);
    lVar3 = *(long *)(lVar3 + 0x18);
    uVar13 = uVar13 + ((*pbVar1 & 0x40) == 0);
  } while (lVar3 != 0);
LAB_00785159:
  plVar2 = (long *)FUN_007101b0(uVar13 * 8);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = 0;
  do {
    while ((*(long *)(param_1 + 0x28) != param_1 || ((*(byte *)(param_1 + 0x31e) & 0x40) != 0))) {
      param_1 = *(long *)(param_1 + 0x18);
      if (param_1 == 0) goto LAB_007851b0;
    }
    plVar2[lVar3] = param_1;
    param_1 = *(long *)(param_1 + 0x18);
    lVar3 = lVar3 + 1;
  } while (param_1 != 0);
LAB_007851b0:
  if (uVar13 == 0) {
    return 1;
  }
  if (uVar13 != 1) {
    uVar9 = 0;
    plVar15 = plVar2;
    do {
      lVar3 = *plVar15;
      uVar10 = uVar9 + 1;
      uVar8 = *(ulong *)(lVar3 + 0x358);
      plVar5 = plVar15;
      uVar4 = uVar10;
      lVar6 = lVar3;
      if (uVar10 < uVar13) {
        do {
          if (*(ulong *)(plVar2[uVar4] + 0x358) < uVar8) {
            uVar8 = *(ulong *)(plVar2[uVar4] + 0x358);
            uVar9 = uVar4;
          }
          uVar4 = uVar4 + 1;
        } while (uVar13 != uVar4);
        plVar5 = plVar2 + uVar9;
        lVar6 = plVar2[uVar9];
      }
      *plVar5 = lVar3;
      *plVar15 = lVar6;
      uVar9 = uVar10;
      plVar15 = plVar15 + 1;
    } while (uVar13 - 1 != uVar10);
  }
  lVar3 = 0;
  plVar5 = (long *)(&DAT_0094ada0)[(uint)DAT_0094ad90 & 1];
  uVar12 = (uint)DAT_0094ad90 & 1;
  plVar15 = plVar5;
  if (plVar5 == (long *)0x0) {
    uVar8 = 0x3f;
    lVar3 = (long)(int)(uVar12 ^ 1);
    plVar15 = (long *)(&DAT_0094ada0)[lVar3];
    uVar4 = uVar13;
    uVar9 = uVar13;
    plVar7 = plVar15;
    if (plVar15 != (long *)0x0) goto LAB_007852a4;
LAB_007854c0:
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    lVar11 = (uVar8 + 9) * 0x20;
    lVar6 = FUN_007101b0(lVar11);
    if (lVar6 == 0) {
      uVar14 = 0;
      goto LAB_0078549a;
    }
    plVar15 = (long *)(lVar6 + 0x7fU & 0xffffffffffffff80);
    plVar15[2] = 0;
    *plVar15 = (long)plVar7;
    plVar15[1] = lVar6;
    uVar4 = ((lVar6 + lVar11 & 0xffffffffffffff80U) - (long)plVar15) - 0x20 >> 5;
    plVar15[3] = uVar4;
    if (uVar4 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("result->allocated >= size","dl-find_object.c",0xec,
                   "_dlfo_mappings_segment_allocate");
    }
    (&DAT_0094ada0)[lVar3] = plVar15;
  }
  else {
    do {
      if (plVar15[2] == 0) break;
      lVar6 = 0;
      do {
        lVar3 = (lVar3 + 1) - (ulong)(plVar15[lVar6 * 4 + 6] == 0);
        lVar6 = lVar6 + 1;
      } while (lVar6 != plVar15[2]);
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
    uVar9 = lVar3 + uVar13;
    lVar3 = (long)(int)(uVar12 ^ 1);
    plVar15 = (long *)(&DAT_0094ada0)[lVar3];
    if (plVar15 == (long *)0x0) {
      if (uVar9 != 0) {
        uVar8 = 0x3f;
        uVar4 = uVar9;
        plVar7 = plVar15;
        goto LAB_007854c0;
      }
    }
    else {
LAB_007852a4:
      uVar4 = 0;
      plVar7 = plVar15;
      do {
        uVar4 = uVar4 + plVar7[3];
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      if (uVar4 < uVar9) {
        uVar8 = plVar15[3] * 2;
        uVar4 = uVar9 - uVar4;
        plVar7 = plVar15;
        goto LAB_007854c0;
      }
    }
  }
  uVar8 = plVar15[3];
  if (uVar9 <= (ulong)plVar15[3]) {
    uVar8 = uVar9;
  }
  lVar3 = 0;
  plVar15[2] = uVar8;
  if (plVar5 != (long *)0x0) {
    lVar3 = plVar5[2];
  }
  while (lVar6 = lVar3, lVar3 == 0) {
    if (((plVar5 == (long *)0x0) || (plVar5 = (long *)*plVar5, plVar5 == (long *)0x0)) ||
       (lVar6 = plVar5[2], lVar6 == 0)) goto LAB_007853a0;
LAB_00785313:
    lVar3 = lVar6 + -1;
    if (plVar5[lVar3 * 4 + 6] != 0) {
LAB_0078532a:
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("remaining_to_add > 0","dl-find_object.c",0x2da,"_dl_find_object_update_1");
      }
      if (uVar8 == 0) {
        plVar15 = (long *)*plVar15;
        uVar8 = plVar15[3];
        if (uVar9 <= (ulong)plVar15[3]) {
          uVar8 = uVar9;
        }
        plVar15[2] = uVar8;
      }
      uVar4 = uVar8 - 1;
      if ((uVar13 == 0) ||
         ((lVar3 = plVar2[uVar13 - 1], plVar5 != (long *)0x0 &&
          (*(ulong *)(lVar3 + 0x358) < (ulong)plVar5[lVar6 * 4])))) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("current_seg_index1 > 0","dl-find_object.c",0x2ed,"_dl_find_object_update_1")
          ;
        }
        lVar3 = lVar6 + -1;
        plVar15[uVar8 * 4] = plVar5[lVar6 * 4];
        plVar15[uVar8 * 4 + 1] = plVar5[lVar6 * 4 + 1];
        plVar15[uVar4 * 4 + 6] = plVar5[lVar3 * 4 + 6];
        plVar15[uVar4 * 4 + 7] = plVar5[lVar3 * 4 + 7];
        uVar8 = uVar4;
      }
      else {
        FUN_00784840();
        *(byte *)(lVar3 + 0x31e) = *(byte *)(lVar3 + 0x31e) | 0x40;
        uVar13 = uVar13 - 1;
        lVar3 = lVar6;
        uVar8 = uVar4;
      }
      uVar9 = uVar9 - 1;
    }
  }
  if (plVar5 != (long *)0x0) goto LAB_00785313;
LAB_007853a0:
  if (uVar13 != 0) {
    plVar5 = (long *)0x0;
    goto LAB_0078532a;
  }
  if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("remaining_to_add == 0","dl-find_object.c",0x302,"_dl_find_object_update_1");
  }
  if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("target_seg_index1 == 0","dl-find_object.c",0x305,"_dl_find_object_update_1");
  }
  if (*plVar15 != 0) {
    *(undefined8 *)(*plVar15 + 0x10) = 0;
  }
  uVar14 = 1;
  DAT_0094ad90 = DAT_0094ad90 + 1;
LAB_0078549a:
  FUN_007104f0(plVar2);
  return uVar14;
}

