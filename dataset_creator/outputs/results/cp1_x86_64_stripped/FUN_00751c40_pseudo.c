
undefined1 * FUN_00751c40(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined1 (*pauVar3) [32];
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  sbyte sVar7;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  bool bVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  auVar15[0] = SUB81(param_2,0);
  auVar15[1] = auVar15[0];
  auVar15[2] = auVar15[0];
  auVar15[3] = auVar15[0];
  auVar15[4] = auVar15[0];
  auVar15[5] = auVar15[0];
  auVar15[6] = auVar15[0];
  auVar15[7] = auVar15[0];
  auVar15[8] = auVar15[0];
  auVar15[9] = auVar15[0];
  auVar15[10] = auVar15[0];
  auVar15[0xb] = auVar15[0];
  auVar15[0xc] = auVar15[0];
  auVar15[0xd] = auVar15[0];
  auVar15[0xe] = auVar15[0];
  auVar15[0xf] = auVar15[0];
  auVar15[0x10] = auVar15[0];
  auVar15[0x11] = auVar15[0];
  auVar15[0x12] = auVar15[0];
  auVar15[0x13] = auVar15[0];
  auVar15[0x14] = auVar15[0];
  auVar15[0x15] = auVar15[0];
  auVar15[0x16] = auVar15[0];
  auVar15[0x17] = auVar15[0];
  auVar15[0x18] = auVar15[0];
  auVar15[0x19] = auVar15[0];
  auVar15[0x1a] = auVar15[0];
  auVar15[0x1b] = auVar15[0];
  auVar15[0x1c] = auVar15[0];
  auVar15[0x1d] = auVar15[0];
  auVar15[0x1e] = auVar15[0];
  auVar15[0x1f] = auVar15[0];
  auVar13 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (((uint)param_1 & 0x3f) < 0x21) {
    auVar14 = vpcmpeqb_avx2(auVar13,*param_1);
    auVar1 = vpcmpeqb_avx2(auVar15,*param_1);
    uVar4 = (uint)(SUB321(auVar14 >> 7,0) & 1) | (uint)(SUB321(auVar14 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar14 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar14 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar14 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar14 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar14 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar14 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar14 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar14 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar14 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar14 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar14 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar14 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar14 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar14 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar14 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar14 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar14 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar14 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar14 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar14 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar14 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar14 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar14 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar14 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar14 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar14 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar14 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar14 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar14 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar14[0x1f] >> 7) << 0x1f
    ;
    uVar5 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
    param_1 = param_1 + 1;
    if (uVar5 == 0) {
      if (uVar4 == 0) {
        pauVar11 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
        uVar5 = 0;
        goto LAB_00751d00;
      }
    }
    else {
      if (uVar4 == 0) {
        pauVar11 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
        param_2 = param_1;
        goto LAB_00751d00;
      }
LAB_00751de5:
      uVar5 = uVar5 & (uVar4 - 1 ^ uVar4);
      if (uVar5 != 0) {
        uVar4 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        puVar6 = param_1[-1] + uVar4;
        goto LAB_00751d89;
      }
    }
  }
  else {
    uVar8 = (uint)param_1 & 0x1f;
    auVar14 = *(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
    auVar1 = vpcmpeqb_avx2(auVar13,auVar14);
    auVar14 = vpcmpeqb_avx2(auVar15,auVar14);
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
    uVar2 = (uint)(SUB321(auVar14 >> 7,0) & 1) | (uint)(SUB321(auVar14 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar14 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar14 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar14 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar14 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar14 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar14 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar14 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar14 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar14 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar14 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar14 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar14 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar14 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar14 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar14 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar14 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar14 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar14 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar14 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar14 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar14 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar14 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar14 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar14 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar14 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar14 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar14 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar14 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar14 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar14[0x1f] >> 7) << 0x1f
    ;
    sVar7 = (sbyte)uVar8;
    uVar4 = uVar9 >> sVar7;
    uVar5 = uVar2 >> sVar7;
    pauVar11 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0) + 1;
    if (uVar2 >> sVar7 == 0) {
      uVar5 = uVar4;
      if (uVar9 >> sVar7 != 0) goto LAB_00751e00;
    }
    else {
      if (uVar9 >> sVar7 != 0) {
        param_1 = (undefined1 (*) [32])(*pauVar11 + uVar8);
        goto LAB_00751de5;
      }
      param_2 = (undefined1 (*) [32])(*pauVar11 + uVar8);
    }
LAB_00751d00:
    do {
      uVar9 = uVar5;
      pauVar10 = param_2;
      auVar14 = vpcmpeqb_avx2(auVar13,*pauVar11);
      auVar1 = vpcmpeqb_avx2(auVar15,*pauVar11);
      uVar4 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
      pauVar3 = pauVar11 + 1;
      if (((((((((((((((((((((((((((((((((auVar14 >> 7 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0 &&
                                        (auVar14 >> 0xf & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar14 >> 0x17 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar14 >> 0x1f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar14 >> 0x27 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar14 >> 0x2f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar14 >> 0x37 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar14 >> 0x3f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar14 >> 0x47 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar14 >> 0x4f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar14 >> 0x57 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar14 >> 0x5f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar14 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar14 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar14 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          SUB321(auVar14 >> 0x7f,0) == '\0') &&
                         (auVar14 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar14 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar14 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar14 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar14 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar14 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar14 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  SUB321(auVar14 >> 0xbf,0) == '\0') &&
                 (auVar14 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar14 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar14 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar14 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar14 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
            (auVar14 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
           (auVar14 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) && -1 < auVar14[0x1f]
          ) && uVar4 == 0) {
        auVar1 = pauVar11[1];
        auVar14 = vpcmpeqb_avx2(auVar13,auVar1);
        auVar1 = vpcmpeqb_avx2(auVar15,auVar1);
        uVar4 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
        pauVar3 = pauVar11 + 2;
        if (((((((((((((((((((((((((((((((((auVar14 >> 7 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0 &&
                                          (auVar14 >> 0xf & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar14 >> 0x17 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar14 >> 0x1f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar14 >> 0x27 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar14 >> 0x2f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar14 >> 0x37 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar14 >> 0x3f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar14 >> 0x47 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar14 >> 0x4f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar14 >> 0x57 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar14 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar14 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar14 >> 0x6f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar14 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            SUB321(auVar14 >> 0x7f,0) == '\0') &&
                           (auVar14 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar14 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar14 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar14 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar14 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar14 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar14 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    SUB321(auVar14 >> 0xbf,0) == '\0') &&
                   (auVar14 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar14 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar14 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar14 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar14 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar14 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar14 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
            -1 < auVar14[0x1f]) && uVar4 == 0) {
          auVar1 = pauVar11[2];
          auVar14 = vpcmpeqb_avx2(auVar13,auVar1);
          auVar1 = vpcmpeqb_avx2(auVar15,auVar1);
          uVar4 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
          pauVar3 = pauVar11 + 3;
          if (((((((((((((((((((((((((((((((((auVar14 >> 7 & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0 &&
                                            (auVar14 >> 0xf & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar14 >> 0x17 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar14 >> 0x1f & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar14 >> 0x27 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar14 >> 0x2f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar14 >> 0x37 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar14 >> 0x3f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar14 >> 0x47 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar14 >> 0x4f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar14 >> 0x57 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar14 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar14 >> 0x67 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar14 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar14 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && SUB321(auVar14 >> 0x7f,0) == '\0') &&
                             (auVar14 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar14 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar14 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar14 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar14 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar14 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar14 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      SUB321(auVar14 >> 0xbf,0) == '\0') &&
                     (auVar14 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar14 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar14 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar14 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar14 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar14 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar14 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              -1 < auVar14[0x1f]) && uVar4 == 0) {
            auVar1 = pauVar11[3];
            auVar14 = vpcmpeqb_avx2(auVar13,auVar1);
            pauVar11 = pauVar11 + 4;
            auVar1 = vpcmpeqb_avx2(auVar15,auVar1);
            uVar4 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
            param_2 = pauVar10;
            pauVar3 = pauVar11;
            uVar5 = uVar9;
            if (((((((((((((((((((((((((((((((((auVar14 >> 7 & (undefined1  [32])0x1) ==
                                               (undefined1  [32])0x0 &&
                                              (auVar14 >> 0xf & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0) &&
                                             (auVar14 >> 0x17 & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            (auVar14 >> 0x1f & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar14 >> 0x27 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar14 >> 0x2f & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar14 >> 0x37 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar14 >> 0x3f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar14 >> 0x47 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar14 >> 0x4f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar14 >> 0x57 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar14 >> 0x5f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar14 >> 0x67 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar14 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar14 >> 0x77 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) && SUB321(auVar14 >> 0x7f,0) == '\0')
                               && (auVar14 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar14 >> 0x8f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar14 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar14 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar14 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar14 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar14 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        SUB321(auVar14 >> 0xbf,0) == '\0') &&
                       (auVar14 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar14 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar14 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar14 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar14 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar14 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar14 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                -1 < auVar14[0x1f]) && uVar4 == 0) goto LAB_00751d00;
          }
        }
      }
      pauVar11 = pauVar3;
      if (uVar4 == 0) goto LAB_00751d74;
      uVar2 = (uint)(SUB321(auVar14 >> 7,0) & 1) | (uint)(SUB321(auVar14 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar14 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar14 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar14 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar14 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar14 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar14 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar14 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar14 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar14 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar14 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar14 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar14 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar14 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar14 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar14 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar14 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar14 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar14 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar14 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar14 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar14 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar14 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar14 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar14 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar14 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar14 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar14 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar14 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar14 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar14[0x1f] >> 7) << 0x1f;
      param_2 = pauVar11;
      uVar5 = uVar4;
    } while (uVar2 == 0);
    uVar4 = uVar4 & (uVar2 - 1 ^ uVar2);
    if (uVar4 != 0) {
      uVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      puVar6 = pauVar11[-1] + uVar5;
      goto LAB_00751d89;
    }
LAB_00751d74:
    if (uVar9 != 0) {
      uVar4 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      puVar6 = pauVar10[-1] + uVar4;
      goto LAB_00751d89;
    }
  }
LAB_00751e00:
  puVar6 = (undefined1 *)0x0;
LAB_00751d89:
  bVar12 = (bool)xtest();
  if (bVar12) {
    return puVar6;
  }
  return puVar6;
}

