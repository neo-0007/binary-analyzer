
void fe_mul(int *param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  
  iVar6 = param_3[8];
  lVar20 = (long)*param_3;
  lVar21 = (long)param_3[1];
  lVar22 = (long)param_3[2];
  lVar23 = (long)param_3[3];
  lVar24 = (long)param_3[4];
  lVar25 = (long)param_3[5];
  lVar26 = (long)param_3[6];
  lVar27 = (long)param_3[7];
  lVar42 = (long)*param_2;
  lVar28 = (long)param_2[1];
  lVar16 = (long)(param_2[1] * 2);
  lVar29 = (long)param_2[2];
  lVar17 = (long)(param_3[9] * 0x13);
  lVar18 = (long)param_2[3];
  lVar7 = (long)(iVar6 * 0x13);
  lVar33 = (long)(param_2[3] * 2);
  lVar19 = (long)param_2[4];
  lVar34 = (long)param_2[5];
  lVar12 = (long)(param_3[7] * 0x13);
  lVar31 = (long)(param_3[6] * 0x13);
  lVar35 = (long)(param_2[5] * 2);
  lVar40 = (long)param_2[7];
  lVar37 = (long)(param_3[4] * 0x13);
  lVar15 = (long)param_2[6];
  lVar8 = (long)param_2[8];
  lVar36 = (long)(param_3[5] * 0x13);
  lVar9 = (long)param_2[9];
  lVar41 = (long)(param_2[7] * 2);
  lVar39 = (long)(param_2[9] * 2);
  lVar13 = (long)(param_3[3] * 0x13);
  lVar14 = (long)(param_3[2] * 0x13);
  lVar38 = (param_3[1] * 0x13) * lVar39 +
           lVar8 * lVar14 +
           lVar41 * lVar13 +
           lVar15 * lVar37 +
           lVar35 * lVar36 +
           lVar19 * lVar31 + lVar33 * lVar12 + lVar29 * lVar7 + lVar16 * lVar17 + lVar20 * lVar42;
  lVar5 = lVar8 * lVar31 +
          lVar41 * lVar12 +
          lVar7 * lVar15 +
          lVar35 * lVar17 +
          lVar20 * lVar19 + lVar21 * lVar33 + lVar22 * lVar29 + lVar16 * lVar23 + lVar24 * lVar42 +
          lVar36 * lVar39;
  uVar1 = lVar38 + 0x2000000;
  lVar10 = ((long)uVar1 >> 0x1a) +
           lVar14 * lVar9 +
           lVar13 * lVar8 +
           lVar40 * lVar37 +
           lVar36 * lVar15 +
           lVar34 * lVar31 +
           lVar12 * lVar19 + lVar18 * lVar7 + lVar17 * lVar29 + lVar20 * lVar28 + lVar21 * lVar42;
  uVar2 = lVar5 + 0x2000000;
  lVar14 = lVar10 + 0x1000000;
  lVar30 = ((long)uVar2 >> 0x1a) +
           lVar8 * lVar12 +
           lVar40 * lVar7 +
           lVar17 * lVar15 +
           lVar34 * lVar20 +
           lVar21 * lVar19 + lVar22 * lVar18 + lVar23 * lVar29 + lVar24 * lVar28 + lVar25 * lVar42 +
           lVar31 * lVar9;
  lVar3 = lVar30 + 0x1000000;
  lVar32 = (lVar14 >> 0x19) +
           lVar13 * lVar39 +
           lVar37 * lVar8 +
           lVar41 * lVar36 +
           lVar31 * lVar15 +
           lVar35 * lVar12 +
           lVar7 * lVar19 + lVar33 * lVar17 + lVar20 * lVar29 + lVar21 * lVar16 + lVar22 * lVar42;
  lVar13 = lVar32 + 0x2000000;
  lVar11 = (lVar3 >> 0x19) +
           lVar8 * lVar7 +
           lVar17 * lVar41 +
           lVar20 * lVar15 +
           lVar21 * lVar35 +
           lVar22 * lVar19 + lVar23 * lVar33 + lVar24 * lVar29 + lVar16 * lVar25 + lVar26 * lVar42 +
           lVar12 * lVar39;
  lVar4 = lVar11 + 0x2000000;
  lVar37 = (lVar13 >> 0x1a) +
           lVar8 * lVar36 +
           lVar40 * lVar31 +
           lVar12 * lVar15 +
           lVar34 * lVar7 +
           lVar17 * lVar19 + lVar18 * lVar20 + lVar21 * lVar29 + lVar22 * lVar28 + lVar23 * lVar42 +
           lVar37 * lVar9;
  lVar12 = lVar37 + 0x1000000;
  lVar31 = lVar8 * lVar17 +
           lVar40 * lVar20 +
           lVar21 * lVar15 +
           lVar22 * lVar34 +
           lVar23 * lVar19 + lVar24 * lVar18 + lVar25 * lVar29 + lVar26 * lVar28 + lVar27 * lVar42 +
           lVar7 * lVar9 + (lVar4 >> 0x1a);
  lVar36 = (lVar12 >> 0x19) + (lVar5 - (uVar2 & 0xfffffffffc000000));
  lVar5 = lVar31 + 0x1000000;
  lVar7 = lVar36 + 0x2000000;
  lVar17 = (lVar5 >> 0x19) +
           lVar41 * lVar21 +
           lVar22 * lVar15 +
           lVar35 * lVar23 +
           lVar24 * lVar19 + lVar33 * lVar25 + lVar26 * lVar29 + lVar16 * lVar27 + iVar6 * lVar42 +
           lVar20 * lVar8 + lVar17 * lVar39;
  lVar16 = lVar17 + 0x2000000;
  lVar15 = (lVar16 >> 0x1a) +
           lVar22 * lVar40 +
           lVar26 * lVar18 + lVar27 * lVar29 + param_3[9] * lVar42 + iVar6 * lVar28 +
           lVar19 * lVar25 + lVar24 * lVar34 + lVar15 * lVar23 + lVar8 * lVar21 + lVar20 * lVar9;
  lVar8 = lVar15 + 0x1000000;
  lVar18 = (lVar8 >> 0x19) * 0x13 + (lVar38 - (uVar1 & 0xfffffffffc000000));
  lVar9 = lVar18 + 0x2000000;
  *param_1 = (int)lVar18 - ((uint)lVar9 & 0xfc000000);
  param_1[5] = (int)(lVar7 >> 0x1a) + ((int)lVar30 - ((uint)lVar3 & 0xfe000000));
  param_1[6] = (int)lVar11 - ((uint)lVar4 & 0xfc000000);
  param_1[1] = (int)(lVar9 >> 0x1a) + ((int)lVar10 - ((uint)lVar14 & 0xfe000000));
  param_1[2] = (int)lVar32 - ((uint)lVar13 & 0xfc000000);
  param_1[3] = (int)lVar37 - ((uint)lVar12 & 0xfe000000);
  param_1[4] = (int)lVar36 - ((uint)lVar7 & 0xfc000000);
  param_1[7] = (int)lVar31 - ((uint)lVar5 & 0xfe000000);
  param_1[8] = (int)lVar17 - ((uint)lVar16 & 0xfc000000);
  param_1[9] = (int)lVar15 - ((uint)lVar8 & 0xfe000000);
  return;
}

