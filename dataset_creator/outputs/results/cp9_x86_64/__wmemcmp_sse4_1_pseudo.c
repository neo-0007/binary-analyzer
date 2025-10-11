
ulong __wmemcmp_sse4_1(int *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  
  uVar9 = param_3 * 4;
  piVar12 = param_2;
  if (uVar9 < 0x50) {
    if (uVar9 < 5) {
      if (3 < uVar9) {
        iVar4 = *param_1;
        iVar3 = *param_2;
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        bVar14 = iVar4 == iVar3;
        if (!bVar14) goto LAB_007512ea;
      }
      return 0;
    }
    uVar8 = (uint)uVar9;
    if (uVar8 < 0x21) {
      if (uVar8 < 0x10) {
        iVar4 = *param_1;
        iVar3 = *param_2;
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        bVar14 = iVar4 == iVar3;
        if (bVar14) {
          iVar4 = param_1[1];
          iVar3 = param_2[1];
          bVar16 = SBORROW4(iVar4,iVar3);
          bVar15 = iVar4 - iVar3 < 0;
          bVar14 = iVar4 == iVar3;
          if (bVar14) {
            iVar4 = param_1[param_3 + -1];
            iVar3 = param_2[param_3 + -1];
            bVar16 = SBORROW4(iVar4,iVar3);
            bVar15 = iVar4 - iVar3 < 0;
            bVar14 = iVar4 == iVar3;
            if (bVar14) {
              return 0;
            }
          }
        }
LAB_007512ea:
        bVar14 = !bVar14 && bVar16 == bVar15;
        return (ulong)((bVar14 - 1) + (uint)bVar14);
      }
      auVar23._0_4_ = -(uint)(*param_2 == *param_1);
      auVar23._4_4_ = -(uint)(param_2[1] == param_1[1]);
      auVar23._8_4_ = -(uint)(param_2[2] == param_1[2]);
      auVar23._12_4_ = -(uint)(param_2[3] == param_1[3]);
      uVar6 = ((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar23._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar23._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar23._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar23._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 != 0) goto LAB_00751328;
      piVar13 = param_1 + param_3 + -4;
      param_2 = param_2 + param_3 + -4;
      auVar24._0_4_ = -(uint)(*param_2 == *piVar13);
      auVar24._4_4_ = -(uint)(param_2[1] == piVar13[1]);
      auVar24._8_4_ = -(uint)(param_2[2] == piVar13[2]);
      auVar24._12_4_ = -(uint)(param_2[3] == piVar13[3]);
      uVar6 = ((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar24._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar24._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar24._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar24._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 == 0) {
        return (ulong)uVar6;
      }
      goto LAB_00751343;
    }
    auVar18._0_4_ = -(uint)(*param_2 == *param_1);
    auVar18._4_4_ = -(uint)(param_2[1] == param_1[1]);
    auVar18._8_4_ = -(uint)(param_2[2] == param_1[2]);
    auVar18._12_4_ = -(uint)(param_2[3] == param_1[3]);
    uVar6 = ((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
             (ushort)((byte)(auVar18._12_4_ >> 7) & 1) << 0xc |
             (ushort)((byte)(auVar18._12_4_ >> 0xf) & 1) << 0xd |
             (ushort)((byte)(auVar18._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar18._12_4_ >> 0x1f) << 0xf) + 1;
    uVar7 = (uint)uVar6;
    if (uVar6 != 0) goto LAB_00751328;
    auVar19._0_4_ = -(uint)(param_2[4] == param_1[4]);
    auVar19._4_4_ = -(uint)(param_2[5] == param_1[5]);
    auVar19._8_4_ = -(uint)(param_2[6] == param_1[6]);
    auVar19._12_4_ = -(uint)(param_2[7] == param_1[7]);
    uVar6 = ((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
             (ushort)((byte)(auVar19._12_4_ >> 7) & 1) << 0xc |
             (ushort)((byte)(auVar19._12_4_ >> 0xf) & 1) << 0xd |
             (ushort)((byte)(auVar19._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar19._12_4_ >> 0x1f) << 0xf) + 1;
    uVar7 = (uint)uVar6;
    if (uVar6 == 0) {
      if (0x40 < uVar8) {
        auVar20._0_4_ = -(uint)(param_2[8] == param_1[8]);
        auVar20._4_4_ = -(uint)(param_2[9] == param_1[9]);
        auVar20._8_4_ = -(uint)(param_2[10] == param_1[10]);
        auVar20._12_4_ = -(uint)(param_2[0xb] == param_1[0xb]);
        uVar6 = ((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar20._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar20._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar20._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar20._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751308;
      }
LAB_007513b0:
      piVar13 = (int *)((long)param_1 + (uVar9 - 0x20));
      piVar1 = (int *)((long)piVar12 + (uVar9 - 0x20));
      auVar21._0_4_ = -(uint)(*piVar1 == *piVar13);
      auVar21._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
      auVar21._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
      auVar21._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
      uVar6 = ((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar21._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar21._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar21._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar21._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 == 0) {
        piVar13 = (int *)((long)param_1 + (uVar9 - 0x10));
        piVar1 = (int *)((long)piVar12 + (uVar9 - 0x10));
        auVar22._0_4_ = -(uint)(*piVar1 == *piVar13);
        auVar22._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
        auVar22._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
        auVar22._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
        uVar6 = ((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar22._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar22._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar22._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar22._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 == 0) {
          return (ulong)uVar6;
        }
        goto LAB_00751343;
      }
LAB_00751340:
      uVar9 = (ulong)((int)uVar9 - 0x10);
LAB_00751343:
      iVar3 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      uVar9 = (ulong)(uint)(iVar3 + (int)uVar9);
      bVar14 = *(int *)((long)piVar12 + (uVar9 - 0x10)) < *(int *)((long)param_1 + (uVar9 - 0x10));
      return (ulong)((bVar14 - 1) + (uint)bVar14);
    }
  }
  else {
    auVar68._0_4_ = -(uint)(*param_2 == *param_1);
    auVar68._4_4_ = -(uint)(param_2[1] == param_1[1]);
    auVar68._8_4_ = -(uint)(param_2[2] == param_1[2]);
    auVar68._12_4_ = -(uint)(param_2[3] == param_1[3]);
    uVar6 = ((ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
             (ushort)((byte)(auVar68._12_4_ >> 7) & 1) << 0xc |
             (ushort)((byte)(auVar68._12_4_ >> 0xf) & 1) << 0xd |
             (ushort)((byte)(auVar68._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar68._12_4_ >> 0x1f) << 0xf) + 1;
    uVar7 = (uint)uVar6;
    if (uVar6 != 0) goto LAB_00751328;
    uVar11 = (ulong)param_2 & 0xfffffffffffffff0;
    piVar12 = (int *)(uVar11 + 0x10);
    piVar13 = (int *)((long)param_1 - ((long)param_2 - (long)piVar12));
    uVar10 = uVar9 + ((long)param_2 - (long)piVar12);
    uVar9 = uVar10;
    param_1 = piVar13;
    if (((ulong)piVar13 & 0xf) == 0) {
      if (uVar10 < 0x81) {
LAB_007517bd:
        auVar46._0_4_ = -(uint)(*param_1 == *piVar12);
        auVar46._4_4_ = -(uint)(param_1[1] == piVar12[1]);
        auVar46._8_4_ = -(uint)(param_1[2] == piVar12[2]);
        auVar46._12_4_ = -(uint)(param_1[3] == piVar12[3]);
        uVar6 = ((ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar46._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar46._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar46._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar46._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751328;
        auVar47._0_4_ = -(uint)(param_1[4] == piVar12[4]);
        auVar47._4_4_ = -(uint)(param_1[5] == piVar12[5]);
        auVar47._8_4_ = -(uint)(param_1[6] == piVar12[6]);
        auVar47._12_4_ = -(uint)(param_1[7] == piVar12[7]);
        uVar6 = ((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar47._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar47._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar47._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar47._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 == 0) {
          auVar48._0_4_ = -(uint)(param_1[8] == piVar12[8]);
          auVar48._4_4_ = -(uint)(param_1[9] == piVar12[9]);
          auVar48._8_4_ = -(uint)(param_1[10] == piVar12[10]);
          auVar48._12_4_ = -(uint)(param_1[0xb] == piVar12[0xb]);
          uVar6 = ((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar48._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar48._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar48._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar48._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751308;
          auVar49._0_4_ = -(uint)(param_1[0xc] == piVar12[0xc]);
          auVar49._4_4_ = -(uint)(param_1[0xd] == piVar12[0xd]);
          auVar49._8_4_ = -(uint)(param_1[0xe] == piVar12[0xe]);
          auVar49._12_4_ = -(uint)(param_1[0xf] == piVar12[0xf]);
          uVar6 = ((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar49._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar49._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar49._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar49._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751300;
          if (uVar9 < 0x60) goto LAB_007513b0;
          param_1 = param_1 + 0x10;
          piVar12 = piVar12 + 0x10;
          uVar9 = uVar9 - 0x40;
LAB_00751830:
          auVar50._0_4_ = -(uint)(*param_1 == *piVar12);
          auVar50._4_4_ = -(uint)(param_1[1] == piVar12[1]);
          auVar50._8_4_ = -(uint)(param_1[2] == piVar12[2]);
          auVar50._12_4_ = -(uint)(param_1[3] == piVar12[3]);
          uVar6 = ((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar50._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar50._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar50._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar50._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751328;
          auVar51._0_4_ = -(uint)(param_1[4] == piVar12[4]);
          auVar51._4_4_ = -(uint)(param_1[5] == piVar12[5]);
          auVar51._8_4_ = -(uint)(param_1[6] == piVar12[6]);
          auVar51._12_4_ = -(uint)(param_1[7] == piVar12[7]);
          uVar6 = ((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar51._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar51._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar51._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar51._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 == 0) {
            piVar13 = (int *)((long)param_1 + (uVar9 - 0x20));
            piVar1 = (int *)((long)piVar12 + (uVar9 - 0x20));
            auVar52._0_4_ = -(uint)(*piVar1 == *piVar13);
            auVar52._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
            auVar52._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
            auVar52._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
            uVar6 = ((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar52._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar52._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar52._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar52._12_4_ >> 0x1f) << 0xf) + 1;
            uVar7 = (uint)uVar6;
            if (uVar6 == 0) {
              piVar13 = (int *)((long)param_1 + (uVar9 - 0x10));
              piVar1 = (int *)((long)piVar12 + (uVar9 - 0x10));
              auVar53._0_4_ = -(uint)(*piVar1 == *piVar13);
              auVar53._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
              auVar53._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
              auVar53._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
              uVar6 = ((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                       (ushort)((byte)(auVar53._12_4_ >> 7) & 1) << 0xc |
                       (ushort)((byte)(auVar53._12_4_ >> 0xf) & 1) << 0xd |
                       (ushort)((byte)(auVar53._12_4_ >> 0x17) & 1) << 0xe |
                      (ushort)(byte)(auVar53._12_4_ >> 0x1f) << 0xf) + 1;
              uVar7 = (uint)uVar6;
              if (uVar6 == 0) {
                return (ulong)uVar6;
              }
              goto LAB_00751343;
            }
            goto LAB_00751340;
          }
        }
      }
      else {
        if (0x100 < uVar10) {
          if ((ulong)(__x86_data_cache_size_half * 3) < uVar10) {
            uVar10 = uVar10 - 0x40;
            do {
              auVar17._0_4_ = -(uint)(*piVar13 == *piVar12);
              auVar17._4_4_ = -(uint)(piVar13[1] == piVar12[1]);
              auVar17._8_4_ = -(uint)(piVar13[2] == piVar12[2]);
              auVar17._12_4_ = -(uint)(piVar13[3] == piVar12[3]);
              auVar65._0_4_ = -(uint)(piVar13[4] == piVar12[4]);
              auVar65._4_4_ = -(uint)(piVar13[5] == piVar12[5]);
              auVar65._8_4_ = -(uint)(piVar13[6] == piVar12[6]);
              auVar65._12_4_ = -(uint)(piVar13[7] == piVar12[7]);
              auVar66._0_4_ = -(uint)(piVar13[8] == piVar12[8]);
              auVar66._4_4_ = -(uint)(piVar13[9] == piVar12[9]);
              auVar66._8_4_ = -(uint)(piVar13[10] == piVar12[10]);
              auVar66._12_4_ = -(uint)(piVar13[0xb] == piVar12[0xb]);
              auVar72._0_4_ = -(uint)(piVar13[0xc] == piVar12[0xc]);
              auVar72._4_4_ = -(uint)(piVar13[0xd] == piVar12[0xd]);
              auVar72._8_4_ = -(uint)(piVar13[0xe] == piVar12[0xe]);
              auVar72._12_4_ = -(uint)(piVar13[0xf] == piVar12[0xf]);
              auVar43 = auVar65 & auVar17;
              auVar68 = auVar72 & auVar66 & auVar43;
              uVar6 = ((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) + 1;
              uVar9 = (ulong)uVar6;
              if (uVar6 != 0) goto LAB_00751ab0;
              piVar12 = piVar12 + 0x10;
              piVar13 = piVar13 + 0x10;
              bVar14 = 0x3f < uVar10;
              uVar10 = uVar10 - 0x40;
            } while (bVar14 && uVar10 != 0);
          }
          else {
            uVar10 = uVar10 - 0x40;
            do {
              auVar17._0_4_ = -(uint)(*piVar13 == *piVar12);
              auVar17._4_4_ = -(uint)(piVar13[1] == piVar12[1]);
              auVar17._8_4_ = -(uint)(piVar13[2] == piVar12[2]);
              auVar17._12_4_ = -(uint)(piVar13[3] == piVar12[3]);
              auVar64._0_4_ = -(uint)(piVar13[4] == piVar12[4]);
              auVar64._4_4_ = -(uint)(piVar13[5] == piVar12[5]);
              auVar64._8_4_ = -(uint)(piVar13[6] == piVar12[6]);
              auVar64._12_4_ = -(uint)(piVar13[7] == piVar12[7]);
              auVar66._0_4_ = -(uint)(piVar13[8] == piVar12[8]);
              auVar66._4_4_ = -(uint)(piVar13[9] == piVar12[9]);
              auVar66._8_4_ = -(uint)(piVar13[10] == piVar12[10]);
              auVar66._12_4_ = -(uint)(piVar13[0xb] == piVar12[0xb]);
              auVar71._0_4_ = -(uint)(piVar13[0xc] == piVar12[0xc]);
              auVar71._4_4_ = -(uint)(piVar13[0xd] == piVar12[0xd]);
              auVar71._8_4_ = -(uint)(piVar13[0xe] == piVar12[0xe]);
              auVar71._12_4_ = -(uint)(piVar13[0xf] == piVar12[0xf]);
              auVar43 = auVar64 & auVar17;
              auVar68 = auVar71 & auVar66 & auVar43;
              uVar6 = ((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) + 1;
              uVar9 = (ulong)uVar6;
              if (uVar6 != 0) goto LAB_00751ab0;
              piVar12 = piVar12 + 0x10;
              piVar13 = piVar13 + 0x10;
              bVar14 = 0x3f < uVar10;
              uVar10 = uVar10 - 0x40;
            } while (bVar14 && uVar10 != 0);
          }
          goto LAB_007516f0;
        }
        auVar54._0_4_ = -(uint)(*piVar13 == *piVar12);
        auVar54._4_4_ = -(uint)(piVar13[1] == *(int *)(uVar11 + 0x14));
        auVar54._8_4_ = -(uint)(piVar13[2] == *(int *)(uVar11 + 0x18));
        auVar54._12_4_ = -(uint)(piVar13[3] == *(int *)(uVar11 + 0x1c));
        uVar6 = ((ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar54._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar54._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar54._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar54._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751328;
        auVar55._0_4_ = -(uint)(piVar13[4] == *(int *)(uVar11 + 0x20));
        auVar55._4_4_ = -(uint)(piVar13[5] == *(int *)(uVar11 + 0x24));
        auVar55._8_4_ = -(uint)(piVar13[6] == *(int *)(uVar11 + 0x28));
        auVar55._12_4_ = -(uint)(piVar13[7] == *(int *)(uVar11 + 0x2c));
        uVar6 = ((ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar55._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar55._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar55._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar55._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 == 0) {
          auVar56._0_4_ = -(uint)(piVar13[8] == *(int *)(uVar11 + 0x30));
          auVar56._4_4_ = -(uint)(piVar13[9] == *(int *)(uVar11 + 0x34));
          auVar56._8_4_ = -(uint)(piVar13[10] == *(int *)(uVar11 + 0x38));
          auVar56._12_4_ = -(uint)(piVar13[0xb] == *(int *)(uVar11 + 0x3c));
          uVar6 = ((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar56._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar56._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar56._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar56._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751308;
          auVar57._0_4_ = -(uint)(piVar13[0xc] == *(int *)(uVar11 + 0x40));
          auVar57._4_4_ = -(uint)(piVar13[0xd] == *(int *)(uVar11 + 0x44));
          auVar57._8_4_ = -(uint)(piVar13[0xe] == *(int *)(uVar11 + 0x48));
          auVar57._12_4_ = -(uint)(piVar13[0xf] == *(int *)(uVar11 + 0x4c));
          uVar6 = ((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar57._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar57._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar57._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar57._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 == 0) {
            param_1 = piVar13 + 0x10;
            piVar12 = (int *)(uVar11 + 0x50);
            auVar58._0_4_ = -(uint)(*param_1 == *piVar12);
            auVar58._4_4_ = -(uint)(piVar13[0x11] == *(int *)(uVar11 + 0x54));
            auVar58._8_4_ = -(uint)(piVar13[0x12] == *(int *)(uVar11 + 0x58));
            auVar58._12_4_ = -(uint)(piVar13[0x13] == *(int *)(uVar11 + 0x5c));
            uVar6 = ((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar58._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar58._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar58._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar58._12_4_ >> 0x1f) << 0xf) + 1;
            uVar7 = (uint)uVar6;
            if (uVar6 != 0) goto LAB_00751328;
            auVar59._0_4_ = -(uint)(piVar13[0x14] == *(int *)(uVar11 + 0x60));
            auVar59._4_4_ = -(uint)(piVar13[0x15] == *(int *)(uVar11 + 100));
            auVar59._8_4_ = -(uint)(piVar13[0x16] == *(int *)(uVar11 + 0x68));
            auVar59._12_4_ = -(uint)(piVar13[0x17] == *(int *)(uVar11 + 0x6c));
            uVar6 = ((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar59._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar59._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar59._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar59._12_4_ >> 0x1f) << 0xf) + 1;
            uVar7 = (uint)uVar6;
            if (uVar6 != 0) goto LAB_00751320;
            auVar60._0_4_ = -(uint)(piVar13[0x18] == *(int *)(uVar11 + 0x70));
            auVar60._4_4_ = -(uint)(piVar13[0x19] == *(int *)(uVar11 + 0x74));
            auVar60._8_4_ = -(uint)(piVar13[0x1a] == *(int *)(uVar11 + 0x78));
            auVar60._12_4_ = -(uint)(piVar13[0x1b] == *(int *)(uVar11 + 0x7c));
            uVar6 = ((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar60._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar60._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar60._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar60._12_4_ >> 0x1f) << 0xf) + 1;
            uVar7 = (uint)uVar6;
            if (uVar6 != 0) goto LAB_00751308;
            auVar61._0_4_ = -(uint)(piVar13[0x1c] == *(int *)(uVar11 + 0x80));
            auVar61._4_4_ = -(uint)(piVar13[0x1d] == *(int *)(uVar11 + 0x84));
            auVar61._8_4_ = -(uint)(piVar13[0x1e] == *(int *)(uVar11 + 0x88));
            auVar61._12_4_ = -(uint)(piVar13[0x1f] == *(int *)(uVar11 + 0x8c));
            uVar6 = ((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar61._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar61._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar61._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar61._12_4_ >> 0x1f) << 0xf) + 1;
            uVar7 = (uint)uVar6;
            if (uVar6 == 0) {
              uVar9 = uVar10 - 0x80;
              piVar12 = (int *)(uVar11 + 0x90);
              param_1 = piVar13 + 0x20;
              if (0x40 < uVar9) goto LAB_007517bd;
              if (uVar9 < 0x21) {
                piVar1 = (int *)((long)piVar13 + (uVar10 - 0x20));
                piVar2 = (int *)(uVar11 + 0x70 + uVar9);
                auVar62._0_4_ = -(uint)(*piVar2 == *piVar1);
                auVar62._4_4_ = -(uint)(piVar2[1] == piVar1[1]);
                auVar62._8_4_ = -(uint)(piVar2[2] == piVar1[2]);
                auVar62._12_4_ = -(uint)(piVar2[3] == piVar1[3]);
                uVar6 = ((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                         (ushort)((byte)(auVar62._12_4_ >> 7) & 1) << 0xc |
                         (ushort)((byte)(auVar62._12_4_ >> 0xf) & 1) << 0xd |
                         (ushort)((byte)(auVar62._12_4_ >> 0x17) & 1) << 0xe |
                        (ushort)(byte)(auVar62._12_4_ >> 0x1f) << 0xf) + 1;
                uVar7 = (uint)uVar6;
                if (uVar6 == 0) {
                  piVar13 = (int *)((long)piVar13 + (uVar10 - 0x10));
                  piVar1 = (int *)(uVar11 + 0x80 + uVar9);
                  auVar63._0_4_ = -(uint)(*piVar1 == *piVar13);
                  auVar63._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
                  auVar63._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
                  auVar63._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
                  uVar6 = ((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                           (ushort)((byte)(auVar63._12_4_ >> 7) & 1) << 0xc |
                           (ushort)((byte)(auVar63._12_4_ >> 0xf) & 1) << 0xd |
                           (ushort)((byte)(auVar63._12_4_ >> 0x17) & 1) << 0xe |
                          (ushort)(byte)(auVar63._12_4_ >> 0x1f) << 0xf) + 1;
                  uVar7 = (uint)uVar6;
                  if (uVar6 == 0) {
                    return (ulong)uVar6;
                  }
                  goto LAB_00751343;
                }
                goto LAB_00751340;
              }
              goto LAB_00751830;
            }
          }
          goto LAB_00751300;
        }
      }
    }
    else if (uVar10 < 0x81) {
LAB_00751477:
      auVar25._0_4_ = -(uint)(*param_1 == *piVar12);
      auVar25._4_4_ = -(uint)(param_1[1] == piVar12[1]);
      auVar25._8_4_ = -(uint)(param_1[2] == piVar12[2]);
      auVar25._12_4_ = -(uint)(param_1[3] == piVar12[3]);
      uVar6 = ((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar25._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar25._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar25._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar25._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 != 0) goto LAB_00751328;
      auVar26._0_4_ = -(uint)(param_1[4] == piVar12[4]);
      auVar26._4_4_ = -(uint)(param_1[5] == piVar12[5]);
      auVar26._8_4_ = -(uint)(param_1[6] == piVar12[6]);
      auVar26._12_4_ = -(uint)(param_1[7] == piVar12[7]);
      uVar6 = ((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar26._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar26._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar26._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar26._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 == 0) {
        auVar27._0_4_ = -(uint)(param_1[8] == piVar12[8]);
        auVar27._4_4_ = -(uint)(param_1[9] == piVar12[9]);
        auVar27._8_4_ = -(uint)(param_1[10] == piVar12[10]);
        auVar27._12_4_ = -(uint)(param_1[0xb] == piVar12[0xb]);
        uVar6 = ((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar27._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar27._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar27._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar27._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751308;
        auVar28._0_4_ = -(uint)(param_1[0xc] == piVar12[0xc]);
        auVar28._4_4_ = -(uint)(param_1[0xd] == piVar12[0xd]);
        auVar28._8_4_ = -(uint)(param_1[0xe] == piVar12[0xe]);
        auVar28._12_4_ = -(uint)(param_1[0xf] == piVar12[0xf]);
        uVar6 = ((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar28._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar28._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar28._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar28._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751300;
        if (uVar9 < 0x60) goto LAB_007513b0;
        param_1 = param_1 + 0x10;
        piVar12 = piVar12 + 0x10;
        uVar9 = uVar9 - 0x40;
LAB_007514e7:
        auVar29._0_4_ = -(uint)(*param_1 == *piVar12);
        auVar29._4_4_ = -(uint)(param_1[1] == piVar12[1]);
        auVar29._8_4_ = -(uint)(param_1[2] == piVar12[2]);
        auVar29._12_4_ = -(uint)(param_1[3] == piVar12[3]);
        uVar6 = ((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar29._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar29._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar29._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar29._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751328;
        auVar30._0_4_ = -(uint)(param_1[4] == piVar12[4]);
        auVar30._4_4_ = -(uint)(param_1[5] == piVar12[5]);
        auVar30._8_4_ = -(uint)(param_1[6] == piVar12[6]);
        auVar30._12_4_ = -(uint)(param_1[7] == piVar12[7]);
        uVar6 = ((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar30._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar30._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar30._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar30._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 == 0) {
          piVar13 = (int *)((long)param_1 + (uVar9 - 0x20));
          piVar1 = (int *)((long)piVar12 + (uVar9 - 0x20));
          auVar31._0_4_ = -(uint)(*piVar1 == *piVar13);
          auVar31._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
          auVar31._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
          auVar31._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
          uVar6 = ((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar31._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar31._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar31._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar31._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 == 0) {
            piVar13 = (int *)((long)param_1 + (uVar9 - 0x10));
            piVar1 = (int *)((long)piVar12 + (uVar9 - 0x10));
            auVar32._0_4_ = -(uint)(*piVar1 == *piVar13);
            auVar32._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
            auVar32._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
            auVar32._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
            uVar6 = ((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar32._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar32._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar32._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar32._12_4_ >> 0x1f) << 0xf) + 1;
            uVar7 = (uint)uVar6;
            if (uVar6 == 0) {
              return (ulong)uVar6;
            }
            goto LAB_00751343;
          }
          goto LAB_00751340;
        }
      }
    }
    else {
      if (0x100 < uVar10) {
        if ((ulong)(__x86_data_cache_size_half * 3) < uVar10) {
          uVar10 = uVar10 - 0x40;
          do {
            auVar17._0_4_ = -(uint)(*piVar13 == *piVar12);
            auVar17._4_4_ = -(uint)(piVar13[1] == piVar12[1]);
            auVar17._8_4_ = -(uint)(piVar13[2] == piVar12[2]);
            auVar17._12_4_ = -(uint)(piVar13[3] == piVar12[3]);
            auVar45._0_4_ = -(uint)(piVar13[4] == piVar12[4]);
            auVar45._4_4_ = -(uint)(piVar13[5] == piVar12[5]);
            auVar45._8_4_ = -(uint)(piVar13[6] == piVar12[6]);
            auVar45._12_4_ = -(uint)(piVar13[7] == piVar12[7]);
            auVar66._0_4_ = -(uint)(piVar13[8] == piVar12[8]);
            auVar66._4_4_ = -(uint)(piVar13[9] == piVar12[9]);
            auVar66._8_4_ = -(uint)(piVar13[10] == piVar12[10]);
            auVar66._12_4_ = -(uint)(piVar13[0xb] == piVar12[0xb]);
            auVar70._0_4_ = -(uint)(piVar13[0xc] == piVar12[0xc]);
            auVar70._4_4_ = -(uint)(piVar13[0xd] == piVar12[0xd]);
            auVar70._8_4_ = -(uint)(piVar13[0xe] == piVar12[0xe]);
            auVar70._12_4_ = -(uint)(piVar13[0xf] == piVar12[0xf]);
            auVar43 = auVar45 & auVar17;
            auVar68 = auVar70 & auVar66 & auVar43;
            uVar6 = ((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) + 1;
            uVar9 = (ulong)uVar6;
            if (uVar6 != 0) goto LAB_00751ab0;
            piVar12 = piVar12 + 0x10;
            piVar13 = piVar13 + 0x10;
            bVar14 = 0x3f < uVar10;
            uVar10 = uVar10 - 0x40;
          } while (bVar14 && uVar10 != 0);
        }
        else {
          uVar10 = uVar10 - 0x40;
          do {
            auVar17._0_4_ = -(uint)(*piVar13 == *piVar12);
            auVar17._4_4_ = -(uint)(piVar13[1] == piVar12[1]);
            auVar17._8_4_ = -(uint)(piVar13[2] == piVar12[2]);
            auVar17._12_4_ = -(uint)(piVar13[3] == piVar12[3]);
            auVar43._0_4_ = -(uint)(piVar13[4] == piVar12[4]);
            auVar43._4_4_ = -(uint)(piVar13[5] == piVar12[5]);
            auVar43._8_4_ = -(uint)(piVar13[6] == piVar12[6]);
            auVar43._12_4_ = -(uint)(piVar13[7] == piVar12[7]);
            auVar66._0_4_ = -(uint)(piVar13[8] == piVar12[8]);
            auVar66._4_4_ = -(uint)(piVar13[9] == piVar12[9]);
            auVar66._8_4_ = -(uint)(piVar13[10] == piVar12[10]);
            auVar66._12_4_ = -(uint)(piVar13[0xb] == piVar12[0xb]);
            auVar67._0_4_ = -(uint)(piVar13[0xc] == piVar12[0xc]);
            auVar67._4_4_ = -(uint)(piVar13[0xd] == piVar12[0xd]);
            auVar67._8_4_ = -(uint)(piVar13[0xe] == piVar12[0xe]);
            auVar67._12_4_ = -(uint)(piVar13[0xf] == piVar12[0xf]);
            auVar43 = auVar43 & auVar17;
            auVar68 = auVar67 & auVar66 & auVar43;
            uVar6 = ((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) + 1;
            uVar9 = (ulong)uVar6;
            if (uVar6 != 0) goto LAB_00751ab0;
            piVar12 = piVar12 + 0x10;
            piVar13 = piVar13 + 0x10;
            bVar14 = 0x3f < uVar10;
            uVar10 = uVar10 - 0x40;
          } while (bVar14 && uVar10 != 0);
        }
LAB_007516f0:
        piVar13 = (int *)((long)piVar13 + uVar10);
        piVar12 = (int *)((long)piVar12 + uVar10);
        auVar17._0_4_ = -(uint)(*piVar13 == *piVar12);
        auVar17._4_4_ = -(uint)(piVar13[1] == piVar12[1]);
        auVar17._8_4_ = -(uint)(piVar13[2] == piVar12[2]);
        auVar17._12_4_ = -(uint)(piVar13[3] == piVar12[3]);
        auVar44._0_4_ = -(uint)(piVar13[4] == piVar12[4]);
        auVar44._4_4_ = -(uint)(piVar13[5] == piVar12[5]);
        auVar44._8_4_ = -(uint)(piVar13[6] == piVar12[6]);
        auVar44._12_4_ = -(uint)(piVar13[7] == piVar12[7]);
        auVar66._0_4_ = -(uint)(piVar13[8] == piVar12[8]);
        auVar66._4_4_ = -(uint)(piVar13[9] == piVar12[9]);
        auVar66._8_4_ = -(uint)(piVar13[10] == piVar12[10]);
        auVar66._12_4_ = -(uint)(piVar13[0xb] == piVar12[0xb]);
        auVar69._0_4_ = -(uint)(piVar13[0xc] == piVar12[0xc]);
        auVar69._4_4_ = -(uint)(piVar13[0xd] == piVar12[0xd]);
        auVar69._8_4_ = -(uint)(piVar13[0xe] == piVar12[0xe]);
        auVar69._12_4_ = -(uint)(piVar13[0xf] == piVar12[0xf]);
        auVar43 = auVar44 & auVar17;
        auVar68 = auVar69 & auVar66 & auVar43;
        uVar6 = ((ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) + 1;
        uVar9 = (ulong)uVar6;
        if (uVar6 == 0) {
          return uVar9;
        }
LAB_00751ab0:
        uVar6 = ((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) + 1;
        uVar10 = (ulong)uVar6;
        if (((uVar6 == 0) &&
            (uVar6 = ~((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar43[0xf] >> 7) << 0xf), uVar10 = (ulong)uVar6 << 0x10,
            uVar6 == 0)) &&
           (uVar11 = (ulong)(ushort)~((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar66[0xf] >> 7) << 0xf),
           uVar10 = uVar11 << 0x20, uVar11 == 0)) {
          piVar13 = piVar13 + 0xc;
          piVar12 = piVar12 + 0xc;
          uVar10 = uVar9;
        }
        lVar5 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
          }
        }
        bVar14 = *(int *)((long)piVar12 + lVar5) < *(int *)((long)piVar13 + lVar5);
        return (ulong)((bVar14 - 1) + (uint)bVar14);
      }
      auVar33._0_4_ = -(uint)(*piVar13 == *piVar12);
      auVar33._4_4_ = -(uint)(piVar13[1] == *(int *)(uVar11 + 0x14));
      auVar33._8_4_ = -(uint)(piVar13[2] == *(int *)(uVar11 + 0x18));
      auVar33._12_4_ = -(uint)(piVar13[3] == *(int *)(uVar11 + 0x1c));
      uVar6 = ((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar33._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar33._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar33._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar33._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 != 0) goto LAB_00751328;
      auVar34._0_4_ = -(uint)(piVar13[4] == *(int *)(uVar11 + 0x20));
      auVar34._4_4_ = -(uint)(piVar13[5] == *(int *)(uVar11 + 0x24));
      auVar34._8_4_ = -(uint)(piVar13[6] == *(int *)(uVar11 + 0x28));
      auVar34._12_4_ = -(uint)(piVar13[7] == *(int *)(uVar11 + 0x2c));
      uVar6 = ((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar34._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar34._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar34._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar34._12_4_ >> 0x1f) << 0xf) + 1;
      uVar7 = (uint)uVar6;
      if (uVar6 == 0) {
        auVar35._0_4_ = -(uint)(piVar13[8] == *(int *)(uVar11 + 0x30));
        auVar35._4_4_ = -(uint)(piVar13[9] == *(int *)(uVar11 + 0x34));
        auVar35._8_4_ = -(uint)(piVar13[10] == *(int *)(uVar11 + 0x38));
        auVar35._12_4_ = -(uint)(piVar13[0xb] == *(int *)(uVar11 + 0x3c));
        uVar6 = ((ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar35._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar35._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar35._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar35._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 != 0) goto LAB_00751308;
        auVar36._0_4_ = -(uint)(piVar13[0xc] == *(int *)(uVar11 + 0x40));
        auVar36._4_4_ = -(uint)(piVar13[0xd] == *(int *)(uVar11 + 0x44));
        auVar36._8_4_ = -(uint)(piVar13[0xe] == *(int *)(uVar11 + 0x48));
        auVar36._12_4_ = -(uint)(piVar13[0xf] == *(int *)(uVar11 + 0x4c));
        uVar6 = ((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar36._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar36._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar36._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar36._12_4_ >> 0x1f) << 0xf) + 1;
        uVar7 = (uint)uVar6;
        if (uVar6 == 0) {
          param_1 = piVar13 + 0x10;
          piVar12 = (int *)(uVar11 + 0x50);
          auVar37._0_4_ = -(uint)(*param_1 == *piVar12);
          auVar37._4_4_ = -(uint)(piVar13[0x11] == *(int *)(uVar11 + 0x54));
          auVar37._8_4_ = -(uint)(piVar13[0x12] == *(int *)(uVar11 + 0x58));
          auVar37._12_4_ = -(uint)(piVar13[0x13] == *(int *)(uVar11 + 0x5c));
          uVar6 = ((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar37._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar37._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar37._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar37._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751328;
          auVar38._0_4_ = -(uint)(piVar13[0x14] == *(int *)(uVar11 + 0x60));
          auVar38._4_4_ = -(uint)(piVar13[0x15] == *(int *)(uVar11 + 100));
          auVar38._8_4_ = -(uint)(piVar13[0x16] == *(int *)(uVar11 + 0x68));
          auVar38._12_4_ = -(uint)(piVar13[0x17] == *(int *)(uVar11 + 0x6c));
          uVar6 = ((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar38._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar38._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar38._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar38._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751320;
          auVar39._0_4_ = -(uint)(piVar13[0x18] == *(int *)(uVar11 + 0x70));
          auVar39._4_4_ = -(uint)(piVar13[0x19] == *(int *)(uVar11 + 0x74));
          auVar39._8_4_ = -(uint)(piVar13[0x1a] == *(int *)(uVar11 + 0x78));
          auVar39._12_4_ = -(uint)(piVar13[0x1b] == *(int *)(uVar11 + 0x7c));
          uVar6 = ((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar39._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar39._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar39._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar39._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 != 0) goto LAB_00751308;
          auVar40._0_4_ = -(uint)(piVar13[0x1c] == *(int *)(uVar11 + 0x80));
          auVar40._4_4_ = -(uint)(piVar13[0x1d] == *(int *)(uVar11 + 0x84));
          auVar40._8_4_ = -(uint)(piVar13[0x1e] == *(int *)(uVar11 + 0x88));
          auVar40._12_4_ = -(uint)(piVar13[0x1f] == *(int *)(uVar11 + 0x8c));
          uVar6 = ((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar40._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar40._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar40._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar40._12_4_ >> 0x1f) << 0xf) + 1;
          uVar7 = (uint)uVar6;
          if (uVar6 == 0) {
            uVar9 = uVar10 - 0x80;
            piVar12 = (int *)(uVar11 + 0x90);
            param_1 = piVar13 + 0x20;
            if (0x40 < uVar9) goto LAB_00751477;
            if (uVar9 < 0x21) {
              piVar1 = (int *)((long)piVar13 + (uVar10 - 0x20));
              piVar2 = (int *)(uVar11 + 0x70 + uVar9);
              auVar41._0_4_ = -(uint)(*piVar2 == *piVar1);
              auVar41._4_4_ = -(uint)(piVar2[1] == piVar1[1]);
              auVar41._8_4_ = -(uint)(piVar2[2] == piVar1[2]);
              auVar41._12_4_ = -(uint)(piVar2[3] == piVar1[3]);
              uVar6 = ((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                       (ushort)((byte)(auVar41._12_4_ >> 7) & 1) << 0xc |
                       (ushort)((byte)(auVar41._12_4_ >> 0xf) & 1) << 0xd |
                       (ushort)((byte)(auVar41._12_4_ >> 0x17) & 1) << 0xe |
                      (ushort)(byte)(auVar41._12_4_ >> 0x1f) << 0xf) + 1;
              uVar7 = (uint)uVar6;
              if (uVar6 == 0) {
                piVar13 = (int *)((long)piVar13 + (uVar10 - 0x10));
                piVar1 = (int *)(uVar11 + 0x80 + uVar9);
                auVar42._0_4_ = -(uint)(*piVar1 == *piVar13);
                auVar42._4_4_ = -(uint)(piVar1[1] == piVar13[1]);
                auVar42._8_4_ = -(uint)(piVar1[2] == piVar13[2]);
                auVar42._12_4_ = -(uint)(piVar1[3] == piVar13[3]);
                uVar6 = ((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                         (ushort)((byte)(auVar42._12_4_ >> 7) & 1) << 0xc |
                         (ushort)((byte)(auVar42._12_4_ >> 0xf) & 1) << 0xd |
                         (ushort)((byte)(auVar42._12_4_ >> 0x17) & 1) << 0xe |
                        (ushort)(byte)(auVar42._12_4_ >> 0x1f) << 0xf) + 1;
                uVar7 = (uint)uVar6;
                if (uVar6 == 0) {
                  return (ulong)uVar6;
                }
                goto LAB_00751343;
              }
              goto LAB_00751340;
            }
            goto LAB_007514e7;
          }
        }
LAB_00751300:
        piVar12 = piVar12 + 4;
        param_1 = param_1 + 4;
LAB_00751308:
        uVar8 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        bVar14 = *(int *)((long)piVar12 + (ulong)uVar8 + 0x20) <
                 *(int *)((long)param_1 + (ulong)uVar8 + 0x20);
        return (ulong)((bVar14 - 1) + (uint)bVar14);
      }
    }
  }
LAB_00751320:
  piVar12 = piVar12 + 4;
  param_1 = param_1 + 4;
LAB_00751328:
  uVar8 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  bVar14 = *(int *)((long)piVar12 + (ulong)uVar8) < *(int *)((long)param_1 + (ulong)uVar8);
  return (ulong)((bVar14 - 1) + (uint)bVar14);
}

