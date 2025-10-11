
undefined1 * FUN_0074f080(undefined1 (*param_1) [32],undefined1 param_2)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  bool bVar12;
  undefined1 auVar13 [32];
  
  auVar13[1] = param_2;
  auVar13[0] = param_2;
  auVar13[2] = param_2;
  auVar13[3] = param_2;
  auVar13[4] = param_2;
  auVar13[5] = param_2;
  auVar13[6] = param_2;
  auVar13[7] = param_2;
  auVar13[8] = param_2;
  auVar13[9] = param_2;
  auVar13[10] = param_2;
  auVar13[0xb] = param_2;
  auVar13[0xc] = param_2;
  auVar13[0xd] = param_2;
  auVar13[0xe] = param_2;
  auVar13[0xf] = param_2;
  auVar13[0x10] = param_2;
  auVar13[0x11] = param_2;
  auVar13[0x12] = param_2;
  auVar13[0x13] = param_2;
  auVar13[0x14] = param_2;
  auVar13[0x15] = param_2;
  auVar13[0x16] = param_2;
  auVar13[0x17] = param_2;
  auVar13[0x18] = param_2;
  auVar13[0x19] = param_2;
  auVar13[0x1a] = param_2;
  auVar13[0x1b] = param_2;
  auVar13[0x1c] = param_2;
  auVar13[0x1d] = param_2;
  auVar13[0x1e] = param_2;
  auVar13[0x1f] = param_2;
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar1 = vpcmpeqb_avx2(auVar13,*param_1);
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
      uVar6 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      puVar10 = *param_1 + uVar6;
      goto LAB_0074f0d0;
    }
  }
  else {
    auVar1 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
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
                 (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) >> ((uint)param_1 & 0x1f);
    if (uVar8 != 0) {
      uVar6 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      puVar10 = *param_1 + uVar6;
      goto LAB_0074f0d0;
    }
  }
  uVar9 = (ulong)param_1 | 0x1f;
  auVar1 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar9 + 1));
  uVar8 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
  if (uVar8 == 0) {
    auVar1 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar9 + 0x21));
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
    if (uVar8 == 0) {
      auVar1 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar9 + 0x41));
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
        auVar1 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar9 + 0x61));
        uVar8 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
                (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
        if (uVar8 == 0) {
          uVar9 = uVar9 + 1 | 0x7f;
          do {
            uVar11 = uVar9;
            auVar1 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar11 + 1));
            auVar2 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar11 + 0x21));
            auVar3 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar11 + 0x41));
            auVar4 = vpcmpeqb_avx2(auVar13,*(undefined1 (*) [32])(uVar11 + 0x61));
            auVar5 = vpor_avx2(auVar2,auVar1);
            auVar4 = vpor_avx2(auVar4,auVar3);
            auVar4 = vpor_avx2(auVar4,auVar5);
            uVar8 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                    (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
            uVar9 = uVar11 + 0x80;
          } while (uVar8 == 0);
          uVar6 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
                  (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
          if (uVar6 == 0) {
            uVar6 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                    (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
            if (uVar6 == 0) {
              lVar7 = 0;
              for (uVar9 = CONCAT44(uVar8,(uint)(SUB321(auVar3 >> 7,0) & 1) |
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
                                          (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f); (uVar9 & 1) == 0
                  ; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                lVar7 = lVar7 + 1;
              }
              puVar10 = (undefined1 *)(lVar7 + uVar11 + 0x41);
            }
            else {
              uVar8 = 0;
              for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              puVar10 = (undefined1 *)((ulong)uVar8 + uVar11 + 0x21);
            }
          }
          else {
            uVar8 = 0;
            for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            puVar10 = (undefined1 *)((ulong)uVar8 + uVar11 + 1);
          }
        }
        else {
          uVar6 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          puVar10 = (undefined1 *)((ulong)uVar6 + uVar9 + 0x61);
        }
      }
      else {
        uVar6 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        puVar10 = (undefined1 *)((ulong)uVar6 + uVar9 + 0x41);
      }
    }
    else {
      uVar6 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      puVar10 = (undefined1 *)((ulong)uVar6 + uVar9 + 0x21);
    }
  }
  else {
    uVar6 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    puVar10 = (undefined1 *)((ulong)uVar6 + uVar9 + 1);
  }
LAB_0074f0d0:
  bVar12 = (bool)xtest();
  if (bVar12) {
    return puVar10;
  }
  return puVar10;
}

