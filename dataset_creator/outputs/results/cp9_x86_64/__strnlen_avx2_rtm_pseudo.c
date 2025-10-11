
ulong __strnlen_avx2_rtm(undefined1 (*param_1) [32],ulong param_2)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  if (param_2 == 0) {
    return 0;
  }
  auVar16 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  uVar8 = param_2;
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar17 = vpcmpeqb_avx2(auVar16,*param_1);
    uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f
    ;
    if (param_2 < 0x21) {
      uVar11 = 0;
      for (uVar7 = uVar7 | (uint)(1L << (param_2 & 0x3f)); (uVar7 & 1) == 0;
          uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      uVar8 = (ulong)uVar11;
      goto LAB_00748219;
    }
    if (uVar7 != 0) {
      uVar11 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      uVar8 = (ulong)uVar11;
      goto LAB_00748219;
    }
  }
  else {
    auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
    uVar7 = (int)((uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f) >> ((uint)param_1 & 0x1f);
    if (uVar7 != 0) {
      uVar11 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      uVar8 = (ulong)uVar11;
      if (param_2 < uVar11) {
        uVar8 = param_2 & 0xffffffff;
      }
      goto LAB_00748219;
    }
    if (param_2 <= (((ulong)param_1 | 0x1f) + 1) - (long)param_1) goto LAB_00748219;
  }
  uVar13 = (ulong)param_1 | 0x1f;
  uVar10 = (uVar13 + 0x82) - (long)param_1;
  auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 1));
  uVar12 = param_2 - uVar10;
  if (uVar10 <= param_2) {
    uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f
    ;
    iVar9 = (int)uVar10;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar8 = (ulong)(uint)(iVar4 + iVar9 + -0x81);
      goto LAB_00748219;
    }
    auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x21));
    uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar8 = (ulong)(uint)(iVar4 + iVar9 + -0x61);
      goto LAB_00748219;
    }
    auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x41));
    uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar8 = (ulong)(uint)(iVar4 + iVar9 + -0x41);
      goto LAB_00748219;
    }
    auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x61));
    uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 != 0) {
      iVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar8 = (ulong)(uint)(iVar4 + iVar9 + -0x21);
      goto LAB_00748219;
    }
    if (0x7f < uVar12) {
      uVar10 = uVar13 + 1;
      uVar13 = uVar10 | 0x7f;
      uVar12 = uVar12 + ((uint)uVar10 & 0x7f);
      do {
        bVar15 = uVar12 < 0x80;
        uVar12 = uVar12 - 0x80;
        if (bVar15) goto LAB_007480e4;
        pauVar1 = (undefined1 (*) [32])(uVar13 + 1);
        auVar3 = vpminub_avx2(*pauVar1,*(undefined1 (*) [32])(uVar13 + 0x21));
        pauVar2 = (undefined1 (*) [32])(uVar13 + 0x41);
        auVar17 = vpminub_avx2(*pauVar2,*(undefined1 (*) [32])(uVar13 + 0x61));
        auVar17 = vpminub_avx2(auVar17,auVar3);
        auVar17 = vpcmpeqb_avx2(auVar16,auVar17);
        uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe |
                (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
                (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 |
                (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
                (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f;
        uVar13 = uVar13 + 0x80;
      } while (uVar7 == 0);
      auVar17 = vpcmpeqb_avx2(auVar16,*pauVar1);
      uVar11 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f;
      lVar14 = uVar13 - (long)param_1;
      if (uVar11 == 0) {
        auVar17 = vpcmpeqb_avx2(auVar16,auVar3);
        uVar11 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f;
        if (uVar11 == 0) {
          auVar16 = vpcmpeqb_avx2(auVar16,*pauVar2);
          lVar6 = 0;
          for (uVar8 = CONCAT44(uVar7,(uint)(SUB321(auVar16 >> 7,0) & 1) |
                                      (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
                                      (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            lVar6 = lVar6 + 1;
          }
          uVar8 = lVar6 + lVar14 + -0x3f;
        }
        else {
          uVar7 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar8 = (ulong)uVar7 + lVar14 + -0x5f;
        }
      }
      else {
        uVar7 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = (ulong)uVar7 + lVar14 + -0x7f;
      }
      goto LAB_00748219;
    }
    uVar13 = uVar13 + 0x80;
LAB_007480e4:
    auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 1));
  }
  uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb
          | (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
          (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
          (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
          (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
          (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f;
  if ((uVar12 & 0x40) == 0) {
    uVar11 = (uint)uVar12 & 0x7f;
    if (uVar7 == 0) {
      if (0x1f < uVar11) {
        auVar16 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x21));
        uVar5 = 0;
        for (uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
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
                     (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f; (uVar7 & 1) == 0;
            uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 <= uVar11 - 0x20) {
          uVar8 = (ulong)(uVar5 + 0x21) + (uVar13 - (long)param_1);
        }
      }
    }
    else {
      uVar5 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar11) {
        uVar8 = (ulong)(uVar5 + 1) + (uVar13 - (long)param_1);
      }
    }
  }
  else if (uVar7 == 0) {
    auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x21));
    uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar17 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f
    ;
    if (uVar7 == 0) {
      uVar11 = (uint)uVar12 & 0x7f;
      auVar17 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x41));
      uVar7 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar17 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f;
      if (uVar7 == 0) {
        if (0x5f < uVar11) {
          auVar16 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x61));
          uVar5 = 0;
          for (uVar7 = (uint)(SUB321(auVar16 >> 7,0) & 1) |
                       (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
                       (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f; (uVar7 & 1) == 0;
              uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (uVar5 <= uVar11 - 0x60) {
            uVar8 = (ulong)(uVar5 + 0x61) + (uVar13 - (long)param_1);
          }
        }
      }
      else {
        uVar5 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 <= uVar11 - 0x40) {
          uVar8 = (ulong)(uVar5 + 0x41) + (uVar13 - (long)param_1);
        }
      }
    }
    else {
      iVar9 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      uVar8 = (ulong)(iVar9 + 0x21) + (uVar13 - (long)param_1);
    }
  }
  else {
    iVar9 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar9 = iVar9 + 1;
    }
    uVar8 = (ulong)(iVar9 + 1) + (uVar13 - (long)param_1);
  }
LAB_00748219:
  bVar15 = (bool)xtest();
  if (bVar15) {
    return uVar8;
  }
  return uVar8;
}

