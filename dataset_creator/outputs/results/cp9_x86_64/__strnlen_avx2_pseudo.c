
ulong __strnlen_avx2(undefined1 (*param_1) [32],ulong param_2)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  if (param_2 == 0) {
    return 0;
  }
  auVar15 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar16 = vpcmpeqb_avx2(auVar15,*param_1);
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    if (param_2 < 0x21) {
      uVar10 = 0;
      for (uVar7 = uVar7 | (uint)(1L << (param_2 & 0x3f)); (uVar7 & 1) == 0;
          uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return (ulong)uVar10;
    }
    if (uVar7 != 0) {
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return (ulong)uVar10;
    }
  }
  else {
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
    uVar7 = (int)((uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f) >> ((uint)param_1 & 0x1f);
    if (uVar7 != 0) {
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      uVar9 = (ulong)uVar10;
      if (param_2 < uVar9) {
        uVar9 = param_2 & 0xffffffff;
      }
      return uVar9;
    }
    if (param_2 <= (((ulong)param_1 | 0x1f) + 1) - (long)param_1) {
      return param_2;
    }
  }
  uVar12 = (ulong)param_1 | 0x1f;
  uVar9 = (uVar12 + 0x82) - (long)param_1;
  auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 1));
  uVar11 = param_2 - uVar9;
  if (uVar9 <= param_2) {
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    iVar8 = (int)uVar9;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar4 + iVar8 + -0x81);
    }
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x21));
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar4 + iVar8 + -0x61);
    }
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x41));
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar4 + iVar8 + -0x41);
    }
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x61));
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar4 + iVar8 + -0x21);
    }
    if (uVar11 < 0x80) {
      uVar12 = uVar12 + 0x80;
    }
    else {
      uVar9 = uVar12 + 1;
      uVar12 = uVar9 | 0x7f;
      uVar11 = uVar11 + ((uint)uVar9 & 0x7f);
      while (bVar14 = 0x7f < uVar11, uVar11 = uVar11 - 0x80, bVar14) {
        pauVar1 = (undefined1 (*) [32])(uVar12 + 1);
        auVar3 = vpminub_avx2(*pauVar1,*(undefined1 (*) [32])(uVar12 + 0x21));
        pauVar2 = (undefined1 (*) [32])(uVar12 + 0x41);
        auVar16 = vpminub_avx2(*pauVar2,*(undefined1 (*) [32])(uVar12 + 0x61));
        auVar16 = vpminub_avx2(auVar16,auVar3);
        auVar16 = vpcmpeqb_avx2(auVar15,auVar16);
        uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe |
                (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
                (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
                (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
                (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
        uVar12 = uVar12 + 0x80;
        if (uVar7 != 0) {
          auVar16 = vpcmpeqb_avx2(auVar15,*pauVar1);
          uVar10 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
          lVar13 = uVar12 - (long)param_1;
          if (uVar10 != 0) {
            uVar7 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            return (ulong)uVar7 + lVar13 + -0x7f;
          }
          auVar16 = vpcmpeqb_avx2(auVar15,auVar3);
          uVar10 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
          if (uVar10 != 0) {
            uVar7 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            return (ulong)uVar7 + lVar13 + -0x5f;
          }
          auVar15 = vpcmpeqb_avx2(auVar15,*pauVar2);
          lVar6 = 0;
          for (uVar9 = CONCAT44(uVar7,(uint)(SUB321(auVar15 >> 7,0) & 1) |
                                      (uint)(SUB321(auVar15 >> 0xf,0) & 1) << 1 |
                                      (uint)(SUB321(auVar15 >> 0x17,0) & 1) << 2 |
                                      (uint)(SUB321(auVar15 >> 0x1f,0) & 1) << 3 |
                                      (uint)(SUB321(auVar15 >> 0x27,0) & 1) << 4 |
                                      (uint)(SUB321(auVar15 >> 0x2f,0) & 1) << 5 |
                                      (uint)(SUB321(auVar15 >> 0x37,0) & 1) << 6 |
                                      (uint)(SUB321(auVar15 >> 0x3f,0) & 1) << 7 |
                                      (uint)(SUB321(auVar15 >> 0x47,0) & 1) << 8 |
                                      (uint)(SUB321(auVar15 >> 0x4f,0) & 1) << 9 |
                                      (uint)(SUB321(auVar15 >> 0x57,0) & 1) << 10 |
                                      (uint)(SUB321(auVar15 >> 0x5f,0) & 1) << 0xb |
                                      (uint)(SUB321(auVar15 >> 0x67,0) & 1) << 0xc |
                                      (uint)(SUB321(auVar15 >> 0x6f,0) & 1) << 0xd |
                                      (uint)(SUB321(auVar15 >> 0x77,0) & 1) << 0xe |
                                      (uint)SUB321(auVar15 >> 0x7f,0) << 0xf |
                                      (uint)(SUB321(auVar15 >> 0x87,0) & 1) << 0x10 |
                                      (uint)(SUB321(auVar15 >> 0x8f,0) & 1) << 0x11 |
                                      (uint)(SUB321(auVar15 >> 0x97,0) & 1) << 0x12 |
                                      (uint)(SUB321(auVar15 >> 0x9f,0) & 1) << 0x13 |
                                      (uint)(SUB321(auVar15 >> 0xa7,0) & 1) << 0x14 |
                                      (uint)(SUB321(auVar15 >> 0xaf,0) & 1) << 0x15 |
                                      (uint)(SUB321(auVar15 >> 0xb7,0) & 1) << 0x16 |
                                      (uint)SUB321(auVar15 >> 0xbf,0) << 0x17 |
                                      (uint)(SUB321(auVar15 >> 199,0) & 1) << 0x18 |
                                      (uint)(SUB321(auVar15 >> 0xcf,0) & 1) << 0x19 |
                                      (uint)(SUB321(auVar15 >> 0xd7,0) & 1) << 0x1a |
                                      (uint)(SUB321(auVar15 >> 0xdf,0) & 1) << 0x1b |
                                      (uint)(SUB321(auVar15 >> 0xe7,0) & 1) << 0x1c |
                                      (uint)(SUB321(auVar15 >> 0xef,0) & 1) << 0x1d |
                                      (uint)(SUB321(auVar15 >> 0xf7,0) & 1) << 0x1e |
                                      (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f); (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x8000000000000000) {
            lVar6 = lVar6 + 1;
          }
          return lVar6 + lVar13 + -0x3f;
        }
      }
    }
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 1));
  }
  uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb
          | (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
          (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
          (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
          (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
          (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
  if ((uVar11 & 0x40) == 0) {
    uVar10 = (uint)uVar11 & 0x7f;
    if (uVar7 == 0) {
      if (0x1f < uVar10) {
        auVar15 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x21));
        uVar5 = 0;
        for (uVar7 = (uint)(SUB321(auVar15 >> 7,0) & 1) | (uint)(SUB321(auVar15 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar15 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar15 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar15 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar15 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar15 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar15 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar15 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar15 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar15 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar15 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar15 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar15 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar15 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar15 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar15 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar15 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar15 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar15 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar15 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar15 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar15 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar15 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar15 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar15 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar15 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar15 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar15 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f; (uVar7 & 1) == 0;
            uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 <= uVar10 - 0x20) {
          return (ulong)(uVar5 + 0x21) + (uVar12 - (long)param_1);
        }
      }
    }
    else {
      uVar5 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar10) {
        return (ulong)(uVar5 + 1) + (uVar12 - (long)param_1);
      }
    }
  }
  else {
    if (uVar7 != 0) {
      iVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      return (ulong)(iVar8 + 1) + (uVar12 - (long)param_1);
    }
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x21));
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      return (ulong)(iVar8 + 0x21) + (uVar12 - (long)param_1);
    }
    uVar10 = (uint)uVar11 & 0x7f;
    auVar16 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x41));
    uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar16 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      uVar5 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar10 - 0x40 < uVar5) {
        return param_2;
      }
      return (ulong)(uVar5 + 0x41) + (uVar12 - (long)param_1);
    }
    if (0x5f < uVar10) {
      auVar15 = vpcmpeqb_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x61));
      uVar5 = 0;
      for (uVar7 = (uint)(SUB321(auVar15 >> 7,0) & 1) | (uint)(SUB321(auVar15 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar15 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar15 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar15 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar15 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar15 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar15 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar15 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar15 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar15 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar15 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar15 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar15 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar15 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar15 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar15 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar15 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar15 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar15 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar15 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar15 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar15 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar15 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar15 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar15 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar15 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar15 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar15 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar15 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar15 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f; (uVar7 & 1) == 0;
          uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar10 - 0x60) {
        return (ulong)(uVar5 + 0x61) + (uVar12 - (long)param_1);
      }
    }
  }
  return param_2;
}

