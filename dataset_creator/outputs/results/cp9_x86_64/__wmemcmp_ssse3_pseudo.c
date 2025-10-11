
undefined1  [16] __wmemcmp_ssse3(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auVar16 [16];
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
  
  uVar8 = param_3 * 4;
  if (uVar8 == 0) {
    return ZEXT816(0) << 0x40;
  }
  if (uVar8 < 0x30) {
    param_2 = param_2 + uVar8;
    pcVar11 = param_1 + uVar8;
    goto LAB_00752020;
  }
  auVar23[0] = -(*param_1 == *param_2);
  auVar23[1] = -(param_1[1] == param_2[1]);
  auVar23[2] = -(param_1[2] == param_2[2]);
  auVar23[3] = -(param_1[3] == param_2[3]);
  auVar23[4] = -(param_1[4] == param_2[4]);
  auVar23[5] = -(param_1[5] == param_2[5]);
  auVar23[6] = -(param_1[6] == param_2[6]);
  auVar23[7] = -(param_1[7] == param_2[7]);
  auVar23[8] = -(param_1[8] == param_2[8]);
  auVar23[9] = -(param_1[9] == param_2[9]);
  auVar23[10] = -(param_1[10] == param_2[10]);
  auVar23[0xb] = -(param_1[0xb] == param_2[0xb]);
  auVar23[0xc] = -(param_1[0xc] == param_2[0xc]);
  auVar23[0xd] = -(param_1[0xd] == param_2[0xd]);
  auVar23[0xe] = -(param_1[0xe] == param_2[0xe]);
  auVar23[0xf] = -(param_1[0xf] == param_2[0xf]);
  pcVar11 = param_1 + 0x10;
  param_2 = param_2 + 0x10;
  uVar7 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar23[0xf] >> 7) << 0xf) - 0xffff;
  param_1 = (char *)(ulong)uVar7;
  if (uVar7 == 0) {
    uVar6 = (ulong)((uint)pcVar11 & 0xf);
    pcVar11 = (char *)((ulong)pcVar11 ^ uVar6);
    param_2 = param_2 + -uVar6;
    uVar6 = uVar8 + uVar6;
    uVar8 = (ulong)param_2 & 0xf;
    uVar7 = (uint)param_2 & 0xf;
    uVar5 = (ulong)uVar7;
    if ((((ulong)param_2 & 0xf) == 0) || (param_2 = (char *)((ulong)param_2 ^ uVar5), uVar8 == 0)) {
      uVar8 = uVar6 - 0x30;
      if (uVar6 < 0x50) {
        uVar5 = 0;
        auVar20[0] = -(*param_2 == *pcVar11);
        auVar20[1] = -(param_2[1] == pcVar11[1]);
        auVar20[2] = -(param_2[2] == pcVar11[2]);
        auVar20[3] = -(param_2[3] == pcVar11[3]);
        auVar20[4] = -(param_2[4] == pcVar11[4]);
        auVar20[5] = -(param_2[5] == pcVar11[5]);
        auVar20[6] = -(param_2[6] == pcVar11[6]);
        auVar20[7] = -(param_2[7] == pcVar11[7]);
        auVar20[8] = -(param_2[8] == pcVar11[8]);
        auVar20[9] = -(param_2[9] == pcVar11[9]);
        auVar20[10] = -(param_2[10] == pcVar11[10]);
        auVar20[0xb] = -(param_2[0xb] == pcVar11[0xb]);
        auVar20[0xc] = -(param_2[0xc] == pcVar11[0xc]);
        auVar20[0xd] = -(param_2[0xd] == pcVar11[0xd]);
        auVar20[0xe] = -(param_2[0xe] == pcVar11[0xe]);
        auVar20[0xf] = -(param_2[0xf] == pcVar11[0xf]);
        auVar21[0] = -(param_2[0x10] == pcVar11[0x10]);
        auVar21[1] = -(param_2[0x11] == pcVar11[0x11]);
        auVar21[2] = -(param_2[0x12] == pcVar11[0x12]);
        auVar21[3] = -(param_2[0x13] == pcVar11[0x13]);
        auVar21[4] = -(param_2[0x14] == pcVar11[0x14]);
        auVar21[5] = -(param_2[0x15] == pcVar11[0x15]);
        auVar21[6] = -(param_2[0x16] == pcVar11[0x16]);
        auVar21[7] = -(param_2[0x17] == pcVar11[0x17]);
        auVar21[8] = -(param_2[0x18] == pcVar11[0x18]);
        auVar21[9] = -(param_2[0x19] == pcVar11[0x19]);
        auVar21[10] = -(param_2[0x1a] == pcVar11[0x1a]);
        auVar21[0xb] = -(param_2[0x1b] == pcVar11[0x1b]);
        auVar21[0xc] = -(param_2[0x1c] == pcVar11[0x1c]);
        auVar21[0xd] = -(param_2[0x1d] == pcVar11[0x1d]);
        auVar21[0xe] = -(param_2[0x1e] == pcVar11[0x1e]);
        auVar21[0xf] = -(param_2[0x1f] == pcVar11[0x1f]);
        auVar21 = auVar21 & auVar20;
        pcVar11 = pcVar11 + 0x20;
        pcVar10 = param_2 + 0x20;
        uVar7 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) - 0xffff;
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          param_2 = pcVar10 + uVar8;
          pcVar11 = pcVar11 + uVar8;
LAB_00752020:
          uVar7 = (uint)uVar8;
          if (uVar7 < 8) {
            if (uVar7 == 0) goto LAB_007520f8;
          }
          else {
            if (uVar7 < 0x10) {
              if (uVar7 != 8) goto LAB_007520e0;
            }
            else {
              if (uVar7 < 0x18) {
                if (uVar7 != 0x10) goto LAB_007520d0;
              }
              else {
                if (uVar7 < 0x20) {
                  if (uVar7 != 0x18) goto LAB_007520c0;
                }
                else {
                  if (uVar7 < 0x28) {
                    if (uVar7 != 0x20) goto LAB_007520b0;
                  }
                  else {
                    if (uVar7 != 0x28) {
                      iVar3 = *(int *)(pcVar11 + -0x2c);
                      iVar1 = *(int *)(param_2 + -0x2c);
                      bVar15 = SBORROW4(iVar3,iVar1);
                      bVar14 = iVar3 - iVar1 < 0;
                      bVar13 = iVar3 == iVar1;
                      if (!bVar13) goto LAB_00752100;
                    }
                    iVar3 = *(int *)(pcVar11 + -0x28);
                    iVar1 = *(int *)(param_2 + -0x28);
                    bVar15 = SBORROW4(iVar3,iVar1);
                    bVar14 = iVar3 - iVar1 < 0;
                    bVar13 = iVar3 == iVar1;
                    if (!bVar13) goto LAB_00752100;
LAB_007520b0:
                    iVar3 = *(int *)(pcVar11 + -0x24);
                    iVar1 = *(int *)(param_2 + -0x24);
                    bVar15 = SBORROW4(iVar3,iVar1);
                    bVar14 = iVar3 - iVar1 < 0;
                    bVar13 = iVar3 == iVar1;
                    if (!bVar13) goto LAB_00752100;
                  }
                  iVar3 = *(int *)(pcVar11 + -0x20);
                  iVar1 = *(int *)(param_2 + -0x20);
                  bVar15 = SBORROW4(iVar3,iVar1);
                  bVar14 = iVar3 - iVar1 < 0;
                  bVar13 = iVar3 == iVar1;
                  if (!bVar13) goto LAB_00752100;
LAB_007520c0:
                  iVar3 = *(int *)(pcVar11 + -0x1c);
                  iVar1 = *(int *)(param_2 + -0x1c);
                  bVar15 = SBORROW4(iVar3,iVar1);
                  bVar14 = iVar3 - iVar1 < 0;
                  bVar13 = iVar3 == iVar1;
                  if (!bVar13) goto LAB_00752100;
                }
                iVar3 = *(int *)(pcVar11 + -0x18);
                iVar1 = *(int *)(param_2 + -0x18);
                bVar15 = SBORROW4(iVar3,iVar1);
                bVar14 = iVar3 - iVar1 < 0;
                bVar13 = iVar3 == iVar1;
                if (!bVar13) goto LAB_00752100;
LAB_007520d0:
                iVar3 = *(int *)(pcVar11 + -0x14);
                iVar1 = *(int *)(param_2 + -0x14);
                bVar15 = SBORROW4(iVar3,iVar1);
                bVar14 = iVar3 - iVar1 < 0;
                bVar13 = iVar3 == iVar1;
                if (!bVar13) goto LAB_00752100;
              }
              iVar3 = *(int *)(pcVar11 + -0x10);
              iVar1 = *(int *)(param_2 + -0x10);
              bVar15 = SBORROW4(iVar3,iVar1);
              bVar14 = iVar3 - iVar1 < 0;
              bVar13 = iVar3 == iVar1;
              if (!bVar13) goto LAB_00752100;
LAB_007520e0:
              iVar3 = *(int *)(pcVar11 + -0xc);
              iVar1 = *(int *)(param_2 + -0xc);
              bVar15 = SBORROW4(iVar3,iVar1);
              bVar14 = iVar3 - iVar1 < 0;
              bVar13 = iVar3 == iVar1;
              if (!bVar13) goto LAB_00752100;
            }
            iVar3 = *(int *)(pcVar11 + -8);
            iVar1 = *(int *)(param_2 + -8);
            bVar15 = SBORROW4(iVar3,iVar1);
            bVar14 = iVar3 - iVar1 < 0;
            bVar13 = iVar3 == iVar1;
            if (!bVar13) goto LAB_00752100;
          }
          iVar3 = *(int *)(pcVar11 + -4);
          iVar1 = *(int *)(param_2 + -4);
          bVar15 = SBORROW4(iVar3,iVar1);
          bVar14 = iVar3 - iVar1 < 0;
          bVar13 = iVar3 == iVar1;
          if (bVar13) {
LAB_007520f8:
            auVar4._8_8_ = 0;
            auVar4._0_8_ = param_1;
            return auVar4 << 0x40;
          }
          goto LAB_00752100;
        }
      }
      else {
        uVar5 = 0;
        auVar16[0] = -(*param_2 == *pcVar11);
        auVar16[1] = -(param_2[1] == pcVar11[1]);
        auVar16[2] = -(param_2[2] == pcVar11[2]);
        auVar16[3] = -(param_2[3] == pcVar11[3]);
        auVar16[4] = -(param_2[4] == pcVar11[4]);
        auVar16[5] = -(param_2[5] == pcVar11[5]);
        auVar16[6] = -(param_2[6] == pcVar11[6]);
        auVar16[7] = -(param_2[7] == pcVar11[7]);
        auVar16[8] = -(param_2[8] == pcVar11[8]);
        auVar16[9] = -(param_2[9] == pcVar11[9]);
        auVar16[10] = -(param_2[10] == pcVar11[10]);
        auVar16[0xb] = -(param_2[0xb] == pcVar11[0xb]);
        auVar16[0xc] = -(param_2[0xc] == pcVar11[0xc]);
        auVar16[0xd] = -(param_2[0xd] == pcVar11[0xd]);
        auVar16[0xe] = -(param_2[0xe] == pcVar11[0xe]);
        auVar16[0xf] = -(param_2[0xf] == pcVar11[0xf]);
        auVar22[0] = -(param_2[0x10] == pcVar11[0x10]);
        auVar22[1] = -(param_2[0x11] == pcVar11[0x11]);
        auVar22[2] = -(param_2[0x12] == pcVar11[0x12]);
        auVar22[3] = -(param_2[0x13] == pcVar11[0x13]);
        auVar22[4] = -(param_2[0x14] == pcVar11[0x14]);
        auVar22[5] = -(param_2[0x15] == pcVar11[0x15]);
        auVar22[6] = -(param_2[0x16] == pcVar11[0x16]);
        auVar22[7] = -(param_2[0x17] == pcVar11[0x17]);
        auVar22[8] = -(param_2[0x18] == pcVar11[0x18]);
        auVar22[9] = -(param_2[0x19] == pcVar11[0x19]);
        auVar22[10] = -(param_2[0x1a] == pcVar11[0x1a]);
        auVar22[0xb] = -(param_2[0x1b] == pcVar11[0x1b]);
        auVar22[0xc] = -(param_2[0x1c] == pcVar11[0x1c]);
        auVar22[0xd] = -(param_2[0x1d] == pcVar11[0x1d]);
        auVar22[0xe] = -(param_2[0x1e] == pcVar11[0x1e]);
        auVar22[0xf] = -(param_2[0x1f] == pcVar11[0x1f]);
        uVar8 = uVar6 - 0x50;
        do {
          auVar20 = auVar16;
          pcVar12 = pcVar11;
          pcVar9 = param_2;
          uVar6 = uVar8;
          auVar22 = auVar22 & auVar20;
          uVar8 = uVar6 - 0x20;
          uVar7 = ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) - 0xffff) -
                  (uint)(uVar6 < 0x20);
          auVar16[0] = -(pcVar9[0x20] == pcVar12[0x20]);
          auVar16[1] = -(pcVar9[0x21] == pcVar12[0x21]);
          auVar16[2] = -(pcVar9[0x22] == pcVar12[0x22]);
          auVar16[3] = -(pcVar9[0x23] == pcVar12[0x23]);
          auVar16[4] = -(pcVar9[0x24] == pcVar12[0x24]);
          auVar16[5] = -(pcVar9[0x25] == pcVar12[0x25]);
          auVar16[6] = -(pcVar9[0x26] == pcVar12[0x26]);
          auVar16[7] = -(pcVar9[0x27] == pcVar12[0x27]);
          auVar16[8] = -(pcVar9[0x28] == pcVar12[0x28]);
          auVar16[9] = -(pcVar9[0x29] == pcVar12[0x29]);
          auVar16[10] = -(pcVar9[0x2a] == pcVar12[0x2a]);
          auVar16[0xb] = -(pcVar9[0x2b] == pcVar12[0x2b]);
          auVar16[0xc] = -(pcVar9[0x2c] == pcVar12[0x2c]);
          auVar16[0xd] = -(pcVar9[0x2d] == pcVar12[0x2d]);
          auVar16[0xe] = -(pcVar9[0x2e] == pcVar12[0x2e]);
          auVar16[0xf] = -(pcVar9[0x2f] == pcVar12[0x2f]);
          auVar22[0] = -(pcVar9[0x30] == pcVar12[0x30]);
          auVar22[1] = -(pcVar9[0x31] == pcVar12[0x31]);
          auVar22[2] = -(pcVar9[0x32] == pcVar12[0x32]);
          auVar22[3] = -(pcVar9[0x33] == pcVar12[0x33]);
          auVar22[4] = -(pcVar9[0x34] == pcVar12[0x34]);
          auVar22[5] = -(pcVar9[0x35] == pcVar12[0x35]);
          auVar22[6] = -(pcVar9[0x36] == pcVar12[0x36]);
          auVar22[7] = -(pcVar9[0x37] == pcVar12[0x37]);
          auVar22[8] = -(pcVar9[0x38] == pcVar12[0x38]);
          auVar22[9] = -(pcVar9[0x39] == pcVar12[0x39]);
          auVar22[10] = -(pcVar9[0x3a] == pcVar12[0x3a]);
          auVar22[0xb] = -(pcVar9[0x3b] == pcVar12[0x3b]);
          auVar22[0xc] = -(pcVar9[0x3c] == pcVar12[0x3c]);
          auVar22[0xd] = -(pcVar9[0x3d] == pcVar12[0x3d]);
          auVar22[0xe] = -(pcVar9[0x3e] == pcVar12[0x3e]);
          auVar22[0xf] = -(pcVar9[0x3f] == pcVar12[0x3f]);
          pcVar11 = pcVar12 + 0x20;
          pcVar10 = pcVar9 + 0x20;
          param_2 = pcVar10;
        } while (uVar7 == 0);
        auVar22 = auVar22 & auVar16;
        if ((long)uVar8 < 0) {
          uVar7 = uVar7 + 1;
          uVar8 = uVar6;
        }
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          pcVar11 = pcVar12 + 0x40;
          pcVar10 = pcVar9 + 0x40;
          uVar7 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar7;
          auVar20 = auVar16;
          if (uVar7 == 0) {
            param_2 = pcVar10 + uVar8;
            pcVar11 = pcVar11 + uVar8;
            goto LAB_00752020;
          }
        }
      }
    }
    else if (uVar7 == 4) {
      uVar8 = uVar6 - 0x30;
      uVar5 = 4;
      if (uVar6 < 0x50) {
        auVar20[0] = -(param_2[4] == *pcVar11);
        auVar20[1] = -(param_2[5] == pcVar11[1]);
        auVar20[2] = -(param_2[6] == pcVar11[2]);
        auVar20[3] = -(param_2[7] == pcVar11[3]);
        auVar20[4] = -(param_2[8] == pcVar11[4]);
        auVar20[5] = -(param_2[9] == pcVar11[5]);
        auVar20[6] = -(param_2[10] == pcVar11[6]);
        auVar20[7] = -(param_2[0xb] == pcVar11[7]);
        auVar20[8] = -(param_2[0xc] == pcVar11[8]);
        auVar20[9] = -(param_2[0xd] == pcVar11[9]);
        auVar20[10] = -(param_2[0xe] == pcVar11[10]);
        auVar20[0xb] = -(param_2[0xf] == pcVar11[0xb]);
        auVar20[0xc] = -(param_2[0x10] == pcVar11[0xc]);
        auVar20[0xd] = -(param_2[0x11] == pcVar11[0xd]);
        auVar20[0xe] = -(param_2[0x12] == pcVar11[0xe]);
        auVar20[0xf] = -(param_2[0x13] == pcVar11[0xf]);
        auVar24[0] = -(param_2[0x14] == pcVar11[0x10]);
        auVar24[1] = -(param_2[0x15] == pcVar11[0x11]);
        auVar24[2] = -(param_2[0x16] == pcVar11[0x12]);
        auVar24[3] = -(param_2[0x17] == pcVar11[0x13]);
        auVar24[4] = -(param_2[0x18] == pcVar11[0x14]);
        auVar24[5] = -(param_2[0x19] == pcVar11[0x15]);
        auVar24[6] = -(param_2[0x1a] == pcVar11[0x16]);
        auVar24[7] = -(param_2[0x1b] == pcVar11[0x17]);
        auVar24[8] = -(param_2[0x1c] == pcVar11[0x18]);
        auVar24[9] = -(param_2[0x1d] == pcVar11[0x19]);
        auVar24[10] = -(param_2[0x1e] == pcVar11[0x1a]);
        auVar24[0xb] = -(param_2[0x1f] == pcVar11[0x1b]);
        auVar24[0xc] = -(param_2[0x20] == pcVar11[0x1c]);
        auVar24[0xd] = -(param_2[0x21] == pcVar11[0x1d]);
        auVar24[0xe] = -(param_2[0x22] == pcVar11[0x1e]);
        auVar24[0xf] = -(param_2[0x23] == pcVar11[0x1f]);
        auVar24 = auVar24 & auVar20;
        pcVar11 = pcVar11 + 0x20;
        pcVar10 = param_2 + 0x20;
        uVar7 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) - 0xffff;
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          param_2 = param_2 + (uVar6 - 0xc);
          pcVar11 = pcVar11 + uVar8;
          goto LAB_00752020;
        }
      }
      else {
        auVar17[0] = -(param_2[4] == *pcVar11);
        auVar17[1] = -(param_2[5] == pcVar11[1]);
        auVar17[2] = -(param_2[6] == pcVar11[2]);
        auVar17[3] = -(param_2[7] == pcVar11[3]);
        auVar17[4] = -(param_2[8] == pcVar11[4]);
        auVar17[5] = -(param_2[9] == pcVar11[5]);
        auVar17[6] = -(param_2[10] == pcVar11[6]);
        auVar17[7] = -(param_2[0xb] == pcVar11[7]);
        auVar17[8] = -(param_2[0xc] == pcVar11[8]);
        auVar17[9] = -(param_2[0xd] == pcVar11[9]);
        auVar17[10] = -(param_2[0xe] == pcVar11[10]);
        auVar17[0xb] = -(param_2[0xf] == pcVar11[0xb]);
        auVar17[0xc] = -(param_2[0x10] == pcVar11[0xc]);
        auVar17[0xd] = -(param_2[0x11] == pcVar11[0xd]);
        auVar17[0xe] = -(param_2[0x12] == pcVar11[0xe]);
        auVar17[0xf] = -(param_2[0x13] == pcVar11[0xf]);
        auVar25[0] = -(param_2[0x14] == pcVar11[0x10]);
        auVar25[1] = -(param_2[0x15] == pcVar11[0x11]);
        auVar25[2] = -(param_2[0x16] == pcVar11[0x12]);
        auVar25[3] = -(param_2[0x17] == pcVar11[0x13]);
        auVar25[4] = -(param_2[0x18] == pcVar11[0x14]);
        auVar25[5] = -(param_2[0x19] == pcVar11[0x15]);
        auVar25[6] = -(param_2[0x1a] == pcVar11[0x16]);
        auVar25[7] = -(param_2[0x1b] == pcVar11[0x17]);
        auVar25[8] = -(param_2[0x1c] == pcVar11[0x18]);
        auVar25[9] = -(param_2[0x1d] == pcVar11[0x19]);
        auVar25[10] = -(param_2[0x1e] == pcVar11[0x1a]);
        auVar25[0xb] = -(param_2[0x1f] == pcVar11[0x1b]);
        auVar25[0xc] = -(param_2[0x20] == pcVar11[0x1c]);
        auVar25[0xd] = -(param_2[0x21] == pcVar11[0x1d]);
        auVar25[0xe] = -(param_2[0x22] == pcVar11[0x1e]);
        auVar25[0xf] = -(param_2[0x23] == pcVar11[0x1f]);
        uVar8 = uVar6 - 0x50;
        do {
          auVar20 = auVar17;
          pcVar12 = pcVar11;
          pcVar9 = param_2;
          uVar6 = uVar8;
          auVar25 = auVar25 & auVar20;
          uVar8 = uVar6 - 0x20;
          uVar7 = ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) - 0xffff) -
                  (uint)(uVar6 < 0x20);
          auVar17[0] = -(pcVar9[0x24] == pcVar12[0x20]);
          auVar17[1] = -(pcVar9[0x25] == pcVar12[0x21]);
          auVar17[2] = -(pcVar9[0x26] == pcVar12[0x22]);
          auVar17[3] = -(pcVar9[0x27] == pcVar12[0x23]);
          auVar17[4] = -(pcVar9[0x28] == pcVar12[0x24]);
          auVar17[5] = -(pcVar9[0x29] == pcVar12[0x25]);
          auVar17[6] = -(pcVar9[0x2a] == pcVar12[0x26]);
          auVar17[7] = -(pcVar9[0x2b] == pcVar12[0x27]);
          auVar17[8] = -(pcVar9[0x2c] == pcVar12[0x28]);
          auVar17[9] = -(pcVar9[0x2d] == pcVar12[0x29]);
          auVar17[10] = -(pcVar9[0x2e] == pcVar12[0x2a]);
          auVar17[0xb] = -(pcVar9[0x2f] == pcVar12[0x2b]);
          auVar17[0xc] = -(pcVar9[0x30] == pcVar12[0x2c]);
          auVar17[0xd] = -(pcVar9[0x31] == pcVar12[0x2d]);
          auVar17[0xe] = -(pcVar9[0x32] == pcVar12[0x2e]);
          auVar17[0xf] = -(pcVar9[0x33] == pcVar12[0x2f]);
          pcVar10 = pcVar9 + 0x20;
          auVar25[0] = -(pcVar9[0x34] == pcVar12[0x30]);
          auVar25[1] = -(pcVar9[0x35] == pcVar12[0x31]);
          auVar25[2] = -(pcVar9[0x36] == pcVar12[0x32]);
          auVar25[3] = -(pcVar9[0x37] == pcVar12[0x33]);
          auVar25[4] = -(pcVar9[0x38] == pcVar12[0x34]);
          auVar25[5] = -(pcVar9[0x39] == pcVar12[0x35]);
          auVar25[6] = -(pcVar9[0x3a] == pcVar12[0x36]);
          auVar25[7] = -(pcVar9[0x3b] == pcVar12[0x37]);
          auVar25[8] = -(pcVar9[0x3c] == pcVar12[0x38]);
          auVar25[9] = -(pcVar9[0x3d] == pcVar12[0x39]);
          auVar25[10] = -(pcVar9[0x3e] == pcVar12[0x3a]);
          auVar25[0xb] = -(pcVar9[0x3f] == pcVar12[0x3b]);
          auVar25[0xc] = -(pcVar9[0x40] == pcVar12[0x3c]);
          auVar25[0xd] = -(pcVar9[0x41] == pcVar12[0x3d]);
          auVar25[0xe] = -(pcVar9[0x42] == pcVar12[0x3e]);
          auVar25[0xf] = -(pcVar9[0x43] == pcVar12[0x3f]);
          pcVar11 = pcVar12 + 0x20;
          param_2 = pcVar10;
        } while (uVar7 == 0);
        auVar25 = auVar25 & auVar17;
        if ((long)uVar8 < 0) {
          uVar7 = uVar7 + 1;
          uVar8 = uVar6;
        }
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          pcVar11 = pcVar12 + 0x40;
          pcVar10 = pcVar9 + 0x40;
          uVar7 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar7;
          auVar20 = auVar17;
          if (uVar7 == 0) {
            param_2 = pcVar9 + uVar8 + 0x44;
            pcVar11 = pcVar11 + uVar8;
            goto LAB_00752020;
          }
        }
      }
    }
    else if (uVar7 == 8) {
      uVar8 = uVar6 - 0x30;
      uVar5 = 8;
      if (uVar6 < 0x50) {
        auVar20[0] = -(param_2[8] == *pcVar11);
        auVar20[1] = -(param_2[9] == pcVar11[1]);
        auVar20[2] = -(param_2[10] == pcVar11[2]);
        auVar20[3] = -(param_2[0xb] == pcVar11[3]);
        auVar20[4] = -(param_2[0xc] == pcVar11[4]);
        auVar20[5] = -(param_2[0xd] == pcVar11[5]);
        auVar20[6] = -(param_2[0xe] == pcVar11[6]);
        auVar20[7] = -(param_2[0xf] == pcVar11[7]);
        auVar20[8] = -(param_2[0x10] == pcVar11[8]);
        auVar20[9] = -(param_2[0x11] == pcVar11[9]);
        auVar20[10] = -(param_2[0x12] == pcVar11[10]);
        auVar20[0xb] = -(param_2[0x13] == pcVar11[0xb]);
        auVar20[0xc] = -(param_2[0x14] == pcVar11[0xc]);
        auVar20[0xd] = -(param_2[0x15] == pcVar11[0xd]);
        auVar20[0xe] = -(param_2[0x16] == pcVar11[0xe]);
        auVar20[0xf] = -(param_2[0x17] == pcVar11[0xf]);
        auVar26[0] = -(param_2[0x18] == pcVar11[0x10]);
        auVar26[1] = -(param_2[0x19] == pcVar11[0x11]);
        auVar26[2] = -(param_2[0x1a] == pcVar11[0x12]);
        auVar26[3] = -(param_2[0x1b] == pcVar11[0x13]);
        auVar26[4] = -(param_2[0x1c] == pcVar11[0x14]);
        auVar26[5] = -(param_2[0x1d] == pcVar11[0x15]);
        auVar26[6] = -(param_2[0x1e] == pcVar11[0x16]);
        auVar26[7] = -(param_2[0x1f] == pcVar11[0x17]);
        auVar26[8] = -(param_2[0x20] == pcVar11[0x18]);
        auVar26[9] = -(param_2[0x21] == pcVar11[0x19]);
        auVar26[10] = -(param_2[0x22] == pcVar11[0x1a]);
        auVar26[0xb] = -(param_2[0x23] == pcVar11[0x1b]);
        auVar26[0xc] = -(param_2[0x24] == pcVar11[0x1c]);
        auVar26[0xd] = -(param_2[0x25] == pcVar11[0x1d]);
        auVar26[0xe] = -(param_2[0x26] == pcVar11[0x1e]);
        auVar26[0xf] = -(param_2[0x27] == pcVar11[0x1f]);
        auVar26 = auVar26 & auVar20;
        pcVar11 = pcVar11 + 0x20;
        pcVar10 = param_2 + 0x20;
        uVar7 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) - 0xffff;
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          param_2 = param_2 + (uVar6 - 8);
          pcVar11 = pcVar11 + uVar8;
          goto LAB_00752020;
        }
      }
      else {
        auVar18[0] = -(param_2[8] == *pcVar11);
        auVar18[1] = -(param_2[9] == pcVar11[1]);
        auVar18[2] = -(param_2[10] == pcVar11[2]);
        auVar18[3] = -(param_2[0xb] == pcVar11[3]);
        auVar18[4] = -(param_2[0xc] == pcVar11[4]);
        auVar18[5] = -(param_2[0xd] == pcVar11[5]);
        auVar18[6] = -(param_2[0xe] == pcVar11[6]);
        auVar18[7] = -(param_2[0xf] == pcVar11[7]);
        auVar18[8] = -(param_2[0x10] == pcVar11[8]);
        auVar18[9] = -(param_2[0x11] == pcVar11[9]);
        auVar18[10] = -(param_2[0x12] == pcVar11[10]);
        auVar18[0xb] = -(param_2[0x13] == pcVar11[0xb]);
        auVar18[0xc] = -(param_2[0x14] == pcVar11[0xc]);
        auVar18[0xd] = -(param_2[0x15] == pcVar11[0xd]);
        auVar18[0xe] = -(param_2[0x16] == pcVar11[0xe]);
        auVar18[0xf] = -(param_2[0x17] == pcVar11[0xf]);
        auVar27[0] = -(param_2[0x18] == pcVar11[0x10]);
        auVar27[1] = -(param_2[0x19] == pcVar11[0x11]);
        auVar27[2] = -(param_2[0x1a] == pcVar11[0x12]);
        auVar27[3] = -(param_2[0x1b] == pcVar11[0x13]);
        auVar27[4] = -(param_2[0x1c] == pcVar11[0x14]);
        auVar27[5] = -(param_2[0x1d] == pcVar11[0x15]);
        auVar27[6] = -(param_2[0x1e] == pcVar11[0x16]);
        auVar27[7] = -(param_2[0x1f] == pcVar11[0x17]);
        auVar27[8] = -(param_2[0x20] == pcVar11[0x18]);
        auVar27[9] = -(param_2[0x21] == pcVar11[0x19]);
        auVar27[10] = -(param_2[0x22] == pcVar11[0x1a]);
        auVar27[0xb] = -(param_2[0x23] == pcVar11[0x1b]);
        auVar27[0xc] = -(param_2[0x24] == pcVar11[0x1c]);
        auVar27[0xd] = -(param_2[0x25] == pcVar11[0x1d]);
        auVar27[0xe] = -(param_2[0x26] == pcVar11[0x1e]);
        auVar27[0xf] = -(param_2[0x27] == pcVar11[0x1f]);
        uVar8 = uVar6 - 0x50;
        do {
          auVar20 = auVar18;
          pcVar12 = pcVar11;
          pcVar9 = param_2;
          uVar6 = uVar8;
          auVar27 = auVar27 & auVar20;
          uVar8 = uVar6 - 0x20;
          uVar7 = ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) - 0xffff) -
                  (uint)(uVar6 < 0x20);
          auVar18[0] = -(pcVar9[0x28] == pcVar12[0x20]);
          auVar18[1] = -(pcVar9[0x29] == pcVar12[0x21]);
          auVar18[2] = -(pcVar9[0x2a] == pcVar12[0x22]);
          auVar18[3] = -(pcVar9[0x2b] == pcVar12[0x23]);
          auVar18[4] = -(pcVar9[0x2c] == pcVar12[0x24]);
          auVar18[5] = -(pcVar9[0x2d] == pcVar12[0x25]);
          auVar18[6] = -(pcVar9[0x2e] == pcVar12[0x26]);
          auVar18[7] = -(pcVar9[0x2f] == pcVar12[0x27]);
          auVar18[8] = -(pcVar9[0x30] == pcVar12[0x28]);
          auVar18[9] = -(pcVar9[0x31] == pcVar12[0x29]);
          auVar18[10] = -(pcVar9[0x32] == pcVar12[0x2a]);
          auVar18[0xb] = -(pcVar9[0x33] == pcVar12[0x2b]);
          auVar18[0xc] = -(pcVar9[0x34] == pcVar12[0x2c]);
          auVar18[0xd] = -(pcVar9[0x35] == pcVar12[0x2d]);
          auVar18[0xe] = -(pcVar9[0x36] == pcVar12[0x2e]);
          auVar18[0xf] = -(pcVar9[0x37] == pcVar12[0x2f]);
          pcVar10 = pcVar9 + 0x20;
          auVar27[0] = -(pcVar9[0x38] == pcVar12[0x30]);
          auVar27[1] = -(pcVar9[0x39] == pcVar12[0x31]);
          auVar27[2] = -(pcVar9[0x3a] == pcVar12[0x32]);
          auVar27[3] = -(pcVar9[0x3b] == pcVar12[0x33]);
          auVar27[4] = -(pcVar9[0x3c] == pcVar12[0x34]);
          auVar27[5] = -(pcVar9[0x3d] == pcVar12[0x35]);
          auVar27[6] = -(pcVar9[0x3e] == pcVar12[0x36]);
          auVar27[7] = -(pcVar9[0x3f] == pcVar12[0x37]);
          auVar27[8] = -(pcVar9[0x40] == pcVar12[0x38]);
          auVar27[9] = -(pcVar9[0x41] == pcVar12[0x39]);
          auVar27[10] = -(pcVar9[0x42] == pcVar12[0x3a]);
          auVar27[0xb] = -(pcVar9[0x43] == pcVar12[0x3b]);
          auVar27[0xc] = -(pcVar9[0x44] == pcVar12[0x3c]);
          auVar27[0xd] = -(pcVar9[0x45] == pcVar12[0x3d]);
          auVar27[0xe] = -(pcVar9[0x46] == pcVar12[0x3e]);
          auVar27[0xf] = -(pcVar9[0x47] == pcVar12[0x3f]);
          pcVar11 = pcVar12 + 0x20;
          param_2 = pcVar10;
        } while (uVar7 == 0);
        auVar27 = auVar27 & auVar18;
        if ((long)uVar8 < 0) {
          uVar7 = uVar7 + 1;
          uVar8 = uVar6;
        }
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          pcVar11 = pcVar12 + 0x40;
          pcVar10 = pcVar9 + 0x40;
          uVar7 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar7;
          auVar20 = auVar18;
          if (uVar7 == 0) {
            param_2 = pcVar9 + uVar8 + 0x48;
            pcVar11 = pcVar11 + uVar8;
            goto LAB_00752020;
          }
        }
      }
    }
    else {
      uVar8 = uVar6 - 0x30;
      if (uVar6 < 0x50) {
        auVar20[0] = -(param_2[0xc] == *pcVar11);
        auVar20[1] = -(param_2[0xd] == pcVar11[1]);
        auVar20[2] = -(param_2[0xe] == pcVar11[2]);
        auVar20[3] = -(param_2[0xf] == pcVar11[3]);
        auVar20[4] = -(param_2[0x10] == pcVar11[4]);
        auVar20[5] = -(param_2[0x11] == pcVar11[5]);
        auVar20[6] = -(param_2[0x12] == pcVar11[6]);
        auVar20[7] = -(param_2[0x13] == pcVar11[7]);
        auVar20[8] = -(param_2[0x14] == pcVar11[8]);
        auVar20[9] = -(param_2[0x15] == pcVar11[9]);
        auVar20[10] = -(param_2[0x16] == pcVar11[10]);
        auVar20[0xb] = -(param_2[0x17] == pcVar11[0xb]);
        auVar20[0xc] = -(param_2[0x18] == pcVar11[0xc]);
        auVar20[0xd] = -(param_2[0x19] == pcVar11[0xd]);
        auVar20[0xe] = -(param_2[0x1a] == pcVar11[0xe]);
        auVar20[0xf] = -(param_2[0x1b] == pcVar11[0xf]);
        auVar28[0] = -(param_2[0x1c] == pcVar11[0x10]);
        auVar28[1] = -(param_2[0x1d] == pcVar11[0x11]);
        auVar28[2] = -(param_2[0x1e] == pcVar11[0x12]);
        auVar28[3] = -(param_2[0x1f] == pcVar11[0x13]);
        auVar28[4] = -(param_2[0x20] == pcVar11[0x14]);
        auVar28[5] = -(param_2[0x21] == pcVar11[0x15]);
        auVar28[6] = -(param_2[0x22] == pcVar11[0x16]);
        auVar28[7] = -(param_2[0x23] == pcVar11[0x17]);
        auVar28[8] = -(param_2[0x24] == pcVar11[0x18]);
        auVar28[9] = -(param_2[0x25] == pcVar11[0x19]);
        auVar28[10] = -(param_2[0x26] == pcVar11[0x1a]);
        auVar28[0xb] = -(param_2[0x27] == pcVar11[0x1b]);
        auVar28[0xc] = -(param_2[0x28] == pcVar11[0x1c]);
        auVar28[0xd] = -(param_2[0x29] == pcVar11[0x1d]);
        auVar28[0xe] = -(param_2[0x2a] == pcVar11[0x1e]);
        auVar28[0xf] = -(param_2[0x2b] == pcVar11[0x1f]);
        auVar28 = auVar28 & auVar20;
        pcVar11 = pcVar11 + 0x20;
        pcVar10 = param_2 + 0x20;
        uVar7 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) - 0xffff;
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          param_2 = param_2 + (uVar6 - 4);
          pcVar11 = pcVar11 + uVar8;
          goto LAB_00752020;
        }
      }
      else {
        auVar19[0] = -(param_2[0xc] == *pcVar11);
        auVar19[1] = -(param_2[0xd] == pcVar11[1]);
        auVar19[2] = -(param_2[0xe] == pcVar11[2]);
        auVar19[3] = -(param_2[0xf] == pcVar11[3]);
        auVar19[4] = -(param_2[0x10] == pcVar11[4]);
        auVar19[5] = -(param_2[0x11] == pcVar11[5]);
        auVar19[6] = -(param_2[0x12] == pcVar11[6]);
        auVar19[7] = -(param_2[0x13] == pcVar11[7]);
        auVar19[8] = -(param_2[0x14] == pcVar11[8]);
        auVar19[9] = -(param_2[0x15] == pcVar11[9]);
        auVar19[10] = -(param_2[0x16] == pcVar11[10]);
        auVar19[0xb] = -(param_2[0x17] == pcVar11[0xb]);
        auVar19[0xc] = -(param_2[0x18] == pcVar11[0xc]);
        auVar19[0xd] = -(param_2[0x19] == pcVar11[0xd]);
        auVar19[0xe] = -(param_2[0x1a] == pcVar11[0xe]);
        auVar19[0xf] = -(param_2[0x1b] == pcVar11[0xf]);
        auVar29[0] = -(param_2[0x1c] == pcVar11[0x10]);
        auVar29[1] = -(param_2[0x1d] == pcVar11[0x11]);
        auVar29[2] = -(param_2[0x1e] == pcVar11[0x12]);
        auVar29[3] = -(param_2[0x1f] == pcVar11[0x13]);
        auVar29[4] = -(param_2[0x20] == pcVar11[0x14]);
        auVar29[5] = -(param_2[0x21] == pcVar11[0x15]);
        auVar29[6] = -(param_2[0x22] == pcVar11[0x16]);
        auVar29[7] = -(param_2[0x23] == pcVar11[0x17]);
        auVar29[8] = -(param_2[0x24] == pcVar11[0x18]);
        auVar29[9] = -(param_2[0x25] == pcVar11[0x19]);
        auVar29[10] = -(param_2[0x26] == pcVar11[0x1a]);
        auVar29[0xb] = -(param_2[0x27] == pcVar11[0x1b]);
        auVar29[0xc] = -(param_2[0x28] == pcVar11[0x1c]);
        auVar29[0xd] = -(param_2[0x29] == pcVar11[0x1d]);
        auVar29[0xe] = -(param_2[0x2a] == pcVar11[0x1e]);
        auVar29[0xf] = -(param_2[0x2b] == pcVar11[0x1f]);
        uVar8 = uVar6 - 0x50;
        do {
          auVar20 = auVar19;
          pcVar12 = pcVar11;
          pcVar9 = param_2;
          uVar6 = uVar8;
          auVar29 = auVar29 & auVar20;
          uVar8 = uVar6 - 0x20;
          uVar7 = ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) - 0xffff) -
                  (uint)(uVar6 < 0x20);
          auVar19[0] = -(pcVar9[0x2c] == pcVar12[0x20]);
          auVar19[1] = -(pcVar9[0x2d] == pcVar12[0x21]);
          auVar19[2] = -(pcVar9[0x2e] == pcVar12[0x22]);
          auVar19[3] = -(pcVar9[0x2f] == pcVar12[0x23]);
          auVar19[4] = -(pcVar9[0x30] == pcVar12[0x24]);
          auVar19[5] = -(pcVar9[0x31] == pcVar12[0x25]);
          auVar19[6] = -(pcVar9[0x32] == pcVar12[0x26]);
          auVar19[7] = -(pcVar9[0x33] == pcVar12[0x27]);
          auVar19[8] = -(pcVar9[0x34] == pcVar12[0x28]);
          auVar19[9] = -(pcVar9[0x35] == pcVar12[0x29]);
          auVar19[10] = -(pcVar9[0x36] == pcVar12[0x2a]);
          auVar19[0xb] = -(pcVar9[0x37] == pcVar12[0x2b]);
          auVar19[0xc] = -(pcVar9[0x38] == pcVar12[0x2c]);
          auVar19[0xd] = -(pcVar9[0x39] == pcVar12[0x2d]);
          auVar19[0xe] = -(pcVar9[0x3a] == pcVar12[0x2e]);
          auVar19[0xf] = -(pcVar9[0x3b] == pcVar12[0x2f]);
          pcVar10 = pcVar9 + 0x20;
          auVar29[0] = -(pcVar9[0x3c] == pcVar12[0x30]);
          auVar29[1] = -(pcVar9[0x3d] == pcVar12[0x31]);
          auVar29[2] = -(pcVar9[0x3e] == pcVar12[0x32]);
          auVar29[3] = -(pcVar9[0x3f] == pcVar12[0x33]);
          auVar29[4] = -(pcVar9[0x40] == pcVar12[0x34]);
          auVar29[5] = -(pcVar9[0x41] == pcVar12[0x35]);
          auVar29[6] = -(pcVar9[0x42] == pcVar12[0x36]);
          auVar29[7] = -(pcVar9[0x43] == pcVar12[0x37]);
          auVar29[8] = -(pcVar9[0x44] == pcVar12[0x38]);
          auVar29[9] = -(pcVar9[0x45] == pcVar12[0x39]);
          auVar29[10] = -(pcVar9[0x46] == pcVar12[0x3a]);
          auVar29[0xb] = -(pcVar9[0x47] == pcVar12[0x3b]);
          auVar29[0xc] = -(pcVar9[0x48] == pcVar12[0x3c]);
          auVar29[0xd] = -(pcVar9[0x49] == pcVar12[0x3d]);
          auVar29[0xe] = -(pcVar9[0x4a] == pcVar12[0x3e]);
          auVar29[0xf] = -(pcVar9[0x4b] == pcVar12[0x3f]);
          pcVar11 = pcVar12 + 0x20;
          param_2 = pcVar10;
        } while (uVar7 == 0);
        auVar29 = auVar29 & auVar19;
        if ((long)uVar8 < 0) {
          uVar7 = uVar7 + 1;
          uVar8 = uVar6;
        }
        param_1 = (char *)(ulong)uVar7;
        if (uVar7 == 0) {
          pcVar11 = pcVar12 + 0x40;
          pcVar10 = pcVar9 + 0x40;
          uVar7 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar7;
          auVar20 = auVar19;
          if (uVar7 == 0) {
            param_2 = pcVar9 + uVar8 + 0x4c;
            pcVar11 = pcVar11 + uVar8;
            goto LAB_00752020;
          }
        }
      }
    }
    uVar7 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar7 != 0) {
      pcVar10 = pcVar10 + -0x10;
      pcVar11 = pcVar11 + -0x10;
      param_1 = (char *)(ulong)uVar7;
    }
    param_2 = pcVar10 + uVar5;
  }
  if ((char)param_1 == '\0') {
    auVar32._8_8_ = (char *)((ulong)param_1 & 0xffffffffffff0fff);
    if (((ulong)param_1 & 0xf00) == 0) {
      uVar2 = *(uint *)(pcVar11 + -4);
      auVar33._4_4_ = 0;
      auVar33._0_4_ = uVar2;
      uVar7 = *(uint *)(param_2 + -4);
      bVar15 = SBORROW4(uVar2,uVar7);
      bVar14 = (int)(uVar2 - uVar7) < 0;
      bVar13 = uVar2 == uVar7;
      param_1 = auVar32._8_8_;
      if (bVar13) {
        auVar33._8_8_ = auVar32._8_8_;
        return auVar33;
      }
    }
    else {
      uVar2 = *(uint *)(pcVar11 + -8);
      auVar32._4_4_ = 0;
      auVar32._0_4_ = uVar2;
      uVar7 = *(uint *)(param_2 + -8);
      bVar15 = SBORROW4(uVar2,uVar7);
      bVar14 = (int)(uVar2 - uVar7) < 0;
      bVar13 = uVar2 == uVar7;
      param_1 = auVar32._8_8_;
      if (bVar13) {
        return auVar32;
      }
    }
  }
  else {
    auVar30._8_8_ = (char *)((ulong)param_1 & 0xffffffffffffff0f);
    if (((ulong)param_1 & 0xf) == 0) {
      uVar2 = *(uint *)(pcVar11 + -0xc);
      auVar31._4_4_ = 0;
      auVar31._0_4_ = uVar2;
      uVar7 = *(uint *)(param_2 + -0xc);
      bVar15 = SBORROW4(uVar2,uVar7);
      bVar14 = (int)(uVar2 - uVar7) < 0;
      bVar13 = uVar2 == uVar7;
      param_1 = auVar30._8_8_;
      if (bVar13) {
        auVar31._8_8_ = auVar30._8_8_;
        return auVar31;
      }
    }
    else {
      uVar2 = *(uint *)(pcVar11 + -0x10);
      auVar30._4_4_ = 0;
      auVar30._0_4_ = uVar2;
      uVar7 = *(uint *)(param_2 + -0x10);
      bVar15 = SBORROW4(uVar2,uVar7);
      bVar14 = (int)(uVar2 - uVar7) < 0;
      bVar13 = uVar2 == uVar7;
      param_1 = auVar30._8_8_;
      if (bVar13) {
        return auVar30;
      }
    }
  }
LAB_00752100:
  if (!bVar13 && bVar15 == bVar14) {
    auVar35._8_8_ = param_1;
    auVar35._0_8_ = 1;
    return auVar35;
  }
  auVar34._8_8_ = param_1;
  auVar34._0_8_ = 0xffffffff;
  return auVar34;
}

