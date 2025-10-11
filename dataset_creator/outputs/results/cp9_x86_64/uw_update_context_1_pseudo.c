
void uw_update_context_1(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 local_130;
  undefined8 local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_128[0] = *param_1;
  local_128[1] = param_1[1];
  local_128[2] = param_1[2];
  local_128[3] = param_1[3];
  local_108 = param_1[4];
  uStack_100 = param_1[5];
  local_f8 = param_1[6];
  puStack_f0 = (undefined8 *)param_1[7];
  local_e8 = param_1[8];
  uStack_e0 = param_1[9];
  local_d8 = param_1[10];
  uStack_d0 = param_1[0xb];
  local_c8 = param_1[0xc];
  uStack_c0 = param_1[0xd];
  local_b8 = param_1[0xe];
  uStack_b0 = param_1[0xf];
  local_a8 = param_1[0x10];
  uStack_a0 = param_1[0x11];
  local_98 = param_1[0x12];
  uStack_90 = param_1[0x13];
  local_88 = param_1[0x14];
  uStack_80 = param_1[0x15];
  local_78 = param_1[0x16];
  uStack_70 = param_1[0x17];
  local_68 = param_1[0x18];
  uVar2 = param_1[0x1b];
  uStack_60 = param_1[0x19];
  local_58 = param_1[0x1a];
  uStack_50 = uVar2;
  local_48 = param_1[0x1c];
  uStack_40 = param_1[0x1d];
  if (((((ulong)param_1[0x18] >> 0x3e & 1) == 0) ||
      (uStack_50._7_1_ = (char)(uVar2 >> 0x38), bVar16 = uStack_50._7_1_ == '\0', bVar16)) &&
     ((undefined8 *)param_1[7] == (undefined8 *)0x0)) {
    if (DAT_00938617 != '\b') goto uw_update_context_1_cold;
    if ((local_68 & 0x4000000000000000) != 0) {
      uStack_50 = uVar2 & 0xffffffffffffff;
    }
    puStack_f0 = &local_130;
    local_130 = param_1[0x12];
  }
  uVar2 = param_1[0x18];
  uVar15 = uVar2 & 0x4000000000000000;
  if (uVar15 != 0) {
    *(undefined1 *)((long)param_1 + 0xdf) = 0;
  }
  param_1[7] = 0;
  if ((int)param_2[0x28] == 1) {
    if (0x11 < (int)param_2[0x26]) {
uw_update_context_1_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)(int)param_2[0x26];
    puVar14 = (undefined8 *)local_128[lVar4];
    if (((local_68 & 0x4000000000000000) == 0) || (*(char *)((long)&uStack_50 + lVar4) == '\0')) {
      if ((&dwarf_reg_size_table)[lVar4] != '\b') goto uw_update_context_1_cold;
      puVar14 = (undefined8 *)*puVar14;
    }
    lVar4 = (long)puVar14 + param_2[0x25];
  }
  else {
    if ((int)param_2[0x28] != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar11 = 0;
    bVar8 = 0;
    pbVar10 = (byte *)param_2[0x27];
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      bVar3 = bVar8 & 0x3f;
      bVar8 = bVar8 + 7;
      uVar11 = uVar11 | (ulong)(bVar1 & 0x7f) << bVar3;
    } while ((char)bVar1 < '\0');
    lVar4 = execute_stack_op(pbVar10,pbVar10 + uVar11,local_128,0);
  }
  pbVar10 = &dwarf_reg_size_table;
  puVar14 = param_1 + 0x1b;
  param_1[0x12] = lVar4;
  plVar9 = param_2;
  puVar13 = param_1;
LAB_006c1e60:
  switch((int)plVar9[1]) {
  case 1:
    puVar6 = (undefined8 *)(*plVar9 + lVar4);
    goto joined_r0x006c1f96;
  case 2:
    lVar7 = (long)(int)*plVar9;
    if (*(char *)((long)&uStack_50 + lVar7) == '\0') {
      puVar6 = (undefined8 *)local_128[lVar7];
      if (uVar15 == 0) goto LAB_006c1ef5;
      goto LAB_006c1fb1;
    }
    if (0x11 < (int)*plVar9) goto uw_update_context_1_cold;
    puVar6 = (undefined8 *)local_128[lVar7];
    if ((local_68 & 0x4000000000000000) == 0) {
      if ((&dwarf_reg_size_table)[lVar7] == '\b') {
        puVar6 = (undefined8 *)*puVar6;
        goto LAB_006c1ee6;
      }
      goto uw_update_context_1_cold;
    }
    goto LAB_006c1ee6;
  case 3:
    pbVar12 = (byte *)*plVar9;
    uVar11 = 0;
    bVar8 = 0;
    do {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      bVar3 = bVar8 & 0x3f;
      bVar8 = bVar8 + 7;
      uVar11 = uVar11 | (ulong)(bVar1 & 0x7f) << bVar3;
    } while ((char)bVar1 < '\0');
    puVar6 = (undefined8 *)execute_stack_op(pbVar12,pbVar12 + uVar11,local_128);
joined_r0x006c1f96:
    if (uVar15 != 0) {
LAB_006c1fb1:
      *(undefined1 *)puVar14 = 0;
    }
LAB_006c1ef5:
    *puVar13 = puVar6;
    break;
  case 4:
    puVar6 = (undefined8 *)(*plVar9 + lVar4);
LAB_006c1ee6:
    if (*pbVar10 < 9) {
      *(undefined1 *)puVar14 = 1;
      goto LAB_006c1ef5;
    }
    goto uw_update_context_1_cold;
  case 5:
    pbVar12 = (byte *)*plVar9;
    uVar11 = 0;
    bVar8 = 0;
    do {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      bVar3 = bVar8 & 0x3f;
      bVar8 = bVar8 + 7;
      uVar11 = uVar11 | (ulong)(bVar1 & 0x7f) << bVar3;
    } while ((char)bVar1 < '\0');
    uVar5 = execute_stack_op(pbVar12,pbVar12 + uVar11,local_128,lVar4);
    if (8 < *pbVar10) goto uw_update_context_1_cold;
    *(undefined1 *)puVar14 = 1;
    *puVar13 = uVar5;
  }
  pbVar10 = pbVar10 + 1;
  plVar9 = plVar9 + 2;
  puVar14 = (undefined8 *)((long)puVar14 + 1);
  puVar13 = puVar13 + 1;
  if (pbVar10 == &DAT_00938622) {
    uVar15 = uVar2 & 0x7fffffffffffffff;
    if (*(char *)((long)param_2 + 0x173) != '\0') {
      uVar15 = uVar2 | 0x8000000000000000;
    }
    param_1[0x18] = uVar15;
    return;
  }
  goto LAB_006c1e60;
}

