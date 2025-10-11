
uint FUN_0075d320(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [32];
  
  uVar15 = 0;
  uVar10 = ((uint)param_1 | (uint)param_2) & 0xfff;
  auVar20 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (uVar10 < 0xf81) {
    auVar3 = vpcmpeqd_avx2(*param_1,*param_2);
    auVar3 = vpminud_avx2(auVar3,*param_1);
    auVar3 = vpcmpeqd_avx2(auVar3,auVar20);
    uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar10 != 0) {
      uVar11 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      iVar12 = *(int *)(*param_1 + uVar11);
      iVar14 = *(int *)(*param_2 + uVar11);
      bVar19 = SBORROW4(iVar12,iVar14);
      bVar18 = iVar12 - iVar14 < 0;
      if (iVar12 == iVar14) {
        return 0;
      }
      goto LAB_0075d369;
    }
    auVar3 = vpcmpeqd_avx2(param_1[1],param_2[1]);
    auVar3 = vpminud_avx2(auVar3,param_1[1]);
    auVar3 = vpcmpeqd_avx2(auVar3,auVar20);
    uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar10 != 0) {
      uVar11 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      iVar12 = *(int *)(param_1[1] + uVar11);
      iVar14 = *(int *)(param_2[1] + uVar11);
      bVar19 = SBORROW4(iVar12,iVar14);
      bVar18 = iVar12 - iVar14 < 0;
      if (iVar12 == iVar14) {
        return 0;
      }
      goto LAB_0075d369;
    }
    auVar3 = vpcmpeqd_avx2(param_1[2],param_2[2]);
    auVar4 = vpminud_avx2(auVar3,param_1[2]);
    auVar3 = vpcmpeqd_avx2(param_2[3],param_1[3]);
    auVar4 = vpcmpeqd_avx2(auVar4,auVar20);
    uVar10 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
    if (uVar10 != 0) {
      uVar11 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      iVar12 = *(int *)(param_1[2] + uVar11);
      iVar14 = *(int *)(param_2[2] + uVar11);
      bVar19 = SBORROW4(iVar12,iVar14);
      bVar18 = iVar12 - iVar14 < 0;
      if (iVar12 == iVar14) {
        return 0;
      }
      goto LAB_0075d369;
    }
    auVar3 = vpminud_avx2(auVar3,param_1[3]);
    auVar3 = vpcmpeqd_avx2(auVar3,auVar20);
    uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar10 != 0) {
      uVar11 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      iVar12 = *(int *)(param_1[3] + uVar11);
      iVar14 = *(int *)(param_2[3] + uVar11);
      bVar19 = SBORROW4(iVar12,iVar14);
      bVar18 = iVar12 - iVar14 < 0;
      if (iVar12 == iVar14) {
        return 0;
      }
      goto LAB_0075d369;
    }
  }
  else {
    if (uVar10 < 0xfe1) {
      do {
        auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(*param_1 + uVar15),
                               *(undefined1 (*) [32])(*param_2 + uVar15));
        auVar3 = vpminud_avx2(auVar3,*(undefined1 (*) [32])(*param_1 + uVar15));
        auVar3 = vpcmpeqd_avx2(auVar3,auVar20);
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
        if (uVar11 != 0) goto LAB_0075d6e0;
        uVar15 = (ulong)((int)uVar15 + 0x20);
        uVar10 = uVar10 + 0x20;
      } while ((int)uVar10 < 0xfe1);
    }
    if ((int)uVar10 < 0xff1) {
      auVar1 = vpcmpeqd_avx(*(undefined1 (*) [16])(*param_1 + uVar15),
                            *(undefined1 (*) [16])(*param_2 + uVar15));
      auVar1 = vpminud_avx(auVar1,*(undefined1 (*) [16])(*param_1 + uVar15));
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
      uVar11 = (uint)uVar2;
      if (uVar2 != 0) {
LAB_0075d6e0:
        uVar10 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        iVar12 = *(int *)(*param_1 + uVar10 + uVar15);
        iVar14 = *(int *)(*param_2 + uVar10 + uVar15);
        bVar19 = SBORROW4(iVar12,iVar14);
        bVar18 = iVar12 - iVar14 < 0;
        if (iVar12 == iVar14) {
          return 0;
        }
        goto LAB_0075d369;
      }
      uVar15 = (ulong)((int)uVar15 + 0x10);
    }
    iVar14 = *(int *)(*param_1 + uVar15);
    iVar12 = *(int *)(*param_2 + uVar15);
    if (iVar14 == 0) {
      return -iVar12;
    }
    while( true ) {
      if (iVar14 != iVar12) {
        return -(uint)(iVar14 < iVar12) | 1;
      }
      uVar10 = (int)uVar15 + 4;
      uVar15 = (ulong)uVar10;
      if (uVar10 == 0x80) break;
      iVar14 = *(int *)(*param_1 + uVar15);
      iVar12 = *(int *)(*param_2 + uVar15);
      if (iVar14 == 0) {
        return -iVar12;
      }
    }
  }
  lVar13 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
  param_1 = (undefined1 (*) [32])((long)param_1 + lVar13);
  param_2 = (undefined1 (*) [32])(lVar13 + (long)param_2);
  uVar15 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
  while( true ) {
    iVar14 = (int)uVar15;
    uVar15 = (ulong)(iVar14 - 1);
    if (iVar14 == 0) {
      uVar10 = (uint)param_2 & 0x7f;
      lVar13 = -(ulong)uVar10;
      if (uVar10 < 0x40) {
        auVar3 = *(undefined1 (*) [32])((long)param_1 + lVar13 + 0x20);
        auVar4 = vpcmpeqd_avx2(*(undefined1 (*) [32])((long)param_1 + lVar13),
                               *(undefined1 (*) [32])((long)param_2 + lVar13));
        auVar5 = vpcmpeqd_avx2(auVar3,*(undefined1 (*) [32])((long)param_2 + lVar13 + 0x20));
        auVar4 = vpminud_avx2(auVar4,*(undefined1 (*) [32])((long)param_1 + lVar13));
        auVar5 = vpminud_avx2(auVar5,auVar3);
        auVar3 = vpcmpeqd_avx2(auVar4,auVar20);
        auVar4 = vpcmpeqd_avx2(auVar5,auVar20);
        uVar15 = CONCAT44((uint)(SUB321(auVar4 >> 7,0) & 1) |
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
                          (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) >> ((byte)uVar10 & 0x3f);
        if (uVar15 != 0) {
          lVar13 = 0;
          for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
            lVar13 = lVar13 + 1;
          }
          iVar12 = *(int *)(*param_1 + lVar13);
          iVar14 = *(int *)(*param_2 + lVar13);
          bVar19 = SBORROW4(iVar12,iVar14);
          bVar18 = iVar12 - iVar14 < 0;
          if (iVar12 == iVar14) {
            return 0;
          }
          goto LAB_0075d369;
        }
      }
      auVar3 = *(undefined1 (*) [32])((long)param_1 + lVar13 + 0x40);
      auVar4 = *(undefined1 (*) [32])((long)param_1 + lVar13 + 0x60);
      auVar5 = vpcmpeqd_avx2(auVar3,*(undefined1 (*) [32])((long)param_2 + lVar13 + 0x40));
      auVar5 = vpminud_avx2(auVar5,auVar3);
      auVar3 = vpcmpeqd_avx2(auVar4,*(undefined1 (*) [32])((long)param_2 + lVar13 + 0x60));
      auVar5 = vpcmpeqd_avx2(auVar5,auVar20);
      auVar3 = vpminud_avx2(auVar3,auVar4);
      auVar3 = vpcmpeqd_avx2(auVar3,auVar20);
      uVar16 = CONCAT44((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1
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
                        (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f,
                        (uint)(SUB321(auVar5 >> 7,0) & 1) | (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1
                        | (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
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
      uVar17 = 0;
      uVar11 = uVar10 - 0x40;
      if (uVar11 != 0 && 0x3f < uVar10) {
        uVar16 = uVar16 >> ((byte)uVar11 & 0x3f);
        uVar17 = (ulong)uVar11;
      }
      uVar15 = 0x1f;
      if (uVar16 != 0) {
        lVar9 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
          lVar9 = lVar9 + 1;
        }
        lVar13 = lVar9 + lVar13 + uVar17;
        iVar12 = *(int *)((long)param_1 + lVar13 + 0x40);
        iVar14 = *(int *)((long)param_2 + lVar13 + 0x40);
        bVar19 = SBORROW4(iVar12,iVar14);
        bVar18 = iVar12 - iVar14 < 0;
        if (iVar12 == iVar14) {
          return 0;
        }
        goto LAB_0075d369;
      }
    }
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
    auVar3 = vpcmpeqd_avx2(auVar3,auVar20);
    if ((((((((((((((((((((((((((((((((auVar3 >> 7 & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                     || (auVar3 >> 0xf & (undefined1  [32])0x1) !=
                                        (undefined1  [32])0x0) ||
                                    (auVar3 >> 0x17 & (undefined1  [32])0x1) !=
                                    (undefined1  [32])0x0) ||
                                   (auVar3 >> 0x1f & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                   ) || (auVar3 >> 0x27 & (undefined1  [32])0x1) !=
                                        (undefined1  [32])0x0) ||
                                 (auVar3 >> 0x2f & (undefined1  [32])0x1) != (undefined1  [32])0x0)
                                || (auVar3 >> 0x37 & (undefined1  [32])0x1) != (undefined1  [32])0x0
                                ) || (auVar3 >> 0x3f & (undefined1  [32])0x1) !=
                                     (undefined1  [32])0x0) ||
                              (auVar3 >> 0x47 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                             (auVar3 >> 0x4f & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                            (auVar3 >> 0x57 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                           (auVar3 >> 0x5f & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                          (auVar3 >> 0x67 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                         (auVar3 >> 0x6f & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                        (auVar3 >> 0x77 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                       SUB321(auVar3 >> 0x7f,0) != '\0') ||
                      (auVar3 >> 0x87 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                     (auVar3 >> 0x8f & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                    (auVar3 >> 0x97 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                   (auVar3 >> 0x9f & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                  (auVar3 >> 0xa7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                 (auVar3 >> 0xaf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
                (auVar3 >> 0xb7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
               SUB321(auVar3 >> 0xbf,0) != '\0') ||
              (auVar3 >> 199 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
             (auVar3 >> 0xcf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
            (auVar3 >> 0xd7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
           (auVar3 >> 0xdf & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
          (auVar3 >> 0xe7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
         (auVar3 >> 0xef & (undefined1  [32])0x1) != (undefined1  [32])0x0) ||
        (auVar3 >> 0xf7 & (undefined1  [32])0x1) != (undefined1  [32])0x0) || auVar3[0x1f] < '\0')
    break;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  auVar3 = vpcmpeqd_avx2(auVar5,auVar20);
  uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
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
  if (uVar10 == 0) {
    auVar3 = vpcmpeqd_avx2(auVar6,auVar20);
    uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
    if (uVar10 == 0) {
      auVar3 = vpcmpeqd_avx2(auVar8,auVar20);
      uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
      if (uVar10 == 0) {
        auVar20 = vpcmpeqd_avx2(auVar4,auVar20);
        uVar11 = 0;
        for (uVar10 = (uint)(SUB321(auVar20 >> 7,0) & 1) | (uint)(SUB321(auVar20 >> 0xf,0) & 1) << 1
                      | (uint)(SUB321(auVar20 >> 0x17,0) & 1) << 2 |
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
                      (uint)(byte)(auVar20[0x1f] >> 7) << 0x1f; (uVar10 & 1) == 0;
            uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        iVar12 = *(int *)(param_1[3] + uVar11);
        iVar14 = *(int *)(param_2[3] + uVar11);
        bVar19 = SBORROW4(iVar12,iVar14);
        bVar18 = iVar12 - iVar14 < 0;
        if (iVar12 == iVar14) {
          return 0;
        }
      }
      else {
        uVar11 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        iVar12 = *(int *)(param_1[2] + uVar11);
        iVar14 = *(int *)(param_2[2] + uVar11);
        bVar19 = SBORROW4(iVar12,iVar14);
        bVar18 = iVar12 - iVar14 < 0;
        if (iVar12 == iVar14) {
          return 0;
        }
      }
    }
    else {
      uVar11 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      iVar12 = *(int *)(param_1[1] + uVar11);
      iVar14 = *(int *)(param_2[1] + uVar11);
      bVar19 = SBORROW4(iVar12,iVar14);
      bVar18 = iVar12 - iVar14 < 0;
      if (iVar12 == iVar14) {
        return 0;
      }
    }
  }
  else {
    uVar11 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    iVar12 = *(int *)(*param_1 + uVar11);
    iVar14 = *(int *)(*param_2 + uVar11);
    bVar19 = SBORROW4(iVar12,iVar14);
    bVar18 = iVar12 - iVar14 < 0;
    if (iVar12 == iVar14) {
      return 0;
    }
  }
LAB_0075d369:
  return -(uint)(bVar19 != bVar18) | 1;
}

