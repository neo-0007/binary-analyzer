
void FUN_00505630(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar9 = *param_2;
  *param_1 = lVar9;
  lVar11 = param_2[1];
  param_1[1] = lVar11;
  lVar18 = param_2[2];
  param_1[2] = lVar18;
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  lVar3 = param_2[5];
  param_1[5] = lVar3;
  lVar4 = param_2[6];
  param_1[6] = lVar4;
  lVar5 = param_2[7];
  param_1[7] = lVar5;
  uVar10 = ((ulong)param_2[8] >> 0x39) + lVar9;
  uVar7 = (uVar10 >> 0x3a) + lVar11;
  uVar10 = uVar10 & 0x3ffffffffffffff;
  uVar8 = uVar7 & 0x3ffffffffffffff;
  uVar7 = (uVar7 >> 0x3a) + lVar18;
  uVar17 = uVar7 & 0x3ffffffffffffff;
  uVar7 = (uVar7 >> 0x3a) + lVar1;
  uVar16 = uVar7 & 0x3ffffffffffffff;
  uVar7 = (uVar7 >> 0x3a) + lVar2;
  uVar15 = uVar7 & 0x3ffffffffffffff;
  uVar7 = (uVar7 >> 0x3a) + lVar3;
  uVar6 = uVar7 & 0x3ffffffffffffff;
  uVar7 = (uVar7 >> 0x3a) + lVar4;
  uVar13 = uVar7 & 0x3ffffffffffffff;
  uVar7 = (uVar7 >> 0x3a) + lVar5;
  uVar20 = uVar7 & 0x3ffffffffffffff;
  uVar12 = (param_2[8] & 0x1ffffffffffffffU) + (uVar7 >> 0x3a);
  uVar7 = (uVar12 ^ 0x1ffffffffffffff |
          uVar20 ^ 0x3ffffffffffffff |
          uVar13 ^ 0x3ffffffffffffff |
          uVar6 ^ 0x3ffffffffffffff |
          uVar15 ^ 0x3ffffffffffffff |
          uVar16 ^ 0x3ffffffffffffff |
          uVar17 ^ 0x3ffffffffffffff | uVar8 ^ 0x3ffffffffffffff | uVar10 ^ 0x3ffffffffffffff) - 1;
  uVar7 = uVar7 << 0x20 & uVar7;
  uVar7 = uVar7 << 0x10 & uVar7;
  uVar7 = uVar7 << 8 & uVar7;
  uVar7 = uVar7 << 4 & uVar7;
  uVar7 = uVar7 * 4 & uVar7;
  uVar14 = ~((long)(uVar7 * 2 & uVar7) >> 0x3f);
  uVar12 = uVar12 & uVar14;
  uVar7 = uVar12 >> 0x39;
  uVar7 = uVar7 << 0x20 | uVar7;
  uVar7 = uVar7 << 0x10 | uVar7;
  uVar7 = uVar7 << 8 | uVar7;
  uVar7 = uVar7 << 4 | uVar7;
  uVar7 = uVar7 * 4 | uVar7;
  uVar19 = (long)(uVar7 * 2 | uVar7) >> 0x3f;
  uVar7 = uVar19 & 0x3ffffffffffffff;
  lVar11 = (uVar10 & uVar14) - uVar7;
  lVar9 = ((uVar8 & uVar14) - uVar7) - (ulong)((uint)(lVar11 >> 0x3f) & 1);
  lVar11 = lVar11 + (lVar11 >> 0x3f & 0x400000000000000U);
  *param_1 = lVar11;
  lVar18 = ((uVar17 & uVar14) - uVar7) - (ulong)((uint)(lVar9 >> 0x3f) & 1);
  param_1[1] = (lVar9 >> 0x3f & 0x400000000000000U) + lVar9;
  lVar9 = ((uVar16 & uVar14) - uVar7) - (ulong)((uint)(lVar18 >> 0x3f) & 1);
  param_1[2] = (lVar18 >> 0x3f & 0x400000000000000U) + lVar18;
  param_1[3] = lVar9 + (lVar9 >> 0x3f & 0x400000000000000U);
  lVar9 = ((uVar15 & uVar14) - uVar7) - (ulong)((uint)(lVar9 >> 0x3f) & 1);
  param_1[4] = lVar9 + (lVar9 >> 0x3f & 0x400000000000000U);
  lVar18 = ((uVar13 & uVar14) - uVar7) - (ulong)((uint)(lVar11 >> 0x3f) & 1);
  lVar9 = (((uVar6 & uVar14) - uVar7) + (lVar11 >> 0x3f & 0x400000000000000U)) -
          (ulong)((uint)(lVar9 >> 0x3f) & 1);
  uVar6 = lVar18 >> 0x3f;
  lVar11 = ((uVar14 & uVar20) - uVar7) + uVar6;
  param_1[5] = lVar9 + (lVar9 >> 0x3f & 0x400000000000000U);
  lVar9 = ((uVar6 & 0x400000000000000) + lVar18) - (ulong)((uint)(lVar9 >> 0x3f) & 1);
  param_1[6] = lVar9 + (lVar9 >> 0x3f & 0x400000000000000U);
  lVar9 = (lVar11 + (lVar11 >> 0x3f & 0x400000000000000U)) - (ulong)((uint)(lVar9 >> 0x3f) & 1);
  param_1[7] = (lVar9 >> 0x3f & 0x400000000000000U) + lVar9;
  param_1[8] = ((uVar12 - (uVar19 & 0x1ffffffffffffff)) - (ulong)((uint)(lVar11 >> 0x3f) & 1)) -
               (ulong)((uint)(lVar9 >> 0x3f) & 1);
  return;
}

