
int FUN_007211c0(ulong *param_1,byte *param_2,ulong param_3)

{
  ushort *puVar1;
  uint *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
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
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 2) {
    uVar10 = (uint)(byte)*param_1;
    uVar9 = (uint)*param_2;
    goto LAB_00721297;
  }
  uVar12 = (long)param_2 - (long)param_1;
  if (0x1f < param_3) {
    pbVar14 = (byte *)(param_3 + (long)param_1);
    if (((ulong)param_1 & 0xf) != 0) {
      pbVar3 = (byte *)((long)param_1 + uVar12);
      auVar34[0] = -((byte)*param_1 == *pbVar3);
      auVar34[1] = -(*(byte *)((long)param_1 + 1) == pbVar3[1]);
      auVar34[2] = -(*(byte *)((long)param_1 + 2) == pbVar3[2]);
      auVar34[3] = -(*(byte *)((long)param_1 + 3) == pbVar3[3]);
      auVar34[4] = -(*(byte *)((long)param_1 + 4) == pbVar3[4]);
      auVar34[5] = -(*(byte *)((long)param_1 + 5) == pbVar3[5]);
      auVar34[6] = -(*(byte *)((long)param_1 + 6) == pbVar3[6]);
      auVar34[7] = -(*(byte *)((long)param_1 + 7) == pbVar3[7]);
      auVar34[8] = -((byte)param_1[1] == pbVar3[8]);
      auVar34[9] = -(*(byte *)((long)param_1 + 9) == pbVar3[9]);
      auVar34[10] = -(*(byte *)((long)param_1 + 10) == pbVar3[10]);
      auVar34[0xb] = -(*(byte *)((long)param_1 + 0xb) == pbVar3[0xb]);
      auVar34[0xc] = -(*(byte *)((long)param_1 + 0xc) == pbVar3[0xc]);
      auVar34[0xd] = -(*(byte *)((long)param_1 + 0xd) == pbVar3[0xd]);
      auVar34[0xe] = -(*(byte *)((long)param_1 + 0xe) == pbVar3[0xe]);
      auVar34[0xf] = -(*(byte *)((long)param_1 + 0xf) == pbVar3[0xf]);
      uVar10 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
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
                        (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar34[0xf] >> 7) << 0xf) - 0xffff;
      puVar13 = param_1;
      if (uVar10 == 0) {
        param_1 = (ulong *)((long)param_1 + (0x10 - ((ulong)param_1 & 0xf)));
        goto LAB_007212f7;
      }
      goto LAB_00721450;
    }
