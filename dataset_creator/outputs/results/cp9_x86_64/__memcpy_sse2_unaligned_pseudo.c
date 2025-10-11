
undefined8 * __memcpy_sse2_unaligned(undefined8 *param_1,undefined8 *param_2,ulong param_3)

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
  int iVar34;
  ulong uVar35;
  undefined8 *puVar36;
  uint uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  long lVar40;
  
  if (param_3 < 0x10) {
    uVar37 = (uint)param_3;
    if (7 < uVar37) {
      uVar3 = *(undefined8 *)((long)param_2 + (param_3 - 8));
      *param_1 = *param_2;
      *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar3;
      return param_1;
    }
    if (uVar37 < 4) {
      if (0 < (int)uVar37) {
        uVar1 = *(undefined1 *)param_2;
        if (uVar37 != 1) {
          *(undefined2 *)((long)param_1 + (param_3 - 2)) =
               *(undefined2 *)((long)param_2 + (param_3 - 2));
        }
        *(undefined1 *)param_1 = uVar1;
      }
      return param_1;
    }
    uVar2 = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)param_1 = uVar2;
    return param_1;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  if (param_3 < 0x21) {
    param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar5 = *param_2;
    uVar6 = param_2[1];
    *param_1 = uVar3;
    param_1[1] = uVar4;
    puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
    *puVar36 = uVar5;
    puVar36[1] = uVar6;
    return param_1;
  }
  if (param_3 < 0x81) {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    if (0x40 < param_3) {
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar11 = *puVar36;
      uVar12 = puVar36[1];
      puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
      uVar13 = *puVar36;
      uVar14 = puVar36[1];
      puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x30));
      uVar15 = *puVar36;
      uVar16 = puVar36[1];
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
      puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
      *puVar36 = uVar11;
      puVar36[1] = uVar12;
      puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
      *puVar36 = uVar13;
      puVar36[1] = uVar14;
      puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x30));
      *puVar36 = uVar15;
      puVar36[1] = uVar16;
      puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x40));
      *puVar36 = uVar17;
      puVar36[1] = uVar18;
      return param_1;
    }
    puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar7 = *puVar36;
    uVar8 = puVar36[1];
    param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar9 = *param_2;
    uVar10 = param_2[1];
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
    *puVar36 = uVar7;
    puVar36[1] = uVar8;
    puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
    *puVar36 = uVar9;
    puVar36[1] = uVar10;
    return param_1;
  }
  uVar35 = (long)param_1 - (long)param_2;
  if (uVar35 < param_3) {
    if (uVar35 != 0) {
LAB_00742d15:
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar11 = *puVar36;
      uVar12 = puVar36[1];
      puVar36 = (undefined8 *)((ulong)((long)param_1 + (param_3 - 0x41)) & 0xfffffffffffffff0);
      puVar38 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)puVar36);
      do {
        puVar39 = puVar38 + 6;
        uVar13 = puVar38[7];
        uVar14 = puVar38[4];
        uVar15 = puVar38[5];
        uVar16 = puVar38[2];
        uVar17 = puVar38[3];
        uVar18 = *puVar38;
        uVar19 = puVar38[1];
        puVar38 = puVar38 + -8;
        puVar36[6] = *puVar39;
        puVar36[7] = uVar13;
        puVar36[4] = uVar14;
        puVar36[5] = uVar15;
        puVar36[2] = uVar16;
        puVar36[3] = uVar17;
        *puVar36 = uVar18;
        puVar36[1] = uVar19;
        puVar36 = puVar36 + -8;
      } while (param_1 < puVar36);
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      puVar36 = (undefined8 *)((param_3 - 0x10) + (long)param_1);
      *puVar36 = uVar11;
      puVar36[1] = uVar12;
      return param_1;
    }
  }
  else {
    if (__x86_shared_non_temporal_threshold < param_3) {
      if (param_3 <= -uVar35) {
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
        lVar40 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined8 *)((long)param_2 - lVar40);
        puVar36 = (undefined8 *)((long)param_1 - lVar40);
        param_3 = param_3 + lVar40;
        if (((~(uint)-uVar35 & 0xf80) != 0) && (param_3 >> 4 < __x86_shared_non_temporal_threshold))
        {
          uVar37 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar34 = 0x40;
            do {
              puVar39 = puVar36;
              puVar38 = param_2;
              uVar3 = puVar38[1];
              uVar4 = puVar38[2];
              uVar5 = puVar38[3];
              uVar6 = puVar38[4];
              uVar7 = puVar38[5];
              uVar8 = puVar38[6];
              uVar9 = puVar38[7];
              uVar10 = puVar38[0x200];
              uVar11 = puVar38[0x201];
              uVar12 = puVar38[0x202];
              uVar13 = puVar38[0x203];
              uVar14 = puVar38[0x204];
              uVar15 = puVar38[0x205];
              uVar16 = puVar38[0x206];
              uVar17 = puVar38[0x207];
              *puVar39 = *puVar38;
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
              iVar34 = iVar34 + -1;
              param_2 = puVar38 + 8;
              puVar36 = puVar39 + 8;
            } while (iVar34 != 0);
            puVar36 = puVar39 + 0x208;
            param_2 = puVar38 + 0x208;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          for (; uVar35 = (ulong)uVar37, 0x40 < uVar37; uVar37 = uVar37 - 0x40) {
            uVar3 = *param_2;
            uVar4 = param_2[1];
            uVar5 = param_2[2];
            uVar6 = param_2[3];
            uVar7 = param_2[4];
            uVar8 = param_2[5];
            uVar9 = param_2[6];
            uVar10 = param_2[7];
            param_2 = param_2 + 8;
            *puVar36 = uVar3;
            puVar36[1] = uVar4;
            puVar36[2] = uVar5;
            puVar36[3] = uVar6;
            puVar36[4] = uVar7;
            puVar36[5] = uVar8;
            puVar36[6] = uVar9;
            puVar36[7] = uVar10;
            puVar36 = puVar36 + 8;
          }
          puVar38 = (undefined8 *)((long)param_2 + (uVar35 - 0x40));
          uVar3 = puVar38[1];
          puVar39 = (undefined8 *)((long)param_2 + (uVar35 - 0x30));
          uVar4 = *puVar39;
          uVar5 = puVar39[1];
          puVar39 = (undefined8 *)((long)param_2 + (uVar35 - 0x20));
          uVar6 = *puVar39;
          uVar7 = puVar39[1];
          param_2 = (undefined8 *)((long)param_2 + (uVar35 - 0x10));
          uVar8 = *param_2;
          uVar9 = param_2[1];
          puVar39 = (undefined8 *)((long)puVar36 + (uVar35 - 0x40));
          *puVar39 = *puVar38;
          puVar39[1] = uVar3;
          puVar38 = (undefined8 *)((long)puVar36 + (uVar35 - 0x30));
          *puVar38 = uVar4;
          puVar38[1] = uVar5;
          puVar38 = (undefined8 *)((long)puVar36 + (uVar35 - 0x20));
          *puVar38 = uVar6;
          puVar38[1] = uVar7;
          puVar36 = (undefined8 *)((long)puVar36 + (uVar35 - 0x10));
          *puVar36 = uVar8;
          puVar36[1] = uVar9;
          return param_1;
        }
        uVar37 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar34 = 0x40;
          do {
            puVar39 = puVar36;
            puVar38 = param_2;
            uVar3 = puVar38[1];
            uVar4 = puVar38[2];
            uVar5 = puVar38[3];
            uVar6 = puVar38[4];
            uVar7 = puVar38[5];
            uVar8 = puVar38[6];
            uVar9 = puVar38[7];
            uVar10 = puVar38[0x200];
            uVar11 = puVar38[0x201];
            uVar12 = puVar38[0x202];
            uVar13 = puVar38[0x203];
            uVar14 = puVar38[0x204];
            uVar15 = puVar38[0x205];
            uVar16 = puVar38[0x206];
            uVar17 = puVar38[0x207];
            uVar18 = puVar38[0x400];
            uVar19 = puVar38[0x401];
            uVar20 = puVar38[0x402];
            uVar21 = puVar38[0x403];
            uVar22 = puVar38[0x404];
            uVar23 = puVar38[0x405];
            uVar24 = puVar38[0x406];
            uVar25 = puVar38[0x407];
            uVar26 = puVar38[0x600];
            uVar27 = puVar38[0x601];
            uVar28 = puVar38[0x602];
            uVar29 = puVar38[0x603];
            uVar30 = puVar38[0x604];
            uVar31 = puVar38[0x605];
            uVar32 = puVar38[0x606];
            uVar33 = puVar38[0x607];
            *puVar39 = *puVar38;
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
            iVar34 = iVar34 + -1;
            param_2 = puVar38 + 8;
            puVar36 = puVar39 + 8;
          } while (iVar34 != 0);
          puVar36 = puVar39 + 0x608;
          param_2 = puVar38 + 0x608;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        for (; uVar35 = (ulong)uVar37, 0x40 < uVar37; uVar37 = uVar37 - 0x40) {
          uVar3 = *param_2;
          uVar4 = param_2[1];
          uVar5 = param_2[2];
          uVar6 = param_2[3];
          uVar7 = param_2[4];
          uVar8 = param_2[5];
          uVar9 = param_2[6];
          uVar10 = param_2[7];
          param_2 = param_2 + 8;
          *puVar36 = uVar3;
          puVar36[1] = uVar4;
          puVar36[2] = uVar5;
          puVar36[3] = uVar6;
          puVar36[4] = uVar7;
          puVar36[5] = uVar8;
          puVar36[6] = uVar9;
          puVar36[7] = uVar10;
          puVar36 = puVar36 + 8;
        }
        puVar38 = (undefined8 *)((long)param_2 + (uVar35 - 0x40));
        uVar3 = puVar38[1];
        puVar39 = (undefined8 *)((long)param_2 + (uVar35 - 0x30));
        uVar4 = *puVar39;
        uVar5 = puVar39[1];
        puVar39 = (undefined8 *)((long)param_2 + (uVar35 - 0x20));
        uVar6 = *puVar39;
        uVar7 = puVar39[1];
        param_2 = (undefined8 *)((long)param_2 + (uVar35 - 0x10));
        uVar8 = *param_2;
        uVar9 = param_2[1];
        puVar39 = (undefined8 *)((long)puVar36 + (uVar35 - 0x40));
        *puVar39 = *puVar38;
        puVar39[1] = uVar3;
        puVar38 = (undefined8 *)((long)puVar36 + (uVar35 - 0x30));
        *puVar38 = uVar4;
        puVar38[1] = uVar5;
        puVar38 = (undefined8 *)((long)puVar36 + (uVar35 - 0x20));
        *puVar38 = uVar6;
        puVar38[1] = uVar7;
        puVar36 = (undefined8 *)((long)puVar36 + (uVar35 - 0x10));
        *puVar36 = uVar8;
        puVar36[1] = uVar9;
        return param_1;
      }
    }
    else if (((uint)uVar35 & 0xf00) ==
             (int)((uint)(uVar35 + param_3 >> 0x20) ^ (uint)(uVar35 >> 0x20)) >> 0x1f)
    goto LAB_00742d15;
    puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar5 = *puVar36;
    uVar6 = puVar36[1];
    puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar7 = *puVar36;
    uVar8 = puVar36[1];
    puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x30));
    uVar9 = *puVar36;
    uVar10 = puVar36[1];
    puVar36 = (undefined8 *)((long)param_2 + (param_3 - 0x40));
    uVar11 = *puVar36;
    uVar12 = puVar36[1];
    puVar39 = (undefined8 *)(((ulong)param_1 | 0xf) + 1);
    puVar38 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)puVar39);
    puVar36 = (undefined8 *)((long)param_1 + (param_3 - 0x40));
    do {
      uVar13 = *puVar38;
      uVar14 = puVar38[1];
      uVar15 = puVar38[2];
      uVar16 = puVar38[3];
      uVar17 = puVar38[4];
      uVar18 = puVar38[5];
      uVar19 = puVar38[6];
      uVar20 = puVar38[7];
      puVar38 = puVar38 + 8;
      *puVar39 = uVar13;
      puVar39[1] = uVar14;
      puVar39[2] = uVar15;
      puVar39[3] = uVar16;
      puVar39[4] = uVar17;
      puVar39[5] = uVar18;
      puVar39[6] = uVar19;
      puVar39[7] = uVar20;
      puVar39 = puVar39 + 8;
    } while (puVar39 < puVar36);
    puVar36[6] = uVar5;
    puVar36[7] = uVar6;
    puVar36[4] = uVar7;
    puVar36[5] = uVar8;
    puVar36[2] = uVar9;
    puVar36[3] = uVar10;
    *puVar36 = uVar11;
    puVar36[1] = uVar12;
    *param_1 = uVar3;
    param_1[1] = uVar4;
  }
  return param_1;
}

