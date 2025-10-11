
undefined1 * FUN_0073d7e0(undefined1 (*param_1) [32],undefined1 param_2)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  long lVar7;
  undefined1 (*pauVar8) [32];
  uint uVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  auVar12[1] = param_2;
  auVar12[0] = param_2;
  auVar12[2] = param_2;
  auVar12[3] = param_2;
  auVar12[4] = param_2;
  auVar12[5] = param_2;
  auVar12[6] = param_2;
  auVar12[7] = param_2;
  auVar12[8] = param_2;
  auVar12[9] = param_2;
  auVar12[10] = param_2;
  auVar12[0xb] = param_2;
  auVar12[0xc] = param_2;
  auVar12[0xd] = param_2;
  auVar12[0xe] = param_2;
  auVar12[0xf] = param_2;
  auVar12[0x10] = param_2;
  auVar12[0x11] = param_2;
  auVar12[0x12] = param_2;
  auVar12[0x13] = param_2;
  auVar12[0x14] = param_2;
  auVar12[0x15] = param_2;
  auVar12[0x16] = param_2;
  auVar12[0x17] = param_2;
  auVar12[0x18] = param_2;
  auVar12[0x19] = param_2;
  auVar12[0x1a] = param_2;
  auVar12[0x1b] = param_2;
  auVar12[0x1c] = param_2;
  auVar12[0x1d] = param_2;
  auVar12[0x1e] = param_2;
  auVar12[0x1f] = param_2;
  auVar13 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar1 = vpcmpeqb_avx2(auVar12,*param_1);
    auVar2 = vpcmpeqb_avx2(auVar13,*param_1);
    auVar1 = vpor_avx2(auVar2,auVar1);
    uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
    if (uVar9 != 0) {
      uVar6 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return *param_1 + uVar6;
    }
  }
  else {
    auVar1 = *(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f);
    auVar2 = vpcmpeqb_avx2(auVar12,auVar1);
    auVar1 = vpcmpeqb_avx2(auVar13,auVar1);
    auVar1 = vpor_avx2(auVar1,auVar2);
    uVar9 = (int)((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) >> ((uint)param_1 & 0x1f);
    if (uVar9 != 0) {
      uVar6 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return *param_1 + uVar6;
    }
  }
  uVar10 = (ulong)param_1 | 0x1f;
  auVar1 = vpcmpeqb_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 1));
  auVar2 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar10 + 1));
  auVar1 = vpor_avx2(auVar2,auVar1);
  uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  if (uVar9 != 0) {
    uVar6 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    return (undefined1 *)((ulong)uVar6 + uVar10 + 1);
  }
  auVar1 = vpcmpeqb_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 0x21));
  auVar2 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar10 + 0x21));
  auVar1 = vpor_avx2(auVar2,auVar1);
  uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  if (uVar9 != 0) {
    uVar6 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    return (undefined1 *)((ulong)uVar6 + uVar10 + 0x21);
  }
  auVar1 = vpcmpeqb_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 0x41));
  auVar2 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar10 + 0x41));
  auVar1 = vpor_avx2(auVar2,auVar1);
  uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  if (uVar9 != 0) {
    uVar6 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    return (undefined1 *)((ulong)uVar6 + uVar10 + 0x41);
  }
  auVar1 = vpcmpeqb_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 0x61));
  auVar2 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar10 + 0x61));
  auVar1 = vpor_avx2(auVar2,auVar1);
  uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  if (uVar9 != 0) {
    uVar6 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    return (undefined1 *)((ulong)uVar6 + uVar10 + 0x61);
  }
  pauVar8 = (undefined1 (*) [32])(uVar10 + 0x81 & 0xffffffffffffff80);
  do {
    pauVar11 = pauVar8;
    auVar2 = vpminub_avx2(*pauVar11,auVar12 ^ *pauVar11);
    auVar1 = vpminub_avx2(pauVar11[1],auVar12 ^ pauVar11[1]);
    auVar3 = vpminub_avx2(pauVar11[2],auVar12 ^ pauVar11[2]);
    auVar4 = vpminub_avx2(pauVar11[3],auVar12 ^ pauVar11[3]);
    auVar5 = vpminub_avx2(auVar1,auVar2);
    auVar1 = vpminub_avx2(auVar4,auVar3);
    auVar1 = vpminub_avx2(auVar1,auVar5);
    auVar1 = vpcmpeqb_avx2(auVar13,auVar1);
    uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
    pauVar8 = pauVar11 + 4;
  } while (uVar9 == 0);
  auVar12 = vpcmpeqb_avx2(auVar13,auVar2);
  uVar6 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb
          | (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
          (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
          (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
          (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
          (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f;
  if (uVar6 != 0) {
    uVar9 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    return *pauVar11 + uVar9;
  }
  auVar12 = vpcmpeqb_avx2(auVar13,auVar5);
  uVar6 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb
          | (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
          (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
          (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
          (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
          (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f;
  if (uVar6 != 0) {
    uVar9 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    return pauVar11[1] + uVar9;
  }
  auVar12 = vpcmpeqb_avx2(auVar13,auVar3);
  lVar7 = 0;
  for (uVar10 = CONCAT44(uVar9,(uint)(SUB321(auVar12 >> 7,0) & 1) |
                               (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
                               (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 |
                               (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
                               (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
                               (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
                               (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 |
                               (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
                               (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
                               (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
                               (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
                               (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
                               (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
                               (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
                               (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe |
                               (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
                               (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
                               (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
                               (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
                               (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
                               (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
                               (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
                               (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
                               (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 |
                               (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
                               (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
                               (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
                               (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
                               (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
                               (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
                               (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e |
                               (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f); (uVar10 & 1) == 0;
      uVar10 = uVar10 >> 1 | 0x8000000000000000) {
    lVar7 = lVar7 + 1;
  }
  return pauVar11[2] + lVar7;
}