LAB_007212f7:
    puVar13 = param_1;
    if ((uVar12 & 0xf) == 0) {
      if (param_1 < (ulong *)((ulong)pbVar14 & 0xffffffffffffffe0)) {
        if (((ulong)param_1 & 0x10) != 0) {
          pbVar3 = (byte *)((long)param_1 + uVar12);
          auVar24[0] = -(*pbVar3 == (byte)*param_1);
          auVar24[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
          auVar24[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
          auVar24[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
          auVar24[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
          auVar24[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
          auVar24[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
          auVar24[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
          auVar24[8] = -(pbVar3[8] == (byte)param_1[1]);
          auVar24[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
          auVar24[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
          auVar24[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
          auVar24[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
          auVar24[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
          auVar24[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
          auVar24[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
          uVar10 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                           (ushort)(auVar24[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar10 != 0) goto LAB_00721450;
          param_1 = param_1 + 2;
          if ((ulong *)((ulong)pbVar14 & 0xffffffffffffffe0) == param_1) goto joined_r0x007215b0;
        }
        if (((ulong)param_1 & 0x20) != 0) {
          pbVar3 = (byte *)((long)param_1 + uVar12);
          auVar25[0] = -(*pbVar3 == (byte)*param_1);
          auVar25[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
          auVar25[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
          auVar25[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
          auVar25[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
          auVar25[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
          auVar25[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
          auVar25[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
          auVar25[8] = -(pbVar3[8] == (byte)param_1[1]);
          auVar25[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
          auVar25[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
          auVar25[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
          auVar25[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
          auVar25[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
          auVar25[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
          auVar25[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
          uVar10 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                           (ushort)(auVar25[0xf] >> 7) << 0xf) - 0xffff;
          puVar13 = param_1;
          if (uVar10 == 0) {
            puVar13 = param_1 + 2;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar26[0] = -(*pbVar3 == (byte)*puVar13);
            auVar26[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x11));
            auVar26[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x12));
            auVar26[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x13));
            auVar26[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x14));
            auVar26[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x15));
            auVar26[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x16));
            auVar26[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x17));
            auVar26[8] = -(pbVar3[8] == (byte)param_1[3]);
            auVar26[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x19));
            auVar26[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x1a));
            auVar26[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x1b));
            auVar26[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x1c));
            auVar26[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x1d));
            auVar26[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x1e));
            auVar26[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x1f));
            uVar10 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                             (ushort)(auVar26[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar10 == 0) {
              param_1 = param_1 + 4;
              goto LAB_007214dc;
            }
          }
          goto LAB_00721450;
        }
LAB_007214dc:
        if ((ulong *)((ulong)pbVar14 & 0xffffffffffffffc0) == param_1) goto LAB_007213fa;
        do {
          pbVar3 = (byte *)((long)param_1 + uVar12);
          auVar27[0] = -(*pbVar3 == (byte)*param_1);
          auVar27[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
          auVar27[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
          auVar27[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
          auVar27[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
          auVar27[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
          auVar27[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
          auVar27[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
          auVar27[8] = -(pbVar3[8] == (byte)param_1[1]);
          auVar27[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
          auVar27[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
          auVar27[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
          auVar27[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
          auVar27[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
          auVar27[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
          auVar27[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
          uVar10 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
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
                           (ushort)(auVar27[0xf] >> 7) << 0xf) - 0xffff;
          puVar13 = param_1;
          if (uVar10 != 0) goto LAB_00721450;
          puVar13 = param_1 + 2;
          pbVar3 = (byte *)((long)puVar13 + uVar12);
          auVar28[0] = -(*pbVar3 == (byte)*puVar13);
          auVar28[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x11));
          auVar28[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x12));
          auVar28[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x13));
          auVar28[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x14));
          auVar28[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x15));
          auVar28[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x16));
          auVar28[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x17));
          auVar28[8] = -(pbVar3[8] == (byte)param_1[3]);
          auVar28[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x19));
          auVar28[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x1a));
          auVar28[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x1b));
          auVar28[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x1c));
          auVar28[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x1d));
          auVar28[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x1e));
          auVar28[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x1f));
          uVar10 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                           (ushort)(auVar28[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar10 != 0) goto LAB_00721450;
          puVar13 = param_1 + 4;
          pbVar3 = (byte *)((long)puVar13 + uVar12);
          auVar29[0] = -(*pbVar3 == (byte)*puVar13);
          auVar29[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x21));
          auVar29[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x22));
          auVar29[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x23));
          auVar29[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x24));
          auVar29[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x25));
          auVar29[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x26));
          auVar29[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x27));
          auVar29[8] = -(pbVar3[8] == (byte)param_1[5]);
          auVar29[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x29));
          auVar29[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x2a));
          auVar29[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x2b));
          auVar29[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x2c));
          auVar29[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x2d));
          auVar29[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x2e));
          auVar29[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x2f));
          uVar10 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                           (ushort)(auVar29[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar10 != 0) goto LAB_00721450;
          puVar13 = param_1 + 6;
          pbVar3 = (byte *)((long)puVar13 + uVar12);
          auVar30[0] = -(*pbVar3 == (byte)*puVar13);
          auVar30[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x31));
          auVar30[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x32));
          auVar30[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x33));
          auVar30[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x34));
          auVar30[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x35));
          auVar30[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x36));
          auVar30[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x37));
          auVar30[8] = -(pbVar3[8] == (byte)param_1[7]);
          auVar30[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x39));
          auVar30[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x3a));
          auVar30[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x3b));
          auVar30[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x3c));
          auVar30[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x3d));
          auVar30[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x3e));
          auVar30[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x3f));
          uVar10 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar30[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar10 != 0) goto LAB_00721450;
          param_1 = param_1 + 8;
        } while ((ulong *)((ulong)pbVar14 & 0xffffffffffffffc0) != param_1);
        if (param_1 < (ulong *)((ulong)pbVar14 & 0xffffffffffffffe0)) {
          do {
            pbVar3 = (byte *)((long)param_1 + uVar12);
            auVar31[0] = -(*pbVar3 == (byte)*param_1);
            auVar31[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
            auVar31[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
            auVar31[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
            auVar31[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
            auVar31[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
            auVar31[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
            auVar31[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
            auVar31[8] = -(pbVar3[8] == (byte)param_1[1]);
            auVar31[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
            auVar31[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
            auVar31[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
            auVar31[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
            auVar31[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
            auVar31[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
            auVar31[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
            uVar10 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar31[0xf] >> 7) << 0xf) - 0xffff;
            puVar13 = param_1;
            if (uVar10 != 0) goto LAB_00721450;
            puVar13 = param_1 + 2;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar32[0] = -(*pbVar3 == (byte)*puVar13);
            auVar32[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x11));
            auVar32[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x12));
            auVar32[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x13));
            auVar32[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x14));
            auVar32[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x15));
            auVar32[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x16));
            auVar32[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x17));
            auVar32[8] = -(pbVar3[8] == (byte)param_1[3]);
            auVar32[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x19));
            auVar32[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x1a));
            auVar32[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x1b));
            auVar32[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x1c));
            auVar32[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x1d));
            auVar32[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x1e));
            auVar32[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x1f));
            uVar10 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                             (ushort)(auVar32[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar10 != 0) goto LAB_00721450;
            param_1 = param_1 + 4;
          } while (param_1 != (ulong *)((ulong)pbVar14 & 0xffffffffffffffe0));
        }
      }
    }
    else {
      if (((ulong)param_1 & 0x10) != 0) {
        pbVar3 = (byte *)((long)param_1 + uVar12);
        auVar15[0] = -(*pbVar3 == (byte)*param_1);
        auVar15[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
        auVar15[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
        auVar15[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
        auVar15[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
        auVar15[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
        auVar15[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
        auVar15[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
        auVar15[8] = -(pbVar3[8] == (byte)param_1[1]);
        auVar15[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
        auVar15[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
        auVar15[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
        auVar15[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
        auVar15[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
        auVar15[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
        auVar15[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
        uVar10 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
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
                          (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar15[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar10 != 0) goto LAB_00721450;
        param_1 = param_1 + 2;
      }
      if (param_1 < (ulong *)((ulong)pbVar14 & 0xffffffffffffffe0)) {
        if (((ulong)param_1 & 0x20) != 0) {
          pbVar3 = (byte *)((long)param_1 + uVar12);
          auVar16[0] = -(*pbVar3 == (byte)*param_1);
          auVar16[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
          auVar16[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
          auVar16[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
          auVar16[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
          auVar16[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
          auVar16[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
          auVar16[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
          auVar16[8] = -(pbVar3[8] == (byte)param_1[1]);
          auVar16[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
          auVar16[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
          auVar16[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
          auVar16[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
          auVar16[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
          auVar16[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
          auVar16[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
          uVar10 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
                            (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar16[0xf] >> 7) << 0xf) - 0xffff;
          puVar13 = param_1;
          if (uVar10 == 0) {
            puVar13 = param_1 + 2;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar17[0] = -(*pbVar3 == (byte)*puVar13);
            auVar17[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x11));
            auVar17[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x12));
            auVar17[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x13));
            auVar17[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x14));
            auVar17[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x15));
            auVar17[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x16));
            auVar17[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x17));
            auVar17[8] = -(pbVar3[8] == (byte)param_1[3]);
            auVar17[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x19));
            auVar17[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x1a));
            auVar17[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x1b));
            auVar17[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x1c));
            auVar17[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x1d));
            auVar17[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x1e));
            auVar17[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x1f));
            uVar10 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
                              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar17[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar10 == 0) {
              param_1 = param_1 + 4;
              goto LAB_0072137d;
            }
          }
LAB_00721450:
          uVar9 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
          uVar10 = (uint)*(byte *)((long)puVar13 + (ulong)uVar9);
          uVar9 = (uint)*(byte *)((long)puVar13 + uVar9 + uVar12);
          goto LAB_00721297;
        }
LAB_0072137d:
        if (param_1 < (ulong *)((ulong)pbVar14 & 0xffffffffffffffc0)) {
          do {
            pbVar3 = (byte *)((long)param_1 + uVar12);
            auVar18[0] = -(*pbVar3 == (byte)*param_1);
            auVar18[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
            auVar18[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
            auVar18[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
            auVar18[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
            auVar18[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
            auVar18[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
            auVar18[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
            auVar18[8] = -(pbVar3[8] == (byte)param_1[1]);
            auVar18[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
            auVar18[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
            auVar18[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
            auVar18[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
            auVar18[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
            auVar18[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
            auVar18[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
            uVar10 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar18[0xf] >> 7) << 0xf) - 0xffff;
            puVar13 = param_1;
            if (uVar10 != 0) goto LAB_00721450;
            puVar13 = param_1 + 2;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar19[0] = -(*pbVar3 == (byte)*puVar13);
            auVar19[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x11));
            auVar19[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x12));
            auVar19[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x13));
            auVar19[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x14));
            auVar19[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x15));
            auVar19[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x16));
            auVar19[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x17));
            auVar19[8] = -(pbVar3[8] == (byte)param_1[3]);
            auVar19[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x19));
            auVar19[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x1a));
            auVar19[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x1b));
            auVar19[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x1c));
            auVar19[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x1d));
            auVar19[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x1e));
            auVar19[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x1f));
            uVar10 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
                              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar19[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar10 != 0) goto LAB_00721450;
            puVar13 = param_1 + 4;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar20[0] = -(*pbVar3 == (byte)*puVar13);
            auVar20[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x21));
            auVar20[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x22));
            auVar20[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x23));
            auVar20[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x24));
            auVar20[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x25));
            auVar20[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x26));
            auVar20[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x27));
            auVar20[8] = -(pbVar3[8] == (byte)param_1[5]);
            auVar20[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x29));
            auVar20[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x2a));
            auVar20[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x2b));
            auVar20[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x2c));
            auVar20[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x2d));
            auVar20[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x2e));
            auVar20[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x2f));
            uVar10 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                             (ushort)(auVar20[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar10 != 0) goto LAB_00721450;
            puVar13 = param_1 + 6;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar21[0] = -(*pbVar3 == (byte)*puVar13);
            auVar21[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x31));
            auVar21[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x32));
            auVar21[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x33));
            auVar21[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x34));
            auVar21[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x35));
            auVar21[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x36));
            auVar21[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x37));
            auVar21[8] = -(pbVar3[8] == (byte)param_1[7]);
            auVar21[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x39));
            auVar21[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x3a));
            auVar21[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x3b));
            auVar21[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x3c));
            auVar21[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x3d));
            auVar21[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x3e));
            auVar21[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x3f));
            uVar10 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                             (ushort)(auVar21[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar10 != 0) goto LAB_00721450;
            param_1 = param_1 + 8;
          } while ((ulong *)((ulong)pbVar14 & 0xffffffffffffffc0) != param_1);
        }
