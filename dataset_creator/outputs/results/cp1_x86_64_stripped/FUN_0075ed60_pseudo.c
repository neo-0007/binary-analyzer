
undefined1 * FUN_0075ed60(undefined1 (*param_1) [32],undefined4 param_2,ulong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  sbyte sVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  undefined1 auVar17 [32];
  
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  auVar17._4_4_ = param_2;
  auVar17._0_4_ = param_2;
  auVar17._8_4_ = param_2;
  auVar17._12_4_ = param_2;
  auVar17._16_4_ = param_2;
  auVar17._20_4_ = param_2;
  auVar17._24_4_ = param_2;
  auVar17._28_4_ = param_2;
  uVar11 = (uint)param_1;
  if ((uVar11 & 0xfff) < 0xfe1) {
    auVar1 = vpcmpeqd_avx2(auVar17,*param_1);
    uVar8 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
    if (param_3 < 9) {
LAB_0075eda0:
      uVar11 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      puVar9 = *param_1 + uVar11;
      if ((int)param_3 * 4 <= (int)uVar11) {
        puVar9 = (undefined1 *)0x0;
      }
      goto LAB_0075edef;
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      puVar9 = *param_1 + uVar11;
      goto LAB_0075edef;
    }
  }
  else {
    auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
    uVar8 = (int)((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) >> (uVar11 & 0x1f);
    if (param_3 <= ((int)((ulong)param_1 | 0x1f) + 1) - uVar11 >> 2) goto LAB_0075eda0;
    if (uVar8 != 0) {
      uVar11 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      puVar9 = *param_1 + uVar11;
      goto LAB_0075edef;
    }
  }
  uVar15 = (ulong)param_1 | 0x1f;
  uVar14 = (ulong)(uint)((int)(((int)uVar15 + 0x81) - uVar11) >> 2);
  auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar15 + 1));
  uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
  uVar12 = param_3 - uVar14;
  if (param_3 < uVar14 || uVar12 == 0) goto LAB_0075eef0;
  if (uVar11 != 0) {
    uVar8 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    puVar9 = (undefined1 *)((ulong)uVar8 + uVar15 + 1);
    goto LAB_0075edef;
  }
  auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar15 + 0x21));
  uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
  if (uVar11 != 0) {
    uVar8 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    puVar9 = (undefined1 *)((ulong)uVar8 + uVar15 + 0x21);
    goto LAB_0075edef;
  }
  auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar15 + 0x41));
  uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
  if (uVar11 != 0) {
    uVar8 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    puVar9 = (undefined1 *)((ulong)uVar8 + uVar15 + 0x41);
    goto LAB_0075edef;
  }
  auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar15 + 0x61));
  uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
  if (uVar11 != 0) {
    uVar8 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    puVar9 = (undefined1 *)((ulong)uVar8 + uVar15 + 0x61);
    goto LAB_0075edef;
  }
  lVar13 = uVar12 - 0x20;
  if (0x1f < uVar12 && lVar13 != 0) {
    uVar12 = lVar13 + (ulong)(uint)((int)((uint)(uVar15 + 1) & 0x7f) >> 2);
    uVar15 = uVar15 + 1 | 0x7f;
    while( true ) {
      uVar14 = uVar15;
      auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 1));
      auVar2 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x21));
      auVar3 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x41));
      auVar4 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x61));
      auVar5 = vpor_avx2(auVar2,auVar1);
      auVar4 = vpor_avx2(auVar4,auVar3);
      auVar4 = vpor_avx2(auVar4,auVar5);
      uVar11 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) break;
      uVar15 = uVar14 + 0x80;
      bVar16 = uVar12 < 0x20;
      uVar12 = uVar12 - 0x20;
      if (bVar16 || uVar12 == 0) goto code_r0x0075eee2;
    }
    uVar8 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
    if (uVar8 != 0) {
      uVar11 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      puVar9 = (undefined1 *)((ulong)uVar11 + uVar14 + 1);
      goto LAB_0075edef;
    }
    uVar8 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
    if (uVar8 != 0) goto LAB_0075efa0;
    lVar13 = 0;
    for (uVar15 = CONCAT44(uVar11,(uint)(SUB321(auVar3 >> 7,0) & 1) |
                                  (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                                  (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f); (uVar15 & 1) == 0;
        uVar15 = uVar15 >> 1 | 0x8000000000000000) {
      lVar13 = lVar13 + 1;
    }
    puVar9 = (undefined1 *)(lVar13 + uVar14 + 0x41);
    goto LAB_0075edef;
  }
  auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar15 + 0x81));
  uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
  iVar10 = (int)lVar13 * 4;
  uVar15 = uVar15 + 0x80;
  if (uVar11 != 0) goto LAB_0075ef60;
  uVar11 = iVar10 + 0x40;
  uVar14 = uVar15;
  if (uVar11 != 0 && SCARRY4(iVar10,0x40) == (int)uVar11 < 0) goto LAB_0075efd0;
