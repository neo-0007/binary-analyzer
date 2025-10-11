
ulong __memcmp_avx2_movbe(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  int iVar3;
  sbyte sVar4;
  undefined1 (*pauVar5) [32];
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [32];
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  
  uVar7 = (uint)param_3;
  if (param_3 < 0x20) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        return (ulong)((uint)(byte)(*param_1)[0] - (uint)(byte)(*param_2)[0]);
      }
      return 0;
    }
    if ((((uint)param_1 | (uint)param_2) & 0xfff) < 0xfe1) {
      auVar1 = vpcmpeqb_avx2(*param_2,*param_1);
      uVar6 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
              (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) + 1;
      sVar4 = ((byte)param_3 < 0x21) * (' ' - (byte)param_3);
      if ((uVar6 << sVar4) >> sVar4 == 0) {
        return 0;
      }
    }
    else if (uVar7 < 0x10) {
      if (uVar7 < 8) {
        if (uVar7 < 4) {
          uVar7 = (uint)*(ushort *)*param_1 << 8;
          uVar6 = (uint)*(ushort *)*param_2 << 8;
          return (ulong)(((uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                         (uint)(byte)param_1[-1][param_3 + 0x1f]) -
                        ((uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        (uint)(byte)param_2[-1][param_3 + 0x1f]));
        }
        uVar7 = swap_bytes(*(undefined4 *)*param_1);
        uVar6 = swap_bytes(*(undefined4 *)*param_2);
        uVar15 = swap_bytes(*(undefined4 *)(param_1[-1] + param_3 + 0x1c));
        uVar13 = swap_bytes(*(undefined4 *)(param_2[-1] + param_3 + 0x1c));
        uVar8 = (ulong)uVar7 << 0x20 | CONCAT44((int)((ulong)param_1 >> 0x20),uVar15);
        uVar11 = (ulong)uVar6 << 0x20 | CONCAT44((int)((ulong)param_2 >> 0x20),uVar13);
        uVar9 = uVar8 - uVar11;
        if (uVar9 != 0) {
          uVar9 = (ulong)(-(uint)(uVar8 < uVar11) | 1);
        }
        return uVar9;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulong *)*param_1;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *(ulong *)*param_2;
      auVar16 = vpcmpeqb_avx(auVar19,auVar16);
      uVar6 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar6 == 0) {
        param_1 = (undefined1 (*) [32])(param_1[-1] + param_3 + 0x18);
        param_2 = (undefined1 (*) [32])(param_2[-1] + param_3 + 0x18);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulong *)*param_1;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulong *)*param_2;
        auVar16 = vpcmpeqb_avx(auVar20,auVar17);
        uVar6 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar6 == 0) {
          return (ulong)uVar6;
        }
      }
    }
    else {
      auVar16 = vpcmpeqb_avx(*(undefined1 (*) [16])*param_2,*(undefined1 (*) [16])*param_1);
      uVar6 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar6 == 0) {
        pauVar12 = param_2 + -1;
        param_1 = (undefined1 (*) [32])(param_1[-1] + param_3 + 0x10);
        param_2 = (undefined1 (*) [32])(param_2[-1] + param_3 + 0x10);
        auVar16 = vpcmpeqb_avx(*(undefined1 (*) [16])(*pauVar12 + param_3 + 0x10),
                               *(undefined1 (*) [16])*param_1);
        uVar6 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar6 == 0) {
          return (ulong)uVar6;
        }
      }
    }
    goto LAB_00717ca0;
  }
  auVar1 = vpcmpeqb_avx2(*param_2,*param_1);
  uVar6 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
           (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) +
          1;
  if (uVar6 != 0) goto LAB_00717ca0;
  if (param_3 < 0x41) {
LAB_00717e24:
    auVar1 = vpcmpeqb_avx2(*(undefined1 (*) [32])(param_2[-1] + param_3),
                           *(undefined1 (*) [32])(param_1[-1] + param_3));
    uVar6 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f)
            + 1;
    if (uVar6 == 0) {
      return (ulong)uVar6;
    }
    iVar3 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      iVar3 = iVar3 + 1;
    }
    return (ulong)((uint)(byte)param_1[-1][iVar3 + uVar7] - (uint)(byte)param_2[-1][iVar3 + uVar7]);
  }
  auVar1 = vpcmpeqb_avx2(param_2[1],param_1[1]);
  uVar6 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
           (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) +
          1;
  if (uVar6 != 0) goto LAB_00717cc0;
  if (param_3 < 0x81) {
    auVar1 = vpcmpeqb_avx2(*(undefined1 (*) [32])(param_2[-2] + param_3),
                           *(undefined1 (*) [32])(param_1[-2] + param_3));
    uVar6 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f)
            + 1;
    if (uVar6 != 0) {
      iVar3 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      return (ulong)((uint)(byte)param_1[-2][iVar3 + uVar7] - (uint)(byte)param_2[-2][iVar3 + uVar7]
                    );
    }
    goto LAB_00717e24;
  }
  auVar1 = vpcmpeqb_avx2(param_2[2],param_1[2]);
  uVar7 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
           (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) +
          1;
  if (uVar7 != 0) goto LAB_00717ce0;
  auVar1 = vpcmpeqb_avx2(param_2[3],param_1[3]);
  uVar10 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
            (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f)
           + 1;
  if (uVar10 != 0) goto LAB_00717d1b;
  if (param_3 < 0x101) {
    pauVar12 = param_2 + -4;
    pauVar5 = param_2 + -3;
    param_1 = (undefined1 (*) [32])(param_1[-4] + param_3);
    param_2 = (undefined1 (*) [32])(param_2[-4] + param_3);
    auVar18 = vpcmpeqb_avx2(*(undefined1 (*) [32])(*pauVar12 + param_3),*param_1);
    auVar21 = vpcmpeqb_avx2(*(undefined1 (*) [32])(*pauVar5 + param_3),param_1[1]);
    auVar22 = vpcmpeqb_avx2(param_2[2],param_1[2]);
    auVar2 = vpcmpeqb_avx2(param_2[3],param_1[3]);
    auVar1 = vpand_avx2(auVar21,auVar18);
    auVar2 = vpand_avx2(auVar2,auVar22);
    auVar1 = vpand_avx2(auVar2,auVar1);
    uVar10 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
             ) + 1;
    if (uVar10 == 0) {
      return (ulong)uVar7;
    }