LAB_007213fa:
        if (param_1 < (ulong *)((ulong)pbVar14 & 0xffffffffffffffe0)) {
          do {
            pbVar3 = (byte *)((long)param_1 + uVar12);
            auVar22[0] = -(*pbVar3 == (byte)*param_1);
            auVar22[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 1));
            auVar22[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 2));
            auVar22[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 3));
            auVar22[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 4));
            auVar22[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 5));
            auVar22[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 6));
            auVar22[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 7));
            auVar22[8] = -(pbVar3[8] == (byte)param_1[1]);
            auVar22[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 9));
            auVar22[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 10));
            auVar22[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0xb));
            auVar22[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0xc));
            auVar22[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0xd));
            auVar22[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0xe));
            auVar22[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0xf));
            uVar10 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                             (ushort)(auVar22[0xf] >> 7) << 0xf) - 0xffff;
            puVar13 = param_1;
            if (uVar10 != 0) goto LAB_00721450;
            puVar13 = param_1 + 2;
            pbVar3 = (byte *)((long)puVar13 + uVar12);
            auVar23[0] = -(*pbVar3 == (byte)*puVar13);
            auVar23[1] = -(pbVar3[1] == *(byte *)((long)param_1 + 0x11));
            auVar23[2] = -(pbVar3[2] == *(byte *)((long)param_1 + 0x12));
            auVar23[3] = -(pbVar3[3] == *(byte *)((long)param_1 + 0x13));
            auVar23[4] = -(pbVar3[4] == *(byte *)((long)param_1 + 0x14));
            auVar23[5] = -(pbVar3[5] == *(byte *)((long)param_1 + 0x15));
            auVar23[6] = -(pbVar3[6] == *(byte *)((long)param_1 + 0x16));
            auVar23[7] = -(pbVar3[7] == *(byte *)((long)param_1 + 0x17));
            auVar23[8] = -(pbVar3[8] == (byte)param_1[3]);
            auVar23[9] = -(pbVar3[9] == *(byte *)((long)param_1 + 0x19));
            auVar23[10] = -(pbVar3[10] == *(byte *)((long)param_1 + 0x1a));
            auVar23[0xb] = -(pbVar3[0xb] == *(byte *)((long)param_1 + 0x1b));
            auVar23[0xc] = -(pbVar3[0xc] == *(byte *)((long)param_1 + 0x1c));
            auVar23[0xd] = -(pbVar3[0xd] == *(byte *)((long)param_1 + 0x1d));
            auVar23[0xe] = -(pbVar3[0xe] == *(byte *)((long)param_1 + 0x1e));
            auVar23[0xf] = -(pbVar3[0xf] == *(byte *)((long)param_1 + 0x1f));
            uVar10 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
            if (uVar10 != 0) goto LAB_00721450;
            param_1 = param_1 + 4;
          } while ((ulong *)((ulong)pbVar14 & 0xffffffffffffffe0) != param_1);
        }
      }
    }