LAB_0075ef00:
  puVar9 = (undefined1 *)0x0;
  if (uVar11 == 0xffffffe0 || SCARRY4(uVar11,0x20) != (int)(uVar11 + 0x20) < 0) goto LAB_0075edef;
  auVar17 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar15 + 0x21));
  uVar6 = 0;
  for (uVar8 = (uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1 |
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
               (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f; (uVar8 & 1) == 0;
      uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < uVar11 + 0x20) {
    puVar9 = (undefined1 *)((ulong)uVar6 + uVar15 + 0x21);
    goto LAB_0075edef;
  }
LAB_0075ef80:
  puVar9 = (undefined1 *)0x0;
LAB_0075edef:
  bVar16 = (bool)xtest();
  if (bVar16) {
    return puVar9;
  }
  return puVar9;
code_r0x0075eee2:
  auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x81));
  uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
LAB_0075eef0:
  iVar10 = (int)uVar12 * 4;
  if (uVar11 == 0) {
    uVar11 = iVar10 + 0x40;
    uVar14 = uVar15;
    if (uVar11 != 0 && SCARRY4(iVar10,0x40) == (int)uVar11 < 0) {
LAB_0075efd0:
      auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x21));
      uVar8 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f
      ;
      if (uVar8 == 0) {
        auVar1 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x41));
        sVar7 = ((byte)uVar11 < 0x41) * ('@' - (byte)uVar11);
        uVar15 = (ulong)(-1L << sVar7) >> sVar7;
        uVar8 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
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
                (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) & (uint)uVar15;
        puVar9 = (undefined1 *)(ulong)uVar8;
        if (uVar8 == 0) {
          if (0x20 < uVar11) {
            auVar17 = vpcmpeqd_avx2(auVar17,*(undefined1 (*) [32])(uVar14 + 0x61));
            uVar11 = ((uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1
                      | (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
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
                     (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f) & (uint)(uVar15 >> 0x20);
            puVar9 = (undefined1 *)(ulong)uVar11;
            if (uVar11 != 0) {
              uVar8 = 0;
              for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              puVar9 = (undefined1 *)((ulong)uVar8 + uVar14 + 0x61);
            }
          }
        }
        else {
          uVar11 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          puVar9 = (undefined1 *)((ulong)uVar11 + uVar14 + 0x41);
        }
      }
      else {
LAB_0075efa0:
        uVar11 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        puVar9 = (undefined1 *)((ulong)uVar11 + uVar14 + 0x21);
      }
      goto LAB_0075edef;
    }
    goto LAB_0075ef00;
  }
LAB_0075ef60:
  uVar8 = 0;
  for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 < iVar10 + 0x80U) {
    puVar9 = (undefined1 *)((ulong)uVar8 + uVar15 + 1);
    goto LAB_0075edef;
  }
  goto LAB_0075ef80;
}

