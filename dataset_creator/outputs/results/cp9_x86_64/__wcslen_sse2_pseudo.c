
ulong __wcslen_sse2(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  int *piVar7;
  ushort uVar8;
  byte bVar9;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar31;
  byte bVar41;
  int iVar32;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte bVar53;
  undefined1 auVar38 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar33 [12];
  undefined1 auVar37 [16];
  
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[1] == 0) {
    return 1;
  }
  if (param_1[2] == 0) {
    return 2;
  }
  if (param_1[3] == 0) {
    return 3;
  }
  if (param_1[4] == 0) {
    return 4;
  }
  if (param_1[5] == 0) {
    return 5;
  }
  if (param_1[6] == 0) {
    return 6;
  }
  if (param_1[7] == 0) {
    return 7;
  }
  piVar1 = param_1 + 4;
  piVar3 = (int *)((ulong)(param_1 + 8) & 0xfffffffffffffff0);
  auVar10._0_4_ = -(uint)(*piVar3 == 0);
  auVar10._4_4_ = -(uint)(piVar3[1] == 0);
  auVar10._8_4_ = -(uint)(piVar3[2] == 0);
  auVar10._12_4_ = -(uint)(piVar3[3] == 0);
  uVar8 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
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
          (ushort)(byte)(auVar10._12_4_ >> 0x1f) << 0xf;
  pbVar5 = (byte *)(piVar3 + 4);
  piVar7 = piVar1;
  if (uVar8 == 0) {
    auVar28._0_4_ = -(uint)(*(int *)pbVar5 == 0);
    auVar28._4_4_ = -(uint)(piVar3[5] == 0);
    auVar28._8_4_ = -(uint)(piVar3[6] == 0);
    auVar28._12_4_ = -(uint)(piVar3[7] == 0);
    uVar8 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
            (ushort)(byte)(auVar28._12_4_ >> 0x1f) << 0xf;
    pbVar5 = (byte *)(piVar3 + 8);
    if (uVar8 == 0) {
      auVar34._0_4_ = -(uint)(*(int *)pbVar5 == 0);
      auVar34._4_4_ = -(uint)(piVar3[9] == 0);
      auVar34._8_4_ = -(uint)(piVar3[10] == 0);
      auVar34._12_4_ = -(uint)(piVar3[0xb] == 0);
      uVar8 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
              (ushort)(byte)(auVar34._12_4_ >> 0x1f) << 0xf;
      pbVar5 = (byte *)(piVar3 + 0xc);
      if (uVar8 == 0) {
        auVar54._0_4_ = -(uint)(*(int *)pbVar5 == 0);
        auVar54._4_4_ = -(uint)(piVar3[0xd] == 0);
        auVar54._8_4_ = -(uint)(piVar3[0xe] == 0);
        auVar54._12_4_ = -(uint)(piVar3[0xf] == 0);
        uVar8 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
        pbVar5 = (byte *)(piVar3 + 0x10);
        if (uVar8 == 0) {
          auVar11._0_4_ = -(uint)(auVar10._0_4_ == *(int *)pbVar5);
          auVar11._4_4_ = -(uint)(auVar10._4_4_ == piVar3[0x11]);
          auVar11._8_4_ = -(uint)(auVar10._8_4_ == piVar3[0x12]);
          auVar11._12_4_ = -(uint)(auVar10._12_4_ == piVar3[0x13]);
          uVar8 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(byte)(auVar11._12_4_ >> 0x1f) << 0xf;
          pbVar5 = (byte *)(piVar3 + 0x14);
          if (uVar8 == 0) {
            auVar29._0_4_ = -(uint)(auVar28._0_4_ == *(int *)pbVar5);
            auVar29._4_4_ = -(uint)(auVar28._4_4_ == piVar3[0x15]);
            auVar29._8_4_ = -(uint)(auVar28._8_4_ == piVar3[0x16]);
            auVar29._12_4_ = -(uint)(auVar28._12_4_ == piVar3[0x17]);
            uVar8 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar29._12_4_ >> 0x1f) << 0xf;
            pbVar5 = (byte *)(piVar3 + 0x18);
            if (uVar8 == 0) {
              auVar35._0_4_ = -(uint)(auVar34._0_4_ == *(int *)pbVar5);
              auVar35._4_4_ = -(uint)(auVar34._4_4_ == piVar3[0x19]);
              auVar35._8_4_ = -(uint)(auVar34._8_4_ == piVar3[0x1a]);
              auVar35._12_4_ = -(uint)(auVar34._12_4_ == piVar3[0x1b]);
              uVar8 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
                      (ushort)(byte)(auVar35._12_4_ >> 0x1f) << 0xf;
              pbVar5 = (byte *)(piVar3 + 0x1c);
              if (uVar8 == 0) {
                auVar55._0_4_ = -(uint)(auVar54._0_4_ == *(int *)pbVar5);
                auVar55._4_4_ = -(uint)(auVar54._4_4_ == piVar3[0x1d]);
                auVar55._8_4_ = -(uint)(auVar54._8_4_ == piVar3[0x1e]);
                auVar55._12_4_ = -(uint)(auVar54._12_4_ == piVar3[0x1f]);
                uVar8 = (ushort)(SUB161(auVar55 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
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
                        (ushort)(byte)(auVar55._12_4_ >> 0x1f) << 0xf;
                pbVar5 = (byte *)(piVar3 + 0x20);
                if (uVar8 == 0) {
                  auVar12._0_4_ = -(uint)(auVar11._0_4_ == *(int *)pbVar5);
                  auVar12._4_4_ = -(uint)(auVar11._4_4_ == piVar3[0x21]);
                  auVar12._8_4_ = -(uint)(auVar11._8_4_ == piVar3[0x22]);
                  auVar12._12_4_ = -(uint)(auVar11._12_4_ == piVar3[0x23]);
                  uVar8 = (ushort)(SUB161(auVar12 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar12._12_4_ >> 0x1f) << 0xf;
                  pbVar5 = (byte *)(piVar3 + 0x24);
                  if (uVar8 == 0) {
                    auVar30._0_4_ = -(uint)(auVar29._0_4_ == *(int *)pbVar5);
                    auVar30._4_4_ = -(uint)(auVar29._4_4_ == piVar3[0x25]);
                    auVar30._8_4_ = -(uint)(auVar29._8_4_ == piVar3[0x26]);
                    auVar30._12_4_ = -(uint)(auVar29._12_4_ == piVar3[0x27]);
                    uVar8 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar30._12_4_ >> 0x1f) << 0xf;
                    pbVar5 = (byte *)(piVar3 + 0x28);
                    if (uVar8 == 0) {
                      auVar36._0_4_ = -(uint)(auVar35._0_4_ == *(int *)pbVar5);
                      auVar36._4_4_ = -(uint)(auVar35._4_4_ == piVar3[0x29]);
                      auVar36._8_4_ = -(uint)(auVar35._8_4_ == piVar3[0x2a]);
                      auVar36._12_4_ = -(uint)(auVar35._12_4_ == piVar3[0x2b]);
                      uVar8 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar36._12_4_ >> 0x1f) << 0xf;
                      pbVar5 = (byte *)(piVar3 + 0x2c);
                      if (uVar8 == 0) {
                        auVar56._0_4_ = -(uint)(auVar55._0_4_ == *(int *)pbVar5);
                        auVar56._4_4_ = -(uint)(auVar55._4_4_ == piVar3[0x2d]);
                        auVar56._8_4_ = -(uint)(auVar55._8_4_ == piVar3[0x2e]);
                        auVar56._12_4_ = -(uint)(auVar55._12_4_ == piVar3[0x2f]);
                        uVar8 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar56._12_4_ >> 0x1f) << 0xf;
                        pbVar5 = (byte *)(piVar3 + 0x30);
                        if (uVar8 == 0) {
                          pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffffffc0);
                          do {
                            do {
                              pbVar4 = pbVar5;
                              bVar9 = *pbVar4;
                              bVar13 = pbVar4[1];
                              bVar14 = pbVar4[2];
                              bVar15 = pbVar4[3];
                              bVar16 = pbVar4[4];
                              bVar17 = pbVar4[5];
                              bVar18 = pbVar4[6];
                              bVar19 = pbVar4[7];
                              bVar20 = pbVar4[8];
                              bVar21 = pbVar4[9];
                              bVar22 = pbVar4[10];
                              bVar23 = pbVar4[0xb];
                              bVar24 = pbVar4[0xc];
                              bVar25 = pbVar4[0xd];
                              bVar26 = pbVar4[0xe];
                              bVar27 = pbVar4[0xf];
                              auVar10 = *(undefined1 (*) [16])(pbVar4 + 0x10);
                              bVar31 = pbVar4[0x20];
                              bVar39 = pbVar4[0x21];
                              bVar40 = pbVar4[0x22];
                              bVar41 = pbVar4[0x23];
                              bVar42 = pbVar4[0x24];
                              bVar43 = pbVar4[0x25];
                              bVar44 = pbVar4[0x26];
                              bVar45 = pbVar4[0x27];
                              bVar46 = pbVar4[0x28];
                              bVar47 = pbVar4[0x29];
                              bVar48 = pbVar4[0x2a];
                              bVar49 = pbVar4[0x2b];
                              bVar50 = pbVar4[0x2c];
                              bVar51 = pbVar4[0x2d];
                              bVar52 = pbVar4[0x2e];
                              bVar2 = pbVar4[0x2f];
                              auVar28 = *(undefined1 (*) [16])(pbVar4 + 0x30);
                              bVar53 = auVar10[0];
                              bVar9 = (bVar53 < bVar9) * bVar53 | (bVar53 >= bVar9) * bVar9;
                              bVar53 = auVar10[1];
                              bVar13 = (bVar53 < bVar13) * bVar53 | (bVar53 >= bVar13) * bVar13;
                              bVar53 = auVar10[2];
                              bVar14 = (bVar53 < bVar14) * bVar53 | (bVar53 >= bVar14) * bVar14;
                              bVar53 = auVar10[3];
                              bVar15 = (bVar53 < bVar15) * bVar53 | (bVar53 >= bVar15) * bVar15;
                              bVar53 = auVar10[4];
                              bVar16 = (bVar53 < bVar16) * bVar53 | (bVar53 >= bVar16) * bVar16;
                              bVar53 = auVar10[5];
                              bVar17 = (bVar53 < bVar17) * bVar53 | (bVar53 >= bVar17) * bVar17;
                              bVar53 = auVar10[6];
                              bVar18 = (bVar53 < bVar18) * bVar53 | (bVar53 >= bVar18) * bVar18;
                              bVar53 = auVar10[7];
                              bVar19 = (bVar53 < bVar19) * bVar53 | (bVar53 >= bVar19) * bVar19;
                              bVar53 = auVar10[8];
                              bVar20 = (bVar53 < bVar20) * bVar53 | (bVar53 >= bVar20) * bVar20;
                              bVar53 = auVar10[9];
                              bVar21 = (bVar53 < bVar21) * bVar53 | (bVar53 >= bVar21) * bVar21;
                              bVar53 = auVar10[10];
                              bVar22 = (bVar53 < bVar22) * bVar53 | (bVar53 >= bVar22) * bVar22;
                              bVar53 = auVar10[0xb];
                              bVar23 = (bVar53 < bVar23) * bVar53 | (bVar53 >= bVar23) * bVar23;
                              bVar53 = auVar10[0xc];
                              bVar24 = (bVar53 < bVar24) * bVar53 | (bVar53 >= bVar24) * bVar24;
                              bVar53 = auVar10[0xd];
                              bVar25 = (bVar53 < bVar25) * bVar53 | (bVar53 >= bVar25) * bVar25;
                              bVar53 = auVar10[0xe];
                              bVar26 = (bVar53 < bVar26) * bVar53 | (bVar53 >= bVar26) * bVar26;
                              bVar53 = auVar10[0xf];
                              bVar27 = (bVar53 < bVar27) * bVar53 | (bVar53 >= bVar27) * bVar27;
                              bVar53 = auVar28[0];
                              bVar31 = (bVar53 < bVar31) * bVar53 | (bVar53 >= bVar31) * bVar31;
                              bVar53 = auVar28[1];
                              bVar39 = (bVar53 < bVar39) * bVar53 | (bVar53 >= bVar39) * bVar39;
                              bVar53 = auVar28[2];
                              bVar40 = (bVar53 < bVar40) * bVar53 | (bVar53 >= bVar40) * bVar40;
                              bVar53 = auVar28[3];
                              bVar41 = (bVar53 < bVar41) * bVar53 | (bVar53 >= bVar41) * bVar41;
                              bVar53 = auVar28[4];
                              bVar42 = (bVar53 < bVar42) * bVar53 | (bVar53 >= bVar42) * bVar42;
                              bVar53 = auVar28[5];
                              bVar43 = (bVar53 < bVar43) * bVar53 | (bVar53 >= bVar43) * bVar43;
                              bVar53 = auVar28[6];
                              bVar44 = (bVar53 < bVar44) * bVar53 | (bVar53 >= bVar44) * bVar44;
                              bVar53 = auVar28[7];
                              bVar45 = (bVar53 < bVar45) * bVar53 | (bVar53 >= bVar45) * bVar45;
                              bVar53 = auVar28[8];
                              bVar46 = (bVar53 < bVar46) * bVar53 | (bVar53 >= bVar46) * bVar46;
                              bVar53 = auVar28[9];
                              bVar47 = (bVar53 < bVar47) * bVar53 | (bVar53 >= bVar47) * bVar47;
                              bVar53 = auVar28[10];
                              bVar48 = (bVar53 < bVar48) * bVar53 | (bVar53 >= bVar48) * bVar48;
                              bVar53 = auVar28[0xb];
                              bVar49 = (bVar53 < bVar49) * bVar53 | (bVar53 >= bVar49) * bVar49;
                              bVar53 = auVar28[0xc];
                              bVar50 = (bVar53 < bVar50) * bVar53 | (bVar53 >= bVar50) * bVar50;
                              bVar53 = auVar28[0xd];
                              bVar51 = (bVar53 < bVar51) * bVar53 | (bVar53 >= bVar51) * bVar51;
                              bVar53 = auVar28[0xe];
                              bVar52 = (bVar53 < bVar52) * bVar53 | (bVar53 >= bVar52) * bVar52;
                              bVar53 = auVar28[0xf];
                              bVar53 = (bVar53 < bVar2) * bVar53 | (bVar53 >= bVar2) * bVar2;
                              iVar32 = CONCAT13((bVar15 < bVar41) * bVar15 |
                                                (bVar15 >= bVar41) * bVar41,
                                                CONCAT12((bVar14 < bVar40) * bVar14 |
                                                         (bVar14 >= bVar40) * bVar40,
                                                         CONCAT11((bVar13 < bVar39) * bVar13 |
                                                                  (bVar13 >= bVar39) * bVar39,
                                                                  (bVar9 < bVar31) * bVar9 |
                                                                  (bVar9 >= bVar31) * bVar31)));
                              auVar33._0_8_ =
                                   CONCAT17((bVar19 < bVar45) * bVar19 | (bVar19 >= bVar45) * bVar45
                                            ,CONCAT16((bVar18 < bVar44) * bVar18 |
                                                      (bVar18 >= bVar44) * bVar44,
                                                      CONCAT15((bVar17 < bVar43) * bVar17 |
                                                               (bVar17 >= bVar43) * bVar43,
                                                               CONCAT14((bVar16 < bVar42) * bVar16 |
                                                                        (bVar16 >= bVar42) * bVar42,
                                                                        iVar32))));
                              auVar33[8] = (bVar20 < bVar46) * bVar20 | (bVar20 >= bVar46) * bVar46;
                              auVar33[9] = (bVar21 < bVar47) * bVar21 | (bVar21 >= bVar47) * bVar47;
                              auVar33[10] = (bVar22 < bVar48) * bVar22 | (bVar22 >= bVar48) * bVar48
                              ;
                              auVar33[0xb] = (bVar23 < bVar49) * bVar23 |
                                             (bVar23 >= bVar49) * bVar49;
                              auVar37[0xc] = (bVar24 < bVar50) * bVar24 |
                                             (bVar24 >= bVar50) * bVar50;
                              auVar37._0_12_ = auVar33;
                              auVar37[0xd] = (bVar25 < bVar51) * bVar25 |
                                             (bVar25 >= bVar51) * bVar51;
                              auVar37[0xe] = (bVar26 < bVar52) * bVar26 |
                                             (bVar26 >= bVar52) * bVar52;
                              auVar37[0xf] = (bVar27 < bVar53) * bVar27 |
                                             (bVar27 >= bVar53) * bVar53;
                              auVar38._0_4_ = -(uint)(iVar32 == auVar56._0_4_);
                              auVar38._4_4_ =
                                   -(uint)((int)((ulong)auVar33._0_8_ >> 0x20) == auVar56._4_4_);
                              auVar38._8_4_ = -(uint)(auVar33._8_4_ == auVar56._8_4_);
                              auVar38._12_4_ = -(uint)(auVar37._12_4_ == auVar56._12_4_);
                              pbVar5 = pbVar4 + 0x40;
                            } while ((((((((((((((((auVar38 >> 7 & (undefined1  [16])0x1) ==
                                                   (undefined1  [16])0x0 &&
                                                  (auVar38 >> 0xf & (undefined1  [16])0x1) ==
                                                  (undefined1  [16])0x0) &&
                                                 (auVar38 >> 0x17 & (undefined1  [16])0x1) ==
                                                 (undefined1  [16])0x0) &&
                                                (auVar38 >> 0x1f & (undefined1  [16])0x1) ==
                                                (undefined1  [16])0x0) &&
                                               (auVar38 >> 0x27 & (undefined1  [16])0x1) ==
                                               (undefined1  [16])0x0) &&
                                              (auVar38 >> 0x2f & (undefined1  [16])0x1) ==
                                              (undefined1  [16])0x0) &&
                                             (auVar38 >> 0x37 & (undefined1  [16])0x1) ==
                                             (undefined1  [16])0x0) &&
                                            (auVar38 >> 0x3f & (undefined1  [16])0x1) ==
                                            (undefined1  [16])0x0) &&
                                           (auVar38 >> 0x47 & (undefined1  [16])0x1) ==
                                           (undefined1  [16])0x0) &&
                                          (auVar38 >> 0x4f & (undefined1  [16])0x1) ==
                                          (undefined1  [16])0x0) &&
                                         (auVar38 >> 0x57 & (undefined1  [16])0x1) ==
                                         (undefined1  [16])0x0) &&
                                        (auVar38 >> 0x5f & (undefined1  [16])0x1) ==
                                        (undefined1  [16])0x0) && (auVar38._12_4_ >> 7 & 1) == 0) &&
                                      (auVar38._12_4_ >> 0xf & 1) == 0) &&
                                     (auVar38._12_4_ >> 0x17 & 1) == 0) && -1 < (int)auVar38._12_4_)
                            ;
                            auVar57._0_4_ = -(uint)(auVar56._0_4_ == *(int *)pbVar4);
                            auVar57._4_4_ = -(uint)(auVar56._4_4_ == *(int *)(pbVar4 + 4));
                            auVar57._8_4_ = -(uint)(auVar56._8_4_ == *(int *)(pbVar4 + 8));
                            auVar57._12_4_ = -(uint)(auVar56._12_4_ == *(int *)(pbVar4 + 0xc));
                            uVar8 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar57._12_4_ >> 0x1f) << 0xf;
                            piVar7 = param_1 + 0x10;
                            if (uVar8 != 0) break;
                            auVar58._0_4_ = -(uint)(auVar57._0_4_ == auVar10._0_4_);
                            auVar58._4_4_ = -(uint)(auVar57._4_4_ == auVar10._4_4_);
                            auVar58._8_4_ = -(uint)(auVar57._8_4_ == auVar10._8_4_);
                            auVar58._12_4_ = -(uint)(auVar57._12_4_ == auVar10._12_4_);
                            uVar8 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar58._12_4_ >> 0x1f) << 0xf;
                            piVar7 = param_1 + 0xc;
                            if (uVar8 != 0) break;
                            auVar59._0_4_ = -(uint)(auVar58._0_4_ == *(int *)(pbVar4 + 0x20));
                            auVar59._4_4_ = -(uint)(auVar58._4_4_ == *(int *)(pbVar4 + 0x24));
                            auVar59._8_4_ = -(uint)(auVar58._8_4_ == *(int *)(pbVar4 + 0x28));
                            auVar59._12_4_ = -(uint)(auVar58._12_4_ == *(uint *)(pbVar4 + 0x2c));
                            uVar8 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar59._12_4_ >> 0x1f) << 0xf;
                            piVar7 = param_1 + 8;
                            if (uVar8 != 0) break;
                            auVar56._0_4_ = -(uint)(auVar59._0_4_ == auVar28._0_4_);
                            auVar56._4_4_ = -(uint)(auVar59._4_4_ == auVar28._4_4_);
                            auVar56._8_4_ = -(uint)(auVar59._8_4_ == auVar28._8_4_);
                            auVar56._12_4_ = -(uint)(auVar59._12_4_ == auVar28._12_4_);
                            uVar8 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar56._12_4_ >> 0x1f) << 0xf;
                            piVar7 = piVar1;
                          } while (uVar8 == 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar6 = (ulong)((long)pbVar5 - (long)piVar7) >> 2;
  if ((char)uVar8 == '\0') {
    if ((uVar8 & 0xf00) == 0) {
      return uVar6 + 3;
    }
    return uVar6 + 2;
  }
  if ((uVar8 & 0xf) == 0) {
    return uVar6 + 1;
  }
  return uVar6;
}

