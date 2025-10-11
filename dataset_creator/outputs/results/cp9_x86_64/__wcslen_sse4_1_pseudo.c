
ulong __wcslen_sse4_1(int *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar14;
  uint uVar16;
  undefined1 auVar10 [16];
  uint uVar18;
  undefined1 auVar11 [16];
  uint uVar15;
  uint uVar17;
  uint uVar19;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar30;
  uint uVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar32;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  
  if (((ulong)param_1 & 0xfff) < 0xfd0) {
    auVar33._0_4_ = -(uint)(*param_1 == 0);
    auVar33._4_4_ = -(uint)(param_1[1] == 0);
    auVar33._8_4_ = -(uint)(param_1[2] == 0);
    auVar33._12_4_ = -(uint)(param_1[3] == 0);
    uVar4 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
            (ushort)(byte)(auVar33._12_4_ >> 0x1f) << 0xf;
    if (uVar4 != 0) {
      uVar30 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
        }
      }
      return (ulong)(uVar30 >> 2);
    }
    uVar6 = (ulong)param_1 & 0xfffffffffffffff0;
    auVar21._0_4_ = -(uint)(*(int *)(uVar6 + 0x10) == 0);
    auVar21._4_4_ = -(uint)(*(int *)(uVar6 + 0x14) == 0);
    auVar21._8_4_ = -(uint)(*(int *)(uVar6 + 0x18) == 0);
    auVar21._12_4_ = -(uint)(*(int *)(uVar6 + 0x1c) == 0);
    auVar24._0_4_ = -(uint)(*(int *)(uVar6 + 0x20) == 0);
    auVar24._4_4_ = -(uint)(*(int *)(uVar6 + 0x24) == 0);
    auVar24._8_4_ = -(uint)(*(int *)(uVar6 + 0x28) == 0);
    auVar24._12_4_ = -(uint)(*(int *)(uVar6 + 0x2c) == 0);
    auVar28._0_4_ = -(uint)(*(int *)(uVar6 + 0x30) == 0);
    auVar28._4_4_ = -(uint)(*(int *)(uVar6 + 0x34) == 0);
    auVar28._8_4_ = -(uint)(*(int *)(uVar6 + 0x38) == 0);
    auVar28._12_4_ = -(uint)(*(int *)(uVar6 + 0x3c) == 0);
    uVar6 = (long)((ulong)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                                   (ushort)((byte)(auVar21._12_4_ >> 7) & 1) << 0xc |
                                   (ushort)((byte)(auVar21._12_4_ >> 0xf) & 1) << 0xd |
                                   (ushort)((byte)(auVar21._12_4_ >> 0x17) & 1) << 0xe |
                                  (ushort)(byte)(auVar21._12_4_ >> 0x1f) << 0xf) << 0x10 |
                  (ulong)CONCAT22((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                                  (ushort)((byte)(auVar28._12_4_ >> 7) & 1) << 0xc |
                                  (ushort)((byte)(auVar28._12_4_ >> 0xf) & 1) << 0xd |
                                  (ushort)((byte)(auVar28._12_4_ >> 0x17) & 1) << 0xe |
                                  (ushort)(byte)(auVar28._12_4_ >> 0x1f) << 0xf,
                                  (ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                  (ushort)((byte)(auVar24._12_4_ >> 7) & 1) << 0xc |
                                  (ushort)((byte)(auVar24._12_4_ >> 0xf) & 1) << 0xd |
                                  (ushort)((byte)(auVar24._12_4_ >> 0x17) & 1) << 0xe |
                                  (ushort)(byte)(auVar24._12_4_ >> 0x1f) << 0xf) << 0x20) >>
            (((byte)param_1 ^ (byte)uVar6) & 0x3f);
    puVar7 = (uint *)((ulong)param_1 & 0xffffffffffffffc0);
    if (uVar6 != 0) {
      uVar1 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return uVar1 >> 2;
    }
  }
  else {
    puVar7 = (uint *)((ulong)param_1 & 0xffffffffffffffc0);
    auVar10._0_4_ = -(uint)(*puVar7 == 0);
    auVar10._4_4_ = -(uint)(puVar7[1] == 0);
    auVar10._8_4_ = -(uint)(puVar7[2] == 0);
    auVar10._12_4_ = -(uint)(puVar7[3] == 0);
    auVar20._0_4_ = -(uint)(puVar7[4] == 0);
    auVar20._4_4_ = -(uint)(puVar7[5] == 0);
    auVar20._8_4_ = -(uint)(puVar7[6] == 0);
    auVar20._12_4_ = -(uint)(puVar7[7] == 0);
    auVar23._0_4_ = -(uint)(puVar7[8] == 0);
    auVar23._4_4_ = -(uint)(puVar7[9] == 0);
    auVar23._8_4_ = -(uint)(puVar7[10] == 0);
    auVar23._12_4_ = -(uint)(puVar7[0xb] == 0);
    auVar27._0_4_ = -(uint)(puVar7[0xc] == 0);
    auVar27._4_4_ = -(uint)(puVar7[0xd] == 0);
    auVar27._8_4_ = -(uint)(puVar7[0xe] == 0);
    auVar27._12_4_ = -(uint)(puVar7[0xf] == 0);
    uVar6 = CONCAT44(CONCAT22((ushort)(SUB161(auVar27 >> 7,0) & 1) |
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
                              (ushort)((byte)(auVar27._12_4_ >> 7) & 1) << 0xc |
                              (ushort)((byte)(auVar27._12_4_ >> 0xf) & 1) << 0xd |
                              (ushort)((byte)(auVar27._12_4_ >> 0x17) & 1) << 0xe |
                              (ushort)(byte)(auVar27._12_4_ >> 0x1f) << 0xf,
                              (ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                              (ushort)((byte)(auVar23._12_4_ >> 7) & 1) << 0xc |
                              (ushort)((byte)(auVar23._12_4_ >> 0xf) & 1) << 0xd |
                              (ushort)((byte)(auVar23._12_4_ >> 0x17) & 1) << 0xe |
                              (ushort)(byte)(auVar23._12_4_ >> 0x1f) << 0xf),
                     CONCAT22((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                              (ushort)((byte)(auVar20._12_4_ >> 7) & 1) << 0xc |
                              (ushort)((byte)(auVar20._12_4_ >> 0xf) & 1) << 0xd |
                              (ushort)((byte)(auVar20._12_4_ >> 0x17) & 1) << 0xe |
                              (ushort)(byte)(auVar20._12_4_ >> 0x1f) << 0xf,
                              (ushort)(SUB161(auVar10 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                              (ushort)((byte)(auVar10._12_4_ >> 7) & 1) << 0xc |
                              (ushort)((byte)(auVar10._12_4_ >> 0xf) & 1) << 0xd |
                              (ushort)((byte)(auVar10._12_4_ >> 0x17) & 1) << 0xe |
                              (ushort)(byte)(auVar10._12_4_ >> 0x1f) << 0xf)) >>
            ((byte)param_1 & 0x3f);
    if (uVar6 != 0) {
      uVar1 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return uVar1 >> 2;
    }
    auVar21 = (undefined1  [16])0x0;
    auVar24 = (undefined1  [16])0x0;
    auVar28 = (undefined1  [16])0x0;
  }
  do {
    uVar30 = puVar7[0x10];
    uVar31 = puVar7[0x11];
    uVar32 = puVar7[0x12];
    uVar5 = puVar7[0x13];
    uVar9 = puVar7[0x14];
    uVar14 = puVar7[0x15];
    uVar16 = puVar7[0x16];
    uVar18 = puVar7[0x17];
    uVar9 = (uVar9 < uVar30) * uVar9 | (uVar9 >= uVar30) * uVar30;
    uVar14 = (uVar14 < uVar31) * uVar14 | (uVar14 >= uVar31) * uVar31;
    uVar16 = (uVar16 < uVar32) * uVar16 | (uVar16 >= uVar32) * uVar32;
    uVar18 = (uVar18 < uVar5) * uVar18 | (uVar18 >= uVar5) * uVar5;
    uVar30 = puVar7[0x18];
    uVar31 = puVar7[0x19];
    uVar32 = puVar7[0x1a];
    uVar5 = puVar7[0x1b];
    uVar9 = (uVar30 < uVar9) * uVar30 | (uVar30 >= uVar9) * uVar9;
    uVar14 = (uVar31 < uVar14) * uVar31 | (uVar31 >= uVar14) * uVar14;
    uVar16 = (uVar32 < uVar16) * uVar32 | (uVar32 >= uVar16) * uVar16;
    uVar18 = (uVar5 < uVar18) * uVar5 | (uVar5 >= uVar18) * uVar18;
    uVar30 = puVar7[0x1c];
    uVar31 = puVar7[0x1d];
    uVar32 = puVar7[0x1e];
    uVar5 = puVar7[0x1f];
    uVar26 = auVar28._0_4_;
    auVar11._0_4_ = -(uint)(((uVar30 < uVar9) * uVar30 | (uVar30 >= uVar9) * uVar9) == uVar26);
    uVar30 = auVar28._4_4_;
    auVar11._4_4_ = -(uint)(((uVar31 < uVar14) * uVar31 | (uVar31 >= uVar14) * uVar14) == uVar30);
    uVar31 = auVar28._8_4_;
    auVar11._8_4_ = -(uint)(((uVar32 < uVar16) * uVar32 | (uVar32 >= uVar16) * uVar16) == uVar31);
    uVar32 = auVar28._12_4_;
    bVar3 = ((uVar5 < uVar18) * uVar5 | (uVar5 >= uVar18) * uVar18) == uVar32;
    auVar11._12_4_ = -(uint)bVar3;
    if ((((((((((((((((auVar11 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar11 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar11 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar11 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar11 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar11 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar11 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar11 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar11 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar11 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar11 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar11 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar11._12_4_ >> 7 & 1) != 0) || (auVar11._12_4_ >> 0xf & 1) != 0) ||
        (auVar11._12_4_ >> 0x17 & 1) != 0) || bVar3) {
      puVar8 = puVar7 + 0x10;
      break;
    }
    puVar8 = puVar7 + 0x20;
    uVar5 = *puVar8;
    uVar9 = puVar7[0x21];
    uVar14 = puVar7[0x22];
    uVar16 = puVar7[0x23];
    uVar18 = puVar7[0x24];
    uVar15 = puVar7[0x25];
    uVar17 = puVar7[0x26];
    uVar19 = puVar7[0x27];
    uVar18 = (uVar18 < uVar5) * uVar18 | (uVar18 >= uVar5) * uVar5;
    uVar15 = (uVar15 < uVar9) * uVar15 | (uVar15 >= uVar9) * uVar9;
    uVar17 = (uVar17 < uVar14) * uVar17 | (uVar17 >= uVar14) * uVar14;
    uVar19 = (uVar19 < uVar16) * uVar19 | (uVar19 >= uVar16) * uVar16;
    uVar5 = puVar7[0x28];
    uVar9 = puVar7[0x29];
    uVar14 = puVar7[0x2a];
    uVar16 = puVar7[0x2b];
    uVar18 = (uVar5 < uVar18) * uVar5 | (uVar5 >= uVar18) * uVar18;
    uVar15 = (uVar9 < uVar15) * uVar9 | (uVar9 >= uVar15) * uVar15;
    uVar17 = (uVar14 < uVar17) * uVar14 | (uVar14 >= uVar17) * uVar17;
    uVar19 = (uVar16 < uVar19) * uVar16 | (uVar16 >= uVar19) * uVar19;
    uVar5 = puVar7[0x2c];
    uVar9 = puVar7[0x2d];
    uVar14 = puVar7[0x2e];
    uVar16 = puVar7[0x2f];
    auVar12._0_4_ = -(uint)(((uVar5 < uVar18) * uVar5 | (uVar5 >= uVar18) * uVar18) == uVar26);
    auVar12._4_4_ = -(uint)(((uVar9 < uVar15) * uVar9 | (uVar9 >= uVar15) * uVar15) == uVar30);
    auVar12._8_4_ = -(uint)(((uVar14 < uVar17) * uVar14 | (uVar14 >= uVar17) * uVar17) == uVar31);
    bVar3 = ((uVar16 < uVar19) * uVar16 | (uVar16 >= uVar19) * uVar19) == uVar32;
    auVar12._12_4_ = -(uint)bVar3;
    puVar7 = puVar8;
  } while ((((((((((((((((auVar12 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                        (auVar12 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar12 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar12 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar12 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar12 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar12 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar12 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar12 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar12 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar12 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar12 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar12._12_4_ >> 7 & 1) == 0) && (auVar12._12_4_ >> 0xf & 1) == 0) &&
           (auVar12._12_4_ >> 0x17 & 1) == 0) && !bVar3);
  auVar13._0_4_ = -(uint)(*puVar8 == 0);
  auVar13._4_4_ = -(uint)(puVar8[1] == 0);
  auVar13._8_4_ = -(uint)(puVar8[2] == 0);
  auVar13._12_4_ = -(uint)(puVar8[3] == 0);
  auVar22._0_4_ = -(uint)(auVar21._0_4_ == puVar8[4]);
  auVar22._4_4_ = -(uint)(auVar21._4_4_ == puVar8[5]);
  auVar22._8_4_ = -(uint)(auVar21._8_4_ == puVar8[6]);
  auVar22._12_4_ = -(uint)(auVar21._12_4_ == puVar8[7]);
  auVar25._0_4_ = -(uint)(auVar24._0_4_ == puVar8[8]);
  auVar25._4_4_ = -(uint)(auVar24._4_4_ == puVar8[9]);
  auVar25._8_4_ = -(uint)(auVar24._8_4_ == puVar8[10]);
  auVar25._12_4_ = -(uint)(auVar24._12_4_ == puVar8[0xb]);
  auVar29._0_4_ = -(uint)(uVar26 == puVar8[0xc]);
  auVar29._4_4_ = -(uint)(uVar30 == puVar8[0xd]);
  auVar29._8_4_ = -(uint)(uVar31 == puVar8[0xe]);
  auVar29._12_4_ = -(uint)(uVar32 == puVar8[0xf]);
  uVar6 = CONCAT44(CONCAT22((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                            (ushort)((byte)(auVar29._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar29._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar29._12_4_ >> 0x17) & 1) << 0xe |
                            (ushort)(byte)(auVar29._12_4_ >> 0x1f) << 0xf,
                            (ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                            (ushort)((byte)(auVar25._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar25._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar25._12_4_ >> 0x17) & 1) << 0xe |
                            (ushort)(byte)(auVar25._12_4_ >> 0x1f) << 0xf),
                   CONCAT22((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                            (ushort)((byte)(auVar22._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar22._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar22._12_4_ >> 0x17) & 1) << 0xe |
                            (ushort)(byte)(auVar22._12_4_ >> 0x1f) << 0xf,
                            (ushort)(SUB161(auVar13 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                            (ushort)((byte)(auVar13._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar13._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar13._12_4_ >> 0x17) & 1) << 0xe |
                            (ushort)(byte)(auVar13._12_4_ >> 0x1f) << 0xf));
  lVar2 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  return (ulong)((long)puVar8 + (lVar2 - (long)param_1)) >> 2;
}

