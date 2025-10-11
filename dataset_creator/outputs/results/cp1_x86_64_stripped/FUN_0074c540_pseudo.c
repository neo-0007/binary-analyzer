
undefined1 * FUN_0074c540(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 *puVar34;
  int iVar35;
  ulong uVar36;
  undefined8 *puVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long lVar41;
  
  puVar34 = (undefined1 *)((long)param_1 + param_3);
  if (param_3 < 0x10) {
    uVar38 = (uint)param_3;
    if (7 < uVar38) {
      uVar3 = *(undefined8 *)((long)param_2 + (param_3 - 8));
      *param_1 = *param_2;
      *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar3;
      return puVar34;
    }
    if (3 < uVar38) {
      uVar2 = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_1 + (param_3 - 4)) =
           *(undefined4 *)((long)param_2 + (param_3 - 4));
      *(undefined4 *)param_1 = uVar2;
      return puVar34;
    }
    if (0 < (int)uVar38) {
      uVar1 = *(undefined1 *)param_2;
      if (uVar38 != 1) {
        *(undefined2 *)((long)param_1 + (param_3 - 2)) =
             *(undefined2 *)((long)param_2 + (param_3 - 2));
      }
      *(undefined1 *)param_1 = uVar1;
    }
    return puVar34;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  if (param_3 < 0x21) {
    param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar5 = *param_2;
    uVar6 = param_2[1];
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
    *param_1 = uVar5;
    param_1[1] = uVar6;
    return puVar34;
  }
  if (DAT_0093d6f8 < param_3) {
    uVar36 = (long)param_1 - (long)param_2;
    if (uVar36 < param_3) goto LAB_0074c710;
    if (param_3 < DAT_00945828) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((long)param_2 + 1);
        param_1 = (undefined8 *)((long)param_1 + 1);
      }
      return puVar34;
    }
    if (param_3 < DAT_0093d6f8) goto LAB_0074c68c;
  }
  else {
    if (param_3 < 0x81) {
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      if (param_3 < 0x41) {
        puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
        uVar7 = *puVar37;
        uVar8 = puVar37[1];
        param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
        uVar9 = *param_2;
        uVar10 = param_2[1];
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
        puVar37 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
        *puVar37 = uVar7;
        puVar37[1] = uVar8;
        param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
        *param_1 = uVar9;
        param_1[1] = uVar10;
        return puVar34;
      }
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar11 = *puVar37;
      uVar12 = puVar37[1];
      puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
      uVar13 = *puVar37;
      uVar14 = puVar37[1];
      puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x30));
      uVar15 = *puVar37;
      uVar16 = puVar37[1];
      param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x40));
      uVar17 = *param_2;
      uVar18 = param_2[1];
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      puVar37 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
      *puVar37 = uVar11;
      puVar37[1] = uVar12;
      puVar37 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
      *puVar37 = uVar13;
      puVar37[1] = uVar14;
      puVar37 = (undefined8 *)((long)param_1 + (param_3 - 0x30));
      *puVar37 = uVar15;
      puVar37[1] = uVar16;
      param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x40));
      *param_1 = uVar17;
      param_1[1] = uVar18;
      return puVar34;
    }
    uVar36 = (long)param_1 - (long)param_2;
    if (uVar36 < param_3) {
LAB_0074c710:
      if (uVar36 == 0) {
        return puVar34;
      }
LAB_0074c715:
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar11 = *puVar37;
      uVar12 = puVar37[1];
      puVar37 = (undefined8 *)((ulong)((long)param_1 + (param_3 - 0x41)) & 0xfffffffffffffff0);
      puVar39 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)puVar37);
      do {
        puVar40 = puVar39 + 6;
        uVar13 = puVar39[7];
        uVar14 = puVar39[4];
        uVar15 = puVar39[5];
        uVar16 = puVar39[2];
        uVar17 = puVar39[3];
        uVar18 = *puVar39;
        uVar19 = puVar39[1];
        puVar39 = puVar39 + -8;
        puVar37[6] = *puVar40;
        puVar37[7] = uVar13;
        puVar37[4] = uVar14;
        puVar37[5] = uVar15;
        puVar37[2] = uVar16;
        puVar37[3] = uVar17;
        *puVar37 = uVar18;
        puVar37[1] = uVar19;
        puVar37 = puVar37 + -8;
      } while (param_1 < puVar37);
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      param_1 = (undefined8 *)((param_3 - 0x10) + (long)param_1);
      *param_1 = uVar11;
      param_1[1] = uVar12;
      return puVar34;
    }
    if (param_3 <= DAT_00945830) {
LAB_0074c68c:
      if (((uint)uVar36 & 0xf00) ==
          (int)((uint)(uVar36 + param_3 >> 0x20) ^ (uint)(uVar36 >> 0x20)) >> 0x1f)
      goto LAB_0074c715;
      goto LAB_0074c6a2;
    }
  }
  if (param_3 <= -uVar36) {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar9 = param_2[6];
    uVar10 = param_2[7];
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    lVar41 = ((ulong)param_1 & 0x3f) - 0x40;
    param_2 = (undefined8 *)((long)param_2 - lVar41);
    param_1 = (undefined8 *)((long)param_1 - lVar41);
    param_3 = param_3 + lVar41;
    if (((~(uint)-uVar36 & 0xf80) != 0) && (param_3 >> 4 < DAT_00945830)) {
      uVar38 = (uint)param_3 & 0x1fff;
      param_3 = param_3 >> 0xd;
      do {
        iVar35 = 0x40;
        do {
          puVar39 = param_1;
          puVar37 = param_2;
          uVar3 = puVar37[1];
          uVar4 = puVar37[2];
          uVar5 = puVar37[3];
          uVar6 = puVar37[4];
          uVar7 = puVar37[5];
          uVar8 = puVar37[6];
          uVar9 = puVar37[7];
          uVar10 = puVar37[0x200];
          uVar11 = puVar37[0x201];
          uVar12 = puVar37[0x202];
          uVar13 = puVar37[0x203];
          uVar14 = puVar37[0x204];
          uVar15 = puVar37[0x205];
          uVar16 = puVar37[0x206];
          uVar17 = puVar37[0x207];
          *puVar39 = *puVar37;
          puVar39[1] = uVar3;
          puVar39[2] = uVar4;
          puVar39[3] = uVar5;
          puVar39[4] = uVar6;
          puVar39[5] = uVar7;
          puVar39[6] = uVar8;
          puVar39[7] = uVar9;
          puVar39[0x200] = uVar10;
          puVar39[0x201] = uVar11;
          puVar39[0x202] = uVar12;
          puVar39[0x203] = uVar13;
          puVar39[0x204] = uVar14;
          puVar39[0x205] = uVar15;
          puVar39[0x206] = uVar16;
          puVar39[0x207] = uVar17;
          iVar35 = iVar35 + -1;
          param_2 = puVar37 + 8;
          param_1 = puVar39 + 8;
        } while (iVar35 != 0);
        param_1 = puVar39 + 0x208;
        param_2 = puVar37 + 0x208;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      for (; uVar36 = (ulong)uVar38, 0x40 < uVar38; uVar38 = uVar38 - 0x40) {
        uVar3 = *param_2;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        uVar7 = param_2[4];
        uVar8 = param_2[5];
        uVar9 = param_2[6];
        uVar10 = param_2[7];
        param_2 = param_2 + 8;
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
        param_1[4] = uVar7;
        param_1[5] = uVar8;
        param_1[6] = uVar9;
        param_1[7] = uVar10;
        param_1 = param_1 + 8;
      }
      puVar37 = (undefined8 *)((long)param_2 + (uVar36 - 0x40));
      uVar3 = puVar37[1];
      puVar39 = (undefined8 *)((long)param_2 + (uVar36 - 0x30));
      uVar4 = *puVar39;
      uVar5 = puVar39[1];
      puVar39 = (undefined8 *)((long)param_2 + (uVar36 - 0x20));
      uVar6 = *puVar39;
      uVar7 = puVar39[1];
      param_2 = (undefined8 *)((long)param_2 + (uVar36 - 0x10));
      uVar8 = *param_2;
      uVar9 = param_2[1];
      puVar39 = (undefined8 *)((long)param_1 + (uVar36 - 0x40));
      *puVar39 = *puVar37;
      puVar39[1] = uVar3;
      puVar37 = (undefined8 *)((long)param_1 + (uVar36 - 0x30));
      *puVar37 = uVar4;
      puVar37[1] = uVar5;
      puVar37 = (undefined8 *)((long)param_1 + (uVar36 - 0x20));
      *puVar37 = uVar6;
      puVar37[1] = uVar7;
      param_1 = (undefined8 *)((long)param_1 + (uVar36 - 0x10));
      *param_1 = uVar8;
      param_1[1] = uVar9;
      return puVar34;
    }
    uVar38 = (uint)param_3 & 0x3fff;
    param_3 = param_3 >> 0xe;
    do {
      iVar35 = 0x40;
      do {
        puVar39 = param_1;
        puVar37 = param_2;
        uVar3 = puVar37[1];
        uVar4 = puVar37[2];
        uVar5 = puVar37[3];
        uVar6 = puVar37[4];
        uVar7 = puVar37[5];
        uVar8 = puVar37[6];
        uVar9 = puVar37[7];
        uVar10 = puVar37[0x200];
        uVar11 = puVar37[0x201];
        uVar12 = puVar37[0x202];
        uVar13 = puVar37[0x203];
        uVar14 = puVar37[0x204];
        uVar15 = puVar37[0x205];
        uVar16 = puVar37[0x206];
        uVar17 = puVar37[0x207];
        uVar18 = puVar37[0x400];
        uVar19 = puVar37[0x401];
        uVar20 = puVar37[0x402];
        uVar21 = puVar37[0x403];
        uVar22 = puVar37[0x404];
        uVar23 = puVar37[0x405];
        uVar24 = puVar37[0x406];
        uVar25 = puVar37[0x407];
        uVar26 = puVar37[0x600];
        uVar27 = puVar37[0x601];
        uVar28 = puVar37[0x602];
        uVar29 = puVar37[0x603];
        uVar30 = puVar37[0x604];
        uVar31 = puVar37[0x605];
        uVar32 = puVar37[0x606];
        uVar33 = puVar37[0x607];
        *puVar39 = *puVar37;
        puVar39[1] = uVar3;
        puVar39[2] = uVar4;
        puVar39[3] = uVar5;
        puVar39[4] = uVar6;
        puVar39[5] = uVar7;
        puVar39[6] = uVar8;
        puVar39[7] = uVar9;
        puVar39[0x200] = uVar10;
        puVar39[0x201] = uVar11;
        puVar39[0x202] = uVar12;
        puVar39[0x203] = uVar13;
        puVar39[0x204] = uVar14;
        puVar39[0x205] = uVar15;
        puVar39[0x206] = uVar16;
        puVar39[0x207] = uVar17;
        puVar39[0x400] = uVar18;
        puVar39[0x401] = uVar19;
        puVar39[0x402] = uVar20;
        puVar39[0x403] = uVar21;
        puVar39[0x404] = uVar22;
        puVar39[0x405] = uVar23;
        puVar39[0x406] = uVar24;
        puVar39[0x407] = uVar25;
        puVar39[0x600] = uVar26;
        puVar39[0x601] = uVar27;
        puVar39[0x602] = uVar28;
        puVar39[0x603] = uVar29;
        puVar39[0x604] = uVar30;
        puVar39[0x605] = uVar31;
        puVar39[0x606] = uVar32;
        puVar39[0x607] = uVar33;
        iVar35 = iVar35 + -1;
        param_2 = puVar37 + 8;
        param_1 = puVar39 + 8;
      } while (iVar35 != 0);
      param_1 = puVar39 + 0x608;
      param_2 = puVar37 + 0x608;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    for (; uVar36 = (ulong)uVar38, 0x40 < uVar38; uVar38 = uVar38 - 0x40) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      param_2 = param_2 + 8;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      param_1 = param_1 + 8;
    }
    puVar37 = (undefined8 *)((long)param_2 + (uVar36 - 0x40));
    uVar3 = puVar37[1];
    puVar39 = (undefined8 *)((long)param_2 + (uVar36 - 0x30));
    uVar4 = *puVar39;
    uVar5 = puVar39[1];
    puVar39 = (undefined8 *)((long)param_2 + (uVar36 - 0x20));
    uVar6 = *puVar39;
    uVar7 = puVar39[1];
    param_2 = (undefined8 *)((long)param_2 + (uVar36 - 0x10));
    uVar8 = *param_2;
    uVar9 = param_2[1];
    puVar39 = (undefined8 *)((long)param_1 + (uVar36 - 0x40));
    *puVar39 = *puVar37;
    puVar39[1] = uVar3;
    puVar37 = (undefined8 *)((long)param_1 + (uVar36 - 0x30));
    *puVar37 = uVar4;
    puVar37[1] = uVar5;
    puVar37 = (undefined8 *)((long)param_1 + (uVar36 - 0x20));
    *puVar37 = uVar6;
    puVar37[1] = uVar7;
    param_1 = (undefined8 *)((long)param_1 + (uVar36 - 0x10));
    *param_1 = uVar8;
    param_1[1] = uVar9;
    return puVar34;
  }
LAB_0074c6a2:
  puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
  uVar5 = *puVar37;
  uVar6 = puVar37[1];
  puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
  uVar7 = *puVar37;
  uVar8 = puVar37[1];
  puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x30));
  uVar9 = *puVar37;
  uVar10 = puVar37[1];
  puVar37 = (undefined8 *)((long)param_2 + (param_3 - 0x40));
  uVar11 = *puVar37;
  uVar12 = puVar37[1];
  puVar40 = (undefined8 *)(((ulong)param_1 | 0xf) + 1);
  puVar39 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)puVar40);
  puVar37 = (undefined8 *)((long)param_1 + (param_3 - 0x40));
  do {
    uVar13 = *puVar39;
    uVar14 = puVar39[1];
    uVar15 = puVar39[2];
    uVar16 = puVar39[3];
    uVar17 = puVar39[4];
    uVar18 = puVar39[5];
    uVar19 = puVar39[6];
    uVar20 = puVar39[7];
    puVar39 = puVar39 + 8;
    *puVar40 = uVar13;
    puVar40[1] = uVar14;
    puVar40[2] = uVar15;
    puVar40[3] = uVar16;
    puVar40[4] = uVar17;
    puVar40[5] = uVar18;
    puVar40[6] = uVar19;
    puVar40[7] = uVar20;
    puVar40 = puVar40 + 8;
  } while (puVar40 < puVar37);
  puVar37[6] = uVar5;
  puVar37[7] = uVar6;
  puVar37[4] = uVar7;
  puVar37[5] = uVar8;
  puVar37[2] = uVar9;
  puVar37[3] = uVar10;
  *puVar37 = uVar11;
  puVar37[1] = uVar12;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return puVar34;
}

