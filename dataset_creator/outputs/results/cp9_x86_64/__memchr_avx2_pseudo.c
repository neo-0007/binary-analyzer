
undefined1 * __memchr_avx2(undefined1 (*param_1) [32],undefined1 param_2,ulong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  long lVar7;
  sbyte sVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  undefined1 auVar16 [32];
  
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  auVar16[1] = param_2;
  auVar16[0] = param_2;
  auVar16[2] = param_2;
  auVar16[3] = param_2;
  auVar16[4] = param_2;
  auVar16[5] = param_2;
  auVar16[6] = param_2;
  auVar16[7] = param_2;
  auVar16[8] = param_2;
  auVar16[9] = param_2;
  auVar16[10] = param_2;
  auVar16[0xb] = param_2;
  auVar16[0xc] = param_2;
  auVar16[0xd] = param_2;
  auVar16[0xe] = param_2;
  auVar16[0xf] = param_2;
  auVar16[0x10] = param_2;
  auVar16[0x11] = param_2;
  auVar16[0x12] = param_2;
  auVar16[0x13] = param_2;
  auVar16[0x14] = param_2;
  auVar16[0x15] = param_2;
  auVar16[0x16] = param_2;
  auVar16[0x17] = param_2;
  auVar16[0x18] = param_2;
  auVar16[0x19] = param_2;
  auVar16[0x1a] = param_2;
  auVar16[0x1b] = param_2;
  auVar16[0x1c] = param_2;
  auVar16[0x1d] = param_2;
  auVar16[0x1e] = param_2;
  auVar16[0x1f] = param_2;
  uVar11 = (uint)param_1;
  if ((uVar11 & 0xfff) < 0xfe1) {
    auVar1 = vpcmpeqb_avx2(auVar16,*param_1);
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
    if (param_3 < 0x21) {
LAB_007173e0:
      uVar11 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      puVar10 = *param_1 + uVar11;
      if ((int)param_3 <= (int)uVar11) {
        puVar10 = (undefined1 *)0x0;
      }
      return puVar10;
    }
    if (uVar9 != 0) {
      uVar11 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      return *param_1 + uVar11;
    }
  }
  else {
    auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(((ulong)param_1 | 0x1f) - 0x1f));
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
                 (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) >> (uVar11 & 0x1f);
    if (param_3 <= (((ulong)param_1 | 0x1f) + 1) - (long)param_1) goto LAB_007173e0;
    if (uVar9 != 0) {
      uVar11 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      return *param_1 + uVar11;
    }
  }
  uVar14 = (ulong)param_1 | 0x1f;
  uVar13 = (ulong)(((int)uVar14 + 0x81) - uVar11);
  auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar14 + 1));
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
  uVar12 = param_3 - uVar13;
  if (uVar13 <= param_3 && uVar12 != 0) {
    if (uVar11 != 0) {
      uVar9 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      return (undefined1 *)((ulong)uVar9 + uVar14 + 1);
    }
    auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar14 + 0x21));
    uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
    if (uVar11 != 0) {
      uVar9 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      return (undefined1 *)((ulong)uVar9 + uVar14 + 0x21);
    }
    auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar14 + 0x41));
    uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
    if (uVar11 != 0) {
      uVar9 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      return (undefined1 *)((ulong)uVar9 + uVar14 + 0x41);
    }
    auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar14 + 0x61));
    uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
    if (uVar11 != 0) {
      uVar9 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      return (undefined1 *)((ulong)uVar9 + uVar14 + 0x61);
    }
    bVar15 = uVar12 < 0x80;
    uVar12 = uVar12 - 0x80;
    if (bVar15 || uVar12 == 0) {
      auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar14 + 0x81));
      uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
               (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
      uVar14 = uVar14 + 0x80;
      if (uVar11 != 0) goto LAB_00717580;
      uVar11 = (int)uVar12 + 0x40;
      uVar13 = uVar14;
      if (uVar11 != 0 && SCARRY4((int)uVar12,0x40) == (int)uVar11 < 0) goto LAB_007175f0;
      goto LAB_0071752d;
    }
    uVar12 = uVar12 + ((uint)(uVar14 + 1) & 0x7f);
    uVar14 = uVar14 + 1 | 0x7f;
    do {
      uVar13 = uVar14;
      auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 1));
      auVar2 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x21));
      auVar3 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x41));
      auVar4 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x61));
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
      if (uVar11 != 0) {
        uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
        if (uVar9 != 0) {
          uVar11 = 0;
          for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          return (undefined1 *)((ulong)uVar11 + uVar13 + 1);
        }
        uVar9 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
        if (uVar9 == 0) {
          lVar7 = 0;
          for (uVar14 = CONCAT44(uVar11,(uint)(SUB321(auVar3 >> 7,0) & 1) |
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
                                        (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            lVar7 = lVar7 + 1;
          }
          return (undefined1 *)(lVar7 + uVar13 + 0x41);
        }
        goto LAB_007175c0;
      }
      uVar14 = uVar13 + 0x80;
      bVar15 = 0x7f < uVar12;
      uVar12 = uVar12 - 0x80;
    } while (bVar15 && uVar12 != 0);
    auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x81));
    uVar11 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  }
  if (uVar11 != 0) {
LAB_00717580:
    uVar9 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    if ((int)uVar12 + 0x80U <= uVar9) {
      return (undefined1 *)0x0;
    }
    return (undefined1 *)((ulong)uVar9 + uVar14 + 1);
  }
  uVar11 = (int)uVar12 + 0x40;
  uVar13 = uVar14;
  if (uVar11 != 0 && SCARRY4((int)uVar12,0x40) == (int)uVar11 < 0) {
LAB_007175f0:
    auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x21));
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
    if (uVar9 == 0) {
      auVar1 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x41));
      sVar8 = ((byte)uVar11 < 0x41) * ('@' - (byte)uVar11);
      uVar14 = (ulong)(-1L << sVar8) >> sVar8;
      uVar9 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
               (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) & (uint)uVar14;
      puVar10 = (undefined1 *)(ulong)uVar9;
      if (uVar9 != 0) {
        uVar11 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        return (undefined1 *)((ulong)uVar11 + uVar13 + 0x41);
      }
      if (0x20 < uVar11) {
        auVar16 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar13 + 0x61));
        uVar11 = ((uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
                 (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f) & (uint)(uVar14 >> 0x20);
        puVar10 = (undefined1 *)(ulong)uVar11;
        if (uVar11 != 0) {
          uVar9 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          puVar10 = (undefined1 *)((ulong)uVar9 + uVar13 + 0x61);
        }
      }
      return puVar10;
    }
LAB_007175c0:
    uVar11 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    return (undefined1 *)((ulong)uVar11 + uVar13 + 0x21);
  }
LAB_0071752d:
  puVar10 = (undefined1 *)0x0;
  if (uVar11 != 0xffffffe0 && SCARRY4(uVar11,0x20) == (int)(uVar11 + 0x20) < 0) {
    auVar16 = vpcmpeqb_avx2(auVar16,*(undefined1 (*) [32])(uVar14 + 0x21));
    uVar6 = 0;
    for (uVar9 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
                 (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f; (uVar9 & 1) == 0;
        uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    if (uVar11 + 0x20 <= uVar6) {
      return (undefined1 *)0x0;
    }
    puVar10 = (undefined1 *)((ulong)uVar6 + uVar14 + 0x21);
  }
  return puVar10;
}

