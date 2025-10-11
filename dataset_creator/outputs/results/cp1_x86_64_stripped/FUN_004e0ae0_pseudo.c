
void FUN_004e0ae0(int *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  
  iVar7 = param_2[5];
  lVar30 = (long)iVar7;
  iVar8 = param_2[7];
  lVar28 = (long)param_2[2];
  iVar9 = param_2[1];
  iVar10 = param_2[6];
  lVar35 = (long)iVar10;
  iVar11 = *param_2;
  lVar31 = (long)iVar8;
  lVar32 = (long)param_2[8];
  iVar12 = param_2[9];
  lVar36 = (long)(iVar7 * 2);
  lVar33 = (long)(iVar8 * 2);
  lVar21 = (long)(iVar9 * 2);
  lVar13 = (long)param_2[3];
  lVar34 = (long)(param_2[2] * 2);
  lVar20 = (long)(iVar12 * 0x26);
  lVar29 = (long)(param_2[8] * 0x13);
  lVar22 = (long)(param_2[3] * 2);
  lVar14 = (long)param_2[4];
  lVar18 = (long)(param_2[4] * 2);
  lVar15 = (long)(iVar11 * 2);
  lVar25 = (long)(iVar8 * 0x26);
  lVar19 = (long)(iVar10 * 0x13);
  lVar6 = lVar18 * lVar19 +
          lVar22 * lVar25 + lVar34 * lVar29 + lVar21 * lVar20 + (long)iVar11 * (long)iVar11 +
          (iVar7 * 0x26) * lVar30;
  lVar26 = lVar25 * lVar31 +
           (iVar10 * 2) * lVar29 +
           lVar36 * lVar20 + lVar28 * lVar28 + lVar21 * lVar22 + lVar15 * lVar14;
  uVar1 = lVar6 + 0x2000000;
  uVar2 = lVar26 + 0x2000000;
  lVar16 = ((long)uVar1 >> 0x1a) +
           lVar14 * lVar25 + lVar22 * lVar29 + lVar28 * lVar20 + iVar9 * lVar15 + lVar36 * lVar19;
  lVar3 = lVar16 + 0x1000000;
  lVar23 = ((long)uVar2 >> 0x1a) +
           lVar35 * lVar20 + lVar13 * lVar34 + lVar14 * lVar21 + lVar30 * lVar15 + lVar33 * lVar29;
  lVar4 = lVar23 + 0x1000000;
  lVar27 = (lVar3 >> 0x19) +
           lVar19 * lVar35 +
           lVar36 * lVar25 + lVar18 * lVar29 + iVar9 * lVar21 + lVar15 * lVar28 + lVar22 * lVar20;
  lVar19 = lVar27 + 0x2000000;
  lVar17 = (lVar4 >> 0x19) +
           lVar29 * lVar32 +
           lVar33 * lVar20 + lVar14 * lVar34 + lVar21 * lVar36 + lVar35 * lVar15 + lVar13 * lVar22;
  lVar5 = lVar17 + 0x2000000;
  lVar24 = lVar36 * lVar29 + lVar14 * lVar20 + lVar28 * lVar21 + lVar13 * lVar15 + iVar10 * lVar25 +
           (lVar19 >> 0x1a);
  lVar13 = lVar24 + 0x1000000;
  lVar28 = (lVar5 >> 0x1a) +
           lVar14 * lVar22 + lVar30 * lVar34 + lVar35 * lVar21 + lVar31 * lVar15 + lVar32 * lVar20;
  lVar25 = lVar28 + 0x1000000;
  lVar29 = (lVar13 >> 0x19) + (lVar26 - (uVar2 & 0xfffffffffc000000));
  lVar26 = (lVar25 >> 0x19) +
           lVar14 * lVar14 + lVar36 * lVar22 + lVar35 * lVar34 + lVar33 * lVar21 + lVar32 * lVar15 +
           lVar20 * iVar12;
  lVar14 = lVar29 + 0x2000000;
  lVar20 = lVar26 + 0x2000000;
  lVar18 = (lVar20 >> 0x1a) +
           lVar31 * lVar34 + lVar15 * iVar12 + lVar32 * lVar21 + lVar35 * lVar22 + lVar30 * lVar18;
  lVar15 = lVar18 + 0x1000000;
  lVar21 = (lVar15 >> 0x19) * 0x13 + (lVar6 - (uVar1 & 0xfffffffffc000000));
  lVar6 = lVar21 + 0x2000000;
  *param_1 = (int)lVar21 - ((uint)lVar6 & 0xfc000000);
  param_1[1] = (int)(lVar6 >> 0x1a) + ((int)lVar16 - ((uint)lVar3 & 0xfe000000));
  param_1[2] = (int)lVar27 - ((uint)lVar19 & 0xfc000000);
  param_1[5] = (int)(lVar14 >> 0x1a) + ((int)lVar23 - ((uint)lVar4 & 0xfe000000));
  param_1[6] = (int)lVar17 - ((uint)lVar5 & 0xfc000000);
  param_1[3] = (int)lVar24 - ((uint)lVar13 & 0xfe000000);
  param_1[4] = (int)lVar29 - ((uint)lVar14 & 0xfc000000);
  param_1[7] = (int)lVar28 - ((uint)lVar25 & 0xfe000000);
  param_1[8] = (int)lVar26 - ((uint)lVar20 & 0xfc000000);
  param_1[9] = (int)lVar18 - ((uint)lVar15 & 0xfe000000);
  return;
}

