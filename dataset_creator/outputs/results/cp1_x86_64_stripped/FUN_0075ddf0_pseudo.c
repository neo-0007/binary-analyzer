
ulong FUN_0075ddf0(int *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar23;
  uint uVar25;
  undefined1 auVar14 [16];
  uint uVar27;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar24;
  uint uVar26;
  uint uVar28;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  uint uVar50;
  uint uVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar54 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  bVar9 = (byte)param_1;
  if (param_2 >> 0x3e != 0) {
    if (((ulong)param_1 & 0xfff) < 0xfd0) {
      auVar54._0_4_ = -(uint)(*param_1 == 0);
      auVar54._4_4_ = -(uint)(param_1[1] == 0);
      auVar54._8_4_ = -(uint)(param_1[2] == 0);
      auVar54._12_4_ = -(uint)(param_1[3] == 0);
      uVar3 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
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
              (ushort)(byte)(auVar54._12_4_ >> 0x1f) << 0xf;
      if (uVar3 != 0) {
        uVar50 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar50 & 1) == 0; uVar50 = uVar50 + 1) {
          }
        }
        return (ulong)(uVar50 >> 2);
      }
      uVar10 = (ulong)param_1 & 0xfffffffffffffff0;
      auVar30._0_4_ = -(uint)(*(int *)(uVar10 + 0x10) == 0);
      auVar30._4_4_ = -(uint)(*(int *)(uVar10 + 0x14) == 0);
      auVar30._8_4_ = -(uint)(*(int *)(uVar10 + 0x18) == 0);
      auVar30._12_4_ = -(uint)(*(int *)(uVar10 + 0x1c) == 0);
      auVar37._0_4_ = -(uint)(*(int *)(uVar10 + 0x20) == 0);
      auVar37._4_4_ = -(uint)(*(int *)(uVar10 + 0x24) == 0);
      auVar37._8_4_ = -(uint)(*(int *)(uVar10 + 0x28) == 0);
      auVar37._12_4_ = -(uint)(*(int *)(uVar10 + 0x2c) == 0);
      auVar44._0_4_ = -(uint)(*(int *)(uVar10 + 0x30) == 0);
      auVar44._4_4_ = -(uint)(*(int *)(uVar10 + 0x34) == 0);
      auVar44._8_4_ = -(uint)(*(int *)(uVar10 + 0x38) == 0);
      auVar44._12_4_ = -(uint)(*(int *)(uVar10 + 0x3c) == 0);
      uVar10 = (long)((ulong)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                                     (ushort)(byte)(auVar30._12_4_ >> 0x1f) << 0xf) << 0x10 |
                     (ulong)CONCAT22((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)((byte)(auVar44._12_4_ >> 7) & 1) << 0xc |
                                     (ushort)((byte)(auVar44._12_4_ >> 0xf) & 1) << 0xd |
                                     (ushort)((byte)(auVar44._12_4_ >> 0x17) & 1) << 0xe |
                                     (ushort)(byte)(auVar44._12_4_ >> 0x1f) << 0xf,
                                     (ushort)(SUB161(auVar37 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar37._12_4_ >> 0x1f) << 0xf) << 0x20) >>
               ((bVar9 ^ (byte)uVar10) & 0x3f);
      puVar4 = (uint *)((ulong)param_1 & 0xffffffffffffffc0);
      if (uVar10 != 0) {
        uVar11 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        return uVar11 >> 2;
      }
    }
    else {
      puVar4 = (uint *)((ulong)param_1 & 0xffffffffffffffc0);
      auVar14._0_4_ = -(uint)(*puVar4 == 0);
      auVar14._4_4_ = -(uint)(puVar4[1] == 0);
      auVar14._8_4_ = -(uint)(puVar4[2] == 0);
      auVar14._12_4_ = -(uint)(puVar4[3] == 0);
      auVar29._0_4_ = -(uint)(puVar4[4] == 0);
      auVar29._4_4_ = -(uint)(puVar4[5] == 0);
      auVar29._8_4_ = -(uint)(puVar4[6] == 0);
      auVar29._12_4_ = -(uint)(puVar4[7] == 0);
      auVar36._0_4_ = -(uint)(puVar4[8] == 0);
      auVar36._4_4_ = -(uint)(puVar4[9] == 0);
      auVar36._8_4_ = -(uint)(puVar4[10] == 0);
      auVar36._12_4_ = -(uint)(puVar4[0xb] == 0);
      auVar43._0_4_ = -(uint)(puVar4[0xc] == 0);
      auVar43._4_4_ = -(uint)(puVar4[0xd] == 0);
      auVar43._8_4_ = -(uint)(puVar4[0xe] == 0);
      auVar43._12_4_ = -(uint)(puVar4[0xf] == 0);
      uVar10 = CONCAT44(CONCAT22((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                                 (ushort)((byte)(auVar43._12_4_ >> 7) & 1) << 0xc |
                                 (ushort)((byte)(auVar43._12_4_ >> 0xf) & 1) << 0xd |
                                 (ushort)((byte)(auVar43._12_4_ >> 0x17) & 1) << 0xe |
                                 (ushort)(byte)(auVar43._12_4_ >> 0x1f) << 0xf,
                                 (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
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
                                 (ushort)(byte)(auVar36._12_4_ >> 0x1f) << 0xf),
                        CONCAT22((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                 (ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar14._12_4_ >> 0x1f) << 0xf)) >> (bVar9 & 0x3f);
      if (uVar10 != 0) {
        uVar11 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        return uVar11 >> 2;
      }
      auVar30 = (undefined1  [16])0x0;
      auVar37 = (undefined1  [16])0x0;
      auVar44 = (undefined1  [16])0x0;
    }
    do {
      uVar50 = puVar4[0x10];
      uVar51 = puVar4[0x11];
      uVar52 = puVar4[0x12];
      uVar53 = puVar4[0x13];
      uVar12 = puVar4[0x14];
      uVar23 = puVar4[0x15];
      uVar25 = puVar4[0x16];
      uVar27 = puVar4[0x17];
      uVar12 = (uVar12 < uVar50) * uVar12 | (uVar12 >= uVar50) * uVar50;
      uVar23 = (uVar23 < uVar51) * uVar23 | (uVar23 >= uVar51) * uVar51;
      uVar25 = (uVar25 < uVar52) * uVar25 | (uVar25 >= uVar52) * uVar52;
      uVar27 = (uVar27 < uVar53) * uVar27 | (uVar27 >= uVar53) * uVar53;
      uVar50 = puVar4[0x18];
      uVar51 = puVar4[0x19];
      uVar52 = puVar4[0x1a];
      uVar53 = puVar4[0x1b];
      uVar12 = (uVar50 < uVar12) * uVar50 | (uVar50 >= uVar12) * uVar12;
      uVar23 = (uVar51 < uVar23) * uVar51 | (uVar51 >= uVar23) * uVar23;
      uVar25 = (uVar52 < uVar25) * uVar52 | (uVar52 >= uVar25) * uVar25;
      uVar27 = (uVar53 < uVar27) * uVar53 | (uVar53 >= uVar27) * uVar27;
      uVar50 = puVar4[0x1c];
      uVar51 = puVar4[0x1d];
      uVar52 = puVar4[0x1e];
      uVar53 = puVar4[0x1f];
      uVar13 = auVar44._0_4_;
      auVar15._0_4_ = -(uint)(((uVar50 < uVar12) * uVar50 | (uVar50 >= uVar12) * uVar12) == uVar13);
      uVar50 = auVar44._4_4_;
      auVar15._4_4_ = -(uint)(((uVar51 < uVar23) * uVar51 | (uVar51 >= uVar23) * uVar23) == uVar50);
      uVar51 = auVar44._8_4_;
      auVar15._8_4_ = -(uint)(((uVar52 < uVar25) * uVar52 | (uVar52 >= uVar25) * uVar25) == uVar51);
      uVar52 = auVar44._12_4_;
      bVar2 = ((uVar53 < uVar27) * uVar53 | (uVar53 >= uVar27) * uVar27) == uVar52;
      auVar15._12_4_ = -(uint)bVar2;
      if ((((((((((((((((auVar15 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar15 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar15 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar15 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar15 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar15 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar15 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar15 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar15 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar15 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar15 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar15 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar15._12_4_ >> 7 & 1) != 0) || (auVar15._12_4_ >> 0xf & 1) != 0) ||
          (auVar15._12_4_ >> 0x17 & 1) != 0) || bVar2) {
        puVar5 = puVar4 + 0x10;
        break;
      }
      puVar5 = puVar4 + 0x20;
      uVar53 = *puVar5;
      uVar12 = puVar4[0x21];
      uVar23 = puVar4[0x22];
      uVar25 = puVar4[0x23];
      uVar27 = puVar4[0x24];
      uVar24 = puVar4[0x25];
      uVar26 = puVar4[0x26];
      uVar28 = puVar4[0x27];
      uVar27 = (uVar27 < uVar53) * uVar27 | (uVar27 >= uVar53) * uVar53;
      uVar24 = (uVar24 < uVar12) * uVar24 | (uVar24 >= uVar12) * uVar12;
      uVar26 = (uVar26 < uVar23) * uVar26 | (uVar26 >= uVar23) * uVar23;
      uVar28 = (uVar28 < uVar25) * uVar28 | (uVar28 >= uVar25) * uVar25;
      uVar53 = puVar4[0x28];
      uVar12 = puVar4[0x29];
      uVar23 = puVar4[0x2a];
      uVar25 = puVar4[0x2b];
      uVar27 = (uVar53 < uVar27) * uVar53 | (uVar53 >= uVar27) * uVar27;
      uVar24 = (uVar12 < uVar24) * uVar12 | (uVar12 >= uVar24) * uVar24;
      uVar26 = (uVar23 < uVar26) * uVar23 | (uVar23 >= uVar26) * uVar26;
      uVar28 = (uVar25 < uVar28) * uVar25 | (uVar25 >= uVar28) * uVar28;
      uVar53 = puVar4[0x2c];
      uVar12 = puVar4[0x2d];
      uVar23 = puVar4[0x2e];
      uVar25 = puVar4[0x2f];
      auVar16._0_4_ = -(uint)(((uVar53 < uVar27) * uVar53 | (uVar53 >= uVar27) * uVar27) == uVar13);
      auVar16._4_4_ = -(uint)(((uVar12 < uVar24) * uVar12 | (uVar12 >= uVar24) * uVar24) == uVar50);
      auVar16._8_4_ = -(uint)(((uVar23 < uVar26) * uVar23 | (uVar23 >= uVar26) * uVar26) == uVar51);
      bVar2 = ((uVar25 < uVar28) * uVar25 | (uVar25 >= uVar28) * uVar28) == uVar52;
      auVar16._12_4_ = -(uint)bVar2;
      puVar4 = puVar5;
    } while ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                          (auVar16 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar16 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar16 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar16 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar16 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar16 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar16 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar16 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar16 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar16 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar16 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar16._12_4_ >> 7 & 1) == 0) && (auVar16._12_4_ >> 0xf & 1) == 0) &&
             (auVar16._12_4_ >> 0x17 & 1) == 0) && !bVar2);
    auVar17._0_4_ = -(uint)(*puVar5 == 0);
    auVar17._4_4_ = -(uint)(puVar5[1] == 0);
    auVar17._8_4_ = -(uint)(puVar5[2] == 0);
    auVar17._12_4_ = -(uint)(puVar5[3] == 0);
    auVar31._0_4_ = -(uint)(auVar30._0_4_ == puVar5[4]);
    auVar31._4_4_ = -(uint)(auVar30._4_4_ == puVar5[5]);
    auVar31._8_4_ = -(uint)(auVar30._8_4_ == puVar5[6]);
    auVar31._12_4_ = -(uint)(auVar30._12_4_ == puVar5[7]);
    auVar38._0_4_ = -(uint)(auVar37._0_4_ == puVar5[8]);
    auVar38._4_4_ = -(uint)(auVar37._4_4_ == puVar5[9]);
    auVar38._8_4_ = -(uint)(auVar37._8_4_ == puVar5[10]);
    auVar38._12_4_ = -(uint)(auVar37._12_4_ == puVar5[0xb]);
    auVar45._0_4_ = -(uint)(uVar13 == puVar5[0xc]);
    auVar45._4_4_ = -(uint)(uVar50 == puVar5[0xd]);
    auVar45._8_4_ = -(uint)(uVar51 == puVar5[0xe]);
    auVar45._12_4_ = -(uint)(uVar52 == puVar5[0xf]);
    uVar10 = CONCAT44(CONCAT22((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                               (ushort)((byte)(auVar45._12_4_ >> 7) & 1) << 0xc |
                               (ushort)((byte)(auVar45._12_4_ >> 0xf) & 1) << 0xd |
                               (ushort)((byte)(auVar45._12_4_ >> 0x17) & 1) << 0xe |
                               (ushort)(byte)(auVar45._12_4_ >> 0x1f) << 0xf,
                               (ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar38._12_4_ >> 0x1f) << 0xf),
                      CONCAT22((ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar31._12_4_ >> 0x1f) << 0xf,
                               (ushort)(SUB161(auVar17 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                               (ushort)((byte)(auVar17._12_4_ >> 7) & 1) << 0xc |
                               (ushort)((byte)(auVar17._12_4_ >> 0xf) & 1) << 0xd |
                               (ushort)((byte)(auVar17._12_4_ >> 0x17) & 1) << 0xe |
                               (ushort)(byte)(auVar17._12_4_ >> 0x1f) << 0xf));
    lVar1 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
      }
    }
    return (ulong)((long)puVar5 + (lVar1 - (long)param_1)) >> 2;
  }
  puVar4 = (uint *)(param_1 + param_2);
  if (((ulong)param_1 & 0xfff) < 0xfd0) {
    piVar6 = (int *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar18._0_4_ = -(uint)(*piVar6 == 0);
    auVar18._4_4_ = -(uint)(piVar6[1] == 0);
    auVar18._8_4_ = -(uint)(piVar6[2] == 0);
    auVar18._12_4_ = -(uint)(piVar6[3] == 0);
    auVar33._0_4_ = -(uint)(piVar6[4] == 0);
    auVar33._4_4_ = -(uint)(piVar6[5] == 0);
    auVar33._8_4_ = -(uint)(piVar6[6] == 0);
    auVar33._12_4_ = -(uint)(piVar6[7] == 0);
    auVar40._0_4_ = -(uint)(piVar6[8] == 0);
    auVar40._4_4_ = -(uint)(piVar6[9] == 0);
    auVar40._8_4_ = -(uint)(piVar6[10] == 0);
    auVar40._12_4_ = -(uint)(piVar6[0xb] == 0);
    auVar47._0_4_ = -(uint)(piVar6[0xc] == 0);
    auVar47._4_4_ = -(uint)(piVar6[0xd] == 0);
    auVar47._8_4_ = -(uint)(piVar6[0xe] == 0);
    auVar47._12_4_ = -(uint)(piVar6[0xf] == 0);
    uVar10 = CONCAT44(CONCAT22((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                               (ushort)(byte)(auVar47._12_4_ >> 0x1f) << 0xf,
                               (ushort)(SUB161(auVar40 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar40._12_4_ >> 0x1f) << 0xf),
                      CONCAT22((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(byte)(auVar33._12_4_ >> 0x1f) << 0xf,
                               (ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar18._12_4_ >> 0x1f) << 0xf));
    uVar11 = (long)puVar4 - (long)piVar6;
    piVar7 = (int *)((ulong)param_1 ^ (ulong)piVar6);
    if ((uVar11 & 0xffffffffffffffc0) != 0) {
      uVar10 = (long)uVar10 >> ((byte)(int *)((ulong)param_1 ^ (ulong)piVar6) & 0x3f);
      puVar5 = (uint *)((ulong)param_1 & 0xffffffffffffffc0);
      if (uVar10 != 0) {
        uVar11 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        return uVar11 >> 2;
      }
      goto LAB_0075df40;
    }
LAB_0075df17:
    uVar10 = (long)(uVar10 | 1L << (uVar11 & 0x3f)) >> ((byte)piVar7 & 0x3f);
    if (uVar10 != 0) {
      uVar11 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      return uVar11 >> 2;
    }
  }
  else {
    piVar7 = (int *)((ulong)param_1 & 0xffffffffffffffc0);
    auVar19._0_4_ = -(uint)(*piVar7 == 0);
    auVar19._4_4_ = -(uint)(piVar7[1] == 0);
    auVar19._8_4_ = -(uint)(piVar7[2] == 0);
    auVar19._12_4_ = -(uint)(piVar7[3] == 0);
    auVar32._0_4_ = -(uint)(piVar7[4] == 0);
    auVar32._4_4_ = -(uint)(piVar7[5] == 0);
    auVar32._8_4_ = -(uint)(piVar7[6] == 0);
    auVar32._12_4_ = -(uint)(piVar7[7] == 0);
    auVar39._0_4_ = -(uint)(piVar7[8] == 0);
    auVar39._4_4_ = -(uint)(piVar7[9] == 0);
    auVar39._8_4_ = -(uint)(piVar7[10] == 0);
    auVar39._12_4_ = -(uint)(piVar7[0xb] == 0);
    auVar46._0_4_ = -(uint)(piVar7[0xc] == 0);
    auVar46._4_4_ = -(uint)(piVar7[0xd] == 0);
    auVar46._8_4_ = -(uint)(piVar7[0xe] == 0);
    auVar46._12_4_ = -(uint)(piVar7[0xf] == 0);
    uVar10 = CONCAT44(CONCAT22((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
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
                               (ushort)(byte)(auVar46._12_4_ >> 0x1f) << 0xf,
                               (ushort)(SUB161(auVar39 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar39._12_4_ >> 0x1f) << 0xf),
                      CONCAT22((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar32._12_4_ >> 0x1f) << 0xf,
                               (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(byte)(auVar19._12_4_ >> 0x1f) << 0xf));
    uVar11 = (long)puVar4 - (long)piVar7;
    piVar7 = param_1;
    if ((uVar11 & 0xffffffffffffffc0) == 0) goto LAB_0075df17;
    uVar10 = (long)uVar10 >> (bVar9 & 0x3f);
    if (uVar10 != 0) {
      uVar11 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      return uVar11 >> 2;
    }
  }
  auVar33 = (undefined1  [16])0x0;
  auVar40 = (undefined1  [16])0x0;
  auVar47 = (undefined1  [16])0x0;
  puVar5 = (uint *)((ulong)param_1 & 0xffffffffffffffc0);
LAB_0075df40:
  do {
    puVar8 = puVar5;
    puVar5 = puVar8 + 0x10;
    uVar50 = auVar47._0_4_;
    uVar51 = auVar47._4_4_;
    uVar52 = auVar47._8_4_;
    uVar53 = auVar47._12_4_;
    if ((uint *)((ulong)puVar4 & 0xffffffffffffffc0) == puVar5) {
      if (puVar4 != puVar5) {
        auVar21._0_4_ = -(uint)(*puVar5 == 0);
        auVar21._4_4_ = -(uint)(puVar8[0x11] == 0);
        auVar21._8_4_ = -(uint)(puVar8[0x12] == 0);
        auVar21._12_4_ = -(uint)(puVar8[0x13] == 0);
        auVar34._0_4_ = -(uint)(auVar33._0_4_ == puVar8[0x14]);
        auVar34._4_4_ = -(uint)(auVar33._4_4_ == puVar8[0x15]);
        auVar34._8_4_ = -(uint)(auVar33._8_4_ == puVar8[0x16]);
        auVar34._12_4_ = -(uint)(auVar33._12_4_ == puVar8[0x17]);
        auVar41._0_4_ = -(uint)(auVar40._0_4_ == puVar8[0x18]);
        auVar41._4_4_ = -(uint)(auVar40._4_4_ == puVar8[0x19]);
        auVar41._8_4_ = -(uint)(auVar40._8_4_ == puVar8[0x1a]);
        auVar41._12_4_ = -(uint)(auVar40._12_4_ == puVar8[0x1b]);
        auVar48._0_4_ = -(uint)(uVar50 == puVar8[0x1c]);
        auVar48._4_4_ = -(uint)(uVar51 == puVar8[0x1d]);
        auVar48._8_4_ = -(uint)(uVar52 == puVar8[0x1e]);
        auVar48._12_4_ = -(uint)(uVar53 == puVar8[0x1f]);
        uVar10 = CONCAT44(CONCAT22((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar48._12_4_ >> 0x1f) << 0xf,
                                   (ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar41._12_4_ >> 0x1f) << 0xf),
                          CONCAT22((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
                                   (ushort)(byte)(auVar34._12_4_ >> 0x1f) << 0xf,
                                   (ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar21._12_4_ >> 0x1f) << 0xf));
      }
      uVar10 = uVar10 | 1L << ((ulong)puVar4 & 0x3f);
      lVar1 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      return (ulong)((long)puVar5 + (lVar1 - (long)param_1)) >> 2;
    }
    uVar12 = *puVar5;
    uVar23 = puVar8[0x11];
    uVar25 = puVar8[0x12];
    uVar27 = puVar8[0x13];
    uVar13 = puVar8[0x14];
    uVar24 = puVar8[0x15];
    uVar26 = puVar8[0x16];
    uVar28 = puVar8[0x17];
    uVar13 = (uVar13 < uVar12) * uVar13 | (uVar13 >= uVar12) * uVar12;
    uVar24 = (uVar24 < uVar23) * uVar24 | (uVar24 >= uVar23) * uVar23;
    uVar26 = (uVar26 < uVar25) * uVar26 | (uVar26 >= uVar25) * uVar25;
    uVar28 = (uVar28 < uVar27) * uVar28 | (uVar28 >= uVar27) * uVar27;
    uVar12 = puVar8[0x18];
    uVar23 = puVar8[0x19];
    uVar25 = puVar8[0x1a];
    uVar27 = puVar8[0x1b];
    uVar13 = (uVar12 < uVar13) * uVar12 | (uVar12 >= uVar13) * uVar13;
    uVar24 = (uVar23 < uVar24) * uVar23 | (uVar23 >= uVar24) * uVar24;
    uVar26 = (uVar25 < uVar26) * uVar25 | (uVar25 >= uVar26) * uVar26;
    uVar28 = (uVar27 < uVar28) * uVar27 | (uVar27 >= uVar28) * uVar28;
    uVar12 = puVar8[0x1c];
    uVar23 = puVar8[0x1d];
    uVar25 = puVar8[0x1e];
    uVar27 = puVar8[0x1f];
    auVar20._0_4_ = -(uint)(((uVar12 < uVar13) * uVar12 | (uVar12 >= uVar13) * uVar13) == uVar50);
    auVar20._4_4_ = -(uint)(((uVar23 < uVar24) * uVar23 | (uVar23 >= uVar24) * uVar24) == uVar51);
    auVar20._8_4_ = -(uint)(((uVar25 < uVar26) * uVar25 | (uVar25 >= uVar26) * uVar26) == uVar52);
    auVar20._12_4_ = -(uint)(((uVar27 < uVar28) * uVar27 | (uVar27 >= uVar28) * uVar28) == uVar53);
    uVar3 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
            (ushort)(byte)(auVar20._12_4_ >> 0x1f) << 0xf;
    uVar10 = (ulong)uVar3;
  } while (uVar3 == 0);
  auVar22._0_4_ = -(uint)(*puVar5 == 0);
  auVar22._4_4_ = -(uint)(puVar8[0x11] == 0);
  auVar22._8_4_ = -(uint)(puVar8[0x12] == 0);
  auVar22._12_4_ = -(uint)(puVar8[0x13] == 0);
  auVar35._0_4_ = -(uint)(auVar33._0_4_ == puVar8[0x14]);
  auVar35._4_4_ = -(uint)(auVar33._4_4_ == puVar8[0x15]);
  auVar35._8_4_ = -(uint)(auVar33._8_4_ == puVar8[0x16]);
  auVar35._12_4_ = -(uint)(auVar33._12_4_ == puVar8[0x17]);
  auVar42._0_4_ = -(uint)(auVar40._0_4_ == puVar8[0x18]);
  auVar42._4_4_ = -(uint)(auVar40._4_4_ == puVar8[0x19]);
  auVar42._8_4_ = -(uint)(auVar40._8_4_ == puVar8[0x1a]);
  auVar42._12_4_ = -(uint)(auVar40._12_4_ == puVar8[0x1b]);
  auVar49._0_4_ = -(uint)(uVar50 == puVar8[0x1c]);
  auVar49._4_4_ = -(uint)(uVar51 == puVar8[0x1d]);
  auVar49._8_4_ = -(uint)(uVar52 == puVar8[0x1e]);
  auVar49._12_4_ = -(uint)(uVar53 == puVar8[0x1f]);
  uVar10 = CONCAT44(CONCAT22((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar49._12_4_ >> 0x1f) << 0xf,
                             (ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar42._12_4_ >> 0x1f) << 0xf),
                    CONCAT22((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
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
                             (ushort)(byte)(auVar35._12_4_ >> 0x1f) << 0xf,
                             (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar22._12_4_ >> 0x1f) << 0xf));
  lVar1 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (ulong)((long)puVar5 + (lVar1 - (long)param_1)) >> 2;
}

