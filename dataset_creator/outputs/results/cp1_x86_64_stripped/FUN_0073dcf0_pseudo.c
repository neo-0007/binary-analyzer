
undefined1 * FUN_0073dcf0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined1 (*pauVar3) [32];
  uint uVar4;
  uint uVar5;
  sbyte sVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  auVar13[0] = SUB81(param_2,0);
  auVar13[1] = auVar13[0];
  auVar13[2] = auVar13[0];
  auVar13[3] = auVar13[0];
  auVar13[4] = auVar13[0];
  auVar13[5] = auVar13[0];
  auVar13[6] = auVar13[0];
  auVar13[7] = auVar13[0];
  auVar13[8] = auVar13[0];
  auVar13[9] = auVar13[0];
  auVar13[10] = auVar13[0];
  auVar13[0xb] = auVar13[0];
  auVar13[0xc] = auVar13[0];
  auVar13[0xd] = auVar13[0];
  auVar13[0xe] = auVar13[0];
  auVar13[0xf] = auVar13[0];
  auVar13[0x10] = auVar13[0];
  auVar13[0x11] = auVar13[0];
  auVar13[0x12] = auVar13[0];
  auVar13[0x13] = auVar13[0];
  auVar13[0x14] = auVar13[0];
  auVar13[0x15] = auVar13[0];
  auVar13[0x16] = auVar13[0];
  auVar13[0x17] = auVar13[0];
  auVar13[0x18] = auVar13[0];
  auVar13[0x19] = auVar13[0];
  auVar13[0x1a] = auVar13[0];
  auVar13[0x1b] = auVar13[0];
  auVar13[0x1c] = auVar13[0];
  auVar13[0x1d] = auVar13[0];
  auVar13[0x1e] = auVar13[0];
  auVar13[0x1f] = auVar13[0];
  auVar11 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (((uint)param_1 & 0x3f) < 0x21) {
    auVar12 = vpcmpeqb_avx2(auVar11,*param_1);
    auVar1 = vpcmpeqb_avx2(auVar13,*param_1);
    uVar4 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar12 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f
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
      if (uVar4 != 0) {
        return (undefined1 *)0x0;
      }
      pauVar10 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
      uVar5 = 0;
    }
    else {
      if (uVar4 != 0) {
LAB_0073de85:
        uVar5 = uVar5 & (uVar4 - 1 ^ uVar4);
        if (uVar5 == 0) {
          return (undefined1 *)0x0;
        }
        uVar4 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        return param_1[-1] + uVar4;
      }
      pauVar10 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
      param_2 = param_1;
    }
  }
  else {
    uVar7 = (uint)param_1 & 0x1f;
    auVar12 = *(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
    auVar1 = vpcmpeqb_avx2(auVar11,auVar12);
    auVar12 = vpcmpeqb_avx2(auVar13,auVar12);
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
    uVar2 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar12 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f
    ;
    sVar6 = (sbyte)uVar7;
    uVar4 = uVar8 >> sVar6;
    uVar5 = uVar2 >> sVar6;
    pauVar10 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0) + 1;
    if (uVar2 >> sVar6 == 0) {
      uVar5 = uVar4;
      if (uVar8 >> sVar6 != 0) {
        return (undefined1 *)0x0;
      }
    }
    else {
      if (uVar8 >> sVar6 != 0) {
        param_1 = (undefined1 (*) [32])(*pauVar10 + uVar7);
        goto LAB_0073de85;
      }
      param_2 = (undefined1 (*) [32])(*pauVar10 + uVar7);
    }
  }