joined_r0x007215b0:
    param_3 = (long)pbVar14 - (long)param_1;
    if (param_3 == 0) {
      return 0;
    }
  }
  if ((param_3 & 1) != 0) {
    uVar7 = *param_1;
    uVar10 = (uint)(byte)uVar7;
    pbVar14 = (byte *)((long)param_1 + uVar12);
    uVar9 = (uint)*pbVar14;
    param_3 = param_3 - 1;
    if (param_3 == 0) goto LAB_00721297;
    param_1 = (ulong *)((long)param_1 + 1);
    iVar6 = (uint)(byte)uVar7 - (uint)*pbVar14;
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  if ((param_3 & 2) != 0) {
    uVar5 = *param_1;
    uVar7 = (ulong)(ushort)uVar5;
    puVar1 = (ushort *)((long)param_1 + uVar12);
    uVar11 = (ulong)*puVar1;
    param_3 = param_3 - 2;
    if ((param_3 == 0) || (param_1 = (ulong *)((long)param_1 + 2), (ushort)uVar5 != *puVar1))
    goto LAB_0072129a;
  }
  if ((param_3 & 4) != 0) {
    uVar5 = *param_1;
    uVar7 = (ulong)(uint)uVar5;
    puVar2 = (uint *)((long)param_1 + uVar12);
    uVar11 = (ulong)*puVar2;
    param_3 = param_3 - 4;
    if ((param_3 == 0) || (param_1 = (ulong *)((long)param_1 + 4), (uint)uVar5 != *puVar2))
    goto LAB_0072129a;
  }
  if ((param_3 & 8) != 0) {
    uVar7 = *param_1;
    uVar11 = *(ulong *)((long)param_1 + uVar12);
    if ((param_3 == 8) || (param_1 = param_1 + 1, uVar7 != uVar11)) {
LAB_0072129a:
      if (uVar7 == uVar11) {
        return 0;
      }
      lVar4 = 0;
      if (uVar7 - uVar11 != 0) {
        for (; (uVar7 - uVar11 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
        }
      }
      bVar8 = (byte)((lVar4 >> 3) << 3);
      return ((uint)((long)uVar7 >> (bVar8 & 0x3f)) & 0xff) -
             ((uint)((long)uVar11 >> (bVar8 & 0x3f)) & 0xff);
    }
  }
  pbVar14 = (byte *)((long)param_1 + uVar12);
  auVar33[0] = -((byte)*param_1 == *pbVar14);
  auVar33[1] = -(*(byte *)((long)param_1 + 1) == pbVar14[1]);
  auVar33[2] = -(*(byte *)((long)param_1 + 2) == pbVar14[2]);
  auVar33[3] = -(*(byte *)((long)param_1 + 3) == pbVar14[3]);
  auVar33[4] = -(*(byte *)((long)param_1 + 4) == pbVar14[4]);
  auVar33[5] = -(*(byte *)((long)param_1 + 5) == pbVar14[5]);
  auVar33[6] = -(*(byte *)((long)param_1 + 6) == pbVar14[6]);
  auVar33[7] = -(*(byte *)((long)param_1 + 7) == pbVar14[7]);
  auVar33[8] = -((byte)param_1[1] == pbVar14[8]);
  auVar33[9] = -(*(byte *)((long)param_1 + 9) == pbVar14[9]);
  auVar33[10] = -(*(byte *)((long)param_1 + 10) == pbVar14[10]);
  auVar33[0xb] = -(*(byte *)((long)param_1 + 0xb) == pbVar14[0xb]);
  auVar33[0xc] = -(*(byte *)((long)param_1 + 0xc) == pbVar14[0xc]);
  auVar33[0xd] = -(*(byte *)((long)param_1 + 0xd) == pbVar14[0xd]);
  auVar33[0xe] = -(*(byte *)((long)param_1 + 0xe) == pbVar14[0xe]);
  auVar33[0xf] = -(*(byte *)((long)param_1 + 0xf) == pbVar14[0xf]);
  uVar10 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                   (ushort)(auVar33[0xf] >> 7) << 0xf) - 0xffff;
  if (uVar10 == 0) {
    return 0;
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  uVar10 = (uint)*(byte *)((long)param_1 + (ulong)uVar9);
  uVar9 = (uint)((byte *)((long)param_1 + (ulong)uVar9))[uVar12];
LAB_00721297:
  return uVar10 - uVar9;
}