LAB_00717d03:
    uVar6 = ((uint)(SUB321(auVar18 >> 7,0) & 1) | (uint)(SUB321(auVar18 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar18 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar18 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar18 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar18 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar18 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar18 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar18 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar18 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar18 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar18 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar18 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar18 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar18 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar18 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar18 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar18 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar18 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar18 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar18 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar18 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar18 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar18 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar18 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar18 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar18 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar18 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar18 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar18 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar18 >> 0xf7,0) & 1) << 0x1e |
            (uint)(byte)(auVar18[0x1f] >> 7) << 0x1f) + 1;
    if (uVar6 == 0) {
      uVar6 = ((uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
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
               (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar21 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
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
              (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f) + 1;
      if (uVar6 == 0) {
        uVar7 = ((uint)(SUB321(auVar22 >> 7,0) & 1) | (uint)(SUB321(auVar22 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar22 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar22 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar22 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar22 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar22 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar22 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar22 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar22 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar22 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar22 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar22 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar22 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar22 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar22 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar22 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar22 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar22 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar22 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar22 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar22 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar22 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar22 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar22 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar22 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar22 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar22 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar22 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar22 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar22 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar22[0x1f] >> 7) << 0x1f) + 1;
        if (uVar7 == 0) {
LAB_00717d1b:
          uVar7 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return (ulong)((uint)(byte)param_1[3][uVar7] - (uint)(byte)param_2[3][uVar7]);
        }
LAB_00717ce0:
        uVar6 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        return (ulong)((uint)(byte)param_1[2][uVar6] - (uint)(byte)param_2[2][uVar6]);
      }
LAB_00717cc0:
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (ulong)((uint)(byte)param_1[1][uVar7] - (uint)(byte)param_2[1][uVar7]);
    }
LAB_00717ca0:
    uVar7 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    return (ulong)((uint)(byte)(*param_1)[uVar7] - (uint)(byte)(*param_2)[uVar7]);
  }
  pauVar12 = (undefined1 (*) [32])(param_1[-4] + param_3);
  lVar14 = (long)param_2 - (long)param_1;
  param_1 = (undefined1 (*) [32])(((ulong)param_1 & 0xffffffffffffffe0) + 0x80);
  do {
    auVar18 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + (long)param_1),*param_1);
    auVar21 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + 0x20 + (long)param_1),param_1[1]);
    auVar22 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + 0x40 + (long)param_1),param_1[2]);
    auVar2 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + 0x60 + (long)param_1),param_1[3]);
    auVar1 = vpand_avx2(auVar21,auVar18);
    auVar2 = vpand_avx2(auVar2,auVar22);
    auVar1 = vpand_avx2(auVar2,auVar1);
    uVar10 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
             ) + 1;
    if (uVar10 != 0) goto LAB_00717d00;
    param_1 = param_1 + 4;
  } while (param_1 < pauVar12);
  uVar6 = (int)param_1 - (int)pauVar12;
  if (uVar6 < 0x60) {
    auVar1 = *(undefined1 (*) [32])(lVar14 + 0x40 + (long)pauVar12);
    if (uVar6 < 0x40) {
      auVar18 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + (long)pauVar12),*pauVar12);
      auVar21 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + 0x20 + (long)pauVar12),pauVar12[1]);
      auVar22 = vpcmpeqb_avx2(auVar1,pauVar12[2]);
      auVar2 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + 0x60 + (long)pauVar12),pauVar12[3]);
      auVar1 = vpand_avx2(auVar21,auVar18);
      auVar2 = vpand_avx2(auVar2,auVar22);
      auVar1 = vpand_avx2(auVar2,auVar1);
      uVar10 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
               (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) + 1;
      param_1 = pauVar12;
      if (uVar10 == 0) {
        return (ulong)uVar7;
      }
LAB_00717d00:
      param_2 = (undefined1 (*) [32])(lVar14 + (long)param_1);
      goto LAB_00717d03;
    }
    auVar1 = vpcmpeqb_avx2(auVar1,pauVar12[2]);
    uVar7 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f)
            + 1;
    if (uVar7 != 0) {
      pauVar12 = pauVar12 + -1;
      goto LAB_00717e44;
    }
  }
  auVar1 = vpcmpeqb_avx2(*(undefined1 (*) [32])(lVar14 + 0x60 + (long)pauVar12),pauVar12[3]);
  uVar7 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
           (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) +
          1;
  if (uVar7 == 0) {
    return (ulong)uVar7;
  }
LAB_00717e44:
  uVar6 = 0;
  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    uVar6 = uVar6 + 1;
  }
  return (ulong)((uint)(byte)pauVar12[3][uVar6] -
                (uint)*(byte *)((long)pauVar12 + lVar14 + 0x60 + (ulong)uVar6));
}