LAB_0073ddb0:
  do {
    uVar8 = uVar5;
    pauVar9 = param_2;
    auVar12 = vpcmpeqb_avx2(auVar11,*pauVar10);
    auVar1 = vpcmpeqb_avx2(auVar13,*pauVar10);
    uVar4 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
    pauVar3 = pauVar10 + 1;
    if (((((((((((((((((((((((((((((((((auVar12 >> 7 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0 &&
                                      (auVar12 >> 0xf & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar12 >> 0x17 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar12 >> 0x1f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar12 >> 0x27 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar12 >> 0x2f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar12 >> 0x37 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar12 >> 0x3f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar12 >> 0x47 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar12 >> 0x4f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar12 >> 0x57 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar12 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar12 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar12 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar12 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        SUB321(auVar12 >> 0x7f,0) == '\0') &&
                       (auVar12 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar12 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar12 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar12 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar12 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar12 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar12 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                SUB321(auVar12 >> 0xbf,0) == '\0') &&
               (auVar12 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar12 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar12 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
            (auVar12 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
           (auVar12 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
          (auVar12 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
         (auVar12 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) && -1 < auVar12[0x1f])
        && uVar4 == 0) {
      auVar1 = pauVar10[1];
      auVar12 = vpcmpeqb_avx2(auVar11,auVar1);
      auVar1 = vpcmpeqb_avx2(auVar13,auVar1);
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
      pauVar3 = pauVar10 + 2;
      if (((((((((((((((((((((((((((((((((auVar12 >> 7 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0 &&
                                        (auVar12 >> 0xf & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar12 >> 0x17 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar12 >> 0x1f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar12 >> 0x27 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar12 >> 0x2f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar12 >> 0x37 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar12 >> 0x3f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar12 >> 0x47 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar12 >> 0x4f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar12 >> 0x57 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar12 >> 0x5f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar12 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar12 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar12 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          SUB321(auVar12 >> 0x7f,0) == '\0') &&
                         (auVar12 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar12 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar12 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar12 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar12 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar12 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar12 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  SUB321(auVar12 >> 0xbf,0) == '\0') &&
                 (auVar12 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar12 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar12 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar12 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar12 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
            (auVar12 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
           (auVar12 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) && -1 < auVar12[0x1f]
          ) && uVar4 == 0) {
        auVar1 = pauVar10[2];
        auVar12 = vpcmpeqb_avx2(auVar11,auVar1);
        auVar1 = vpcmpeqb_avx2(auVar13,auVar1);
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
        pauVar3 = pauVar10 + 3;
        if (((((((((((((((((((((((((((((((((auVar12 >> 7 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0 &&
                                          (auVar12 >> 0xf & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar12 >> 0x17 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar12 >> 0x1f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar12 >> 0x27 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar12 >> 0x2f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar12 >> 0x37 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar12 >> 0x3f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar12 >> 0x47 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar12 >> 0x4f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar12 >> 0x57 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar12 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar12 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && (auVar12 >> 0x6f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                             (auVar12 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            SUB321(auVar12 >> 0x7f,0) == '\0') &&
                           (auVar12 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar12 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar12 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar12 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar12 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar12 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar12 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    SUB321(auVar12 >> 0xbf,0) == '\0') &&
                   (auVar12 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar12 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar12 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar12 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar12 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar12 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar12 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
            -1 < auVar12[0x1f]) && uVar4 == 0) {
          auVar1 = pauVar10[3];
          auVar12 = vpcmpeqb_avx2(auVar11,auVar1);
          pauVar10 = pauVar10 + 4;
          auVar1 = vpcmpeqb_avx2(auVar13,auVar1);
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
          param_2 = pauVar9;
          pauVar3 = pauVar10;
          uVar5 = uVar8;
          if (((((((((((((((((((((((((((((((((auVar12 >> 7 & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0 &&
                                            (auVar12 >> 0xf & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar12 >> 0x17 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar12 >> 0x1f & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar12 >> 0x27 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar12 >> 0x2f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar12 >> 0x37 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar12 >> 0x3f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar12 >> 0x47 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar12 >> 0x4f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar12 >> 0x57 & (undefined1  [32])0x1) ==
                                   (undefined1  [32])0x0) &&
                                  (auVar12 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                  ) && (auVar12 >> 0x67 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                (auVar12 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                               && (auVar12 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                               ) && SUB321(auVar12 >> 0x7f,0) == '\0') &&
                             (auVar12 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar12 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar12 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar12 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar12 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar12 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar12 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      SUB321(auVar12 >> 0xbf,0) == '\0') &&
                     (auVar12 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar12 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar12 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar12 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar12 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar12 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar12 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              -1 < auVar12[0x1f]) && uVar4 == 0) goto LAB_0073ddb0;
        }
      }
    }
    pauVar10 = pauVar3;
    if (uVar4 == 0) goto LAB_0073de24;
    uVar2 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar12 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f
    ;
    param_2 = pauVar10;
    uVar5 = uVar4;
    if (uVar2 != 0) {
      uVar4 = uVar4 & (uVar2 - 1 ^ uVar2);
      if (uVar4 != 0) {
        uVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
          }
        }
        return pauVar10[-1] + uVar5;
      }
LAB_0073de24:
      if (uVar8 == 0) {
        return (undefined1 *)0x0;
      }
      uVar4 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      return pauVar9[-1] + uVar4;
    }
  } while( true );
}

