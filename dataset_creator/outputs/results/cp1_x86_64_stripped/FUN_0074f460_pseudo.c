
int FUN_0074f460(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  
  uVar13 = 0;
  uVar9 = ((uint)param_1 | (uint)param_2) & 0xfff;
  auVar19 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (uVar9 < 0xf81) {
    auVar2 = vpcmpeqb_avx2(*param_1,*param_2);
    auVar2 = vpminub_avx2(auVar2,*param_1);
    auVar2 = vpcmpeqb_avx2(auVar2,auVar19);
    uVar9 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
    if (uVar9 == 0) {
      auVar2 = vpcmpeqb_avx2(param_1[1],param_2[1]);
      auVar2 = vpminub_avx2(auVar2,param_1[1]);
      auVar2 = vpcmpeqb_avx2(auVar2,auVar19);
      uVar9 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar9 == 0) {
        auVar2 = vpcmpeqb_avx2(param_1[2],param_2[2]);
        auVar3 = vpminub_avx2(auVar2,param_1[2]);
        auVar2 = vpcmpeqb_avx2(param_2[3],param_1[3]);
        auVar3 = vpcmpeqb_avx2(auVar3,auVar19);
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
          auVar2 = vpminub_avx2(auVar2,param_1[3]);
          auVar2 = vpcmpeqb_avx2(auVar2,auVar19);
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
          if (uVar9 == 0) {
LAB_0074f576:
            lVar12 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
            param_1 = (undefined1 (*) [32])((long)param_1 + lVar12);
            param_2 = (undefined1 (*) [32])(lVar12 + (long)param_2);
            uVar13 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
            while( true ) {
              iVar10 = (int)uVar13;
              uVar13 = (ulong)(iVar10 - 1);
              if (iVar10 == 0) {
                uVar9 = (uint)param_2 & 0x7f;
                lVar12 = -(ulong)uVar9;
                if (uVar9 < 0x40) {
                  auVar2 = *(undefined1 (*) [32])((long)param_1 + lVar12 + 0x20);
                  auVar3 = vpcmpeqb_avx2(*(undefined1 (*) [32])((long)param_1 + lVar12),
                                         *(undefined1 (*) [32])((long)param_2 + lVar12));
                  auVar4 = vpcmpeqb_avx2(auVar2,*(undefined1 (*) [32])
                                                 ((long)param_2 + lVar12 + 0x20));
                  auVar3 = vpminub_avx2(auVar3,*(undefined1 (*) [32])((long)param_1 + lVar12));
                  auVar4 = vpminub_avx2(auVar4,auVar2);
                  auVar2 = vpcmpeqb_avx2(auVar3,auVar19);
                  auVar3 = vpcmpeqb_avx2(auVar4,auVar19);
                  uVar13 = CONCAT44((uint)(SUB321(auVar3 >> 7,0) & 1) |
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
                                    (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f,
                                    (uint)(SUB321(auVar2 >> 7,0) & 1) |
                                    (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                                    (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) >> ((byte)uVar9 & 0x3f)
                  ;
                  if (uVar13 != 0) {
                    lVar12 = 0;
                    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                      lVar12 = lVar12 + 1;
                    }
                    iVar10 = (uint)(byte)(*param_1)[lVar12] - (uint)(byte)(*param_2)[lVar12];
                    goto LAB_0074f4a8;
                  }
                }
                auVar2 = *(undefined1 (*) [32])((long)param_1 + lVar12 + 0x40);
                auVar3 = *(undefined1 (*) [32])((long)param_1 + lVar12 + 0x60);
                auVar4 = vpcmpeqb_avx2(auVar2,*(undefined1 (*) [32])((long)param_2 + lVar12 + 0x40))
                ;
                auVar4 = vpminub_avx2(auVar4,auVar2);
                auVar2 = vpcmpeqb_avx2(auVar3,*(undefined1 (*) [32])((long)param_2 + lVar12 + 0x60))
                ;
                auVar4 = vpcmpeqb_avx2(auVar4,auVar19);
                auVar2 = vpminub_avx2(auVar2,auVar3);
                auVar2 = vpcmpeqb_avx2(auVar2,auVar19);
                uVar14 = CONCAT44((uint)(SUB321(auVar2 >> 7,0) & 1) |
                                  (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                                  (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f,
                                  (uint)(SUB321(auVar4 >> 7,0) & 1) |
                                  (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
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
                                  (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
                uVar15 = 0;
                uVar11 = uVar9 - 0x40;
                if (uVar11 != 0 && 0x3f < uVar9) {
                  uVar14 = uVar14 >> ((byte)uVar11 & 0x3f);
                  uVar15 = (ulong)uVar11;
                }
                uVar13 = 0x1f;
                if (uVar14 != 0) {
                  lVar8 = 0;
                  for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                    lVar8 = lVar8 + 1;
                  }
                  lVar12 = lVar8 + lVar12 + uVar15;
                  iVar10 = (uint)*(byte *)((long)param_1 + lVar12 + 0x40) -
                           (uint)*(byte *)((long)param_2 + lVar12 + 0x40);
                  goto LAB_0074f4a8;
                }
              }
              auVar2 = vpcmpeqb_avx2(*param_1,*param_2);
              auVar3 = vpcmpeqb_avx2(param_1[1],param_2[1]);
              auVar4 = vpminub_avx2(auVar2,*param_1);
              auVar5 = vpminub_avx2(auVar3,param_1[1]);
              auVar6 = vpminub_avx2(auVar4,auVar5);
              auVar2 = vpcmpeqb_avx2(param_1[2],param_2[2]);
              auVar3 = vpcmpeqb_avx2(param_1[3],param_2[3]);
              auVar7 = vpminub_avx2(auVar2,param_1[2]);
              auVar3 = vpminub_avx2(auVar3,param_1[3]);
              auVar2 = vpminub_avx2(auVar6,auVar7);
              auVar2 = vpminub_avx2(auVar2,auVar3);
              auVar2 = vpcmpeqb_avx2(auVar2,auVar19);
              if ((((((((((((((((((((((((((((((((auVar2 >> 7 & (undefined1  [32])0x1) !=
                                                (undefined1  [32])0x0 ||
                                               (auVar2 >> 0xf & (undefined1  [32])0x1) !=
                                               (undefined1  [32])0x0) ||
                                              (auVar2 >> 0x17 & (undefined1  [32])0x1) !=
                                              (undefined1  [32])0x0) ||
                                             (auVar2 >> 0x1f & (undefined1  [32])0x1) !=
                                             (undefined1  [32])0x0) ||
                                            (auVar2 >> 0x27 & (undefined1  [32])0x1) !=
                                            (undefined1  [32])0x0) ||
                                           (auVar2 >> 0x2f & (undefined1  [32])0x1) !=
                                           (undefined1  [32])0x0) ||
                                          (auVar2 >> 0x37 & (undefined1  [32])0x1) !=
                                          (undefined1  [32])0x0) ||
                                         (auVar2 >> 0x3f & (undefined1  [32])0x1) !=
                                         (undefined1  [32])0x0) ||
                                        (auVar2 >> 0x47 & (undefined1  [32])0x1) !=
                                        (undefined1  [32])0x0) ||
                                       (auVar2 >> 0x4f & (undefined1  [32])0x1) !=
                                       (undefined1  [32])0x0) ||
                                      (auVar2 >> 0x57 & (undefined1  [32])0x1) !=
                                      (undefined1  [32])0x0) ||
                                     (auVar2 >> 0x5f & (undefined1  [32])0x1) !=
                                     (undefined1  [32])0x0) ||
                                    (auVar2 >> 0x67 & (undefined1  [32])0x1) !=
                                    (undefined1  [32])0x0) ||
                                   (auVar2 >> 0x6f & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                   ) || (auVar2 >> 0x77 & (undefined1  [32])0x1) !=
                                        (undefined1  [32])0x0) || SUB321(auVar2 >> 0x7f,0) != '\0')
                                || (auVar2 >> 0x87 & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                ) || (auVar2 >> 0x8f & (undefined1  [32])0x1) !=
                                     (undefined1  [32])0x0) ||
                              (auVar2 >> 0x97 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                             (auVar2 >> 0x9f & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                            (auVar2 >> 0xa7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                           (auVar2 >> 0xaf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                          (auVar2 >> 0xb7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                         SUB321(auVar2 >> 0xbf,0) != '\0') ||
                        (auVar2 >> 199 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                       (auVar2 >> 0xcf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                      (auVar2 >> 0xd7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                     (auVar2 >> 0xdf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                    (auVar2 >> 0xe7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                   (auVar2 >> 0xef & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                  (auVar2 >> 0xf7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                  auVar2[0x1f] < '\0') break;
              param_1 = param_1 + 4;
              param_2 = param_2 + 4;
            }
            auVar2 = vpcmpeqb_avx2(auVar4,auVar19);
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
            if (uVar9 == 0) {
              auVar2 = vpcmpeqb_avx2(auVar5,auVar19);
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
              if (uVar9 == 0) {
                auVar2 = vpcmpeqb_avx2(auVar7,auVar19);
                uVar9 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1
                        | (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
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
                if (uVar9 == 0) {
                  auVar19 = vpcmpeqb_avx2(auVar3,auVar19);
                  uVar11 = 0;
                  for (uVar9 = (uint)(SUB321(auVar19 >> 7,0) & 1) |
                               (uint)(SUB321(auVar19 >> 0xf,0) & 1) << 1 |
                               (uint)(SUB321(auVar19 >> 0x17,0) & 1) << 2 |
                               (uint)(SUB321(auVar19 >> 0x1f,0) & 1) << 3 |
                               (uint)(SUB321(auVar19 >> 0x27,0) & 1) << 4 |
                               (uint)(SUB321(auVar19 >> 0x2f,0) & 1) << 5 |
                               (uint)(SUB321(auVar19 >> 0x37,0) & 1) << 6 |
                               (uint)(SUB321(auVar19 >> 0x3f,0) & 1) << 7 |
                               (uint)(SUB321(auVar19 >> 0x47,0) & 1) << 8 |
                               (uint)(SUB321(auVar19 >> 0x4f,0) & 1) << 9 |
                               (uint)(SUB321(auVar19 >> 0x57,0) & 1) << 10 |
                               (uint)(SUB321(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (uint)(SUB321(auVar19 >> 0x67,0) & 1) << 0xc |
                               (uint)(SUB321(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (uint)(SUB321(auVar19 >> 0x77,0) & 1) << 0xe |
                               (uint)SUB321(auVar19 >> 0x7f,0) << 0xf |
                               (uint)(SUB321(auVar19 >> 0x87,0) & 1) << 0x10 |
                               (uint)(SUB321(auVar19 >> 0x8f,0) & 1) << 0x11 |
                               (uint)(SUB321(auVar19 >> 0x97,0) & 1) << 0x12 |
                               (uint)(SUB321(auVar19 >> 0x9f,0) & 1) << 0x13 |
                               (uint)(SUB321(auVar19 >> 0xa7,0) & 1) << 0x14 |
                               (uint)(SUB321(auVar19 >> 0xaf,0) & 1) << 0x15 |
                               (uint)(SUB321(auVar19 >> 0xb7,0) & 1) << 0x16 |
                               (uint)SUB321(auVar19 >> 0xbf,0) << 0x17 |
                               (uint)(SUB321(auVar19 >> 199,0) & 1) << 0x18 |
                               (uint)(SUB321(auVar19 >> 0xcf,0) & 1) << 0x19 |
                               (uint)(SUB321(auVar19 >> 0xd7,0) & 1) << 0x1a |
                               (uint)(SUB321(auVar19 >> 0xdf,0) & 1) << 0x1b |
                               (uint)(SUB321(auVar19 >> 0xe7,0) & 1) << 0x1c |
                               (uint)(SUB321(auVar19 >> 0xef,0) & 1) << 0x1d |
                               (uint)(SUB321(auVar19 >> 0xf7,0) & 1) << 0x1e |
                               (uint)(byte)(auVar19[0x1f] >> 7) << 0x1f; (uVar9 & 1) == 0;
                      uVar9 = uVar9 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  iVar10 = (uint)(byte)param_1[3][uVar11] - (uint)(byte)param_2[3][uVar11];
                }
                else {
                  uVar11 = 0;
                  for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  iVar10 = (uint)(byte)param_1[2][uVar11] - (uint)(byte)param_2[2][uVar11];
                }
              }
              else {
                uVar11 = 0;
                for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar11 = uVar11 + 1;
                }
                iVar10 = (uint)(byte)param_1[1][uVar11] - (uint)(byte)param_2[1][uVar11];
              }
            }
            else {
              uVar11 = 0;
              for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar11 = uVar11 + 1;
              }
              iVar10 = (uint)(byte)(*param_1)[uVar11] - (uint)(byte)(*param_2)[uVar11];
            }
          }
          else {
            uVar11 = 0;
            for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            iVar10 = (uint)(byte)param_1[3][uVar11] - (uint)(byte)param_2[3][uVar11];
          }
        }
        else {
          uVar11 = 0;
          for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          iVar10 = (uint)(byte)param_1[2][uVar11] - (uint)(byte)param_2[2][uVar11];
        }
      }
      else {
        uVar11 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        iVar10 = (uint)(byte)param_1[1][uVar11] - (uint)(byte)param_2[1][uVar11];
      }
    }
    else {
      uVar11 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      iVar10 = (uint)(byte)(*param_1)[uVar11] - (uint)(byte)(*param_2)[uVar11];
    }
    goto LAB_0074f4a8;
  }
  if (uVar9 < 0xfe1) {
    do {
      auVar2 = vpcmpeqb_avx2(*(undefined1 (*) [32])(*param_1 + uVar13),
                             *(undefined1 (*) [32])(*param_2 + uVar13));
      auVar2 = vpminub_avx2(auVar2,*(undefined1 (*) [32])(*param_1 + uVar13));
      auVar2 = vpcmpeqb_avx2(auVar2,auVar19);
      uVar11 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) goto LAB_0074f7e0;
      uVar13 = (ulong)((int)uVar13 + 0x20);
      uVar9 = uVar9 + 0x20;
    } while ((int)uVar9 < 0xfe1);
  }
  if ((int)uVar9 < 0xff1) {
    auVar17 = vpcmpeqb_avx(*(undefined1 (*) [16])(*param_1 + uVar13),
                           *(undefined1 (*) [16])(*param_2 + uVar13));
    auVar17 = vpminub_avx(auVar17,*(undefined1 (*) [16])(*param_1 + uVar13));
    auVar17 = vpcmpeqb_avx(auVar17,(undefined1  [16])0x0);
    uVar1 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar1;
    if (uVar1 == 0) {
      uVar13 = (ulong)((int)uVar13 + 0x10);
      uVar9 = uVar9 + 0x10;
      goto LAB_0074f855;
    }
LAB_0074f7e0:
    uVar9 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    iVar10 = (uint)(byte)(*param_1)[uVar9 + uVar13] - (uint)(byte)(*param_2)[uVar9 + uVar13];
  }
  else {
LAB_0074f855:
    if ((int)uVar9 < 0xff9) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulong *)(*param_2 + uVar13);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *(ulong *)(*param_1 + uVar13);
      auVar17 = vpcmpeqb_avx(auVar18,auVar17);
      auVar17 = vpminub_avx(auVar17,auVar18);
      auVar17 = vpcmpeqb_avx(auVar17,(undefined1  [16])0x0);
      uVar1 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7;
      uVar11 = (uint)uVar1;
      if (uVar1 != 0) goto LAB_0074f7e0;
      uVar13 = (ulong)((int)uVar13 + 8);
      uVar9 = uVar9 + 8;
    }
    if ((int)uVar9 < 0xffd) {
      auVar17 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_1 + uVar13)),
                             ZEXT416(*(uint *)(*param_2 + uVar13)));
      auVar17 = vpminub_avx(auVar17,ZEXT416(*(uint *)(*param_1 + uVar13)));
      auVar17 = vpcmpeqb_avx(auVar17,(undefined1  [16])0x0);
      uVar1 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3;
      uVar11 = (uint)uVar1;
      if (uVar1 != 0) goto LAB_0074f7e0;
      uVar13 = (ulong)((int)uVar13 + 4);
    }
    uVar9 = (uint)(byte)(*param_1)[uVar13];
    uVar11 = (uint)(byte)(*param_2)[uVar13];
    if ((*param_1)[uVar13] == 0) {
      iVar10 = uVar9 - uVar11;
    }
    else {
      do {
        iVar10 = uVar9 - uVar11;
        if (iVar10 != 0) goto LAB_0074f4a8;
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar9;
        if (uVar9 == 0x80) goto LAB_0074f576;
        uVar9 = (uint)(byte)(*param_1)[uVar13];
        uVar11 = (uint)(byte)(*param_2)[uVar13];
      } while ((*param_1)[uVar13] != 0);
      iVar10 = uVar9 - uVar11;
    }
  }
LAB_0074f4a8:
  bVar16 = (bool)xtest();
  if (bVar16) {
    return iVar10;
  }
  return iVar10;
}

