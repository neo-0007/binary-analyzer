
uint __wmemcmp_avx2_movbe_rtm(undefined1 (*param_1) [32],undefined1 (*param_2) [32],long param_3)

{
  int iVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  int iVar4;
  sbyte sVar5;
  undefined1 (*pauVar6) [32];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [32];
  long lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  uVar10 = param_3 * 4;
  uVar8 = (uint)uVar10;
  if (uVar10 < 0x20) {
    if (uVar8 < 5) {
      if (3 < uVar8) {
        iVar1 = *(int *)*param_1;
        iVar4 = *(int *)*param_2;
        if (iVar1 != iVar4) {
          return ((iVar4 < iVar1) - 1) + (uint)(iVar4 < iVar1);
        }
      }
      return 0;
    }
    if ((((uint)param_1 | (uint)param_2) & 0xfff) < 0xfe1) {
      auVar2 = vpcmpeqd_avx2(*param_2,*param_1);
      uVar7 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
              (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
      sVar5 = ((byte)uVar10 < 0x21) * (' ' - (byte)uVar10);
      if ((uVar7 << sVar5) >> sVar5 == 0) {
        uVar8 = 0;
        goto LAB_00755733;
      }
    }
    else if (uVar8 < 0x10) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulong *)*param_1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulong *)*param_2;
      auVar14 = vpcmpeqd_avx(auVar17,auVar14);
      uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar7 == 0) {
        param_1 = (undefined1 (*) [32])(param_1[-1] + uVar10 + 0x18);
        param_2 = (undefined1 (*) [32])(param_2[-1] + uVar10 + 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulong *)*param_1;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulong *)*param_2;
        auVar14 = vpcmpeqd_avx(auVar18,auVar15);
        uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar7 == 0) {
          return uVar7;
        }
      }
    }
    else {
      auVar14 = vpcmpeqd_avx(*(undefined1 (*) [16])*param_2,*(undefined1 (*) [16])*param_1);
      uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar7 == 0) {
        pauVar11 = param_2 + -1;
        param_1 = (undefined1 (*) [32])(param_1[-1] + uVar10 + 0x10);
        param_2 = (undefined1 (*) [32])(param_2[-1] + uVar10 + 0x10);
        auVar14 = vpcmpeqd_avx(*(undefined1 (*) [16])(*pauVar11 + uVar10 + 0x10),
                               *(undefined1 (*) [16])*param_1);
        uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar7 == 0) {
          return uVar7;
        }
      }
    }
  }
  else {
    auVar2 = vpcmpeqd_avx2(*param_2,*param_1);
    uVar7 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
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
             (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f)
            + 1;
    if (uVar7 == 0) {
      if (0x40 < uVar10) {
        auVar2 = vpcmpeqd_avx2(param_2[1],param_1[1]);
        uVar7 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
        if (uVar7 != 0) {
LAB_00755740:
          uVar8 = 0;
          for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          bVar13 = *(int *)(param_2[1] + uVar8) < *(int *)(param_1[1] + uVar8);
          uVar8 = (bVar13 - 1) + (uint)bVar13;
          goto LAB_00755733;
        }
        if (0x80 < uVar10) {
          auVar2 = vpcmpeqd_avx2(param_2[2],param_1[2]);
          uVar8 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                  (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
          if (uVar8 == 0) {
            auVar2 = vpcmpeqd_avx2(param_2[3],param_1[3]);
            uVar9 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                    (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
            if (uVar9 == 0) {
              uVar8 = 0;
              if (0x100 < uVar10) {
                pauVar11 = (undefined1 (*) [32])(param_1[-4] + uVar10);
                lVar12 = (long)param_2 - (long)param_1;
                param_1 = (undefined1 (*) [32])(((ulong)param_1 & 0xffffffffffffffe0) + 0x80);
                do {
                  auVar16 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + (long)param_1),*param_1);
                  auVar19 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + 0x20 + (long)param_1),
                                          param_1[1]);
                  auVar20 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + 0x40 + (long)param_1),
                                          param_1[2]);
                  auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + 0x60 + (long)param_1),
                                         param_1[3]);
                  auVar2 = vpand_avx2(auVar19,auVar16);
                  auVar3 = vpand_avx2(auVar3,auVar20);
                  auVar2 = vpand_avx2(auVar3,auVar2);
                  uVar9 = ((uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                          (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
                  if (uVar9 != 0) goto LAB_00755780;
                  param_1 = param_1 + 4;
                } while (param_1 < pauVar11);
                uVar7 = (int)param_1 - (int)pauVar11;
                if (uVar7 < 0x60) {
                  auVar2 = *(undefined1 (*) [32])(lVar12 + 0x40 + (long)pauVar11);
                  if (uVar7 < 0x40) {
                    auVar16 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + (long)pauVar11),
                                            *pauVar11);
                    auVar19 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + 0x20 + (long)pauVar11),
                                            pauVar11[1]);
                    auVar20 = vpcmpeqd_avx2(auVar2,pauVar11[2]);
                    auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + 0x60 + (long)pauVar11),
                                           pauVar11[3]);
                    auVar2 = vpand_avx2(auVar19,auVar16);
                    auVar3 = vpand_avx2(auVar3,auVar20);
                    auVar2 = vpand_avx2(auVar3,auVar2);
                    uVar9 = ((uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                            (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
                    param_1 = pauVar11;
                    if (uVar9 == 0) goto LAB_00755733;
LAB_00755780:
                    param_2 = (undefined1 (*) [32])(lVar12 + (long)param_1);
                    goto LAB_00755783;
                  }
                  auVar2 = vpcmpeqd_avx2(auVar2,pauVar11[2]);
                  uVar8 = ((uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                          (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
                  if (uVar8 == 0) goto LAB_00755890;
                  pauVar11 = pauVar11 + -1;
                }
                else {
LAB_00755890:
                  auVar2 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar12 + 0x60 + (long)pauVar11),
                                         pauVar11[3]);
                  uVar8 = ((uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                          (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
                  if (uVar8 == 0) {
                    uVar8 = 0;
                    goto LAB_00755733;
                  }
                }
                uVar7 = 0;
                for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                bVar13 = *(int *)((long)pauVar11 + lVar12 + 0x60 + (ulong)uVar7) <
                         *(int *)(pauVar11[3] + uVar7);
                uVar8 = (bVar13 - 1) + (uint)bVar13;
                goto LAB_00755733;
              }
              pauVar11 = param_2 + -4;
              pauVar6 = param_2 + -3;
              param_1 = (undefined1 (*) [32])(param_1[-4] + uVar10);
              param_2 = (undefined1 (*) [32])(param_2[-4] + uVar10);
              auVar16 = vpcmpeqd_avx2(*(undefined1 (*) [32])(*pauVar11 + uVar10),*param_1);
              auVar19 = vpcmpeqd_avx2(*(undefined1 (*) [32])(*pauVar6 + uVar10),param_1[1]);
              auVar20 = vpcmpeqd_avx2(param_2[2],param_1[2]);
              auVar3 = vpcmpeqd_avx2(param_2[3],param_1[3]);
              auVar2 = vpand_avx2(auVar19,auVar16);
              auVar3 = vpand_avx2(auVar3,auVar20);
              auVar2 = vpand_avx2(auVar3,auVar2);
              uVar9 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1
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
                      (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
              if (uVar9 == 0) goto LAB_00755733;
LAB_00755783:
              uVar7 = ((uint)(SUB321(auVar16 >> 7,0) & 1) |
                       (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
                      (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f) + 1;
              if (uVar7 != 0) goto LAB_00755720;
              uVar7 = ((uint)(SUB321(auVar19 >> 7,0) & 1) |
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
                      (uint)(byte)(auVar19[0x1f] >> 7) << 0x1f) + 1;
              if (uVar7 != 0) goto LAB_00755740;
              uVar8 = ((uint)(SUB321(auVar20 >> 7,0) & 1) |
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
                      (uint)(byte)(auVar20[0x1f] >> 7) << 0x1f) + 1;
              if (uVar8 != 0) goto LAB_00755760;
            }
            uVar8 = 0;
            for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            bVar13 = *(int *)(param_2[3] + uVar8) < *(int *)(param_1[3] + uVar8);
            uVar8 = (bVar13 - 1) + (uint)bVar13;
          }
          else {
LAB_00755760:
            uVar7 = 0;
            for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            bVar13 = *(int *)(param_2[2] + uVar7) < *(int *)(param_1[2] + uVar7);
            uVar8 = (bVar13 - 1) + (uint)bVar13;
          }
          goto LAB_00755733;
        }
        auVar2 = vpcmpeqd_avx2(*(undefined1 (*) [32])(param_2[-2] + uVar10),
                               *(undefined1 (*) [32])(param_1[-2] + uVar10));
        uVar7 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
                (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
        if (uVar7 != 0) {
          iVar4 = 0;
          for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          bVar13 = *(int *)(param_2[-2] + (iVar4 + uVar8)) < *(int *)(param_1[-2] + (iVar4 + uVar8))
          ;
          uVar8 = (bVar13 - 1) + (uint)bVar13;
          goto LAB_00755733;
        }
      }
      auVar2 = vpcmpeqd_avx2(*(undefined1 (*) [32])(param_2[-1] + uVar10),
                             *(undefined1 (*) [32])(param_1[-1] + uVar10));
      uVar7 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
              (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) + 1;
      if (uVar7 == 0) {
        uVar8 = 0;
      }
      else {
        iVar4 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        bVar13 = *(int *)(param_2[-1] + (iVar4 + uVar8)) < *(int *)(param_1[-1] + (iVar4 + uVar8));
        uVar8 = (bVar13 - 1) + (uint)bVar13;
      }
      goto LAB_00755733;
    }
  }
LAB_00755720:
  uVar8 = 0;
  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  bVar13 = *(int *)(*param_2 + uVar8) < *(int *)(*param_1 + uVar8);
  uVar8 = (bVar13 - 1) + (uint)bVar13;
LAB_00755733:
  bVar13 = (bool)xtest();
  if (bVar13) {
    return uVar8;
  }
  return uVar8;
}

