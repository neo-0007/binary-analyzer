
long __wcschr_sse2(uint *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  sbyte sVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (((ulong)param_1 & 0x3f) < 0x31) {
    auVar17._0_4_ = -(uint)(*param_1 == 0);
    auVar17._4_4_ = -(uint)(param_1[1] == 0);
    auVar17._8_4_ = -(uint)(param_1[2] == 0);
    uVar2 = (uint)(param_1[3] == 0);
    auVar17._12_4_ = -uVar2;
    puVar9 = param_1 + 4;
    auVar10._0_4_ = -(uint)(*param_1 == param_2);
    auVar10._4_4_ = -(uint)(param_1[1] == param_2);
    auVar10._8_4_ = -(uint)(param_1[2] == param_2);
    auVar10._12_4_ = -(uint)(param_1[3] == param_2);
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar10._12_4_ >> 0x1f) << 0xf);
    if (((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                      (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17._12_4_ >> 7 & 1) != 0) || (auVar17._12_4_ >> 0xf & 1) != 0) ||
         (auVar17._12_4_ >> 0x17 & 1) != 0) || uVar2 != 0) || uVar5 != 0) goto LAB_007a0000;
    puVar8 = (uint *)((ulong)puVar9 & 0xfffffffffffffff0);
    auVar17._0_4_ = -(uint)(auVar17._0_4_ == *puVar8);
    auVar17._4_4_ = -(uint)(auVar17._4_4_ == puVar8[1]);
    auVar17._8_4_ = -(uint)(auVar17._8_4_ == puVar8[2]);
    uVar2 = (uint)(auVar17._12_4_ == puVar8[3]);
    auVar17._12_4_ = -uVar2;
    puVar9 = puVar8 + 4;
    auVar11._0_4_ = -(uint)(*puVar8 == param_2);
    auVar11._4_4_ = -(uint)(puVar8[1] == param_2);
    auVar11._8_4_ = -(uint)(puVar8[2] == param_2);
    auVar11._12_4_ = -(uint)(puVar8[3] == param_2);
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                            (ushort)((byte)(auVar11._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar11._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar11._12_4_ >> 0x17) & 1) << 0xe |
                           (ushort)(byte)(auVar11._12_4_ >> 0x1f) << 0xf);
    puVar8 = puVar9;
    auVar12 = auVar17;
    if (((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                      (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17._12_4_ >> 7 & 1) != 0) || (auVar17._12_4_ >> 0xf & 1) != 0) ||
         (auVar17._12_4_ >> 0x17 & 1) != 0) || uVar2 != 0) || uVar5 != 0) goto LAB_007a0000;
  }
  else {
    puVar8 = (uint *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar18._0_4_ = -(uint)(*puVar8 == 0);
    auVar18._4_4_ = -(uint)(puVar8[1] == 0);
    auVar18._8_4_ = -(uint)(puVar8[2] == 0);
    auVar18._12_4_ = -(uint)(puVar8[3] == 0);
    auVar12._0_4_ = -(uint)(*puVar8 == param_2);
    auVar12._4_4_ = -(uint)(puVar8[1] == param_2);
    auVar12._8_4_ = -(uint)(puVar8[2] == param_2);
    auVar12._12_4_ = -(uint)(puVar8[3] == param_2);
    sVar6 = (sbyte)((ulong)param_1 & 0xf);
    uVar7 = (long)(ulong)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(byte)(auVar18._12_4_ >> 0x1f) << 0xf) >> sVar6;
    uVar5 = (long)(ulong)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)((byte)(auVar12._12_4_ >> 7) & 1) << 0xc |
                                  (ushort)((byte)(auVar12._12_4_ >> 0xf) & 1) << 0xd |
                                  (ushort)((byte)(auVar12._12_4_ >> 0x17) & 1) << 0xe |
                                 (ushort)(byte)(auVar12._12_4_ >> 0x1f) << 0xf) >> sVar6;
    if (uVar5 != 0) {
      uVar1 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (uVar7 != 0) {
        uVar5 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (uVar5 < uVar1) {
          return 0;
        }
      }
      return (long)puVar8 + ((ulong)param_1 & 0xf) + uVar1;
    }
    if (uVar7 != 0) {
      return 0;
    }
    puVar8 = puVar8 + 4;
    auVar12 = (undefined1  [16])0x0;
  }
  do {
    auVar17._0_4_ = -(uint)(auVar12._0_4_ == *puVar8);
    auVar17._4_4_ = -(uint)(auVar12._4_4_ == puVar8[1]);
    auVar17._8_4_ = -(uint)(auVar12._8_4_ == puVar8[2]);
    uVar2 = (uint)(auVar12._12_4_ == puVar8[3]);
    auVar17._12_4_ = -uVar2;
    puVar9 = puVar8 + 4;
    auVar13._0_4_ = -(uint)(*puVar8 == param_2);
    auVar13._4_4_ = -(uint)(puVar8[1] == param_2);
    auVar13._8_4_ = -(uint)(puVar8[2] == param_2);
    auVar13._12_4_ = -(uint)(puVar8[3] == param_2);
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar13._12_4_ >> 0x1f) << 0xf);
    if (((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                      (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17._12_4_ >> 7 & 1) != 0) || (auVar17._12_4_ >> 0xf & 1) != 0) ||
         (auVar17._12_4_ >> 0x17 & 1) != 0) || uVar2 != 0) || uVar5 != 0) break;
    uVar4 = *puVar9;
    auVar17._0_4_ = -(uint)(auVar17._0_4_ == uVar4);
    auVar17._4_4_ = -(uint)(auVar17._4_4_ == puVar8[5]);
    auVar17._8_4_ = -(uint)(auVar17._8_4_ == puVar8[6]);
    uVar2 = (uint)(auVar17._12_4_ == puVar8[7]);
    auVar17._12_4_ = -uVar2;
    puVar9 = puVar8 + 8;
    auVar14._0_4_ = -(uint)(uVar4 == param_2);
    auVar14._4_4_ = -(uint)(puVar8[5] == param_2);
    auVar14._8_4_ = -(uint)(puVar8[6] == param_2);
    auVar14._12_4_ = -(uint)(puVar8[7] == param_2);
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                            (ushort)((byte)(auVar14._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar14._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar14._12_4_ >> 0x17) & 1) << 0xe |
                           (ushort)(byte)(auVar14._12_4_ >> 0x1f) << 0xf);
    if (((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                      (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17._12_4_ >> 7 & 1) != 0) || (auVar17._12_4_ >> 0xf & 1) != 0) ||
         (auVar17._12_4_ >> 0x17 & 1) != 0) || uVar2 != 0) || uVar5 != 0) break;
    uVar4 = *puVar9;
    auVar17._0_4_ = -(uint)(auVar17._0_4_ == uVar4);
    auVar17._4_4_ = -(uint)(auVar17._4_4_ == puVar8[9]);
    auVar17._8_4_ = -(uint)(auVar17._8_4_ == puVar8[10]);
    uVar2 = (uint)(auVar17._12_4_ == puVar8[0xb]);
    auVar17._12_4_ = -uVar2;
    puVar9 = puVar8 + 0xc;
    auVar15._0_4_ = -(uint)(uVar4 == param_2);
    auVar15._4_4_ = -(uint)(puVar8[9] == param_2);
    auVar15._8_4_ = -(uint)(puVar8[10] == param_2);
    auVar15._12_4_ = -(uint)(puVar8[0xb] == param_2);
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                            (ushort)((byte)(auVar15._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar15._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar15._12_4_ >> 0x17) & 1) << 0xe |
                           (ushort)(byte)(auVar15._12_4_ >> 0x1f) << 0xf);
    if (((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                      (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17._12_4_ >> 7 & 1) != 0) || (auVar17._12_4_ >> 0xf & 1) != 0) ||
         (auVar17._12_4_ >> 0x17 & 1) != 0) || uVar2 != 0) || uVar5 != 0) break;
    uVar4 = *puVar9;
    auVar17._0_4_ = -(uint)(auVar17._0_4_ == uVar4);
    auVar17._4_4_ = -(uint)(auVar17._4_4_ == puVar8[0xd]);
    auVar17._8_4_ = -(uint)(auVar17._8_4_ == puVar8[0xe]);
    uVar2 = (uint)(auVar17._12_4_ == puVar8[0xf]);
    auVar17._12_4_ = -uVar2;
    puVar9 = puVar8 + 0x10;
    auVar16._0_4_ = -(uint)(uVar4 == param_2);
    auVar16._4_4_ = -(uint)(puVar8[0xd] == param_2);
    auVar16._8_4_ = -(uint)(puVar8[0xe] == param_2);
    auVar16._12_4_ = -(uint)(puVar8[0xf] == param_2);
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                            (ushort)((byte)(auVar16._12_4_ >> 7) & 1) << 0xc |
                            (ushort)((byte)(auVar16._12_4_ >> 0xf) & 1) << 0xd |
                            (ushort)((byte)(auVar16._12_4_ >> 0x17) & 1) << 0xe |
                           (ushort)(byte)(auVar16._12_4_ >> 0x1f) << 0xf);
    puVar8 = puVar9;
    auVar12 = auVar17;
  } while (((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                         (auVar17 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar17 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar17 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar17 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar17 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar17 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar17 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar17 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar17 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar17 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar17 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar17._12_4_ >> 7 & 1) == 0) && (auVar17._12_4_ >> 0xf & 1) == 0) &&
            (auVar17._12_4_ >> 0x17 & 1) == 0) && uVar2 == 0) && uVar5 == 0);
LAB_007a0000:
  uVar3 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
          (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
  if (uVar5 == 0) {
    return 0;
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  if (uVar3 != 0) {
    uVar5 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (uVar5 < uVar7) {
      return 0;
    }
  }
  return (long)puVar9 + (uVar7 - 0x10);
}

