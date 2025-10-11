
int FUN_00750a70(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  
  if (param_3 == 1) {
    iVar11 = (uint)(byte)(*param_1)[0] - (uint)(byte)(*param_2)[0];
    goto LAB_00750ad4;
  }
  if (param_3 != 0) {
    uVar13 = 0;
    uVar10 = ((uint)param_1 | (uint)param_2) & 0xfff;
    auVar20 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    if (uVar10 < 0xf81) {
      auVar2 = vpcmpeqb_avx2(*param_1,*param_2);
      auVar2 = vpminub_avx2(auVar2,*param_1);
      auVar2 = vpcmpeqb_avx2(auVar2,auVar20);
      uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
      if (uVar10 == 0) {
        auVar2 = vpcmpeqb_avx2(param_1[1],param_2[1]);
        auVar2 = vpminub_avx2(auVar2,param_1[1]);
        auVar2 = vpcmpeqb_avx2(auVar2,auVar20);
        uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                 (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
        if (uVar10 == 0) {
          auVar2 = vpcmpeqb_avx2(param_1[2],param_2[2]);
          auVar3 = vpminub_avx2(auVar2,param_1[2]);
          auVar2 = vpcmpeqb_avx2(param_2[3],param_1[3]);
          auVar3 = vpcmpeqb_avx2(auVar3,auVar20);
          uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
          if (uVar10 == 0) {
            auVar2 = vpminub_avx2(auVar2,param_1[3]);
            auVar2 = vpcmpeqb_avx2(auVar2,auVar20);
            uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
            if (uVar10 == 0) {
LAB_00750ba6:
              uVar13 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
              param_1 = (undefined1 (*) [32])((long)param_1 + uVar13);
              uVar16 = param_3 - uVar13;
              if (uVar13 <= param_3 && uVar16 != 0) {
                param_2 = (undefined1 (*) [32])(uVar13 + (long)param_2);
                uVar13 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
LAB_00750bfa:
                iVar11 = (int)uVar13;
                uVar13 = (ulong)(iVar11 - 1);
                if (iVar11 == 0) {
                  uVar10 = (uint)param_2 & 0x7f;
                  lVar9 = -(ulong)uVar10;
                  if (uVar10 < 0x40) {
                    auVar2 = *(undefined1 (*) [32])((long)param_1 + lVar9 + 0x20);
                    auVar3 = vpcmpeqb_avx2(*(undefined1 (*) [32])((long)param_1 + lVar9),
                                           *(undefined1 (*) [32])((long)param_2 + lVar9));
                    auVar4 = vpcmpeqb_avx2(auVar2,*(undefined1 (*) [32])
                                                   ((long)param_2 + lVar9 + 0x20));
                    auVar3 = vpminub_avx2(auVar3,*(undefined1 (*) [32])((long)param_1 + lVar9));
                    auVar4 = vpminub_avx2(auVar4,auVar2);
                    auVar2 = vpcmpeqb_avx2(auVar3,auVar20);
                    auVar3 = vpcmpeqb_avx2(auVar4,auVar20);
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
                                      (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) >>
                             ((byte)uVar10 & 0x3f);
                    if (uVar13 == 0) goto LAB_00750db0;
                    uVar14 = 0;
                    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                      uVar14 = uVar14 + 1;
                    }
                    if (uVar14 < uVar16) {
                      iVar11 = (uint)(byte)(*param_1)[uVar14] - (uint)(byte)(*param_2)[uVar14];
                      goto LAB_00750ad4;
                    }
                  }
                  else {
LAB_00750db0:
                    auVar2 = *(undefined1 (*) [32])((long)param_1 + lVar9 + 0x40);
                    auVar3 = *(undefined1 (*) [32])((long)param_1 + lVar9 + 0x60);
                    auVar4 = vpcmpeqb_avx2(auVar2,*(undefined1 (*) [32])
                                                   ((long)param_2 + lVar9 + 0x40));
                    auVar4 = vpminub_avx2(auVar4,auVar2);
                    auVar2 = vpcmpeqb_avx2(auVar3,*(undefined1 (*) [32])
                                                   ((long)param_2 + lVar9 + 0x60));
                    auVar4 = vpcmpeqb_avx2(auVar4,auVar20);
                    auVar2 = vpminub_avx2(auVar2,auVar3);
                    auVar2 = vpcmpeqb_avx2(auVar2,auVar20);
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
                    uVar12 = uVar10 - 0x40;
                    if (uVar12 != 0 && 0x3f < uVar10) {
                      uVar14 = uVar14 >> ((byte)uVar12 & 0x3f);
                      uVar15 = (ulong)uVar12;
                    }
                    uVar13 = 0x1f;
                    if (uVar14 == 0) {
                      if (lVar9 + 0x80U < uVar16) goto LAB_00750c06;
                    }
                    else {
                      lVar8 = 0;
                      for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                        lVar8 = lVar8 + 1;
                      }
                      uVar13 = lVar8 + lVar9 + uVar15 + 0x40;
                      if (uVar13 < uVar16) {
                        iVar11 = (uint)*(byte *)((long)param_1 + uVar13) -
                                 (uint)*(byte *)((long)param_2 + uVar13);
                        goto LAB_00750ad4;
                      }
                    }
                  }
                }
                else {
LAB_00750c06:
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
                  auVar2 = vpcmpeqb_avx2(auVar2,auVar20);
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
                                       (auVar2 >> 0x6f & (undefined1  [32])0x1) !=
                                       (undefined1  [32])0x0) ||
                                      (auVar2 >> 0x77 & (undefined1  [32])0x1) !=
                                      (undefined1  [32])0x0) || SUB321(auVar2 >> 0x7f,0) != '\0') ||
                                    (auVar2 >> 0x87 & (undefined1  [32])0x1) !=
                                    (undefined1  [32])0x0) ||
                                   (auVar2 >> 0x8f & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                   ) || (auVar2 >> 0x97 & (undefined1  [32])0x1) !=
                                        (undefined1  [32])0x0) ||
                                 (auVar2 >> 0x9f & (undefined1  [32])0x1) != (undefined1  [32])0x0)
                                || (auVar2 >> 0xa7 & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                ) || (auVar2 >> 0xaf & (undefined1  [32])0x1) !=
                                     (undefined1  [32])0x0) ||
                              (auVar2 >> 0xb7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                             SUB321(auVar2 >> 0xbf,0) != '\0') ||
                            (auVar2 >> 199 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                           (auVar2 >> 0xcf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                          (auVar2 >> 0xd7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                         (auVar2 >> 0xdf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                        (auVar2 >> 0xe7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                       (auVar2 >> 0xef & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                      (auVar2 >> 0xf7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                      auVar2[0x1f] < '\0') {
                    auVar2 = vpcmpeqb_avx2(auVar4,auVar20);
                    uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                             (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
                    if (uVar10 == 0) {
                      if (0x20 < uVar16) {
                        auVar2 = vpcmpeqb_avx2(auVar5,auVar20);
                        uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                                 (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
                        if (uVar10 == 0) {
                          if (0x40 < uVar16) {
                            auVar2 = vpcmpeqb_avx2(auVar7,auVar20);
                            uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                                     (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
                            if (uVar10 == 0) {
                              if (0x60 < uVar16) {
                                auVar20 = vpcmpeqb_avx2(auVar3,auVar20);
                                uVar12 = 0;
                                for (uVar10 = (uint)(SUB321(auVar20 >> 7,0) & 1) |
                                              (uint)(SUB321(auVar20 >> 0xf,0) & 1) << 1 |
                                              (uint)(SUB321(auVar20 >> 0x17,0) & 1) << 2 |
                                              (uint)(SUB321(auVar20 >> 0x1f,0) & 1) << 3 |
                                              (uint)(SUB321(auVar20 >> 0x27,0) & 1) << 4 |
                                              (uint)(SUB321(auVar20 >> 0x2f,0) & 1) << 5 |
                                              (uint)(SUB321(auVar20 >> 0x37,0) & 1) << 6 |
                                              (uint)(SUB321(auVar20 >> 0x3f,0) & 1) << 7 |
                                              (uint)(SUB321(auVar20 >> 0x47,0) & 1) << 8 |
                                              (uint)(SUB321(auVar20 >> 0x4f,0) & 1) << 9 |
                                              (uint)(SUB321(auVar20 >> 0x57,0) & 1) << 10 |
                                              (uint)(SUB321(auVar20 >> 0x5f,0) & 1) << 0xb |
                                              (uint)(SUB321(auVar20 >> 0x67,0) & 1) << 0xc |
                                              (uint)(SUB321(auVar20 >> 0x6f,0) & 1) << 0xd |
                                              (uint)(SUB321(auVar20 >> 0x77,0) & 1) << 0xe |
                                              (uint)SUB321(auVar20 >> 0x7f,0) << 0xf |
                                              (uint)(SUB321(auVar20 >> 0x87,0) & 1) << 0x10 |
                                              (uint)(SUB321(auVar20 >> 0x8f,0) & 1) << 0x11 |
                                              (uint)(SUB321(auVar20 >> 0x97,0) & 1) << 0x12 |
                                              (uint)(SUB321(auVar20 >> 0x9f,0) & 1) << 0x13 |
                                              (uint)(SUB321(auVar20 >> 0xa7,0) & 1) << 0x14 |
                                              (uint)(SUB321(auVar20 >> 0xaf,0) & 1) << 0x15 |
                                              (uint)(SUB321(auVar20 >> 0xb7,0) & 1) << 0x16 |
                                              (uint)SUB321(auVar20 >> 0xbf,0) << 0x17 |
                                              (uint)(SUB321(auVar20 >> 199,0) & 1) << 0x18 |
                                              (uint)(SUB321(auVar20 >> 0xcf,0) & 1) << 0x19 |
                                              (uint)(SUB321(auVar20 >> 0xd7,0) & 1) << 0x1a |
                                              (uint)(SUB321(auVar20 >> 0xdf,0) & 1) << 0x1b |
                                              (uint)(SUB321(auVar20 >> 0xe7,0) & 1) << 0x1c |
                                              (uint)(SUB321(auVar20 >> 0xef,0) & 1) << 0x1d |
                                              (uint)(SUB321(auVar20 >> 0xf7,0) & 1) << 0x1e |
                                              (uint)(byte)(auVar20[0x1f] >> 7) << 0x1f;
                                    (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                                  uVar12 = uVar12 + 1;
                                }
                                uVar13 = (ulong)uVar12;
                                if (uVar13 + 0x60 < uVar16) {
                                  iVar11 = (uint)(byte)param_1[3][uVar13] -
                                           (uint)(byte)param_2[3][uVar13];
                                  goto LAB_00750ad4;
                                }
                              }
                            }
                            else {
                              uVar12 = 0;
                              for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                                uVar12 = uVar12 + 1;
                              }
                              uVar13 = (ulong)uVar12;
                              if (uVar13 + 0x40 < uVar16) {
                                iVar11 = (uint)(byte)param_1[2][uVar13] -
                                         (uint)(byte)param_2[2][uVar13];
                                goto LAB_00750ad4;
                              }
                            }
                          }
                        }
                        else {
                          uVar12 = 0;
                          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                            uVar12 = uVar12 + 1;
                          }
                          uVar13 = (ulong)uVar12;
                          if (uVar13 + 0x20 < uVar16) {
                            iVar11 = (uint)(byte)param_1[1][uVar13] - (uint)(byte)param_2[1][uVar13]
                            ;
                            goto LAB_00750ad4;
                          }
                        }
                      }
                    }
                    else {
                      uVar12 = 0;
                      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                        uVar12 = uVar12 + 1;
                      }
                      uVar13 = (ulong)uVar12;
                      if (uVar13 < uVar16) {
                        iVar11 = (uint)(byte)(*param_1)[uVar13] - (uint)(byte)(*param_2)[uVar13];
                        goto LAB_00750ad4;
                      }
                    }
                    goto LAB_00750e70;
                  }
                  bVar17 = 0x7f < uVar16;
                  uVar16 = uVar16 - 0x80;
                  if (bVar17 && uVar16 != 0) goto code_r0x00750bed;
                }
              }
            }
            else {
              uVar12 = 0;
              for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              uVar13 = (ulong)uVar12;
              if (uVar13 + 0x60 < param_3) {
                iVar11 = (uint)(byte)param_1[3][uVar13] - (uint)(byte)param_2[3][uVar13];
                goto LAB_00750ad4;
              }
            }
          }
          else {
            uVar12 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar13 = (ulong)uVar12;
            if (uVar13 + 0x40 < param_3) {
              iVar11 = (uint)(byte)param_1[2][uVar13] - (uint)(byte)param_2[2][uVar13];
              goto LAB_00750ad4;
            }
          }
        }
        else {
          uVar12 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          uVar13 = (ulong)uVar12;
          if (uVar13 + 0x20 < param_3) {
            iVar11 = (uint)(byte)param_1[1][uVar13] - (uint)(byte)param_2[1][uVar13];
            goto LAB_00750ad4;
          }
        }
      }
      else {
        uVar12 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar13 = (ulong)uVar12;
        if (uVar13 < param_3) {
          iVar11 = (uint)(byte)(*param_1)[uVar13] - (uint)(byte)(*param_2)[uVar13];
          goto LAB_00750ad4;
        }
      }
    }
    else {
      if (uVar10 < 0xfe1) {
        do {
          auVar2 = vpcmpeqb_avx2(*(undefined1 (*) [32])(*param_1 + uVar13),
                                 *(undefined1 (*) [32])(*param_2 + uVar13));
          auVar2 = vpminub_avx2(auVar2,*(undefined1 (*) [32])(*param_1 + uVar13));
          auVar2 = vpcmpeqb_avx2(auVar2,auVar20);
          uVar12 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
          if (uVar12 != 0) goto LAB_00750e90;
          uVar13 = (ulong)((int)uVar13 + 0x20);
          uVar10 = uVar10 + 0x20;
          if (param_3 <= uVar13) goto LAB_00750e70;
        } while ((int)uVar10 < 0xfe1);
      }
      if ((int)uVar10 < 0xff1) {
        auVar18 = vpcmpeqb_avx(*(undefined1 (*) [16])(*param_1 + uVar13),
                               *(undefined1 (*) [16])(*param_2 + uVar13));
        auVar18 = vpminub_avx(auVar18,*(undefined1 (*) [16])(*param_1 + uVar13));
        auVar18 = vpcmpeqb_avx(auVar18,(undefined1  [16])0x0);
        uVar1 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
        uVar12 = (uint)uVar1;
        if (uVar1 == 0) {
          uVar13 = (ulong)((int)uVar13 + 0x10);
          uVar10 = uVar10 + 0x10;
          if (param_3 <= uVar13) goto LAB_00750e70;
          goto LAB_00750f27;
        }
LAB_00750e90:
        uVar10 = 0;
        for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar16 = (ulong)uVar10;
        if (uVar16 < param_3 - uVar13) {
          iVar11 = (uint)(byte)(*param_1)[uVar16 + uVar13] - (uint)(byte)(*param_2)[uVar16 + uVar13]
          ;
          goto LAB_00750ad4;
        }
      }
      else {
LAB_00750f27:
        if ((int)uVar10 < 0xff9) {
          auVar18._8_8_ = 0;
          auVar18._0_8_ = *(ulong *)(*param_2 + uVar13);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = *(ulong *)(*param_1 + uVar13);
          auVar18 = vpcmpeqb_avx(auVar19,auVar18);
          auVar18 = vpminub_avx(auVar18,auVar19);
          auVar18 = vpcmpeqb_avx(auVar18,(undefined1  [16])0x0);
          uVar1 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7;
          uVar12 = (uint)uVar1;
          if (uVar1 != 0) goto LAB_00750e90;
          uVar13 = (ulong)((int)uVar13 + 8);
          uVar10 = uVar10 + 8;
          if (param_3 <= uVar13) goto LAB_00750e70;
        }
        if ((int)uVar10 < 0xffd) {
          auVar18 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_1 + uVar13)),
                                 ZEXT416(*(uint *)(*param_2 + uVar13)));
          auVar18 = vpminub_avx(auVar18,ZEXT416(*(uint *)(*param_1 + uVar13)));
          auVar18 = vpcmpeqb_avx(auVar18,(undefined1  [16])0x0);
          uVar1 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3;
          uVar12 = (uint)uVar1;
          if (uVar1 != 0) goto LAB_00750e90;
          uVar13 = (ulong)((int)uVar13 + 4);
          if (param_3 <= uVar13) goto LAB_00750e70;
        }
        if (uVar13 < param_3) {
          uVar10 = (uint)(byte)(*param_1)[uVar13];
          uVar12 = (uint)(byte)(*param_2)[uVar13];
          if ((*param_1)[uVar13] == 0) {
            iVar11 = uVar10 - uVar12;
          }
          else {
            do {
              iVar11 = uVar10 - uVar12;
              if (iVar11 != 0) goto LAB_00750ad4;
              uVar10 = (int)uVar13 + 1;
              uVar13 = (ulong)uVar10;
              if (uVar10 == 0x80) goto LAB_00750ba6;
              if (param_3 <= uVar13) goto LAB_00750e70;
              uVar10 = (uint)(byte)(*param_1)[uVar13];
              uVar12 = (uint)(byte)(*param_2)[uVar13];
            } while ((*param_1)[uVar13] != 0);
            iVar11 = uVar10 - uVar12;
          }
          goto LAB_00750ad4;
        }
      }
    }
  }
LAB_00750e70:
  iVar11 = 0;
LAB_00750ad4:
  bVar17 = (bool)xtest();
  if (bVar17) {
    return iVar11;
  }
  return iVar11;
code_r0x00750bed:
  param_1 = param_1 + 4;
  param_2 = param_2 + 4;
  goto LAB_00750bfa;
}

