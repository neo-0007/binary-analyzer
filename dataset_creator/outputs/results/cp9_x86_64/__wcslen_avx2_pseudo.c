
ulong __wcslen_avx2(undefined1 (*param_1) [32])

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [32];
  
  uVar7 = (uint)param_1;
  auVar12 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar7 & 0xfff) < 0xfe1) {
    auVar3 = vpcmpeqd_avx2(auVar12,*param_1);
    uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
    if (uVar8 != 0) {
      uVar7 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (ulong)(uVar7 >> 2);
    }
  }
  else {
    auVar3 = vpcmpeqd_avx2(auVar12,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
    uVar8 = (int)((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) >> (uVar7 & 0x1f);
    if (uVar8 != 0) {
      uVar7 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (ulong)(uVar7 >> 2);
    }
  }
  uVar10 = (ulong)param_1 | 0x1f;
  auVar3 = vpcmpeqd_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 1));
  uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  iVar9 = (int)uVar10;
  if (uVar8 != 0) {
    iVar5 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    return (ulong)(iVar5 + (iVar9 - uVar7) + 1 >> 2);
  }
  auVar3 = vpcmpeqd_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 0x21));
  uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  if (uVar8 != 0) {
    iVar5 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    return (ulong)(iVar5 + (iVar9 - uVar7) + 0x21 >> 2);
  }
  auVar3 = vpcmpeqd_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 0x41));
  uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  if (uVar8 != 0) {
    iVar5 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    return (ulong)(iVar5 + (iVar9 - uVar7) + 0x41 >> 2);
  }
  auVar3 = vpcmpeqd_avx2(auVar12,*(undefined1 (*) [32])(uVar10 + 0x61));
  uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  if (uVar8 != 0) {
    iVar5 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    return (ulong)(iVar5 + (iVar9 - uVar7) + 0x61 >> 2);
  }
  uVar10 = uVar10 + 1 | 0x7f;
  do {
    pauVar1 = (undefined1 (*) [32])(uVar10 + 1);
    auVar4 = vpminud_avx2(*pauVar1,*(undefined1 (*) [32])(uVar10 + 0x21));
    pauVar2 = (undefined1 (*) [32])(uVar10 + 0x41);
    auVar3 = vpminud_avx2(*pauVar2,*(undefined1 (*) [32])(uVar10 + 0x61));
    auVar3 = vpminud_avx2(auVar3,auVar4);
    auVar3 = vpcmpeqd_avx2(auVar12,auVar3);
    uVar7 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
    uVar10 = uVar10 + 0x80;
  } while (uVar7 == 0);
  auVar3 = vpcmpeqd_avx2(auVar12,*pauVar1);
  uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  lVar11 = uVar10 - (long)param_1;
  if (uVar8 != 0) {
    uVar7 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    return (ulong)uVar7 + lVar11 + -0x7f >> 2;
  }
  auVar3 = vpcmpeqd_avx2(auVar12,auVar4);
  uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  if (uVar8 != 0) {
    uVar7 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    return (ulong)uVar7 + lVar11 + -0x5f >> 2;
  }
  auVar12 = vpcmpeqd_avx2(auVar12,*pauVar2);
  lVar6 = 0;
  for (uVar10 = CONCAT44(uVar7,(uint)(SUB321(auVar12 >> 7,0) & 1) |
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
    lVar6 = lVar6 + 1;
  }
  return (ulong)(lVar6 + lVar11 + -0x3f) >> 2;
}

