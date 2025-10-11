
undefined1 (*) [32] FUN_0074feb0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  ulong uVar20;
  undefined1 (*pauVar21) [32];
  undefined1 (*pauVar22) [32];
  bool bVar23;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  
  lVar14 = 0;
  uVar15 = (uint)param_1 & 0x7f;
  auVar26 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (0x60 < uVar15) {
    pauVar21 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
    auVar25 = vpcmpeqb_avx2(auVar26,*pauVar21);
    uVar15 = ((uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f) & -1 << ((byte)uVar15 & 0x1f);
    uVar16 = (ulong)uVar15;
    if (uVar15 == 0) goto LAB_0074ff04;
    goto LAB_00750140;
  }
  auVar25 = vpcmpeqb_avx2(auVar26,*param_1);
  uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
           (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
           (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
           (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
           (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
  uVar16 = (ulong)uVar15;
  if (uVar15 == 0) {
LAB_0074ff04:
    pauVar19 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
    auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[1]);
    uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar25 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
    uVar16 = (ulong)uVar15;
    pauVar21 = pauVar19;
    if (uVar15 == 0) {
      auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[2]);
      uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      uVar16 = (ulong)uVar15;
      if (uVar15 == 0) {
        auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[3]);
        uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
        uVar16 = (ulong)uVar15;
        if (uVar15 == 0) {
          auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[4]);
          uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
          uVar16 = (ulong)uVar15;
          if (uVar15 == 0) {
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[5]);
            pauVar21 = pauVar19 + 4;
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750150;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[6]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750160;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[7]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750170;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[8]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750180;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[9]);
            pauVar21 = pauVar19 + 8;
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750150;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[10]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750160;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0xb]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750170;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0xc]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750180;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0xd]);
            pauVar21 = pauVar19 + 0xc;
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750150;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0xe]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750160;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0xf]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750170;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0x10]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750180;
            if (((ulong)pauVar21 & 0x7f) != 0) {
              auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0x11]);
              pauVar21 = pauVar19 + 0x11;
              uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) |
                       (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                       (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
              uVar16 = (ulong)uVar15;
              if (uVar15 != 0) {
LAB_00750140:
                lVar14 = (long)pauVar21 - (long)param_1;
                goto LAB_00750143;
              }
              if (((ulong)pauVar21 & 0x7f) != 0) {
                auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0x12]);
                pauVar21 = pauVar19 + 0x12;
                uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) |
                         (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                         (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                         (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                         (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                         (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                         (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                         (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                         (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                         (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                         (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                         (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                         (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                         (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                         (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                         (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                         (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                         (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                         (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                         (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                         (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                         (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                         (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                         (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                         (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                         (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                         (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                         (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                         (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                         (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                         (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                         (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
                uVar16 = (ulong)uVar15;
                if (uVar15 != 0) goto LAB_00750140;
                if (((ulong)pauVar21 & 0x7f) != 0) {
                  auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0x13]);
                  pauVar21 = pauVar19 + 0x13;
                  uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) |
                           (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                           (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                           (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                           (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                           (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                           (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                           (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                           (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                           (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                           (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                           (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                           (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                           (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                           (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                           (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                           (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                           (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                           (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                           (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                           (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                           (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                           (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                           (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                           (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                           (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                           (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                           (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                           (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                           (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                           (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
                  uVar16 = (ulong)uVar15;
                  if (uVar15 != 0) goto LAB_00750140;
                  if (((ulong)pauVar21 & 0x7f) != 0) {
                    auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[0x14]);
                    pauVar21 = pauVar19 + 0x14;
                    uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) |
                             (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                             (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                             (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                             (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                             (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                             (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                             (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                             (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                             (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                             (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                             (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                             (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                             (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                             (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                             (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                             (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                             (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                             (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                             (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                             (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                             (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                             (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                             (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                             (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                             (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                             (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                             (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                             (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                             (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                             (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                             (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
                    uVar16 = (ulong)uVar15;
                    if (uVar15 != 0) goto LAB_00750140;
                    pauVar21 = pauVar19 + 0x15;
                  }
                }
              }
            }
            do {
              pauVar19 = pauVar21;
              auVar25 = vpminub_avx2(*pauVar19,pauVar19[1]);
              auVar5 = vpminub_avx2(pauVar19[2],pauVar19[3]);
              auVar25 = vpminub_avx2(auVar5,auVar25);
              auVar25 = vpcmpeqb_avx2(auVar26,auVar25);
              pauVar21 = pauVar19 + 4;
            } while ((((((((((((((((((((((((((((((((auVar25 >> 7 & (undefined1  [32])0x1) ==
                                                   (undefined1  [32])0x0 &&
                                                  (auVar25 >> 0xf & (undefined1  [32])0x1) ==
                                                  (undefined1  [32])0x0) &&
                                                 (auVar25 >> 0x17 & (undefined1  [32])0x1) ==
                                                 (undefined1  [32])0x0) &&
                                                (auVar25 >> 0x1f & (undefined1  [32])0x1) ==
                                                (undefined1  [32])0x0) &&
                                               (auVar25 >> 0x27 & (undefined1  [32])0x1) ==
                                               (undefined1  [32])0x0) &&
                                              (auVar25 >> 0x2f & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0) &&
                                             (auVar25 >> 0x37 & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            (auVar25 >> 0x3f & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar25 >> 0x47 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar25 >> 0x4f & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar25 >> 0x57 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar25 >> 0x5f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar25 >> 0x67 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar25 >> 0x6f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar25 >> 0x77 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) && SUB321(auVar25 >> 0x7f,0) == '\0') &&
                                   (auVar25 >> 0x87 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar25 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar25 >> 0x97 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar25 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar25 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar25 >> 0xaf & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar25 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            SUB321(auVar25 >> 0xbf,0) == '\0') &&
                           (auVar25 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar25 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar25 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar25 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar25 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar25 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar25 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     -1 < auVar25[0x1f]);
            auVar25 = vpcmpeqb_avx2(auVar26,*pauVar19);
            pauVar21 = pauVar19 + -1;
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750150;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[1]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750160;
            auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[2]);
            uVar15 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar16 = (ulong)uVar15;
            if (uVar15 != 0) goto LAB_00750170;
            auVar26 = vpcmpeqb_avx2(auVar26,pauVar19[3]);
            uVar15 = (uint)(SUB321(auVar26 >> 7,0) & 1) | (uint)(SUB321(auVar26 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar26 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar26 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar26 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar26 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar26 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar26 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar26 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar26 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar26 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar26 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar26 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar26 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar26 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar26 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar26 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar26 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar26 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar26 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar26 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar26 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar26 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar26 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar26 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar26 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar26 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar26 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar26 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar26[0x1f] >> 7) << 0x1f;
            lVar14 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
              }
            }
            lVar14 = (long)pauVar21 + (lVar14 - (long)param_1) + 0x80;
          }
          else {
LAB_00750180:
            lVar14 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
              }
            }
            lVar14 = (long)pauVar21 + (lVar14 - (long)param_1) + 0x80;
          }
        }
        else {
LAB_00750170:
          lVar14 = 0;
          if (uVar16 != 0) {
            for (; (uVar16 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
            }
          }
          lVar14 = (long)pauVar21 + (lVar14 - (long)param_1) + 0x60;
        }
      }
      else {
LAB_00750160:
        lVar14 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
          }
        }
        lVar14 = (long)pauVar21 + (lVar14 - (long)param_1) + 0x40;
      }
    }
    else {
LAB_00750150:
      lVar14 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      lVar14 = (long)pauVar21 + (lVar14 - (long)param_1) + 0x20;
    }
  }
  else {
LAB_00750143:
    lVar4 = 0;
    if (uVar16 != 0) {
      for (; (uVar16 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
    lVar14 = lVar14 + lVar4;
  }
  pauVar21 = (undefined1 (*) [32])(*param_1 + lVar14);
  uVar15 = (uint)param_2;
  auVar26 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar15 & 0x7f) < 0x41) {
    auVar25 = param_2[1];
    auVar5 = vpcmpeqb_avx2(auVar26,*param_2);
    uVar18 = (uint)(SUB321(auVar5 >> 7,0) & 1) | (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f;
    if (uVar18 == 0) {
      *pauVar21 = *param_2;
      auVar25 = vpcmpeqb_avx2(auVar26,auVar25);
      uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar18 == 0) {
        uVar16 = (ulong)(uVar15 & 0x1f);
        goto LAB_007501e0;
      }
      param_2 = param_2 + 1;
      pauVar21 = pauVar21 + 1;
    }
  }
  else {
    pauVar19 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    uVar15 = uVar15 & 0x1f;
    uVar16 = (ulong)uVar15;
    auVar25 = vpcmpeqb_avx2(auVar26,*pauVar19);
    uVar18 = ((uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f) >> (sbyte)uVar15;
    uVar17 = uVar16;
    if (uVar18 == 0) {
      auVar25 = vpcmpeqb_avx2(auVar26,pauVar19[1]);
      uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar18 != 0) {
        iVar3 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        param_2 = (undefined1 (*) [32])(*pauVar19 + uVar16);
        uVar16 = (ulong)((iVar3 + 0x20) - uVar15);
        goto LAB_007503c9;
      }
      puVar1 = (undefined8 *)(*pauVar19 + uVar16);
      uVar2 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      *(undefined8 *)*pauVar21 = *puVar1;
      *(undefined8 *)(*pauVar21 + 8) = uVar2;
      *(undefined8 *)(*pauVar21 + 0x10) = uVar8;
      *(undefined8 *)(*pauVar21 + 0x18) = uVar9;
LAB_007501e0:
      uVar20 = (ulong)param_2 & 0xffffffffffffffe0;
      uVar2 = *(undefined8 *)(uVar20 + 0x28);
      uVar8 = *(undefined8 *)(uVar20 + 0x30);
      uVar9 = *(undefined8 *)(uVar20 + 0x38);
      *(undefined8 *)((long)pauVar21 + (0x20 - uVar16)) = *(undefined8 *)(uVar20 + 0x20);
      *(undefined8 *)((long)pauVar21 + (0x28 - uVar16)) = uVar2;
      *(undefined8 *)((long)pauVar21 + (0x30 - uVar16)) = uVar8;
      *(undefined8 *)((long)pauVar21 + (0x38 - uVar16)) = uVar9;
      auVar25 = vpcmpeqb_avx2(auVar26,*(undefined1 (*) [32])(uVar20 + 0x40));
      uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      uVar17 = 0x40;
      if (uVar18 == 0) {
        *(undefined1 (*) [32])((long)pauVar21 + (0x40 - uVar16)) =
             *(undefined1 (*) [32])(uVar20 + 0x40);
        auVar25 = vpcmpeqb_avx2(auVar26,*(undefined1 (*) [32])(uVar20 + 0x60));
        uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
        uVar17 = 0x60;
        if (uVar18 == 0) {
          *(undefined1 (*) [32])((long)pauVar21 + (0x60 - uVar16)) =
               *(undefined1 (*) [32])(uVar20 + 0x60);
          auVar25 = vpcmpeqb_avx2(auVar26,*(undefined1 (*) [32])(uVar20 + 0x80));
          uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
          uVar17 = 0x80;
          if (uVar18 == 0) {
            *(undefined1 (*) [32])((long)pauVar21 + (0x80 - uVar16)) =
                 *(undefined1 (*) [32])(uVar20 + 0x80);
            auVar25 = vpcmpeqb_avx2(auVar26,*(undefined1 (*) [32])(uVar20 + 0xa0));
            uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
            uVar17 = 0xa0;
            if (uVar18 == 0) {
              *(undefined1 (*) [32])((long)pauVar21 + (0xa0 - uVar16)) =
                   *(undefined1 (*) [32])(uVar20 + 0xa0);
              auVar25 = vpcmpeqb_avx2(auVar26,*(undefined1 (*) [32])(uVar20 + 0xc0));
              uVar18 = (uint)(SUB321(auVar25 >> 7,0) & 1) |
                       (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                       (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
              uVar17 = 0xc0;
              if (uVar18 == 0) {
                auVar25 = *(undefined1 (*) [32])(uVar20 + 0xe0);
                *(undefined1 (*) [32])((long)pauVar21 + (0xc0 - uVar16)) =
                     *(undefined1 (*) [32])(uVar20 + 0xc0);
                auVar5 = vpcmpeqb_avx2(auVar26,auVar25);
                uVar18 = (uint)(SUB321(auVar5 >> 7,0) & 1) |
                         (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
                         (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
                         (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3 |
                         (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 |
                         (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 |
                         (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6 |
                         (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
                         (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 |
                         (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9 |
                         (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
                         (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
                         (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
                         (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
                         (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe |
                         (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
                         (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
                         (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
                         (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
                         (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
                         (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
                         (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
                         (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 |
                         (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 |
                         (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
                         (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
                         (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
                         (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
                         (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
                         (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
                         (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e |
                         (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f;
                uVar17 = 0xe0;
                if (uVar18 == 0) {
                  *(undefined1 (*) [32])((long)pauVar21 + (0xe0 - uVar16)) = auVar25;
                  param_2 = (undefined1 (*) [32])(uVar20 + 0x100 & 0xffffffffffffff80);
                  pauVar21 = (undefined1 (*) [32])
                             ((long)pauVar21 + (-(uVar20 - (long)param_2) - uVar16));
                  auVar24 = *param_2;
                  auVar25 = param_2[1];
                  auVar27 = param_2[2];
                  auVar28 = param_2[3];
                  auVar6 = vpminub_avx2(auVar24,auVar25);
                  auVar7 = vpminub_avx2(auVar27,auVar28);
                  auVar6 = vpminub_avx2(auVar7,auVar6);
                  auVar6 = vpcmpeqb_avx2(auVar6,auVar5);
                  pauVar19 = param_2;
                  pauVar22 = pauVar21;
                  if ((((((((((((((((((((((((((((((((auVar6 >> 7 & (undefined1  [32])0x1) ==
                                                    (undefined1  [32])0x0 &&
                                                   (auVar6 >> 0xf & (undefined1  [32])0x1) ==
                                                   (undefined1  [32])0x0) &&
                                                  (auVar6 >> 0x17 & (undefined1  [32])0x1) ==
                                                  (undefined1  [32])0x0) &&
                                                 (auVar6 >> 0x1f & (undefined1  [32])0x1) ==
                                                 (undefined1  [32])0x0) &&
                                                (auVar6 >> 0x27 & (undefined1  [32])0x1) ==
                                                (undefined1  [32])0x0) &&
                                               (auVar6 >> 0x2f & (undefined1  [32])0x1) ==
                                               (undefined1  [32])0x0) &&
                                              (auVar6 >> 0x37 & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0) &&
                                             (auVar6 >> 0x3f & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            (auVar6 >> 0x47 & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar6 >> 0x4f & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar6 >> 0x57 & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar6 >> 0x5f & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar6 >> 0x67 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar6 >> 0x6f & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar6 >> 0x77 & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) && SUB321(auVar6 >> 0x7f,0) == '\0') &&
                                    (auVar6 >> 0x87 & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar6 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                   ) && (auVar6 >> 0x97 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                 (auVar6 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar6 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar6 >> 0xaf & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar6 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             SUB321(auVar6 >> 0xbf,0) == '\0') &&
                            (auVar6 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar6 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar6 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar6 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar6 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar6 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar6 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      -1 < auVar6[0x1f]) {
                    do {
                      pauVar21 = pauVar22 + 4;
                      param_2 = pauVar19 + 4;
                      *pauVar22 = auVar24;
                      auVar24 = *param_2;
                      pauVar22[1] = auVar25;
                      auVar25 = pauVar19[5];
                      auVar6 = vpminub_avx2(auVar24,auVar25);
                      pauVar22[2] = auVar27;
                      auVar27 = pauVar19[6];
                      pauVar22[3] = auVar28;
                      auVar28 = pauVar19[7];
                      auVar7 = vpminub_avx2(auVar27,auVar28);
                      auVar6 = vpminub_avx2(auVar7,auVar6);
                      auVar6 = vpcmpeqb_avx2(auVar6,auVar5);
                      pauVar19 = param_2;
                      pauVar22 = pauVar21;
                    } while ((((((((((((((((((((((((((((((((auVar6 >> 7 & (undefined1  [32])0x1) ==
                                                           (undefined1  [32])0x0 &&
                                                          (auVar6 >> 0xf & (undefined1  [32])0x1) ==
                                                          (undefined1  [32])0x0) &&
                                                         (auVar6 >> 0x17 & (undefined1  [32])0x1) ==
                                                         (undefined1  [32])0x0) &&
                                                        (auVar6 >> 0x1f & (undefined1  [32])0x1) ==
                                                        (undefined1  [32])0x0) &&
                                                       (auVar6 >> 0x27 & (undefined1  [32])0x1) ==
                                                       (undefined1  [32])0x0) &&
                                                      (auVar6 >> 0x2f & (undefined1  [32])0x1) ==
                                                      (undefined1  [32])0x0) &&
                                                     (auVar6 >> 0x37 & (undefined1  [32])0x1) ==
                                                     (undefined1  [32])0x0) &&
                                                    (auVar6 >> 0x3f & (undefined1  [32])0x1) ==
                                                    (undefined1  [32])0x0) &&
                                                   (auVar6 >> 0x47 & (undefined1  [32])0x1) ==
                                                   (undefined1  [32])0x0) &&
                                                  (auVar6 >> 0x4f & (undefined1  [32])0x1) ==
                                                  (undefined1  [32])0x0) &&
                                                 (auVar6 >> 0x57 & (undefined1  [32])0x1) ==
                                                 (undefined1  [32])0x0) &&
                                                (auVar6 >> 0x5f & (undefined1  [32])0x1) ==
                                                (undefined1  [32])0x0) &&
                                               (auVar6 >> 0x67 & (undefined1  [32])0x1) ==
                                               (undefined1  [32])0x0) &&
                                              (auVar6 >> 0x6f & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0) &&
                                             (auVar6 >> 0x77 & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            SUB321(auVar6 >> 0x7f,0) == '\0') &&
                                           (auVar6 >> 0x87 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar6 >> 0x8f & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar6 >> 0x97 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar6 >> 0x9f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar6 >> 0xa7 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar6 >> 0xaf & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar6 >> 0xb7 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) && SUB321(auVar6 >> 0xbf,0) == '\0') &&
                                   (auVar6 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                  && (auVar6 >> 0xcf & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                 (auVar6 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar6 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar6 >> 0xe7 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar6 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             (auVar6 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             -1 < auVar6[0x1f]);
                  }
                  auVar5 = vpcmpeqb_avx2(auVar26,auVar24);
                  uVar15 = (uint)(SUB321(auVar5 >> 7,0) & 1) |
                           (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
                           (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
                           (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3 |
                           (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 |
                           (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 |
                           (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6 |
                           (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
                           (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 |
                           (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9 |
                           (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
                           (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
                           (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
                           (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
                           (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe |
                           (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
                           (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
                           (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
                           (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
                           (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
                           (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
                           (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
                           (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 |
                           (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 |
                           (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
                           (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
                           (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
                           (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
                           (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
                           (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
                           (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e |
                           (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f;
                  if (uVar15 == 0) {
                    auVar5 = vpcmpeqb_avx2(auVar26,auVar25);
                    uVar15 = (uint)(SUB321(auVar5 >> 7,0) & 1) |
                             (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
                             (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
                             (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3 |
                             (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 |
                             (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 |
                             (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6 |
                             (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
                             (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 |
                             (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9 |
                             (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
                             (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
                             (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
                             (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
                             (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe |
                             (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
                             (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
                             (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
                             (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
                             (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
                             (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
                             (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
                             (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 |
                             (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 |
                             (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
                             (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
                             (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
                             (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
                             (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
                             (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
                             (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e |
                             (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f;
                    if (uVar15 == 0) {
                      auVar5 = vpcmpeqb_avx2(auVar26,auVar27);
                      uVar15 = (uint)(SUB321(auVar5 >> 7,0) & 1) |
                               (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
                               (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
                               (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3 |
                               (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 |
                               (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 |
                               (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6 |
                               (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
                               (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 |
                               (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9 |
                               (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
                               (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
                               (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
                               (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
                               (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe |
                               (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
                               (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
                               (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
                               (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
                               (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
                               (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
                               (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
                               (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 |
                               (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 |
                               (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
                               (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
                               (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
                               (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
                               (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
                               (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
                               (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e |
                               (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f;
                      if (uVar15 == 0) {
                        auVar26 = vpcmpeqb_avx2(auVar26,auVar28);
                        uVar18 = (uint)(SUB321(auVar26 >> 7,0) & 1) |
                                 (uint)(SUB321(auVar26 >> 0xf,0) & 1) << 1 |
                                 (uint)(SUB321(auVar26 >> 0x17,0) & 1) << 2 |
                                 (uint)(SUB321(auVar26 >> 0x1f,0) & 1) << 3 |
                                 (uint)(SUB321(auVar26 >> 0x27,0) & 1) << 4 |
                                 (uint)(SUB321(auVar26 >> 0x2f,0) & 1) << 5 |
                                 (uint)(SUB321(auVar26 >> 0x37,0) & 1) << 6 |
                                 (uint)(SUB321(auVar26 >> 0x3f,0) & 1) << 7 |
                                 (uint)(SUB321(auVar26 >> 0x47,0) & 1) << 8 |
                                 (uint)(SUB321(auVar26 >> 0x4f,0) & 1) << 9 |
                                 (uint)(SUB321(auVar26 >> 0x57,0) & 1) << 10 |
                                 (uint)(SUB321(auVar26 >> 0x5f,0) & 1) << 0xb |
                                 (uint)(SUB321(auVar26 >> 0x67,0) & 1) << 0xc |
                                 (uint)(SUB321(auVar26 >> 0x6f,0) & 1) << 0xd |
                                 (uint)(SUB321(auVar26 >> 0x77,0) & 1) << 0xe |
                                 (uint)SUB321(auVar26 >> 0x7f,0) << 0xf |
                                 (uint)(SUB321(auVar26 >> 0x87,0) & 1) << 0x10 |
                                 (uint)(SUB321(auVar26 >> 0x8f,0) & 1) << 0x11 |
                                 (uint)(SUB321(auVar26 >> 0x97,0) & 1) << 0x12 |
                                 (uint)(SUB321(auVar26 >> 0x9f,0) & 1) << 0x13 |
                                 (uint)(SUB321(auVar26 >> 0xa7,0) & 1) << 0x14 |
                                 (uint)(SUB321(auVar26 >> 0xaf,0) & 1) << 0x15 |
                                 (uint)(SUB321(auVar26 >> 0xb7,0) & 1) << 0x16 |
                                 (uint)SUB321(auVar26 >> 0xbf,0) << 0x17 |
                                 (uint)(SUB321(auVar26 >> 199,0) & 1) << 0x18 |
                                 (uint)(SUB321(auVar26 >> 0xcf,0) & 1) << 0x19 |
                                 (uint)(SUB321(auVar26 >> 0xd7,0) & 1) << 0x1a |
                                 (uint)(SUB321(auVar26 >> 0xdf,0) & 1) << 0x1b |
                                 (uint)(SUB321(auVar26 >> 0xe7,0) & 1) << 0x1c |
                                 (uint)(SUB321(auVar26 >> 0xef,0) & 1) << 0x1d |
                                 (uint)(SUB321(auVar26 >> 0xf7,0) & 1) << 0x1e |
                                 (uint)(byte)(auVar26[0x1f] >> 7) << 0x1f;
                        uVar15 = 0;
                        if (uVar18 != 0) {
                          for (; (uVar18 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                          }
                        }
                        uVar16 = (ulong)uVar15;
                        *pauVar21 = auVar24;
                        pauVar21[1] = auVar25;
                        pauVar21[2] = auVar27;
                        param_2 = param_2 + 3;
                        pauVar21 = pauVar21 + 3;
                      }
                      else {
                        uVar18 = 0;
                        if (uVar15 != 0) {
                          for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                          }
                        }
                        uVar16 = (ulong)uVar18;
                        *pauVar21 = auVar24;
                        pauVar21[1] = auVar25;
                        param_2 = param_2 + 2;
                        pauVar21 = pauVar21 + 2;
                      }
                    }
                    else {
                      uVar18 = 0;
                      if (uVar15 != 0) {
                        for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                        }
                      }
                      uVar16 = (ulong)uVar18;
                      *pauVar21 = auVar24;
                      param_2 = param_2 + 1;
                      pauVar21 = pauVar21 + 1;
                    }
                  }
                  else {
                    uVar18 = 0;
                    if (uVar15 != 0) {
                      for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                      }
                    }
                    uVar16 = (ulong)uVar18;
                  }
                  goto LAB_007503c9;
                }
              }
            }
          }
        }
      }
      pauVar21 = (undefined1 (*) [32])((long)pauVar21 + (uVar17 - uVar16));
    }
    param_2 = (undefined1 (*) [32])(((ulong)param_2 & 0xffffffffffffffe0) + uVar17);
  }
  uVar15 = 0;
  if (uVar18 != 0) {
    for (; (uVar18 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  uVar16 = (ulong)uVar15;
LAB_007503c9:
  uVar15 = (uint)uVar16;
  if (uVar15 < 0x20) {
    if (uVar15 < 0x10) {
      if (uVar15 < 8) {
        if (uVar15 < 4) {
          if (uVar15 == 3) {
            *(undefined4 *)*pauVar21 = *(undefined4 *)*param_2;
          }
          else if (uVar15 < 2) {
            if (uVar15 == 1) {
              *(undefined2 *)*pauVar21 = *(undefined2 *)*param_2;
            }
            else {
              (*pauVar21)[0] = 0;
            }
          }
          else {
            *(undefined2 *)*pauVar21 = *(undefined2 *)*param_2;
            (*pauVar21)[2] = 0;
          }
        }
        else {
          *(undefined4 *)*pauVar21 = *(undefined4 *)*param_2;
          *(undefined4 *)(pauVar21[-1] + uVar16 + 0x1d) =
               *(undefined4 *)(param_2[-1] + uVar16 + 0x1d);
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_2[-1] + uVar16 + 0x19);
        *(undefined8 *)*pauVar21 = *(undefined8 *)*param_2;
        *(undefined8 *)(pauVar21[-1] + uVar16 + 0x19) = uVar2;
      }
    }
    else {
      uVar2 = *(undefined8 *)(*param_2 + 8);
      uVar8 = *(undefined8 *)(param_2[-1] + uVar16 + 0x11);
      uVar9 = *(undefined8 *)((long)(param_2[-1] + uVar16 + 0x11) + 8);
      *(undefined8 *)*pauVar21 = *(undefined8 *)*param_2;
      *(undefined8 *)(*pauVar21 + 8) = uVar2;
      *(undefined8 *)(pauVar21[-1] + uVar16 + 0x11) = uVar8;
      *(undefined8 *)((long)(pauVar21[-1] + uVar16 + 0x11) + 8) = uVar9;
    }
  }
  else {
    uVar2 = *(undefined8 *)(*param_2 + 8);
    uVar8 = *(undefined8 *)(*param_2 + 0x10);
    uVar9 = *(undefined8 *)(*param_2 + 0x18);
    puVar1 = (undefined8 *)(param_2[-1] + uVar16 + 1);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    uVar12 = puVar1[2];
    uVar13 = puVar1[3];
    *(undefined8 *)*pauVar21 = *(undefined8 *)*param_2;
    *(undefined8 *)(*pauVar21 + 8) = uVar2;
    *(undefined8 *)(*pauVar21 + 0x10) = uVar8;
    *(undefined8 *)(*pauVar21 + 0x18) = uVar9;
    puVar1 = (undefined8 *)(pauVar21[-1] + uVar16 + 1);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
  }
  bVar23 = (bool)xtest();
  if (bVar23) {
    return param_1;
  }
  return param_1;
}

