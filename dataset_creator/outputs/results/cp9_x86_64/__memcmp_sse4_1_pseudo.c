
ulong __memcmp_sse4_1(ulong *param_1,ulong *param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  bool bVar16;
  bool bVar17;
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
  undefined1 auVar73 [16];
  
  puVar14 = param_2;
  if (param_3 < 0x50) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        return 0;
      }
      return (ulong)((uint)(byte)*param_1 - (uint)(byte)*param_2);
    }
    uVar11 = (uint)param_3;
    if (uVar11 < 0x21) {
      if (uVar11 < 0x10) {
        if (7 < uVar11) {
          uVar9 = *param_1;
          uVar12 = *param_2;
          uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                  (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                  (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28
                  | uVar9 << 0x38;
          uVar12 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                   (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                   (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                   (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
          bVar16 = uVar9 < uVar12;
          lVar10 = uVar9 - uVar12;
          bVar17 = lVar10 == 0;
          if (bVar17) {
            uVar9 = *(ulong *)((long)param_1 + (param_3 - 8));
            uVar12 = *(ulong *)((long)param_2 + (param_3 - 8));
            uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                    (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                    (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                    (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
            uVar12 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                     (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                     (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                     (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
            bVar16 = uVar9 < uVar12;
            lVar10 = uVar9 - uVar12;
            bVar17 = lVar10 == 0;
          }
          uVar8 = (uint)lVar10;
          if (!bVar17) {
            uVar8 = uVar11;
          }
          return (ulong)(uVar8 | -(uint)bVar16);
        }
        if (uVar11 < 4) {
          uVar8 = (uint)(ushort)*param_1 << 8;
          uVar11 = (uint)(ushort)*param_2 << 8;
          return (ulong)(((uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                         (uint)*(byte *)((long)param_1 + (param_3 - 1))) -
                        ((uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                        (uint)*(byte *)((long)param_2 + (param_3 - 1))));
        }
        uVar8 = (uint)*param_1;
        uVar3 = (uint)*param_2;
        uVar4 = *(uint *)((long)param_1 + (param_3 - 4));
        uVar5 = *(uint *)((long)param_2 + (param_3 - 4));
        uVar9 = CONCAT44(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                         uVar8 << 0x18,
                         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18);
        uVar12 = CONCAT44(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18,
                          uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
        lVar10 = uVar9 - uVar12;
        uVar8 = (uint)lVar10;
        if (lVar10 != 0) {
          uVar8 = uVar11;
        }
        return (ulong)(uVar8 | -(uint)(uVar9 < uVar12));
      }
      auVar24[0] = -((byte)*param_2 == (byte)*param_1);
      auVar24[1] = -(*(byte *)((long)param_2 + 1) == *(byte *)((long)param_1 + 1));
      auVar24[2] = -(*(byte *)((long)param_2 + 2) == *(byte *)((long)param_1 + 2));
      auVar24[3] = -(*(byte *)((long)param_2 + 3) == *(byte *)((long)param_1 + 3));
      auVar24[4] = -(*(byte *)((long)param_2 + 4) == *(byte *)((long)param_1 + 4));
      auVar24[5] = -(*(byte *)((long)param_2 + 5) == *(byte *)((long)param_1 + 5));
      auVar24[6] = -(*(byte *)((long)param_2 + 6) == *(byte *)((long)param_1 + 6));
      auVar24[7] = -(*(byte *)((long)param_2 + 7) == *(byte *)((long)param_1 + 7));
      auVar24[8] = -((byte)param_2[1] == (byte)param_1[1]);
      auVar24[9] = -(*(byte *)((long)param_2 + 9) == *(byte *)((long)param_1 + 9));
      auVar24[10] = -(*(byte *)((long)param_2 + 10) == *(byte *)((long)param_1 + 10));
      auVar24[0xb] = -(*(byte *)((long)param_2 + 0xb) == *(byte *)((long)param_1 + 0xb));
      auVar24[0xc] = -(*(byte *)((long)param_2 + 0xc) == *(byte *)((long)param_1 + 0xc));
      auVar24[0xd] = -(*(byte *)((long)param_2 + 0xd) == *(byte *)((long)param_1 + 0xd));
      auVar24[0xe] = -(*(byte *)((long)param_2 + 0xe) == *(byte *)((long)param_1 + 0xe));
      auVar24[0xf] = -(*(byte *)((long)param_2 + 0xf) == *(byte *)((long)param_1 + 0xf));
      uVar7 = ((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 != 0) goto LAB_007180e8;
      pbVar1 = (byte *)((long)param_1 + (param_3 - 0x10));
      pbVar2 = (byte *)((long)param_2 + (param_3 - 0x10));
      auVar25[0] = -(*pbVar2 == *pbVar1);
      auVar25[1] = -(pbVar2[1] == pbVar1[1]);
      auVar25[2] = -(pbVar2[2] == pbVar1[2]);
      auVar25[3] = -(pbVar2[3] == pbVar1[3]);
      auVar25[4] = -(pbVar2[4] == pbVar1[4]);
      auVar25[5] = -(pbVar2[5] == pbVar1[5]);
      auVar25[6] = -(pbVar2[6] == pbVar1[6]);
      auVar25[7] = -(pbVar2[7] == pbVar1[7]);
      auVar25[8] = -(pbVar2[8] == pbVar1[8]);
      auVar25[9] = -(pbVar2[9] == pbVar1[9]);
      auVar25[10] = -(pbVar2[10] == pbVar1[10]);
      auVar25[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
      auVar25[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
      auVar25[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
      auVar25[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
      auVar25[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
      uVar7 = ((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 == 0) {
        return (ulong)uVar7;
      }
      goto LAB_00718103;
    }
    auVar19[0] = -((byte)*param_2 == (byte)*param_1);
    auVar19[1] = -(*(byte *)((long)param_2 + 1) == *(byte *)((long)param_1 + 1));
    auVar19[2] = -(*(byte *)((long)param_2 + 2) == *(byte *)((long)param_1 + 2));
    auVar19[3] = -(*(byte *)((long)param_2 + 3) == *(byte *)((long)param_1 + 3));
    auVar19[4] = -(*(byte *)((long)param_2 + 4) == *(byte *)((long)param_1 + 4));
    auVar19[5] = -(*(byte *)((long)param_2 + 5) == *(byte *)((long)param_1 + 5));
    auVar19[6] = -(*(byte *)((long)param_2 + 6) == *(byte *)((long)param_1 + 6));
    auVar19[7] = -(*(byte *)((long)param_2 + 7) == *(byte *)((long)param_1 + 7));
    auVar19[8] = -((byte)param_2[1] == (byte)param_1[1]);
    auVar19[9] = -(*(byte *)((long)param_2 + 9) == *(byte *)((long)param_1 + 9));
    auVar19[10] = -(*(byte *)((long)param_2 + 10) == *(byte *)((long)param_1 + 10));
    auVar19[0xb] = -(*(byte *)((long)param_2 + 0xb) == *(byte *)((long)param_1 + 0xb));
    auVar19[0xc] = -(*(byte *)((long)param_2 + 0xc) == *(byte *)((long)param_1 + 0xc));
    auVar19[0xd] = -(*(byte *)((long)param_2 + 0xd) == *(byte *)((long)param_1 + 0xd));
    auVar19[0xe] = -(*(byte *)((long)param_2 + 0xe) == *(byte *)((long)param_1 + 0xe));
    auVar19[0xf] = -(*(byte *)((long)param_2 + 0xf) == *(byte *)((long)param_1 + 0xf));
    uVar7 = ((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf) +
            1;
    uVar8 = (uint)uVar7;
    if (uVar7 != 0) goto LAB_007180e8;
    auVar20[0] = -((byte)param_2[2] == (byte)param_1[2]);
    auVar20[1] = -(*(byte *)((long)param_2 + 0x11) == *(byte *)((long)param_1 + 0x11));
    auVar20[2] = -(*(byte *)((long)param_2 + 0x12) == *(byte *)((long)param_1 + 0x12));
    auVar20[3] = -(*(byte *)((long)param_2 + 0x13) == *(byte *)((long)param_1 + 0x13));
    auVar20[4] = -(*(byte *)((long)param_2 + 0x14) == *(byte *)((long)param_1 + 0x14));
    auVar20[5] = -(*(byte *)((long)param_2 + 0x15) == *(byte *)((long)param_1 + 0x15));
    auVar20[6] = -(*(byte *)((long)param_2 + 0x16) == *(byte *)((long)param_1 + 0x16));
    auVar20[7] = -(*(byte *)((long)param_2 + 0x17) == *(byte *)((long)param_1 + 0x17));
    auVar20[8] = -((byte)param_2[3] == (byte)param_1[3]);
    auVar20[9] = -(*(byte *)((long)param_2 + 0x19) == *(byte *)((long)param_1 + 0x19));
    auVar20[10] = -(*(byte *)((long)param_2 + 0x1a) == *(byte *)((long)param_1 + 0x1a));
    auVar20[0xb] = -(*(byte *)((long)param_2 + 0x1b) == *(byte *)((long)param_1 + 0x1b));
    auVar20[0xc] = -(*(byte *)((long)param_2 + 0x1c) == *(byte *)((long)param_1 + 0x1c));
    auVar20[0xd] = -(*(byte *)((long)param_2 + 0x1d) == *(byte *)((long)param_1 + 0x1d));
    auVar20[0xe] = -(*(byte *)((long)param_2 + 0x1e) == *(byte *)((long)param_1 + 0x1e));
    auVar20[0xf] = -(*(byte *)((long)param_2 + 0x1f) == *(byte *)((long)param_1 + 0x1f));
    uVar7 = ((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf) +
            1;
    uVar8 = (uint)uVar7;
    if (uVar7 == 0) {
      if (0x40 < uVar11) {
        auVar21[0] = -((byte)param_2[4] == (byte)param_1[4]);
        auVar21[1] = -(*(byte *)((long)param_2 + 0x21) == *(byte *)((long)param_1 + 0x21));
        auVar21[2] = -(*(byte *)((long)param_2 + 0x22) == *(byte *)((long)param_1 + 0x22));
        auVar21[3] = -(*(byte *)((long)param_2 + 0x23) == *(byte *)((long)param_1 + 0x23));
        auVar21[4] = -(*(byte *)((long)param_2 + 0x24) == *(byte *)((long)param_1 + 0x24));
        auVar21[5] = -(*(byte *)((long)param_2 + 0x25) == *(byte *)((long)param_1 + 0x25));
        auVar21[6] = -(*(byte *)((long)param_2 + 0x26) == *(byte *)((long)param_1 + 0x26));
        auVar21[7] = -(*(byte *)((long)param_2 + 0x27) == *(byte *)((long)param_1 + 0x27));
        auVar21[8] = -((byte)param_2[5] == (byte)param_1[5]);
        auVar21[9] = -(*(byte *)((long)param_2 + 0x29) == *(byte *)((long)param_1 + 0x29));
        auVar21[10] = -(*(byte *)((long)param_2 + 0x2a) == *(byte *)((long)param_1 + 0x2a));
        auVar21[0xb] = -(*(byte *)((long)param_2 + 0x2b) == *(byte *)((long)param_1 + 0x2b));
        auVar21[0xc] = -(*(byte *)((long)param_2 + 0x2c) == *(byte *)((long)param_1 + 0x2c));
        auVar21[0xd] = -(*(byte *)((long)param_2 + 0x2d) == *(byte *)((long)param_1 + 0x2d));
        auVar21[0xe] = -(*(byte *)((long)param_2 + 0x2e) == *(byte *)((long)param_1 + 0x2e));
        auVar21[0xf] = -(*(byte *)((long)param_2 + 0x2f) == *(byte *)((long)param_1 + 0x2f));
        uVar7 = ((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180c8;
      }
LAB_00718161:
      pbVar1 = (byte *)((long)param_1 + (param_3 - 0x20));
      pbVar2 = (byte *)((long)puVar14 + (param_3 - 0x20));
      auVar22[0] = -(*pbVar2 == *pbVar1);
      auVar22[1] = -(pbVar2[1] == pbVar1[1]);
      auVar22[2] = -(pbVar2[2] == pbVar1[2]);
      auVar22[3] = -(pbVar2[3] == pbVar1[3]);
      auVar22[4] = -(pbVar2[4] == pbVar1[4]);
      auVar22[5] = -(pbVar2[5] == pbVar1[5]);
      auVar22[6] = -(pbVar2[6] == pbVar1[6]);
      auVar22[7] = -(pbVar2[7] == pbVar1[7]);
      auVar22[8] = -(pbVar2[8] == pbVar1[8]);
      auVar22[9] = -(pbVar2[9] == pbVar1[9]);
      auVar22[10] = -(pbVar2[10] == pbVar1[10]);
      auVar22[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
      auVar22[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
      auVar22[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
      auVar22[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
      auVar22[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
      uVar7 = ((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 == 0) {
        pbVar1 = (byte *)((long)param_1 + (param_3 - 0x10));
        pbVar2 = (byte *)((long)puVar14 + (param_3 - 0x10));
        auVar23[0] = -(*pbVar2 == *pbVar1);
        auVar23[1] = -(pbVar2[1] == pbVar1[1]);
        auVar23[2] = -(pbVar2[2] == pbVar1[2]);
        auVar23[3] = -(pbVar2[3] == pbVar1[3]);
        auVar23[4] = -(pbVar2[4] == pbVar1[4]);
        auVar23[5] = -(pbVar2[5] == pbVar1[5]);
        auVar23[6] = -(pbVar2[6] == pbVar1[6]);
        auVar23[7] = -(pbVar2[7] == pbVar1[7]);
        auVar23[8] = -(pbVar2[8] == pbVar1[8]);
        auVar23[9] = -(pbVar2[9] == pbVar1[9]);
        auVar23[10] = -(pbVar2[10] == pbVar1[10]);
        auVar23[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
        auVar23[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
        auVar23[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
        auVar23[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
        auVar23[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
        uVar7 = ((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 == 0) {
          return (ulong)uVar7;
        }
        goto LAB_00718103;
      }
LAB_00718100:
      param_3 = (ulong)((int)param_3 - 0x10);
LAB_00718103:
      iVar6 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      uVar9 = (ulong)(uint)(iVar6 + (int)param_3);
      return (ulong)((uint)*(byte *)((long)param_1 + (uVar9 - 0x10)) -
                    (uint)*(byte *)((long)puVar14 + (uVar9 - 0x10)));
    }
  }
  else {
    auVar69[0] = -((byte)*param_2 == (byte)*param_1);
    auVar69[1] = -(*(byte *)((long)param_2 + 1) == *(byte *)((long)param_1 + 1));
    auVar69[2] = -(*(byte *)((long)param_2 + 2) == *(byte *)((long)param_1 + 2));
    auVar69[3] = -(*(byte *)((long)param_2 + 3) == *(byte *)((long)param_1 + 3));
    auVar69[4] = -(*(byte *)((long)param_2 + 4) == *(byte *)((long)param_1 + 4));
    auVar69[5] = -(*(byte *)((long)param_2 + 5) == *(byte *)((long)param_1 + 5));
    auVar69[6] = -(*(byte *)((long)param_2 + 6) == *(byte *)((long)param_1 + 6));
    auVar69[7] = -(*(byte *)((long)param_2 + 7) == *(byte *)((long)param_1 + 7));
    auVar69[8] = -((byte)param_2[1] == (byte)param_1[1]);
    auVar69[9] = -(*(byte *)((long)param_2 + 9) == *(byte *)((long)param_1 + 9));
    auVar69[10] = -(*(byte *)((long)param_2 + 10) == *(byte *)((long)param_1 + 10));
    auVar69[0xb] = -(*(byte *)((long)param_2 + 0xb) == *(byte *)((long)param_1 + 0xb));
    auVar69[0xc] = -(*(byte *)((long)param_2 + 0xc) == *(byte *)((long)param_1 + 0xc));
    auVar69[0xd] = -(*(byte *)((long)param_2 + 0xd) == *(byte *)((long)param_1 + 0xd));
    auVar69[0xe] = -(*(byte *)((long)param_2 + 0xe) == *(byte *)((long)param_1 + 0xe));
    auVar69[0xf] = -(*(byte *)((long)param_2 + 0xf) == *(byte *)((long)param_1 + 0xf));
    uVar7 = ((ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf) +
            1;
    uVar8 = (uint)uVar7;
    if (uVar7 != 0) goto LAB_007180e8;
    uVar12 = (ulong)param_2 & 0xfffffffffffffff0;
    puVar14 = (ulong *)(uVar12 + 0x10);
    puVar15 = (ulong *)((long)param_1 - ((long)param_2 - (long)puVar14));
    uVar9 = param_3 + ((long)param_2 - (long)puVar14);
    param_3 = uVar9;
    param_1 = puVar15;
    if (((ulong)puVar15 & 0xf) == 0) {
      if (uVar9 < 0x81) {
LAB_0071856d:
        auVar47[0] = -((byte)*param_1 == (byte)*puVar14);
        auVar47[1] = -(*(byte *)((long)param_1 + 1) == *(byte *)((long)puVar14 + 1));
        auVar47[2] = -(*(byte *)((long)param_1 + 2) == *(byte *)((long)puVar14 + 2));
        auVar47[3] = -(*(byte *)((long)param_1 + 3) == *(byte *)((long)puVar14 + 3));
        auVar47[4] = -(*(byte *)((long)param_1 + 4) == *(byte *)((long)puVar14 + 4));
        auVar47[5] = -(*(byte *)((long)param_1 + 5) == *(byte *)((long)puVar14 + 5));
        auVar47[6] = -(*(byte *)((long)param_1 + 6) == *(byte *)((long)puVar14 + 6));
        auVar47[7] = -(*(byte *)((long)param_1 + 7) == *(byte *)((long)puVar14 + 7));
        auVar47[8] = -((byte)param_1[1] == (byte)puVar14[1]);
        auVar47[9] = -(*(byte *)((long)param_1 + 9) == *(byte *)((long)puVar14 + 9));
        auVar47[10] = -(*(byte *)((long)param_1 + 10) == *(byte *)((long)puVar14 + 10));
        auVar47[0xb] = -(*(byte *)((long)param_1 + 0xb) == *(byte *)((long)puVar14 + 0xb));
        auVar47[0xc] = -(*(byte *)((long)param_1 + 0xc) == *(byte *)((long)puVar14 + 0xc));
        auVar47[0xd] = -(*(byte *)((long)param_1 + 0xd) == *(byte *)((long)puVar14 + 0xd));
        auVar47[0xe] = -(*(byte *)((long)param_1 + 0xe) == *(byte *)((long)puVar14 + 0xe));
        auVar47[0xf] = -(*(byte *)((long)param_1 + 0xf) == *(byte *)((long)puVar14 + 0xf));
        uVar7 = ((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180e8;
        auVar48[0] = -((byte)param_1[2] == (byte)puVar14[2]);
        auVar48[1] = -(*(byte *)((long)param_1 + 0x11) == *(byte *)((long)puVar14 + 0x11));
        auVar48[2] = -(*(byte *)((long)param_1 + 0x12) == *(byte *)((long)puVar14 + 0x12));
        auVar48[3] = -(*(byte *)((long)param_1 + 0x13) == *(byte *)((long)puVar14 + 0x13));
        auVar48[4] = -(*(byte *)((long)param_1 + 0x14) == *(byte *)((long)puVar14 + 0x14));
        auVar48[5] = -(*(byte *)((long)param_1 + 0x15) == *(byte *)((long)puVar14 + 0x15));
        auVar48[6] = -(*(byte *)((long)param_1 + 0x16) == *(byte *)((long)puVar14 + 0x16));
        auVar48[7] = -(*(byte *)((long)param_1 + 0x17) == *(byte *)((long)puVar14 + 0x17));
        auVar48[8] = -((byte)param_1[3] == (byte)puVar14[3]);
        auVar48[9] = -(*(byte *)((long)param_1 + 0x19) == *(byte *)((long)puVar14 + 0x19));
        auVar48[10] = -(*(byte *)((long)param_1 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
        auVar48[0xb] = -(*(byte *)((long)param_1 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
        auVar48[0xc] = -(*(byte *)((long)param_1 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
        auVar48[0xd] = -(*(byte *)((long)param_1 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
        auVar48[0xe] = -(*(byte *)((long)param_1 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
        auVar48[0xf] = -(*(byte *)((long)param_1 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
        uVar7 = ((ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 == 0) {
          auVar49[0] = -((byte)param_1[4] == (byte)puVar14[4]);
          auVar49[1] = -(*(byte *)((long)param_1 + 0x21) == *(byte *)((long)puVar14 + 0x21));
          auVar49[2] = -(*(byte *)((long)param_1 + 0x22) == *(byte *)((long)puVar14 + 0x22));
          auVar49[3] = -(*(byte *)((long)param_1 + 0x23) == *(byte *)((long)puVar14 + 0x23));
          auVar49[4] = -(*(byte *)((long)param_1 + 0x24) == *(byte *)((long)puVar14 + 0x24));
          auVar49[5] = -(*(byte *)((long)param_1 + 0x25) == *(byte *)((long)puVar14 + 0x25));
          auVar49[6] = -(*(byte *)((long)param_1 + 0x26) == *(byte *)((long)puVar14 + 0x26));
          auVar49[7] = -(*(byte *)((long)param_1 + 0x27) == *(byte *)((long)puVar14 + 0x27));
          auVar49[8] = -((byte)param_1[5] == (byte)puVar14[5]);
          auVar49[9] = -(*(byte *)((long)param_1 + 0x29) == *(byte *)((long)puVar14 + 0x29));
          auVar49[10] = -(*(byte *)((long)param_1 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
          auVar49[0xb] = -(*(byte *)((long)param_1 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
          auVar49[0xc] = -(*(byte *)((long)param_1 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
          auVar49[0xd] = -(*(byte *)((long)param_1 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
          auVar49[0xe] = -(*(byte *)((long)param_1 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
          auVar49[0xf] = -(*(byte *)((long)param_1 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
          uVar7 = ((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar49[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180c8;
          auVar50[0] = -((byte)param_1[6] == (byte)puVar14[6]);
          auVar50[1] = -(*(byte *)((long)param_1 + 0x31) == *(byte *)((long)puVar14 + 0x31));
          auVar50[2] = -(*(byte *)((long)param_1 + 0x32) == *(byte *)((long)puVar14 + 0x32));
          auVar50[3] = -(*(byte *)((long)param_1 + 0x33) == *(byte *)((long)puVar14 + 0x33));
          auVar50[4] = -(*(byte *)((long)param_1 + 0x34) == *(byte *)((long)puVar14 + 0x34));
          auVar50[5] = -(*(byte *)((long)param_1 + 0x35) == *(byte *)((long)puVar14 + 0x35));
          auVar50[6] = -(*(byte *)((long)param_1 + 0x36) == *(byte *)((long)puVar14 + 0x36));
          auVar50[7] = -(*(byte *)((long)param_1 + 0x37) == *(byte *)((long)puVar14 + 0x37));
          auVar50[8] = -((byte)param_1[7] == (byte)puVar14[7]);
          auVar50[9] = -(*(byte *)((long)param_1 + 0x39) == *(byte *)((long)puVar14 + 0x39));
          auVar50[10] = -(*(byte *)((long)param_1 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
          auVar50[0xb] = -(*(byte *)((long)param_1 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
          auVar50[0xc] = -(*(byte *)((long)param_1 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
          auVar50[0xd] = -(*(byte *)((long)param_1 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
          auVar50[0xe] = -(*(byte *)((long)param_1 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
          auVar50[0xf] = -(*(byte *)((long)param_1 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
          uVar7 = ((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar50[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180c0;
          if (param_3 < 0x60) goto LAB_00718161;
          param_1 = param_1 + 8;
          puVar14 = puVar14 + 8;
          param_3 = param_3 - 0x40;
LAB_007185e0:
          auVar51[0] = -((byte)*param_1 == (byte)*puVar14);
          auVar51[1] = -(*(byte *)((long)param_1 + 1) == *(byte *)((long)puVar14 + 1));
          auVar51[2] = -(*(byte *)((long)param_1 + 2) == *(byte *)((long)puVar14 + 2));
          auVar51[3] = -(*(byte *)((long)param_1 + 3) == *(byte *)((long)puVar14 + 3));
          auVar51[4] = -(*(byte *)((long)param_1 + 4) == *(byte *)((long)puVar14 + 4));
          auVar51[5] = -(*(byte *)((long)param_1 + 5) == *(byte *)((long)puVar14 + 5));
          auVar51[6] = -(*(byte *)((long)param_1 + 6) == *(byte *)((long)puVar14 + 6));
          auVar51[7] = -(*(byte *)((long)param_1 + 7) == *(byte *)((long)puVar14 + 7));
          auVar51[8] = -((byte)param_1[1] == (byte)puVar14[1]);
          auVar51[9] = -(*(byte *)((long)param_1 + 9) == *(byte *)((long)puVar14 + 9));
          auVar51[10] = -(*(byte *)((long)param_1 + 10) == *(byte *)((long)puVar14 + 10));
          auVar51[0xb] = -(*(byte *)((long)param_1 + 0xb) == *(byte *)((long)puVar14 + 0xb));
          auVar51[0xc] = -(*(byte *)((long)param_1 + 0xc) == *(byte *)((long)puVar14 + 0xc));
          auVar51[0xd] = -(*(byte *)((long)param_1 + 0xd) == *(byte *)((long)puVar14 + 0xd));
          auVar51[0xe] = -(*(byte *)((long)param_1 + 0xe) == *(byte *)((long)puVar14 + 0xe));
          auVar51[0xf] = -(*(byte *)((long)param_1 + 0xf) == *(byte *)((long)puVar14 + 0xf));
          uVar7 = ((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar51[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180e8;
          auVar52[0] = -((byte)param_1[2] == (byte)puVar14[2]);
          auVar52[1] = -(*(byte *)((long)param_1 + 0x11) == *(byte *)((long)puVar14 + 0x11));
          auVar52[2] = -(*(byte *)((long)param_1 + 0x12) == *(byte *)((long)puVar14 + 0x12));
          auVar52[3] = -(*(byte *)((long)param_1 + 0x13) == *(byte *)((long)puVar14 + 0x13));
          auVar52[4] = -(*(byte *)((long)param_1 + 0x14) == *(byte *)((long)puVar14 + 0x14));
          auVar52[5] = -(*(byte *)((long)param_1 + 0x15) == *(byte *)((long)puVar14 + 0x15));
          auVar52[6] = -(*(byte *)((long)param_1 + 0x16) == *(byte *)((long)puVar14 + 0x16));
          auVar52[7] = -(*(byte *)((long)param_1 + 0x17) == *(byte *)((long)puVar14 + 0x17));
          auVar52[8] = -((byte)param_1[3] == (byte)puVar14[3]);
          auVar52[9] = -(*(byte *)((long)param_1 + 0x19) == *(byte *)((long)puVar14 + 0x19));
          auVar52[10] = -(*(byte *)((long)param_1 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
          auVar52[0xb] = -(*(byte *)((long)param_1 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
          auVar52[0xc] = -(*(byte *)((long)param_1 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
          auVar52[0xd] = -(*(byte *)((long)param_1 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
          auVar52[0xe] = -(*(byte *)((long)param_1 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
          auVar52[0xf] = -(*(byte *)((long)param_1 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
          uVar7 = ((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar52[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 == 0) {
            pbVar1 = (byte *)((long)param_1 + (param_3 - 0x20));
            pbVar2 = (byte *)((long)puVar14 + (param_3 - 0x20));
            auVar53[0] = -(*pbVar2 == *pbVar1);
            auVar53[1] = -(pbVar2[1] == pbVar1[1]);
            auVar53[2] = -(pbVar2[2] == pbVar1[2]);
            auVar53[3] = -(pbVar2[3] == pbVar1[3]);
            auVar53[4] = -(pbVar2[4] == pbVar1[4]);
            auVar53[5] = -(pbVar2[5] == pbVar1[5]);
            auVar53[6] = -(pbVar2[6] == pbVar1[6]);
            auVar53[7] = -(pbVar2[7] == pbVar1[7]);
            auVar53[8] = -(pbVar2[8] == pbVar1[8]);
            auVar53[9] = -(pbVar2[9] == pbVar1[9]);
            auVar53[10] = -(pbVar2[10] == pbVar1[10]);
            auVar53[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
            auVar53[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
            auVar53[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
            auVar53[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
            auVar53[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
            uVar7 = ((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                     (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar53[0xf] >> 7) << 0xf) + 1;
            uVar8 = (uint)uVar7;
            if (uVar7 == 0) {
              pbVar1 = (byte *)((long)param_1 + (param_3 - 0x10));
              pbVar2 = (byte *)((long)puVar14 + (param_3 - 0x10));
              auVar54[0] = -(*pbVar2 == *pbVar1);
              auVar54[1] = -(pbVar2[1] == pbVar1[1]);
              auVar54[2] = -(pbVar2[2] == pbVar1[2]);
              auVar54[3] = -(pbVar2[3] == pbVar1[3]);
              auVar54[4] = -(pbVar2[4] == pbVar1[4]);
              auVar54[5] = -(pbVar2[5] == pbVar1[5]);
              auVar54[6] = -(pbVar2[6] == pbVar1[6]);
              auVar54[7] = -(pbVar2[7] == pbVar1[7]);
              auVar54[8] = -(pbVar2[8] == pbVar1[8]);
              auVar54[9] = -(pbVar2[9] == pbVar1[9]);
              auVar54[10] = -(pbVar2[10] == pbVar1[10]);
              auVar54[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
              auVar54[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
              auVar54[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
              auVar54[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
              auVar54[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
              uVar7 = ((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar54[0xf] >> 7) << 0xf) + 1;
              uVar8 = (uint)uVar7;
              if (uVar7 == 0) {
                return (ulong)uVar7;
              }
              goto LAB_00718103;
            }
            goto LAB_00718100;
          }
        }
      }
      else {
        if (0x100 < uVar9) {
          if ((ulong)(__x86_data_cache_size_half * 3) < uVar9) {
            uVar9 = uVar9 - 0x40;
            do {
              auVar18[0] = -((byte)*puVar15 == (byte)*puVar14);
              auVar18[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)((long)puVar14 + 1));
              auVar18[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)((long)puVar14 + 2));
              auVar18[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)((long)puVar14 + 3));
              auVar18[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)((long)puVar14 + 4));
              auVar18[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)((long)puVar14 + 5));
              auVar18[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)((long)puVar14 + 6));
              auVar18[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)((long)puVar14 + 7));
              auVar18[8] = -((byte)puVar15[1] == (byte)puVar14[1]);
              auVar18[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)((long)puVar14 + 9));
              auVar18[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)((long)puVar14 + 10));
              auVar18[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)((long)puVar14 + 0xb));
              auVar18[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)((long)puVar14 + 0xc));
              auVar18[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)((long)puVar14 + 0xd));
              auVar18[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)((long)puVar14 + 0xe));
              auVar18[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)((long)puVar14 + 0xf));
              auVar66[0] = -((byte)puVar15[2] == (byte)puVar14[2]);
              auVar66[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)((long)puVar14 + 0x11));
              auVar66[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)((long)puVar14 + 0x12));
              auVar66[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)((long)puVar14 + 0x13));
              auVar66[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)((long)puVar14 + 0x14));
              auVar66[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)((long)puVar14 + 0x15));
              auVar66[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)((long)puVar14 + 0x16));
              auVar66[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)((long)puVar14 + 0x17));
              auVar66[8] = -((byte)puVar15[3] == (byte)puVar14[3]);
              auVar66[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)((long)puVar14 + 0x19));
              auVar66[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
              auVar66[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
              auVar66[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
              auVar66[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
              auVar66[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
              auVar66[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
              auVar67[0] = -((byte)puVar15[4] == (byte)puVar14[4]);
              auVar67[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)((long)puVar14 + 0x21));
              auVar67[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)((long)puVar14 + 0x22));
              auVar67[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)((long)puVar14 + 0x23));
              auVar67[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)((long)puVar14 + 0x24));
              auVar67[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)((long)puVar14 + 0x25));
              auVar67[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)((long)puVar14 + 0x26));
              auVar67[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)((long)puVar14 + 0x27));
              auVar67[8] = -((byte)puVar15[5] == (byte)puVar14[5]);
              auVar67[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)((long)puVar14 + 0x29));
              auVar67[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
              auVar67[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
              auVar67[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
              auVar67[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
              auVar67[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
              auVar67[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
              auVar73[0] = -((byte)puVar15[6] == (byte)puVar14[6]);
              auVar73[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)((long)puVar14 + 0x31));
              auVar73[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)((long)puVar14 + 0x32));
              auVar73[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)((long)puVar14 + 0x33));
              auVar73[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)((long)puVar14 + 0x34));
              auVar73[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)((long)puVar14 + 0x35));
              auVar73[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)((long)puVar14 + 0x36));
              auVar73[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)((long)puVar14 + 0x37));
              auVar73[8] = -((byte)puVar15[7] == (byte)puVar14[7]);
              auVar73[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)((long)puVar14 + 0x39));
              auVar73[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
              auVar73[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
              auVar73[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
              auVar73[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
              auVar73[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
              auVar73[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
              auVar44 = auVar66 & auVar18;
              auVar69 = auVar73 & auVar67 & auVar44;
              uVar7 = ((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) + 1;
              uVar12 = (ulong)uVar7;
              if (uVar7 != 0) goto LAB_00718860;
              puVar14 = puVar14 + 8;
              puVar15 = puVar15 + 8;
              bVar16 = 0x3f < uVar9;
              uVar9 = uVar9 - 0x40;
            } while (bVar16 && uVar9 != 0);
          }
          else {
            uVar9 = uVar9 - 0x40;
            do {
              auVar18[0] = -((byte)*puVar15 == (byte)*puVar14);
              auVar18[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)((long)puVar14 + 1));
              auVar18[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)((long)puVar14 + 2));
              auVar18[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)((long)puVar14 + 3));
              auVar18[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)((long)puVar14 + 4));
              auVar18[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)((long)puVar14 + 5));
              auVar18[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)((long)puVar14 + 6));
              auVar18[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)((long)puVar14 + 7));
              auVar18[8] = -((byte)puVar15[1] == (byte)puVar14[1]);
              auVar18[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)((long)puVar14 + 9));
              auVar18[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)((long)puVar14 + 10));
              auVar18[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)((long)puVar14 + 0xb));
              auVar18[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)((long)puVar14 + 0xc));
              auVar18[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)((long)puVar14 + 0xd));
              auVar18[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)((long)puVar14 + 0xe));
              auVar18[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)((long)puVar14 + 0xf));
              auVar65[0] = -((byte)puVar15[2] == (byte)puVar14[2]);
              auVar65[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)((long)puVar14 + 0x11));
              auVar65[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)((long)puVar14 + 0x12));
              auVar65[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)((long)puVar14 + 0x13));
              auVar65[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)((long)puVar14 + 0x14));
              auVar65[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)((long)puVar14 + 0x15));
              auVar65[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)((long)puVar14 + 0x16));
              auVar65[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)((long)puVar14 + 0x17));
              auVar65[8] = -((byte)puVar15[3] == (byte)puVar14[3]);
              auVar65[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)((long)puVar14 + 0x19));
              auVar65[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
              auVar65[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
              auVar65[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
              auVar65[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
              auVar65[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
              auVar65[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
              auVar67[0] = -((byte)puVar15[4] == (byte)puVar14[4]);
              auVar67[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)((long)puVar14 + 0x21));
              auVar67[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)((long)puVar14 + 0x22));
              auVar67[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)((long)puVar14 + 0x23));
              auVar67[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)((long)puVar14 + 0x24));
              auVar67[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)((long)puVar14 + 0x25));
              auVar67[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)((long)puVar14 + 0x26));
              auVar67[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)((long)puVar14 + 0x27));
              auVar67[8] = -((byte)puVar15[5] == (byte)puVar14[5]);
              auVar67[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)((long)puVar14 + 0x29));
              auVar67[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
              auVar67[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
              auVar67[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
              auVar67[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
              auVar67[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
              auVar67[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
              auVar72[0] = -((byte)puVar15[6] == (byte)puVar14[6]);
              auVar72[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)((long)puVar14 + 0x31));
              auVar72[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)((long)puVar14 + 0x32));
              auVar72[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)((long)puVar14 + 0x33));
              auVar72[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)((long)puVar14 + 0x34));
              auVar72[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)((long)puVar14 + 0x35));
              auVar72[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)((long)puVar14 + 0x36));
              auVar72[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)((long)puVar14 + 0x37));
              auVar72[8] = -((byte)puVar15[7] == (byte)puVar14[7]);
              auVar72[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)((long)puVar14 + 0x39));
              auVar72[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
              auVar72[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
              auVar72[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
              auVar72[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
              auVar72[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
              auVar72[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
              auVar44 = auVar65 & auVar18;
              auVar69 = auVar72 & auVar67 & auVar44;
              uVar7 = ((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) + 1;
              uVar12 = (ulong)uVar7;
              if (uVar7 != 0) goto LAB_00718860;
              puVar14 = puVar14 + 8;
              puVar15 = puVar15 + 8;
              bVar16 = 0x3f < uVar9;
              uVar9 = uVar9 - 0x40;
            } while (bVar16 && uVar9 != 0);
          }
          goto LAB_007184a0;
        }
        auVar55[0] = -((byte)*puVar15 == *(byte *)puVar14);
        auVar55[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)(uVar12 + 0x11));
        auVar55[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)(uVar12 + 0x12));
        auVar55[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)(uVar12 + 0x13));
        auVar55[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)(uVar12 + 0x14));
        auVar55[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)(uVar12 + 0x15));
        auVar55[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)(uVar12 + 0x16));
        auVar55[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)(uVar12 + 0x17));
        auVar55[8] = -((byte)puVar15[1] == *(byte *)(uVar12 + 0x18));
        auVar55[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)(uVar12 + 0x19));
        auVar55[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)(uVar12 + 0x1a));
        auVar55[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)(uVar12 + 0x1b));
        auVar55[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)(uVar12 + 0x1c));
        auVar55[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)(uVar12 + 0x1d));
        auVar55[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)(uVar12 + 0x1e));
        auVar55[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)(uVar12 + 0x1f));
        uVar7 = ((ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180e8;
        auVar56[0] = -((byte)puVar15[2] == *(byte *)(uVar12 + 0x20));
        auVar56[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)(uVar12 + 0x21));
        auVar56[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)(uVar12 + 0x22));
        auVar56[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)(uVar12 + 0x23));
        auVar56[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)(uVar12 + 0x24));
        auVar56[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)(uVar12 + 0x25));
        auVar56[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)(uVar12 + 0x26));
        auVar56[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)(uVar12 + 0x27));
        auVar56[8] = -((byte)puVar15[3] == *(byte *)(uVar12 + 0x28));
        auVar56[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)(uVar12 + 0x29));
        auVar56[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)(uVar12 + 0x2a));
        auVar56[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)(uVar12 + 0x2b));
        auVar56[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)(uVar12 + 0x2c));
        auVar56[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)(uVar12 + 0x2d));
        auVar56[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)(uVar12 + 0x2e));
        auVar56[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)(uVar12 + 0x2f));
        uVar7 = ((ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 == 0) {
          auVar57[0] = -((byte)puVar15[4] == *(byte *)(uVar12 + 0x30));
          auVar57[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)(uVar12 + 0x31));
          auVar57[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)(uVar12 + 0x32));
          auVar57[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)(uVar12 + 0x33));
          auVar57[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)(uVar12 + 0x34));
          auVar57[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)(uVar12 + 0x35));
          auVar57[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)(uVar12 + 0x36));
          auVar57[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)(uVar12 + 0x37));
          auVar57[8] = -((byte)puVar15[5] == *(byte *)(uVar12 + 0x38));
          auVar57[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)(uVar12 + 0x39));
          auVar57[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)(uVar12 + 0x3a));
          auVar57[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)(uVar12 + 0x3b));
          auVar57[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)(uVar12 + 0x3c));
          auVar57[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)(uVar12 + 0x3d));
          auVar57[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)(uVar12 + 0x3e));
          auVar57[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)(uVar12 + 0x3f));
          uVar7 = ((ushort)(SUB161(auVar57 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar57[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180c8;
          auVar58[0] = -((byte)puVar15[6] == *(byte *)(uVar12 + 0x40));
          auVar58[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)(uVar12 + 0x41));
          auVar58[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)(uVar12 + 0x42));
          auVar58[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)(uVar12 + 0x43));
          auVar58[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)(uVar12 + 0x44));
          auVar58[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)(uVar12 + 0x45));
          auVar58[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)(uVar12 + 0x46));
          auVar58[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)(uVar12 + 0x47));
          auVar58[8] = -((byte)puVar15[7] == *(byte *)(uVar12 + 0x48));
          auVar58[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)(uVar12 + 0x49));
          auVar58[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)(uVar12 + 0x4a));
          auVar58[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)(uVar12 + 0x4b));
          auVar58[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)(uVar12 + 0x4c));
          auVar58[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)(uVar12 + 0x4d));
          auVar58[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)(uVar12 + 0x4e));
          auVar58[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)(uVar12 + 0x4f));
          uVar7 = ((ushort)(SUB161(auVar58 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar58[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 == 0) {
            param_1 = puVar15 + 8;
            puVar14 = (ulong *)(uVar12 + 0x50);
            auVar59[0] = -((byte)*param_1 == *(byte *)puVar14);
            auVar59[1] = -(*(byte *)((long)puVar15 + 0x41) == *(byte *)(uVar12 + 0x51));
            auVar59[2] = -(*(byte *)((long)puVar15 + 0x42) == *(byte *)(uVar12 + 0x52));
            auVar59[3] = -(*(byte *)((long)puVar15 + 0x43) == *(byte *)(uVar12 + 0x53));
            auVar59[4] = -(*(byte *)((long)puVar15 + 0x44) == *(byte *)(uVar12 + 0x54));
            auVar59[5] = -(*(byte *)((long)puVar15 + 0x45) == *(byte *)(uVar12 + 0x55));
            auVar59[6] = -(*(byte *)((long)puVar15 + 0x46) == *(byte *)(uVar12 + 0x56));
            auVar59[7] = -(*(byte *)((long)puVar15 + 0x47) == *(byte *)(uVar12 + 0x57));
            auVar59[8] = -((byte)puVar15[9] == *(byte *)(uVar12 + 0x58));
            auVar59[9] = -(*(byte *)((long)puVar15 + 0x49) == *(byte *)(uVar12 + 0x59));
            auVar59[10] = -(*(byte *)((long)puVar15 + 0x4a) == *(byte *)(uVar12 + 0x5a));
            auVar59[0xb] = -(*(byte *)((long)puVar15 + 0x4b) == *(byte *)(uVar12 + 0x5b));
            auVar59[0xc] = -(*(byte *)((long)puVar15 + 0x4c) == *(byte *)(uVar12 + 0x5c));
            auVar59[0xd] = -(*(byte *)((long)puVar15 + 0x4d) == *(byte *)(uVar12 + 0x5d));
            auVar59[0xe] = -(*(byte *)((long)puVar15 + 0x4e) == *(byte *)(uVar12 + 0x5e));
            auVar59[0xf] = -(*(byte *)((long)puVar15 + 0x4f) == *(byte *)(uVar12 + 0x5f));
            uVar7 = ((ushort)(SUB161(auVar59 >> 7,0) & 1) |
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
                     (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar59[0xf] >> 7) << 0xf) + 1;
            uVar8 = (uint)uVar7;
            if (uVar7 != 0) goto LAB_007180e8;
            auVar60[0] = -((byte)puVar15[10] == *(byte *)(uVar12 + 0x60));
            auVar60[1] = -(*(byte *)((long)puVar15 + 0x51) == *(byte *)(uVar12 + 0x61));
            auVar60[2] = -(*(byte *)((long)puVar15 + 0x52) == *(byte *)(uVar12 + 0x62));
            auVar60[3] = -(*(byte *)((long)puVar15 + 0x53) == *(byte *)(uVar12 + 99));
            auVar60[4] = -(*(byte *)((long)puVar15 + 0x54) == *(byte *)(uVar12 + 100));
            auVar60[5] = -(*(byte *)((long)puVar15 + 0x55) == *(byte *)(uVar12 + 0x65));
            auVar60[6] = -(*(byte *)((long)puVar15 + 0x56) == *(byte *)(uVar12 + 0x66));
            auVar60[7] = -(*(byte *)((long)puVar15 + 0x57) == *(byte *)(uVar12 + 0x67));
            auVar60[8] = -((byte)puVar15[0xb] == *(byte *)(uVar12 + 0x68));
            auVar60[9] = -(*(byte *)((long)puVar15 + 0x59) == *(byte *)(uVar12 + 0x69));
            auVar60[10] = -(*(byte *)((long)puVar15 + 0x5a) == *(byte *)(uVar12 + 0x6a));
            auVar60[0xb] = -(*(byte *)((long)puVar15 + 0x5b) == *(byte *)(uVar12 + 0x6b));
            auVar60[0xc] = -(*(byte *)((long)puVar15 + 0x5c) == *(byte *)(uVar12 + 0x6c));
            auVar60[0xd] = -(*(byte *)((long)puVar15 + 0x5d) == *(byte *)(uVar12 + 0x6d));
            auVar60[0xe] = -(*(byte *)((long)puVar15 + 0x5e) == *(byte *)(uVar12 + 0x6e));
            auVar60[0xf] = -(*(byte *)((long)puVar15 + 0x5f) == *(byte *)(uVar12 + 0x6f));
            uVar7 = ((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar60[0xf] >> 7) << 0xf) + 1;
            uVar8 = (uint)uVar7;
            if (uVar7 != 0) goto LAB_007180e0;
            auVar61[0] = -((byte)puVar15[0xc] == *(byte *)(uVar12 + 0x70));
            auVar61[1] = -(*(byte *)((long)puVar15 + 0x61) == *(byte *)(uVar12 + 0x71));
            auVar61[2] = -(*(byte *)((long)puVar15 + 0x62) == *(byte *)(uVar12 + 0x72));
            auVar61[3] = -(*(byte *)((long)puVar15 + 99) == *(byte *)(uVar12 + 0x73));
            auVar61[4] = -(*(byte *)((long)puVar15 + 100) == *(byte *)(uVar12 + 0x74));
            auVar61[5] = -(*(byte *)((long)puVar15 + 0x65) == *(byte *)(uVar12 + 0x75));
            auVar61[6] = -(*(byte *)((long)puVar15 + 0x66) == *(byte *)(uVar12 + 0x76));
            auVar61[7] = -(*(byte *)((long)puVar15 + 0x67) == *(byte *)(uVar12 + 0x77));
            auVar61[8] = -((byte)puVar15[0xd] == *(byte *)(uVar12 + 0x78));
            auVar61[9] = -(*(byte *)((long)puVar15 + 0x69) == *(byte *)(uVar12 + 0x79));
            auVar61[10] = -(*(byte *)((long)puVar15 + 0x6a) == *(byte *)(uVar12 + 0x7a));
            auVar61[0xb] = -(*(byte *)((long)puVar15 + 0x6b) == *(byte *)(uVar12 + 0x7b));
            auVar61[0xc] = -(*(byte *)((long)puVar15 + 0x6c) == *(byte *)(uVar12 + 0x7c));
            auVar61[0xd] = -(*(byte *)((long)puVar15 + 0x6d) == *(byte *)(uVar12 + 0x7d));
            auVar61[0xe] = -(*(byte *)((long)puVar15 + 0x6e) == *(byte *)(uVar12 + 0x7e));
            auVar61[0xf] = -(*(byte *)((long)puVar15 + 0x6f) == *(byte *)(uVar12 + 0x7f));
            uVar7 = ((ushort)(SUB161(auVar61 >> 7,0) & 1) |
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
                     (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar61[0xf] >> 7) << 0xf) + 1;
            uVar8 = (uint)uVar7;
            if (uVar7 != 0) goto LAB_007180c8;
            auVar62[0] = -((byte)puVar15[0xe] == *(byte *)(uVar12 + 0x80));
            auVar62[1] = -(*(byte *)((long)puVar15 + 0x71) == *(byte *)(uVar12 + 0x81));
            auVar62[2] = -(*(byte *)((long)puVar15 + 0x72) == *(byte *)(uVar12 + 0x82));
            auVar62[3] = -(*(byte *)((long)puVar15 + 0x73) == *(byte *)(uVar12 + 0x83));
            auVar62[4] = -(*(byte *)((long)puVar15 + 0x74) == *(byte *)(uVar12 + 0x84));
            auVar62[5] = -(*(byte *)((long)puVar15 + 0x75) == *(byte *)(uVar12 + 0x85));
            auVar62[6] = -(*(byte *)((long)puVar15 + 0x76) == *(byte *)(uVar12 + 0x86));
            auVar62[7] = -(*(byte *)((long)puVar15 + 0x77) == *(byte *)(uVar12 + 0x87));
            auVar62[8] = -((byte)puVar15[0xf] == *(byte *)(uVar12 + 0x88));
            auVar62[9] = -(*(byte *)((long)puVar15 + 0x79) == *(byte *)(uVar12 + 0x89));
            auVar62[10] = -(*(byte *)((long)puVar15 + 0x7a) == *(byte *)(uVar12 + 0x8a));
            auVar62[0xb] = -(*(byte *)((long)puVar15 + 0x7b) == *(byte *)(uVar12 + 0x8b));
            auVar62[0xc] = -(*(byte *)((long)puVar15 + 0x7c) == *(byte *)(uVar12 + 0x8c));
            auVar62[0xd] = -(*(byte *)((long)puVar15 + 0x7d) == *(byte *)(uVar12 + 0x8d));
            auVar62[0xe] = -(*(byte *)((long)puVar15 + 0x7e) == *(byte *)(uVar12 + 0x8e));
            auVar62[0xf] = -(*(byte *)((long)puVar15 + 0x7f) == *(byte *)(uVar12 + 0x8f));
            uVar7 = ((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                     (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar62[0xf] >> 7) << 0xf) + 1;
            uVar8 = (uint)uVar7;
            if (uVar7 == 0) {
              param_3 = uVar9 - 0x80;
              puVar14 = (ulong *)(uVar12 + 0x90);
              param_1 = puVar15 + 0x10;
              if (0x40 < param_3) goto LAB_0071856d;
              if (param_3 < 0x21) {
                pbVar1 = (byte *)((long)puVar15 + (uVar9 - 0x20));
                pbVar2 = (byte *)(uVar12 + 0x70 + param_3);
                auVar63[0] = -(*pbVar2 == *pbVar1);
                auVar63[1] = -(pbVar2[1] == pbVar1[1]);
                auVar63[2] = -(pbVar2[2] == pbVar1[2]);
                auVar63[3] = -(pbVar2[3] == pbVar1[3]);
                auVar63[4] = -(pbVar2[4] == pbVar1[4]);
                auVar63[5] = -(pbVar2[5] == pbVar1[5]);
                auVar63[6] = -(pbVar2[6] == pbVar1[6]);
                auVar63[7] = -(pbVar2[7] == pbVar1[7]);
                auVar63[8] = -(pbVar2[8] == pbVar1[8]);
                auVar63[9] = -(pbVar2[9] == pbVar1[9]);
                auVar63[10] = -(pbVar2[10] == pbVar1[10]);
                auVar63[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
                auVar63[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
                auVar63[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
                auVar63[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
                auVar63[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
                uVar7 = ((ushort)(SUB161(auVar63 >> 7,0) & 1) |
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
                         (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar63[0xf] >> 7) << 0xf) + 1;
                uVar8 = (uint)uVar7;
                if (uVar7 == 0) {
                  pbVar1 = (byte *)((long)puVar15 + (uVar9 - 0x10));
                  pbVar2 = (byte *)(uVar12 + 0x80 + param_3);
                  auVar64[0] = -(*pbVar2 == *pbVar1);
                  auVar64[1] = -(pbVar2[1] == pbVar1[1]);
                  auVar64[2] = -(pbVar2[2] == pbVar1[2]);
                  auVar64[3] = -(pbVar2[3] == pbVar1[3]);
                  auVar64[4] = -(pbVar2[4] == pbVar1[4]);
                  auVar64[5] = -(pbVar2[5] == pbVar1[5]);
                  auVar64[6] = -(pbVar2[6] == pbVar1[6]);
                  auVar64[7] = -(pbVar2[7] == pbVar1[7]);
                  auVar64[8] = -(pbVar2[8] == pbVar1[8]);
                  auVar64[9] = -(pbVar2[9] == pbVar1[9]);
                  auVar64[10] = -(pbVar2[10] == pbVar1[10]);
                  auVar64[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
                  auVar64[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
                  auVar64[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
                  auVar64[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
                  auVar64[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
                  uVar7 = ((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar64[0xf] >> 7) << 0xf) + 1;
                  uVar8 = (uint)uVar7;
                  if (uVar7 == 0) {
                    return (ulong)uVar7;
                  }
                  goto LAB_00718103;
                }
                goto LAB_00718100;
              }
              goto LAB_007185e0;
            }
          }
          goto LAB_007180c0;
        }
      }
    }
    else if (uVar9 < 0x81) {
LAB_00718227:
      auVar26[0] = -((byte)*param_1 == (byte)*puVar14);
      auVar26[1] = -(*(byte *)((long)param_1 + 1) == *(byte *)((long)puVar14 + 1));
      auVar26[2] = -(*(byte *)((long)param_1 + 2) == *(byte *)((long)puVar14 + 2));
      auVar26[3] = -(*(byte *)((long)param_1 + 3) == *(byte *)((long)puVar14 + 3));
      auVar26[4] = -(*(byte *)((long)param_1 + 4) == *(byte *)((long)puVar14 + 4));
      auVar26[5] = -(*(byte *)((long)param_1 + 5) == *(byte *)((long)puVar14 + 5));
      auVar26[6] = -(*(byte *)((long)param_1 + 6) == *(byte *)((long)puVar14 + 6));
      auVar26[7] = -(*(byte *)((long)param_1 + 7) == *(byte *)((long)puVar14 + 7));
      auVar26[8] = -((byte)param_1[1] == (byte)puVar14[1]);
      auVar26[9] = -(*(byte *)((long)param_1 + 9) == *(byte *)((long)puVar14 + 9));
      auVar26[10] = -(*(byte *)((long)param_1 + 10) == *(byte *)((long)puVar14 + 10));
      auVar26[0xb] = -(*(byte *)((long)param_1 + 0xb) == *(byte *)((long)puVar14 + 0xb));
      auVar26[0xc] = -(*(byte *)((long)param_1 + 0xc) == *(byte *)((long)puVar14 + 0xc));
      auVar26[0xd] = -(*(byte *)((long)param_1 + 0xd) == *(byte *)((long)puVar14 + 0xd));
      auVar26[0xe] = -(*(byte *)((long)param_1 + 0xe) == *(byte *)((long)puVar14 + 0xe));
      auVar26[0xf] = -(*(byte *)((long)param_1 + 0xf) == *(byte *)((long)puVar14 + 0xf));
      uVar7 = ((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 != 0) goto LAB_007180e8;
      auVar27[0] = -((byte)param_1[2] == (byte)puVar14[2]);
      auVar27[1] = -(*(byte *)((long)param_1 + 0x11) == *(byte *)((long)puVar14 + 0x11));
      auVar27[2] = -(*(byte *)((long)param_1 + 0x12) == *(byte *)((long)puVar14 + 0x12));
      auVar27[3] = -(*(byte *)((long)param_1 + 0x13) == *(byte *)((long)puVar14 + 0x13));
      auVar27[4] = -(*(byte *)((long)param_1 + 0x14) == *(byte *)((long)puVar14 + 0x14));
      auVar27[5] = -(*(byte *)((long)param_1 + 0x15) == *(byte *)((long)puVar14 + 0x15));
      auVar27[6] = -(*(byte *)((long)param_1 + 0x16) == *(byte *)((long)puVar14 + 0x16));
      auVar27[7] = -(*(byte *)((long)param_1 + 0x17) == *(byte *)((long)puVar14 + 0x17));
      auVar27[8] = -((byte)param_1[3] == (byte)puVar14[3]);
      auVar27[9] = -(*(byte *)((long)param_1 + 0x19) == *(byte *)((long)puVar14 + 0x19));
      auVar27[10] = -(*(byte *)((long)param_1 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
      auVar27[0xb] = -(*(byte *)((long)param_1 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
      auVar27[0xc] = -(*(byte *)((long)param_1 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
      auVar27[0xd] = -(*(byte *)((long)param_1 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
      auVar27[0xe] = -(*(byte *)((long)param_1 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
      auVar27[0xf] = -(*(byte *)((long)param_1 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
      uVar7 = ((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 == 0) {
        auVar28[0] = -((byte)param_1[4] == (byte)puVar14[4]);
        auVar28[1] = -(*(byte *)((long)param_1 + 0x21) == *(byte *)((long)puVar14 + 0x21));
        auVar28[2] = -(*(byte *)((long)param_1 + 0x22) == *(byte *)((long)puVar14 + 0x22));
        auVar28[3] = -(*(byte *)((long)param_1 + 0x23) == *(byte *)((long)puVar14 + 0x23));
        auVar28[4] = -(*(byte *)((long)param_1 + 0x24) == *(byte *)((long)puVar14 + 0x24));
        auVar28[5] = -(*(byte *)((long)param_1 + 0x25) == *(byte *)((long)puVar14 + 0x25));
        auVar28[6] = -(*(byte *)((long)param_1 + 0x26) == *(byte *)((long)puVar14 + 0x26));
        auVar28[7] = -(*(byte *)((long)param_1 + 0x27) == *(byte *)((long)puVar14 + 0x27));
        auVar28[8] = -((byte)param_1[5] == (byte)puVar14[5]);
        auVar28[9] = -(*(byte *)((long)param_1 + 0x29) == *(byte *)((long)puVar14 + 0x29));
        auVar28[10] = -(*(byte *)((long)param_1 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
        auVar28[0xb] = -(*(byte *)((long)param_1 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
        auVar28[0xc] = -(*(byte *)((long)param_1 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
        auVar28[0xd] = -(*(byte *)((long)param_1 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
        auVar28[0xe] = -(*(byte *)((long)param_1 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
        auVar28[0xf] = -(*(byte *)((long)param_1 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
        uVar7 = ((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180c8;
        auVar29[0] = -((byte)param_1[6] == (byte)puVar14[6]);
        auVar29[1] = -(*(byte *)((long)param_1 + 0x31) == *(byte *)((long)puVar14 + 0x31));
        auVar29[2] = -(*(byte *)((long)param_1 + 0x32) == *(byte *)((long)puVar14 + 0x32));
        auVar29[3] = -(*(byte *)((long)param_1 + 0x33) == *(byte *)((long)puVar14 + 0x33));
        auVar29[4] = -(*(byte *)((long)param_1 + 0x34) == *(byte *)((long)puVar14 + 0x34));
        auVar29[5] = -(*(byte *)((long)param_1 + 0x35) == *(byte *)((long)puVar14 + 0x35));
        auVar29[6] = -(*(byte *)((long)param_1 + 0x36) == *(byte *)((long)puVar14 + 0x36));
        auVar29[7] = -(*(byte *)((long)param_1 + 0x37) == *(byte *)((long)puVar14 + 0x37));
        auVar29[8] = -((byte)param_1[7] == (byte)puVar14[7]);
        auVar29[9] = -(*(byte *)((long)param_1 + 0x39) == *(byte *)((long)puVar14 + 0x39));
        auVar29[10] = -(*(byte *)((long)param_1 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
        auVar29[0xb] = -(*(byte *)((long)param_1 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
        auVar29[0xc] = -(*(byte *)((long)param_1 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
        auVar29[0xd] = -(*(byte *)((long)param_1 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
        auVar29[0xe] = -(*(byte *)((long)param_1 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
        auVar29[0xf] = -(*(byte *)((long)param_1 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
        uVar7 = ((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180c0;
        if (param_3 < 0x60) goto LAB_00718161;
        param_1 = param_1 + 8;
        puVar14 = puVar14 + 8;
        param_3 = param_3 - 0x40;
LAB_00718297:
        auVar30[0] = -((byte)*param_1 == (byte)*puVar14);
        auVar30[1] = -(*(byte *)((long)param_1 + 1) == *(byte *)((long)puVar14 + 1));
        auVar30[2] = -(*(byte *)((long)param_1 + 2) == *(byte *)((long)puVar14 + 2));
        auVar30[3] = -(*(byte *)((long)param_1 + 3) == *(byte *)((long)puVar14 + 3));
        auVar30[4] = -(*(byte *)((long)param_1 + 4) == *(byte *)((long)puVar14 + 4));
        auVar30[5] = -(*(byte *)((long)param_1 + 5) == *(byte *)((long)puVar14 + 5));
        auVar30[6] = -(*(byte *)((long)param_1 + 6) == *(byte *)((long)puVar14 + 6));
        auVar30[7] = -(*(byte *)((long)param_1 + 7) == *(byte *)((long)puVar14 + 7));
        auVar30[8] = -((byte)param_1[1] == (byte)puVar14[1]);
        auVar30[9] = -(*(byte *)((long)param_1 + 9) == *(byte *)((long)puVar14 + 9));
        auVar30[10] = -(*(byte *)((long)param_1 + 10) == *(byte *)((long)puVar14 + 10));
        auVar30[0xb] = -(*(byte *)((long)param_1 + 0xb) == *(byte *)((long)puVar14 + 0xb));
        auVar30[0xc] = -(*(byte *)((long)param_1 + 0xc) == *(byte *)((long)puVar14 + 0xc));
        auVar30[0xd] = -(*(byte *)((long)param_1 + 0xd) == *(byte *)((long)puVar14 + 0xd));
        auVar30[0xe] = -(*(byte *)((long)param_1 + 0xe) == *(byte *)((long)puVar14 + 0xe));
        auVar30[0xf] = -(*(byte *)((long)param_1 + 0xf) == *(byte *)((long)puVar14 + 0xf));
        uVar7 = ((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180e8;
        auVar31[0] = -((byte)param_1[2] == (byte)puVar14[2]);
        auVar31[1] = -(*(byte *)((long)param_1 + 0x11) == *(byte *)((long)puVar14 + 0x11));
        auVar31[2] = -(*(byte *)((long)param_1 + 0x12) == *(byte *)((long)puVar14 + 0x12));
        auVar31[3] = -(*(byte *)((long)param_1 + 0x13) == *(byte *)((long)puVar14 + 0x13));
        auVar31[4] = -(*(byte *)((long)param_1 + 0x14) == *(byte *)((long)puVar14 + 0x14));
        auVar31[5] = -(*(byte *)((long)param_1 + 0x15) == *(byte *)((long)puVar14 + 0x15));
        auVar31[6] = -(*(byte *)((long)param_1 + 0x16) == *(byte *)((long)puVar14 + 0x16));
        auVar31[7] = -(*(byte *)((long)param_1 + 0x17) == *(byte *)((long)puVar14 + 0x17));
        auVar31[8] = -((byte)param_1[3] == (byte)puVar14[3]);
        auVar31[9] = -(*(byte *)((long)param_1 + 0x19) == *(byte *)((long)puVar14 + 0x19));
        auVar31[10] = -(*(byte *)((long)param_1 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
        auVar31[0xb] = -(*(byte *)((long)param_1 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
        auVar31[0xc] = -(*(byte *)((long)param_1 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
        auVar31[0xd] = -(*(byte *)((long)param_1 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
        auVar31[0xe] = -(*(byte *)((long)param_1 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
        auVar31[0xf] = -(*(byte *)((long)param_1 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
        uVar7 = ((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 == 0) {
          pbVar1 = (byte *)((long)param_1 + (param_3 - 0x20));
          pbVar2 = (byte *)((long)puVar14 + (param_3 - 0x20));
          auVar32[0] = -(*pbVar2 == *pbVar1);
          auVar32[1] = -(pbVar2[1] == pbVar1[1]);
          auVar32[2] = -(pbVar2[2] == pbVar1[2]);
          auVar32[3] = -(pbVar2[3] == pbVar1[3]);
          auVar32[4] = -(pbVar2[4] == pbVar1[4]);
          auVar32[5] = -(pbVar2[5] == pbVar1[5]);
          auVar32[6] = -(pbVar2[6] == pbVar1[6]);
          auVar32[7] = -(pbVar2[7] == pbVar1[7]);
          auVar32[8] = -(pbVar2[8] == pbVar1[8]);
          auVar32[9] = -(pbVar2[9] == pbVar1[9]);
          auVar32[10] = -(pbVar2[10] == pbVar1[10]);
          auVar32[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
          auVar32[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
          auVar32[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
          auVar32[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
          auVar32[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
          uVar7 = ((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar32[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 == 0) {
            pbVar1 = (byte *)((long)param_1 + (param_3 - 0x10));
            pbVar2 = (byte *)((long)puVar14 + (param_3 - 0x10));
            auVar33[0] = -(*pbVar2 == *pbVar1);
            auVar33[1] = -(pbVar2[1] == pbVar1[1]);
            auVar33[2] = -(pbVar2[2] == pbVar1[2]);
            auVar33[3] = -(pbVar2[3] == pbVar1[3]);
            auVar33[4] = -(pbVar2[4] == pbVar1[4]);
            auVar33[5] = -(pbVar2[5] == pbVar1[5]);
            auVar33[6] = -(pbVar2[6] == pbVar1[6]);
            auVar33[7] = -(pbVar2[7] == pbVar1[7]);
            auVar33[8] = -(pbVar2[8] == pbVar1[8]);
            auVar33[9] = -(pbVar2[9] == pbVar1[9]);
            auVar33[10] = -(pbVar2[10] == pbVar1[10]);
            auVar33[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
            auVar33[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
            auVar33[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
            auVar33[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
            auVar33[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
            uVar7 = ((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar33[0xf] >> 7) << 0xf) + 1;
            uVar8 = (uint)uVar7;
            if (uVar7 == 0) {
              return (ulong)uVar7;
            }
            goto LAB_00718103;
          }
          goto LAB_00718100;
        }
      }
    }
    else {
      if (0x100 < uVar9) {
        if ((ulong)(__x86_data_cache_size_half * 3) < uVar9) {
          uVar9 = uVar9 - 0x40;
          do {
            auVar18[0] = -((byte)*puVar15 == (byte)*puVar14);
            auVar18[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)((long)puVar14 + 1));
            auVar18[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)((long)puVar14 + 2));
            auVar18[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)((long)puVar14 + 3));
            auVar18[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)((long)puVar14 + 4));
            auVar18[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)((long)puVar14 + 5));
            auVar18[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)((long)puVar14 + 6));
            auVar18[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)((long)puVar14 + 7));
            auVar18[8] = -((byte)puVar15[1] == (byte)puVar14[1]);
            auVar18[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)((long)puVar14 + 9));
            auVar18[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)((long)puVar14 + 10));
            auVar18[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)((long)puVar14 + 0xb));
            auVar18[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)((long)puVar14 + 0xc));
            auVar18[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)((long)puVar14 + 0xd));
            auVar18[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)((long)puVar14 + 0xe));
            auVar18[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)((long)puVar14 + 0xf));
            auVar46[0] = -((byte)puVar15[2] == (byte)puVar14[2]);
            auVar46[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)((long)puVar14 + 0x11));
            auVar46[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)((long)puVar14 + 0x12));
            auVar46[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)((long)puVar14 + 0x13));
            auVar46[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)((long)puVar14 + 0x14));
            auVar46[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)((long)puVar14 + 0x15));
            auVar46[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)((long)puVar14 + 0x16));
            auVar46[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)((long)puVar14 + 0x17));
            auVar46[8] = -((byte)puVar15[3] == (byte)puVar14[3]);
            auVar46[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)((long)puVar14 + 0x19));
            auVar46[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
            auVar46[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
            auVar46[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
            auVar46[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
            auVar46[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
            auVar46[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
            auVar67[0] = -((byte)puVar15[4] == (byte)puVar14[4]);
            auVar67[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)((long)puVar14 + 0x21));
            auVar67[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)((long)puVar14 + 0x22));
            auVar67[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)((long)puVar14 + 0x23));
            auVar67[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)((long)puVar14 + 0x24));
            auVar67[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)((long)puVar14 + 0x25));
            auVar67[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)((long)puVar14 + 0x26));
            auVar67[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)((long)puVar14 + 0x27));
            auVar67[8] = -((byte)puVar15[5] == (byte)puVar14[5]);
            auVar67[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)((long)puVar14 + 0x29));
            auVar67[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
            auVar67[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
            auVar67[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
            auVar67[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
            auVar67[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
            auVar67[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
            auVar71[0] = -((byte)puVar15[6] == (byte)puVar14[6]);
            auVar71[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)((long)puVar14 + 0x31));
            auVar71[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)((long)puVar14 + 0x32));
            auVar71[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)((long)puVar14 + 0x33));
            auVar71[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)((long)puVar14 + 0x34));
            auVar71[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)((long)puVar14 + 0x35));
            auVar71[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)((long)puVar14 + 0x36));
            auVar71[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)((long)puVar14 + 0x37));
            auVar71[8] = -((byte)puVar15[7] == (byte)puVar14[7]);
            auVar71[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)((long)puVar14 + 0x39));
            auVar71[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
            auVar71[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
            auVar71[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
            auVar71[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
            auVar71[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
            auVar71[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
            auVar44 = auVar46 & auVar18;
            auVar69 = auVar71 & auVar67 & auVar44;
            uVar7 = ((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) + 1;
            uVar12 = (ulong)uVar7;
            if (uVar7 != 0) goto LAB_00718860;
            puVar14 = puVar14 + 8;
            puVar15 = puVar15 + 8;
            bVar16 = 0x3f < uVar9;
            uVar9 = uVar9 - 0x40;
          } while (bVar16 && uVar9 != 0);
        }
        else {
          uVar9 = uVar9 - 0x40;
          do {
            auVar18[0] = -((byte)*puVar15 == (byte)*puVar14);
            auVar18[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)((long)puVar14 + 1));
            auVar18[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)((long)puVar14 + 2));
            auVar18[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)((long)puVar14 + 3));
            auVar18[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)((long)puVar14 + 4));
            auVar18[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)((long)puVar14 + 5));
            auVar18[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)((long)puVar14 + 6));
            auVar18[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)((long)puVar14 + 7));
            auVar18[8] = -((byte)puVar15[1] == (byte)puVar14[1]);
            auVar18[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)((long)puVar14 + 9));
            auVar18[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)((long)puVar14 + 10));
            auVar18[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)((long)puVar14 + 0xb));
            auVar18[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)((long)puVar14 + 0xc));
            auVar18[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)((long)puVar14 + 0xd));
            auVar18[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)((long)puVar14 + 0xe));
            auVar18[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)((long)puVar14 + 0xf));
            auVar44[0] = -((byte)puVar15[2] == (byte)puVar14[2]);
            auVar44[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)((long)puVar14 + 0x11));
            auVar44[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)((long)puVar14 + 0x12));
            auVar44[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)((long)puVar14 + 0x13));
            auVar44[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)((long)puVar14 + 0x14));
            auVar44[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)((long)puVar14 + 0x15));
            auVar44[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)((long)puVar14 + 0x16));
            auVar44[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)((long)puVar14 + 0x17));
            auVar44[8] = -((byte)puVar15[3] == (byte)puVar14[3]);
            auVar44[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)((long)puVar14 + 0x19));
            auVar44[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
            auVar44[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
            auVar44[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
            auVar44[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
            auVar44[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
            auVar44[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
            auVar67[0] = -((byte)puVar15[4] == (byte)puVar14[4]);
            auVar67[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)((long)puVar14 + 0x21));
            auVar67[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)((long)puVar14 + 0x22));
            auVar67[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)((long)puVar14 + 0x23));
            auVar67[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)((long)puVar14 + 0x24));
            auVar67[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)((long)puVar14 + 0x25));
            auVar67[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)((long)puVar14 + 0x26));
            auVar67[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)((long)puVar14 + 0x27));
            auVar67[8] = -((byte)puVar15[5] == (byte)puVar14[5]);
            auVar67[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)((long)puVar14 + 0x29));
            auVar67[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
            auVar67[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
            auVar67[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
            auVar67[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
            auVar67[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
            auVar67[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
            auVar68[0] = -((byte)puVar15[6] == (byte)puVar14[6]);
            auVar68[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)((long)puVar14 + 0x31));
            auVar68[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)((long)puVar14 + 0x32));
            auVar68[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)((long)puVar14 + 0x33));
            auVar68[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)((long)puVar14 + 0x34));
            auVar68[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)((long)puVar14 + 0x35));
            auVar68[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)((long)puVar14 + 0x36));
            auVar68[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)((long)puVar14 + 0x37));
            auVar68[8] = -((byte)puVar15[7] == (byte)puVar14[7]);
            auVar68[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)((long)puVar14 + 0x39));
            auVar68[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
            auVar68[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
            auVar68[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
            auVar68[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
            auVar68[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
            auVar68[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
            auVar44 = auVar44 & auVar18;
            auVar69 = auVar68 & auVar67 & auVar44;
            uVar7 = ((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) + 1;
            uVar12 = (ulong)uVar7;
            if (uVar7 != 0) goto LAB_00718860;
            puVar14 = puVar14 + 8;
            puVar15 = puVar15 + 8;
            bVar16 = 0x3f < uVar9;
            uVar9 = uVar9 - 0x40;
          } while (bVar16 && uVar9 != 0);
        }
LAB_007184a0:
        puVar15 = (ulong *)((long)puVar15 + uVar9);
        puVar14 = (ulong *)((long)puVar14 + uVar9);
        auVar18[0] = -((byte)*puVar15 == (byte)*puVar14);
        auVar18[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)((long)puVar14 + 1));
        auVar18[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)((long)puVar14 + 2));
        auVar18[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)((long)puVar14 + 3));
        auVar18[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)((long)puVar14 + 4));
        auVar18[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)((long)puVar14 + 5));
        auVar18[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)((long)puVar14 + 6));
        auVar18[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)((long)puVar14 + 7));
        auVar18[8] = -((byte)puVar15[1] == (byte)puVar14[1]);
        auVar18[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)((long)puVar14 + 9));
        auVar18[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)((long)puVar14 + 10));
        auVar18[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)((long)puVar14 + 0xb));
        auVar18[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)((long)puVar14 + 0xc));
        auVar18[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)((long)puVar14 + 0xd));
        auVar18[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)((long)puVar14 + 0xe));
        auVar18[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)((long)puVar14 + 0xf));
        auVar45[0] = -((byte)puVar15[2] == (byte)puVar14[2]);
        auVar45[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)((long)puVar14 + 0x11));
        auVar45[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)((long)puVar14 + 0x12));
        auVar45[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)((long)puVar14 + 0x13));
        auVar45[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)((long)puVar14 + 0x14));
        auVar45[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)((long)puVar14 + 0x15));
        auVar45[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)((long)puVar14 + 0x16));
        auVar45[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)((long)puVar14 + 0x17));
        auVar45[8] = -((byte)puVar15[3] == (byte)puVar14[3]);
        auVar45[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)((long)puVar14 + 0x19));
        auVar45[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)((long)puVar14 + 0x1a));
        auVar45[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)((long)puVar14 + 0x1b));
        auVar45[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)((long)puVar14 + 0x1c));
        auVar45[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)((long)puVar14 + 0x1d));
        auVar45[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)((long)puVar14 + 0x1e));
        auVar45[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)((long)puVar14 + 0x1f));
        auVar67[0] = -((byte)puVar15[4] == (byte)puVar14[4]);
        auVar67[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)((long)puVar14 + 0x21));
        auVar67[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)((long)puVar14 + 0x22));
        auVar67[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)((long)puVar14 + 0x23));
        auVar67[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)((long)puVar14 + 0x24));
        auVar67[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)((long)puVar14 + 0x25));
        auVar67[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)((long)puVar14 + 0x26));
        auVar67[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)((long)puVar14 + 0x27));
        auVar67[8] = -((byte)puVar15[5] == (byte)puVar14[5]);
        auVar67[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)((long)puVar14 + 0x29));
        auVar67[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)((long)puVar14 + 0x2a));
        auVar67[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)((long)puVar14 + 0x2b));
        auVar67[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)((long)puVar14 + 0x2c));
        auVar67[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)((long)puVar14 + 0x2d));
        auVar67[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)((long)puVar14 + 0x2e));
        auVar67[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)((long)puVar14 + 0x2f));
        auVar70[0] = -((byte)puVar15[6] == (byte)puVar14[6]);
        auVar70[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)((long)puVar14 + 0x31));
        auVar70[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)((long)puVar14 + 0x32));
        auVar70[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)((long)puVar14 + 0x33));
        auVar70[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)((long)puVar14 + 0x34));
        auVar70[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)((long)puVar14 + 0x35));
        auVar70[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)((long)puVar14 + 0x36));
        auVar70[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)((long)puVar14 + 0x37));
        auVar70[8] = -((byte)puVar15[7] == (byte)puVar14[7]);
        auVar70[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)((long)puVar14 + 0x39));
        auVar70[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)((long)puVar14 + 0x3a));
        auVar70[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)((long)puVar14 + 0x3b));
        auVar70[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)((long)puVar14 + 0x3c));
        auVar70[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)((long)puVar14 + 0x3d));
        auVar70[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)((long)puVar14 + 0x3e));
        auVar70[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)((long)puVar14 + 0x3f));
        auVar44 = auVar45 & auVar18;
        auVar69 = auVar70 & auVar67 & auVar44;
        uVar7 = ((ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) + 1;
        uVar12 = (ulong)uVar7;
        if (uVar7 == 0) {
          return uVar12;
        }
LAB_00718860:
        uVar7 = ((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) + 1;
        uVar9 = (ulong)uVar7;
        if (((uVar7 == 0) &&
            (uVar7 = ~((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                       (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar44[0xf] >> 7) << 0xf), uVar9 = (ulong)uVar7 << 0x10,
            uVar7 == 0)) &&
           (uVar13 = (ulong)(ushort)~((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar67[0xf] >> 7) << 0xf),
           uVar9 = uVar13 << 0x20, uVar13 == 0)) {
          puVar15 = puVar15 + 6;
          puVar14 = puVar14 + 6;
          uVar9 = uVar12;
        }
        lVar10 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> lVar10 & 1) == 0; lVar10 = lVar10 + 1) {
          }
        }
        return (ulong)((uint)*(byte *)((long)puVar15 + lVar10) -
                      (uint)*(byte *)((long)puVar14 + lVar10));
      }
      auVar34[0] = -((byte)*puVar15 == *(byte *)puVar14);
      auVar34[1] = -(*(byte *)((long)puVar15 + 1) == *(byte *)(uVar12 + 0x11));
      auVar34[2] = -(*(byte *)((long)puVar15 + 2) == *(byte *)(uVar12 + 0x12));
      auVar34[3] = -(*(byte *)((long)puVar15 + 3) == *(byte *)(uVar12 + 0x13));
      auVar34[4] = -(*(byte *)((long)puVar15 + 4) == *(byte *)(uVar12 + 0x14));
      auVar34[5] = -(*(byte *)((long)puVar15 + 5) == *(byte *)(uVar12 + 0x15));
      auVar34[6] = -(*(byte *)((long)puVar15 + 6) == *(byte *)(uVar12 + 0x16));
      auVar34[7] = -(*(byte *)((long)puVar15 + 7) == *(byte *)(uVar12 + 0x17));
      auVar34[8] = -((byte)puVar15[1] == *(byte *)(uVar12 + 0x18));
      auVar34[9] = -(*(byte *)((long)puVar15 + 9) == *(byte *)(uVar12 + 0x19));
      auVar34[10] = -(*(byte *)((long)puVar15 + 10) == *(byte *)(uVar12 + 0x1a));
      auVar34[0xb] = -(*(byte *)((long)puVar15 + 0xb) == *(byte *)(uVar12 + 0x1b));
      auVar34[0xc] = -(*(byte *)((long)puVar15 + 0xc) == *(byte *)(uVar12 + 0x1c));
      auVar34[0xd] = -(*(byte *)((long)puVar15 + 0xd) == *(byte *)(uVar12 + 0x1d));
      auVar34[0xe] = -(*(byte *)((long)puVar15 + 0xe) == *(byte *)(uVar12 + 0x1e));
      auVar34[0xf] = -(*(byte *)((long)puVar15 + 0xf) == *(byte *)(uVar12 + 0x1f));
      uVar7 = ((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 != 0) goto LAB_007180e8;
      auVar35[0] = -((byte)puVar15[2] == *(byte *)(uVar12 + 0x20));
      auVar35[1] = -(*(byte *)((long)puVar15 + 0x11) == *(byte *)(uVar12 + 0x21));
      auVar35[2] = -(*(byte *)((long)puVar15 + 0x12) == *(byte *)(uVar12 + 0x22));
      auVar35[3] = -(*(byte *)((long)puVar15 + 0x13) == *(byte *)(uVar12 + 0x23));
      auVar35[4] = -(*(byte *)((long)puVar15 + 0x14) == *(byte *)(uVar12 + 0x24));
      auVar35[5] = -(*(byte *)((long)puVar15 + 0x15) == *(byte *)(uVar12 + 0x25));
      auVar35[6] = -(*(byte *)((long)puVar15 + 0x16) == *(byte *)(uVar12 + 0x26));
      auVar35[7] = -(*(byte *)((long)puVar15 + 0x17) == *(byte *)(uVar12 + 0x27));
      auVar35[8] = -((byte)puVar15[3] == *(byte *)(uVar12 + 0x28));
      auVar35[9] = -(*(byte *)((long)puVar15 + 0x19) == *(byte *)(uVar12 + 0x29));
      auVar35[10] = -(*(byte *)((long)puVar15 + 0x1a) == *(byte *)(uVar12 + 0x2a));
      auVar35[0xb] = -(*(byte *)((long)puVar15 + 0x1b) == *(byte *)(uVar12 + 0x2b));
      auVar35[0xc] = -(*(byte *)((long)puVar15 + 0x1c) == *(byte *)(uVar12 + 0x2c));
      auVar35[0xd] = -(*(byte *)((long)puVar15 + 0x1d) == *(byte *)(uVar12 + 0x2d));
      auVar35[0xe] = -(*(byte *)((long)puVar15 + 0x1e) == *(byte *)(uVar12 + 0x2e));
      auVar35[0xf] = -(*(byte *)((long)puVar15 + 0x1f) == *(byte *)(uVar12 + 0x2f));
      uVar7 = ((ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf)
              + 1;
      uVar8 = (uint)uVar7;
      if (uVar7 == 0) {
        auVar36[0] = -((byte)puVar15[4] == *(byte *)(uVar12 + 0x30));
        auVar36[1] = -(*(byte *)((long)puVar15 + 0x21) == *(byte *)(uVar12 + 0x31));
        auVar36[2] = -(*(byte *)((long)puVar15 + 0x22) == *(byte *)(uVar12 + 0x32));
        auVar36[3] = -(*(byte *)((long)puVar15 + 0x23) == *(byte *)(uVar12 + 0x33));
        auVar36[4] = -(*(byte *)((long)puVar15 + 0x24) == *(byte *)(uVar12 + 0x34));
        auVar36[5] = -(*(byte *)((long)puVar15 + 0x25) == *(byte *)(uVar12 + 0x35));
        auVar36[6] = -(*(byte *)((long)puVar15 + 0x26) == *(byte *)(uVar12 + 0x36));
        auVar36[7] = -(*(byte *)((long)puVar15 + 0x27) == *(byte *)(uVar12 + 0x37));
        auVar36[8] = -((byte)puVar15[5] == *(byte *)(uVar12 + 0x38));
        auVar36[9] = -(*(byte *)((long)puVar15 + 0x29) == *(byte *)(uVar12 + 0x39));
        auVar36[10] = -(*(byte *)((long)puVar15 + 0x2a) == *(byte *)(uVar12 + 0x3a));
        auVar36[0xb] = -(*(byte *)((long)puVar15 + 0x2b) == *(byte *)(uVar12 + 0x3b));
        auVar36[0xc] = -(*(byte *)((long)puVar15 + 0x2c) == *(byte *)(uVar12 + 0x3c));
        auVar36[0xd] = -(*(byte *)((long)puVar15 + 0x2d) == *(byte *)(uVar12 + 0x3d));
        auVar36[0xe] = -(*(byte *)((long)puVar15 + 0x2e) == *(byte *)(uVar12 + 0x3e));
        auVar36[0xf] = -(*(byte *)((long)puVar15 + 0x2f) == *(byte *)(uVar12 + 0x3f));
        uVar7 = ((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 != 0) goto LAB_007180c8;
        auVar37[0] = -((byte)puVar15[6] == *(byte *)(uVar12 + 0x40));
        auVar37[1] = -(*(byte *)((long)puVar15 + 0x31) == *(byte *)(uVar12 + 0x41));
        auVar37[2] = -(*(byte *)((long)puVar15 + 0x32) == *(byte *)(uVar12 + 0x42));
        auVar37[3] = -(*(byte *)((long)puVar15 + 0x33) == *(byte *)(uVar12 + 0x43));
        auVar37[4] = -(*(byte *)((long)puVar15 + 0x34) == *(byte *)(uVar12 + 0x44));
        auVar37[5] = -(*(byte *)((long)puVar15 + 0x35) == *(byte *)(uVar12 + 0x45));
        auVar37[6] = -(*(byte *)((long)puVar15 + 0x36) == *(byte *)(uVar12 + 0x46));
        auVar37[7] = -(*(byte *)((long)puVar15 + 0x37) == *(byte *)(uVar12 + 0x47));
        auVar37[8] = -((byte)puVar15[7] == *(byte *)(uVar12 + 0x48));
        auVar37[9] = -(*(byte *)((long)puVar15 + 0x39) == *(byte *)(uVar12 + 0x49));
        auVar37[10] = -(*(byte *)((long)puVar15 + 0x3a) == *(byte *)(uVar12 + 0x4a));
        auVar37[0xb] = -(*(byte *)((long)puVar15 + 0x3b) == *(byte *)(uVar12 + 0x4b));
        auVar37[0xc] = -(*(byte *)((long)puVar15 + 0x3c) == *(byte *)(uVar12 + 0x4c));
        auVar37[0xd] = -(*(byte *)((long)puVar15 + 0x3d) == *(byte *)(uVar12 + 0x4d));
        auVar37[0xe] = -(*(byte *)((long)puVar15 + 0x3e) == *(byte *)(uVar12 + 0x4e));
        auVar37[0xf] = -(*(byte *)((long)puVar15 + 0x3f) == *(byte *)(uVar12 + 0x4f));
        uVar7 = ((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
                ) + 1;
        uVar8 = (uint)uVar7;
        if (uVar7 == 0) {
          param_1 = puVar15 + 8;
          puVar14 = (ulong *)(uVar12 + 0x50);
          auVar38[0] = -((byte)*param_1 == *(byte *)puVar14);
          auVar38[1] = -(*(byte *)((long)puVar15 + 0x41) == *(byte *)(uVar12 + 0x51));
          auVar38[2] = -(*(byte *)((long)puVar15 + 0x42) == *(byte *)(uVar12 + 0x52));
          auVar38[3] = -(*(byte *)((long)puVar15 + 0x43) == *(byte *)(uVar12 + 0x53));
          auVar38[4] = -(*(byte *)((long)puVar15 + 0x44) == *(byte *)(uVar12 + 0x54));
          auVar38[5] = -(*(byte *)((long)puVar15 + 0x45) == *(byte *)(uVar12 + 0x55));
          auVar38[6] = -(*(byte *)((long)puVar15 + 0x46) == *(byte *)(uVar12 + 0x56));
          auVar38[7] = -(*(byte *)((long)puVar15 + 0x47) == *(byte *)(uVar12 + 0x57));
          auVar38[8] = -((byte)puVar15[9] == *(byte *)(uVar12 + 0x58));
          auVar38[9] = -(*(byte *)((long)puVar15 + 0x49) == *(byte *)(uVar12 + 0x59));
          auVar38[10] = -(*(byte *)((long)puVar15 + 0x4a) == *(byte *)(uVar12 + 0x5a));
          auVar38[0xb] = -(*(byte *)((long)puVar15 + 0x4b) == *(byte *)(uVar12 + 0x5b));
          auVar38[0xc] = -(*(byte *)((long)puVar15 + 0x4c) == *(byte *)(uVar12 + 0x5c));
          auVar38[0xd] = -(*(byte *)((long)puVar15 + 0x4d) == *(byte *)(uVar12 + 0x5d));
          auVar38[0xe] = -(*(byte *)((long)puVar15 + 0x4e) == *(byte *)(uVar12 + 0x5e));
          auVar38[0xf] = -(*(byte *)((long)puVar15 + 0x4f) == *(byte *)(uVar12 + 0x5f));
          uVar7 = ((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar38[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180e8;
          auVar39[0] = -((byte)puVar15[10] == *(byte *)(uVar12 + 0x60));
          auVar39[1] = -(*(byte *)((long)puVar15 + 0x51) == *(byte *)(uVar12 + 0x61));
          auVar39[2] = -(*(byte *)((long)puVar15 + 0x52) == *(byte *)(uVar12 + 0x62));
          auVar39[3] = -(*(byte *)((long)puVar15 + 0x53) == *(byte *)(uVar12 + 99));
          auVar39[4] = -(*(byte *)((long)puVar15 + 0x54) == *(byte *)(uVar12 + 100));
          auVar39[5] = -(*(byte *)((long)puVar15 + 0x55) == *(byte *)(uVar12 + 0x65));
          auVar39[6] = -(*(byte *)((long)puVar15 + 0x56) == *(byte *)(uVar12 + 0x66));
          auVar39[7] = -(*(byte *)((long)puVar15 + 0x57) == *(byte *)(uVar12 + 0x67));
          auVar39[8] = -((byte)puVar15[0xb] == *(byte *)(uVar12 + 0x68));
          auVar39[9] = -(*(byte *)((long)puVar15 + 0x59) == *(byte *)(uVar12 + 0x69));
          auVar39[10] = -(*(byte *)((long)puVar15 + 0x5a) == *(byte *)(uVar12 + 0x6a));
          auVar39[0xb] = -(*(byte *)((long)puVar15 + 0x5b) == *(byte *)(uVar12 + 0x6b));
          auVar39[0xc] = -(*(byte *)((long)puVar15 + 0x5c) == *(byte *)(uVar12 + 0x6c));
          auVar39[0xd] = -(*(byte *)((long)puVar15 + 0x5d) == *(byte *)(uVar12 + 0x6d));
          auVar39[0xe] = -(*(byte *)((long)puVar15 + 0x5e) == *(byte *)(uVar12 + 0x6e));
          auVar39[0xf] = -(*(byte *)((long)puVar15 + 0x5f) == *(byte *)(uVar12 + 0x6f));
          uVar7 = ((ushort)(SUB161(auVar39 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar39[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180e0;
          auVar40[0] = -((byte)puVar15[0xc] == *(byte *)(uVar12 + 0x70));
          auVar40[1] = -(*(byte *)((long)puVar15 + 0x61) == *(byte *)(uVar12 + 0x71));
          auVar40[2] = -(*(byte *)((long)puVar15 + 0x62) == *(byte *)(uVar12 + 0x72));
          auVar40[3] = -(*(byte *)((long)puVar15 + 99) == *(byte *)(uVar12 + 0x73));
          auVar40[4] = -(*(byte *)((long)puVar15 + 100) == *(byte *)(uVar12 + 0x74));
          auVar40[5] = -(*(byte *)((long)puVar15 + 0x65) == *(byte *)(uVar12 + 0x75));
          auVar40[6] = -(*(byte *)((long)puVar15 + 0x66) == *(byte *)(uVar12 + 0x76));
          auVar40[7] = -(*(byte *)((long)puVar15 + 0x67) == *(byte *)(uVar12 + 0x77));
          auVar40[8] = -((byte)puVar15[0xd] == *(byte *)(uVar12 + 0x78));
          auVar40[9] = -(*(byte *)((long)puVar15 + 0x69) == *(byte *)(uVar12 + 0x79));
          auVar40[10] = -(*(byte *)((long)puVar15 + 0x6a) == *(byte *)(uVar12 + 0x7a));
          auVar40[0xb] = -(*(byte *)((long)puVar15 + 0x6b) == *(byte *)(uVar12 + 0x7b));
          auVar40[0xc] = -(*(byte *)((long)puVar15 + 0x6c) == *(byte *)(uVar12 + 0x7c));
          auVar40[0xd] = -(*(byte *)((long)puVar15 + 0x6d) == *(byte *)(uVar12 + 0x7d));
          auVar40[0xe] = -(*(byte *)((long)puVar15 + 0x6e) == *(byte *)(uVar12 + 0x7e));
          auVar40[0xf] = -(*(byte *)((long)puVar15 + 0x6f) == *(byte *)(uVar12 + 0x7f));
          uVar7 = ((ushort)(SUB161(auVar40 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar40[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 != 0) goto LAB_007180c8;
          auVar41[0] = -((byte)puVar15[0xe] == *(byte *)(uVar12 + 0x80));
          auVar41[1] = -(*(byte *)((long)puVar15 + 0x71) == *(byte *)(uVar12 + 0x81));
          auVar41[2] = -(*(byte *)((long)puVar15 + 0x72) == *(byte *)(uVar12 + 0x82));
          auVar41[3] = -(*(byte *)((long)puVar15 + 0x73) == *(byte *)(uVar12 + 0x83));
          auVar41[4] = -(*(byte *)((long)puVar15 + 0x74) == *(byte *)(uVar12 + 0x84));
          auVar41[5] = -(*(byte *)((long)puVar15 + 0x75) == *(byte *)(uVar12 + 0x85));
          auVar41[6] = -(*(byte *)((long)puVar15 + 0x76) == *(byte *)(uVar12 + 0x86));
          auVar41[7] = -(*(byte *)((long)puVar15 + 0x77) == *(byte *)(uVar12 + 0x87));
          auVar41[8] = -((byte)puVar15[0xf] == *(byte *)(uVar12 + 0x88));
          auVar41[9] = -(*(byte *)((long)puVar15 + 0x79) == *(byte *)(uVar12 + 0x89));
          auVar41[10] = -(*(byte *)((long)puVar15 + 0x7a) == *(byte *)(uVar12 + 0x8a));
          auVar41[0xb] = -(*(byte *)((long)puVar15 + 0x7b) == *(byte *)(uVar12 + 0x8b));
          auVar41[0xc] = -(*(byte *)((long)puVar15 + 0x7c) == *(byte *)(uVar12 + 0x8c));
          auVar41[0xd] = -(*(byte *)((long)puVar15 + 0x7d) == *(byte *)(uVar12 + 0x8d));
          auVar41[0xe] = -(*(byte *)((long)puVar15 + 0x7e) == *(byte *)(uVar12 + 0x8e));
          auVar41[0xf] = -(*(byte *)((long)puVar15 + 0x7f) == *(byte *)(uVar12 + 0x8f));
          uVar7 = ((ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
                   (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar41[0xf] >> 7) << 0xf) + 1;
          uVar8 = (uint)uVar7;
          if (uVar7 == 0) {
            param_3 = uVar9 - 0x80;
            puVar14 = (ulong *)(uVar12 + 0x90);
            param_1 = puVar15 + 0x10;
            if (0x40 < param_3) goto LAB_00718227;
            if (param_3 < 0x21) {
              pbVar1 = (byte *)((long)puVar15 + (uVar9 - 0x20));
              pbVar2 = (byte *)(uVar12 + 0x70 + param_3);
              auVar42[0] = -(*pbVar2 == *pbVar1);
              auVar42[1] = -(pbVar2[1] == pbVar1[1]);
              auVar42[2] = -(pbVar2[2] == pbVar1[2]);
              auVar42[3] = -(pbVar2[3] == pbVar1[3]);
              auVar42[4] = -(pbVar2[4] == pbVar1[4]);
              auVar42[5] = -(pbVar2[5] == pbVar1[5]);
              auVar42[6] = -(pbVar2[6] == pbVar1[6]);
              auVar42[7] = -(pbVar2[7] == pbVar1[7]);
              auVar42[8] = -(pbVar2[8] == pbVar1[8]);
              auVar42[9] = -(pbVar2[9] == pbVar1[9]);
              auVar42[10] = -(pbVar2[10] == pbVar1[10]);
              auVar42[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
              auVar42[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
              auVar42[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
              auVar42[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
              auVar42[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
              uVar7 = ((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                       (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar42[0xf] >> 7) << 0xf) + 1;
              uVar8 = (uint)uVar7;
              if (uVar7 == 0) {
                pbVar1 = (byte *)((long)puVar15 + (uVar9 - 0x10));
                pbVar2 = (byte *)(uVar12 + 0x80 + param_3);
                auVar43[0] = -(*pbVar2 == *pbVar1);
                auVar43[1] = -(pbVar2[1] == pbVar1[1]);
                auVar43[2] = -(pbVar2[2] == pbVar1[2]);
                auVar43[3] = -(pbVar2[3] == pbVar1[3]);
                auVar43[4] = -(pbVar2[4] == pbVar1[4]);
                auVar43[5] = -(pbVar2[5] == pbVar1[5]);
                auVar43[6] = -(pbVar2[6] == pbVar1[6]);
                auVar43[7] = -(pbVar2[7] == pbVar1[7]);
                auVar43[8] = -(pbVar2[8] == pbVar1[8]);
                auVar43[9] = -(pbVar2[9] == pbVar1[9]);
                auVar43[10] = -(pbVar2[10] == pbVar1[10]);
                auVar43[0xb] = -(pbVar2[0xb] == pbVar1[0xb]);
                auVar43[0xc] = -(pbVar2[0xc] == pbVar1[0xc]);
                auVar43[0xd] = -(pbVar2[0xd] == pbVar1[0xd]);
                auVar43[0xe] = -(pbVar2[0xe] == pbVar1[0xe]);
                auVar43[0xf] = -(pbVar2[0xf] == pbVar1[0xf]);
                uVar7 = ((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                        (ushort)(auVar43[0xf] >> 7) << 0xf) + 1;
                uVar8 = (uint)uVar7;
                if (uVar7 == 0) {
                  return (ulong)uVar7;
                }
                goto LAB_00718103;
              }
              goto LAB_00718100;
            }
            goto LAB_00718297;
          }
        }
LAB_007180c0:
        puVar14 = puVar14 + 2;
        param_1 = param_1 + 2;
LAB_007180c8:
        uVar11 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        return (ulong)((uint)*(byte *)((long)param_1 + (ulong)uVar11 + 0x20) -
                      (uint)*(byte *)((long)puVar14 + (ulong)uVar11 + 0x20));
      }
    }
  }
LAB_007180e0:
  puVar14 = puVar14 + 2;
  param_1 = param_1 + 2;
LAB_007180e8:
  uVar11 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
    }
  }
  return (ulong)((uint)*(byte *)((long)param_1 + (ulong)uVar11) -
                (uint)*(byte *)((long)puVar14 + (ulong)uVar11));
}

