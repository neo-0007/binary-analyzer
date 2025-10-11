
uint FUN_0075e390(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [32];
  
  uVar16 = 0;
  uVar11 = ((uint)param_1 | (uint)param_2) & 0xfff;
  auVar21 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (uVar11 < 0xf81) {
    auVar3 = vpcmpeqd_avx2(*param_1,*param_2);
    auVar3 = vpminud_avx2(auVar3,*param_1);
    auVar3 = vpcmpeqd_avx2(auVar3,auVar21);
    uVar11 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
    if (uVar11 == 0) {
      auVar3 = vpcmpeqd_avx2(param_1[1],param_2[1]);
      auVar3 = vpminud_avx2(auVar3,param_1[1]);
      auVar3 = vpcmpeqd_avx2(auVar3,auVar21);
      uVar11 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
               (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
      if (uVar11 == 0) {
        auVar3 = vpcmpeqd_avx2(param_1[2],param_2[2]);
        auVar4 = vpminud_avx2(auVar3,param_1[2]);
        auVar3 = vpcmpeqd_avx2(param_2[3],param_1[3]);
        auVar4 = vpcmpeqd_avx2(auVar4,auVar21);
        uVar11 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
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
                 (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
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
        if (uVar11 == 0) {
          auVar3 = vpminud_avx2(auVar3,param_1[3]);
          auVar3 = vpcmpeqd_avx2(auVar3,auVar21);
          uVar11 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                   (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
          if (uVar11 == 0) {
LAB_0075e4a9:
            lVar14 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
            param_1 = (undefined1 (*) [32])((long)param_1 + lVar14);
            param_2 = (undefined1 (*) [32])(lVar14 + (long)param_2);
            uVar16 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
LAB_0075e4ed:
            iVar15 = (int)uVar16;
            uVar16 = (ulong)(iVar15 - 1);
            if (iVar15 == 0) {
              uVar11 = (uint)param_2 & 0x7f;
              lVar14 = -(ulong)uVar11;
              if (uVar11 < 0x40) {
                auVar3 = *(undefined1 (*) [32])((long)param_1 + lVar14 + 0x20);
                auVar4 = vpcmpeqd_avx2(*(undefined1 (*) [32])((long)param_1 + lVar14),
                                       *(undefined1 (*) [32])((long)param_2 + lVar14));
                auVar5 = vpcmpeqd_avx2(auVar3,*(undefined1 (*) [32])((long)param_2 + lVar14 + 0x20))
                ;
                auVar4 = vpminud_avx2(auVar4,*(undefined1 (*) [32])((long)param_1 + lVar14));
                auVar5 = vpminud_avx2(auVar5,auVar3);
                auVar3 = vpcmpeqd_avx2(auVar4,auVar21);
                auVar4 = vpcmpeqd_avx2(auVar5,auVar21);
                uVar16 = CONCAT44((uint)(SUB321(auVar4 >> 7,0) & 1) |
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
                                  (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f,
                                  (uint)(SUB321(auVar3 >> 7,0) & 1) |
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
                                  (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) >> ((byte)uVar11 & 0x3f);
                if (uVar16 == 0) goto LAB_0075e680;
                lVar14 = 0;
                for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                  lVar14 = lVar14 + 1;
                }
                uVar12 = 0;
                iVar13 = *(int *)(*param_1 + lVar14);
                iVar15 = *(int *)(*param_2 + lVar14);
                bVar20 = SBORROW4(iVar13,iVar15);
                bVar19 = iVar13 - iVar15 < 0;
                if (iVar13 == iVar15) goto LAB_0075e3e1;
              }
              else {
LAB_0075e680:
                auVar3 = *(undefined1 (*) [32])((long)param_1 + lVar14 + 0x40);
                auVar4 = *(undefined1 (*) [32])((long)param_1 + lVar14 + 0x60);
                auVar5 = vpcmpeqd_avx2(auVar3,*(undefined1 (*) [32])((long)param_2 + lVar14 + 0x40))
                ;
                auVar5 = vpminud_avx2(auVar5,auVar3);
                auVar3 = vpcmpeqd_avx2(auVar4,*(undefined1 (*) [32])((long)param_2 + lVar14 + 0x60))
                ;
                auVar5 = vpcmpeqd_avx2(auVar5,auVar21);
                auVar3 = vpminud_avx2(auVar3,auVar4);
                auVar3 = vpcmpeqd_avx2(auVar3,auVar21);
                uVar17 = CONCAT44((uint)(SUB321(auVar3 >> 7,0) & 1) |
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
                                  (uint)(SUB321(auVar5 >> 7,0) & 1) |
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
                                  (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f);
                uVar18 = 0;
                uVar12 = uVar11 - 0x40;
                if (uVar12 != 0 && 0x3f < uVar11) {
                  uVar17 = uVar17 >> ((byte)uVar12 & 0x3f);
                  uVar18 = (ulong)uVar12;
                }
                uVar16 = 0x1f;
                if (uVar17 == 0) goto LAB_0075e4f9;
                lVar10 = 0;
                for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                  lVar10 = lVar10 + 1;
                }
                lVar14 = lVar10 + lVar14 + uVar18;
                uVar12 = 0;
                iVar13 = *(int *)((long)param_1 + lVar14 + 0x40);
                iVar15 = *(int *)((long)param_2 + lVar14 + 0x40);
                bVar20 = SBORROW4(iVar13,iVar15);
                bVar19 = iVar13 - iVar15 < 0;
                if (iVar13 == iVar15) goto LAB_0075e3e1;
              }
              goto LAB_0075e3d9;
            }
LAB_0075e4f9:
            auVar3 = vpcmpeqd_avx2(*param_1,*param_2);
            auVar4 = vpcmpeqd_avx2(param_1[1],param_2[1]);
            auVar5 = vpminud_avx2(auVar3,*param_1);
            auVar6 = vpminud_avx2(auVar4,param_1[1]);
            auVar7 = vpminud_avx2(auVar5,auVar6);
            auVar3 = vpcmpeqd_avx2(param_1[2],param_2[2]);
            auVar4 = vpcmpeqd_avx2(param_1[3],param_2[3]);
            auVar8 = vpminud_avx2(auVar3,param_1[2]);
            auVar4 = vpminud_avx2(auVar4,param_1[3]);
            auVar3 = vpminud_avx2(auVar7,auVar8);
            auVar3 = vpminud_avx2(auVar3,auVar4);
            auVar3 = vpcmpeqd_avx2(auVar3,auVar21);
            if ((((((((((((((((((((((((((((((((auVar3 >> 7 & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0 &&
                                             (auVar3 >> 0xf & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            (auVar3 >> 0x17 & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar3 >> 0x1f & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar3 >> 0x27 & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar3 >> 0x2f & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar3 >> 0x37 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar3 >> 0x3f & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar3 >> 0x47 & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar3 >> 0x4f & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar3 >> 0x57 & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar3 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                   ) && (auVar3 >> 0x67 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                 (auVar3 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar3 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && SUB321(auVar3 >> 0x7f,0) == '\0') &&
                              (auVar3 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             (auVar3 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar3 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar3 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar3 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar3 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar3 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       SUB321(auVar3 >> 0xbf,0) == '\0') &&
                      (auVar3 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar3 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar3 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar3 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar3 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar3 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar3 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                -1 < auVar3[0x1f]) goto LAB_0075e4e0;
            auVar3 = vpcmpeqd_avx2(auVar5,auVar21);
            uVar11 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                     (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
            if (uVar11 == 0) {
              auVar3 = vpcmpeqd_avx2(auVar6,auVar21);
              uVar11 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
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
                       (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
              if (uVar11 == 0) {
                auVar3 = vpcmpeqd_avx2(auVar8,auVar21);
                uVar11 = (uint)(SUB321(auVar3 >> 7,0) & 1) |
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
                         (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
                if (uVar11 == 0) {
                  auVar21 = vpcmpeqd_avx2(auVar4,auVar21);
                  uVar9 = 0;
                  for (uVar11 = (uint)(SUB321(auVar21 >> 7,0) & 1) |
                                (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auVar21 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f; (uVar11 & 1) == 0;
                      uVar11 = uVar11 >> 1 | 0x80000000) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar12 = 0;
                  iVar13 = *(int *)(param_1[3] + uVar9);
                  iVar15 = *(int *)(param_2[3] + uVar9);
                  bVar20 = SBORROW4(iVar13,iVar15);
                  bVar19 = iVar13 - iVar15 < 0;
                  if (iVar13 == iVar15) goto LAB_0075e3e1;
                }
                else {
                  uVar9 = 0;
                  for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar12 = 0;
                  iVar13 = *(int *)(param_1[2] + uVar9);
                  iVar15 = *(int *)(param_2[2] + uVar9);
                  bVar20 = SBORROW4(iVar13,iVar15);
                  bVar19 = iVar13 - iVar15 < 0;
                  if (iVar13 == iVar15) goto LAB_0075e3e1;
                }
              }
              else {
                uVar9 = 0;
                for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                  uVar9 = uVar9 + 1;
                }
                uVar12 = 0;
                iVar13 = *(int *)(param_1[1] + uVar9);
                iVar15 = *(int *)(param_2[1] + uVar9);
                bVar20 = SBORROW4(iVar13,iVar15);
                bVar19 = iVar13 - iVar15 < 0;
                if (iVar13 == iVar15) goto LAB_0075e3e1;
              }
            }
            else {
              uVar9 = 0;
              for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              uVar12 = 0;
              iVar13 = *(int *)(*param_1 + uVar9);
              iVar15 = *(int *)(*param_2 + uVar9);
              bVar20 = SBORROW4(iVar13,iVar15);
              bVar19 = iVar13 - iVar15 < 0;
              if (iVar13 == iVar15) goto LAB_0075e3e1;
            }
          }
          else {
            uVar9 = 0;
            for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            uVar12 = 0;
            iVar13 = *(int *)(param_1[3] + uVar9);
            iVar15 = *(int *)(param_2[3] + uVar9);
            bVar20 = SBORROW4(iVar13,iVar15);
            bVar19 = iVar13 - iVar15 < 0;
            if (iVar13 == iVar15) goto LAB_0075e3e1;
          }
        }
        else {
          uVar9 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          uVar12 = 0;
          iVar13 = *(int *)(param_1[2] + uVar9);
          iVar15 = *(int *)(param_2[2] + uVar9);
          bVar20 = SBORROW4(iVar13,iVar15);
          bVar19 = iVar13 - iVar15 < 0;
          if (iVar13 == iVar15) goto LAB_0075e3e1;
        }
      }
      else {
        uVar9 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar12 = 0;
        iVar13 = *(int *)(param_1[1] + uVar9);
        iVar15 = *(int *)(param_2[1] + uVar9);
        bVar20 = SBORROW4(iVar13,iVar15);
        bVar19 = iVar13 - iVar15 < 0;
        if (iVar13 == iVar15) goto LAB_0075e3e1;
      }
    }
    else {
      uVar9 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar12 = 0;
      iVar13 = *(int *)(*param_1 + uVar9);
      iVar15 = *(int *)(*param_2 + uVar9);
      bVar20 = SBORROW4(iVar13,iVar15);
      bVar19 = iVar13 - iVar15 < 0;
      if (iVar13 == iVar15) goto LAB_0075e3e1;
    }
LAB_0075e3d9:
    uVar12 = -(uint)(bVar20 != bVar19) | 1;
  }
  else {
    if (uVar11 < 0xfe1) {
      do {
        auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(*param_1 + uVar16),
                               *(undefined1 (*) [32])(*param_2 + uVar16));
        auVar3 = vpminud_avx2(auVar3,*(undefined1 (*) [32])(*param_1 + uVar16));
        auVar3 = vpcmpeqd_avx2(auVar3,auVar21);
        uVar12 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                 (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar12 != 0) goto LAB_0075e750;
        uVar16 = (ulong)((int)uVar16 + 0x20);
        uVar11 = uVar11 + 0x20;
      } while ((int)uVar11 < 0xfe1);
    }
    if ((int)uVar11 < 0xff1) {
      auVar1 = vpcmpeqd_avx(*(undefined1 (*) [16])(*param_1 + uVar16),
                            *(undefined1 (*) [16])(*param_2 + uVar16));
      auVar1 = vpminud_avx(auVar1,*(undefined1 (*) [16])(*param_1 + uVar16));
      auVar1 = vpcmpeqd_avx(auVar1,(undefined1  [16])0x0);
      uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar2;
      if (uVar2 != 0) {
LAB_0075e750:
        uVar11 = 0;
        for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = 0;
        iVar13 = *(int *)(*param_1 + uVar11 + uVar16);
        iVar15 = *(int *)(*param_2 + uVar11 + uVar16);
        bVar20 = SBORROW4(iVar13,iVar15);
        bVar19 = iVar13 - iVar15 < 0;
        if (iVar13 == iVar15) goto LAB_0075e3e1;
        goto LAB_0075e3d9;
      }
      uVar16 = (ulong)((int)uVar16 + 0x10);
    }
    iVar15 = *(int *)(*param_1 + uVar16);
    iVar13 = *(int *)(*param_2 + uVar16);
    if (iVar15 == 0) {
      uVar12 = -iVar13;
    }
    else {
      do {
        if (iVar15 != iVar13) {
          uVar12 = -(uint)(iVar15 < iVar13) | 1;
          goto LAB_0075e3e1;
        }
        uVar11 = (int)uVar16 + 4;
        uVar16 = (ulong)uVar11;
        if (uVar11 == 0x80) goto LAB_0075e4a9;
        iVar15 = *(int *)(*param_1 + uVar16);
        iVar13 = *(int *)(*param_2 + uVar16);
      } while (iVar15 != 0);
      uVar12 = -iVar13;
    }
  }
LAB_0075e3e1:
  bVar19 = (bool)xtest();
  if (bVar19) {
    return uVar12;
  }
  return uVar12;
LAB_0075e4e0:
  param_1 = param_1 + 4;
  param_2 = param_2 + 4;
  goto LAB_0075e4ed;
}

