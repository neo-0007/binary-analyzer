
ulong FUN_0075e9e0(undefined1 (*param_1) [32],ulong param_2)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined1 auVar15 [32];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = (uint)param_1;
  auVar15 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar8 & 0xfff) < 0xfe1) {
    auVar3 = vpcmpeqd_avx2(auVar15,*param_1);
    uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (param_2 < 9) {
      uVar8 = 0;
      for (uVar9 = uVar9 | (uint)(1L << ((ulong)(uint)((int)param_2 << 2) & 0x3f)); (uVar9 & 1) == 0
          ; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      param_2 = (ulong)(uVar8 >> 2);
      goto LAB_0075ed2c;
    }
    if (uVar9 != 0) {
      uVar8 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      param_2 = (ulong)(uVar8 >> 2);
      goto LAB_0075ed2c;
    }
  }
  else {
    auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
    uVar9 = (int)((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) >> (uVar8 & 0x1f);
    if (uVar9 != 0) {
      uVar8 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = (int)param_2 << 2;
      if (uVar9 < uVar8) {
        uVar8 = uVar9;
      }
      param_2 = (ulong)(uVar8 >> 2);
      goto LAB_0075ed2c;
    }
    if (param_2 <= ((int)((ulong)param_1 | 0x1f) + 1) - uVar8 >> 2) goto LAB_0075ed2c;
  }
  uVar12 = (ulong)param_1 | 0x1f;
  uVar8 = (int)(((int)uVar12 + 0x85) - uVar8) >> 2;
  auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 1));
  uVar10 = param_2 - uVar8;
  if (uVar8 <= param_2) {
    uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar9 != 0) {
      iVar6 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      param_2 = (ulong)(iVar6 + -0x81 + uVar8 * 4 >> 2);
      goto LAB_0075ed2c;
    }
    auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x21));
    uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar9 != 0) {
      iVar6 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      param_2 = (ulong)(iVar6 + -0x61 + uVar8 * 4 >> 2);
      goto LAB_0075ed2c;
    }
    auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x41));
    uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar9 != 0) {
      iVar6 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      param_2 = (ulong)(iVar6 + -0x41 + uVar8 * 4 >> 2);
      goto LAB_0075ed2c;
    }
    auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x61));
    uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar9 != 0) {
      iVar6 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      param_2 = (ulong)(iVar6 + -0x21 + uVar8 * 4 >> 2);
      goto LAB_0075ed2c;
    }
    if (0x1f < uVar10) {
      uVar11 = uVar12 + 1;
      uVar12 = uVar11 | 0x7f;
      uVar10 = uVar10 + (uint)((int)((uint)uVar11 & 0x7f) >> 2);
      do {
        bVar14 = uVar10 < 0x20;
        uVar10 = uVar10 - 0x20;
        if (bVar14) goto LAB_0075eb94;
        pauVar1 = (undefined1 (*) [32])(uVar12 + 1);
        auVar4 = vpminud_avx2(*pauVar1,*(undefined1 (*) [32])(uVar12 + 0x21));
        pauVar2 = (undefined1 (*) [32])(uVar12 + 0x41);
        auVar3 = vpminud_avx2(*pauVar2,*(undefined1 (*) [32])(uVar12 + 0x61));
        auVar3 = vpminud_avx2(auVar3,auVar4);
        auVar3 = vpcmpeqd_avx2(auVar15,auVar3);
        uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        uVar12 = uVar12 + 0x80;
      } while (uVar8 == 0);
      auVar3 = vpcmpeqd_avx2(auVar15,*pauVar1);
      uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f
      ;
      lVar13 = uVar12 - (long)param_1;
      if (uVar9 == 0) {
        auVar3 = vpcmpeqd_avx2(auVar15,auVar4);
        uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar9 == 0) {
          auVar15 = vpcmpeqd_avx2(auVar15,*pauVar2);
          lVar7 = 0;
          for (uVar10 = CONCAT44(uVar8,(uint)(SUB321(auVar15 >> 7,0) & 1) |
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
                                       (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            lVar7 = lVar7 + 1;
          }
          param_2 = (ulong)(lVar7 + lVar13 + -0x3f) >> 2;
        }
        else {
          uVar8 = 0;
          for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          param_2 = (ulong)uVar8 + lVar13 + -0x5f >> 2;
        }
      }
      else {
        uVar8 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        param_2 = (ulong)uVar8 + lVar13 + -0x7f >> 2;
      }
      goto LAB_0075ed2c;
    }
    uVar12 = uVar12 + 0x80;
LAB_0075eb94:
    auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 1));
  }
  uVar9 = (int)uVar10 << 2;
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
  if ((uVar9 & 0x40) == 0) {
    uVar9 = uVar9 & 0x7f;
    if (uVar8 == 0) {
      if (0x1f < uVar9) {
        auVar15 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x21));
        uVar5 = 0;
        for (uVar8 = (uint)(SUB321(auVar15 >> 7,0) & 1) | (uint)(SUB321(auVar15 >> 0xf,0) & 1) << 1
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
                     (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f; (uVar8 & 1) == 0;
            uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 <= uVar9 - 0x20) {
          param_2 = (ulong)(uVar5 + 0x21) + (uVar12 - (long)param_1) >> 2;
        }
      }
    }
    else {
      uVar5 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar9) {
        param_2 = (ulong)(uVar5 + 1) + (uVar12 - (long)param_1) >> 2;
      }
    }
  }
  else if (uVar8 == 0) {
    auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x21));
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
    if (uVar8 == 0) {
      uVar9 = uVar9 & 0x7f;
      auVar3 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x41));
      uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f
      ;
      if (uVar8 == 0) {
        if (0x5f < uVar9) {
          auVar15 = vpcmpeqd_avx2(auVar15,*(undefined1 (*) [32])(uVar12 + 0x61));
          uVar5 = 0;
          for (uVar8 = (uint)(SUB321(auVar15 >> 7,0) & 1) |
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
                       (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f; (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (uVar5 <= uVar9 - 0x60) {
            param_2 = (ulong)(uVar5 + 0x61) + (uVar12 - (long)param_1) >> 2;
          }
        }
      }
      else {
        uVar5 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 <= uVar9 - 0x40) {
          param_2 = (ulong)(uVar5 + 0x41) + (uVar12 - (long)param_1) >> 2;
        }
      }
    }
    else {
      iVar6 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      param_2 = (ulong)(iVar6 + 0x21) + (uVar12 - (long)param_1) >> 2;
    }
  }
  else {
    iVar6 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    param_2 = (ulong)(iVar6 + 1) + (uVar12 - (long)param_1) >> 2;
  }
LAB_0075ed2c:
  bVar14 = (bool)xtest();
  if (bVar14) {
    return param_2;
  }
  return param_2;
}

