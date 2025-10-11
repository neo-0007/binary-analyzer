
undefined1  [16]
__wmemcmp_avx2_movbe(undefined1 (*param_1) [32],undefined1 (*param_2) [32],long param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  int iVar5;
  sbyte sVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  auVar17._8_8_ = param_3 * 4;
  auVar23._0_4_ = (uint)auVar17._8_8_;
  if (auVar17._8_8_ < 0x20) {
    if (auVar23._0_4_ < 5) {
      if (3 < auVar23._0_4_) {
        auVar17._8_8_ = 0;
        if (*(int *)*param_1 != *(int *)*param_2) {
          bVar1 = *(int *)*param_2 < *(int *)*param_1;
          auVar30._0_4_ = (bVar1 - 1) + (uint)bVar1;
          auVar30._4_4_ = 0;
          auVar30[8] = bVar1;
          auVar30._9_7_ = 0;
          return auVar30;
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar17._8_8_;
      return auVar2 << 0x40;
    }
    if ((((uint)param_1 | (uint)param_2) & 0xfff) < 0xfe1) {
      auVar3 = vpcmpeqd_avx2(*param_2,*param_1);
      auVar28._0_4_ =
           ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
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
            (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f)
           + 1;
      sVar6 = ((byte)auVar17._8_8_ < 0x21) * (' ' - (byte)auVar17._8_8_);
      if ((auVar28._0_4_ << sVar6) >> sVar6 == 0) {
        return ZEXT416(0) << 0x40;
      }
    }
    else if (auVar23._0_4_ < 0x10) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulong *)*param_1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulong *)*param_2;
      auVar2 = vpcmpeqd_avx(auVar13,auVar10);
      auVar28._0_4_ =
           (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) - 0xffff;
      if (auVar28._0_4_ == 0) {
        param_1 = (undefined1 (*) [32])(param_1[-1] + auVar17._8_8_ + 0x18);
        param_2 = (undefined1 (*) [32])(param_2[-1] + auVar17._8_8_ + 0x18);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulong *)*param_1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulong *)*param_2;
        auVar2 = vpcmpeqd_avx(auVar14,auVar11);
        auVar28._0_4_ =
             (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) - 0xffff;
        auVar28._4_4_ = 0;
        if (auVar28._0_4_ == 0) {
          auVar28._8_8_ = auVar17._8_8_;
          return auVar28;
        }
      }
    }
    else {
      auVar2 = vpcmpeqd_avx(*(undefined1 (*) [16])*param_2,*(undefined1 (*) [16])*param_1);
      auVar28._0_4_ =
           (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) - 0xffff;
      if (auVar28._0_4_ == 0) {
        pauVar8 = param_2 + -1;
        param_1 = (undefined1 (*) [32])(param_1[-1] + auVar17._8_8_ + 0x10);
        param_2 = (undefined1 (*) [32])(param_2[-1] + auVar17._8_8_ + 0x10);
        auVar2 = vpcmpeqd_avx(*(undefined1 (*) [16])(*pauVar8 + auVar17._8_8_ + 0x10),
                              *(undefined1 (*) [16])*param_1);
        auVar29._0_4_ =
             (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) - 0xffff;
        auVar29._4_4_ = 0;
        auVar28._0_4_ = auVar29._0_4_;
        if (auVar29._0_4_ == 0) {
          auVar29._8_8_ = auVar17._8_8_;
          return auVar29;
        }
      }
    }
    goto LAB_007522a0;
  }
  auVar3 = vpcmpeqd_avx2(*param_2,*param_1);
  auVar28._0_4_ =
       ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
        (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
        (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
        (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
        (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
        (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
        (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
        (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
        (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11
        | (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
        (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14
        | (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
        (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
        (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
        (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a | (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b
        | (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
        (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d | (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e
       | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) + 1;
  if (auVar28._0_4_ != 0) goto LAB_007522a0;
  if (auVar17._8_8_ < 0x41) {
LAB_00752444:
    auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(param_2[-1] + auVar17._8_8_),
                           *(undefined1 (*) [32])(param_1[-1] + auVar17._8_8_));
    auVar24._0_4_ =
         ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) +
         1;
    auVar24._4_4_ = 0;
    if (auVar24._0_4_ == 0) {
      auVar24._8_8_ = auVar17._8_8_;
      return auVar24;
    }
    iVar5 = 0;
    for (; (auVar24._0_4_ & 1) == 0; auVar24._0_4_ = auVar24._0_4_ >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    bVar1 = *(int *)(param_2[-1] + (iVar5 + auVar23._0_4_)) <
            *(int *)(param_1[-1] + (iVar5 + auVar23._0_4_));
    auVar27._0_4_ = (bVar1 - 1) + (uint)bVar1;
    auVar27._4_4_ = 0;
    auVar27[8] = bVar1;
    auVar27._9_7_ = 0;
    return auVar27;
  }
  auVar3 = vpcmpeqd_avx2(param_2[1],param_1[1]);
  auVar28._0_4_ =
       ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
        (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
        (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
        (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
        (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
        (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
        (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
        (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
        (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11
        | (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
        (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14
        | (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
        (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
        (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
        (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a | (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b
        | (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
        (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d | (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e
       | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) + 1;
  if (auVar28._0_4_ != 0) goto LAB_007522c0;
  if (auVar17._8_8_ < 0x81) {
    auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(param_2[-2] + auVar17._8_8_),
                           *(undefined1 (*) [32])(param_1[-2] + auVar17._8_8_));
    auVar28._0_4_ =
         ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) +
         1;
    if (auVar28._0_4_ != 0) {
      iVar5 = 0;
      for (; (auVar28._0_4_ & 1) == 0; auVar28._0_4_ = auVar28._0_4_ >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      bVar1 = *(int *)(param_2[-2] + (iVar5 + auVar23._0_4_)) <
              *(int *)(param_1[-2] + (iVar5 + auVar23._0_4_));
      auVar26._0_4_ = (bVar1 - 1) + (uint)bVar1;
      auVar26._4_4_ = 0;
      auVar26[8] = bVar1;
      auVar26._9_7_ = 0;
      return auVar26;
    }
    goto LAB_00752444;
  }
  auVar3 = vpcmpeqd_avx2(param_2[2],param_1[2]);
  auVar23._0_4_ =
       ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
        (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
        (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
        (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
        (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
        (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
        (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
        (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
        (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11
        | (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
        (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14
        | (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
        (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
        (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
        (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a | (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b
        | (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
        (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d | (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e
       | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) + 1;
  auVar17._0_8_ = CONCAT44(0,auVar23._0_4_);
  if (auVar23._0_4_ != 0) goto LAB_007522e0;
  auVar3 = vpcmpeqd_avx2(param_2[3],param_1[3]);
  auVar24._0_4_ =
       ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
        (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
        (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
        (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
        (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
        (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
        (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
        (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
        (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11
        | (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
        (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14
        | (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
        (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
        (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
        (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a | (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b
        | (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
        (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d | (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e
       | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) + 1;
  if (auVar24._0_4_ != 0) goto LAB_0075231b;
  if (auVar17._8_8_ < 0x101) {
    pauVar8 = param_2 + -4;
    pauVar7 = param_2 + -3;
    param_1 = (undefined1 (*) [32])(param_1[-4] + auVar17._8_8_);
    param_2 = (undefined1 (*) [32])(param_2[-4] + auVar17._8_8_);
    auVar12 = vpcmpeqd_avx2(*(undefined1 (*) [32])(*pauVar8 + auVar17._8_8_),*param_1);
    auVar15 = vpcmpeqd_avx2(*(undefined1 (*) [32])(*pauVar7 + auVar17._8_8_),param_1[1]);
    auVar16 = vpcmpeqd_avx2(param_2[2],param_1[2]);
    auVar4 = vpcmpeqd_avx2(param_2[3],param_1[3]);
    auVar3 = vpand_avx2(auVar15,auVar12);
    auVar4 = vpand_avx2(auVar4,auVar16);
    auVar3 = vpand_avx2(auVar4,auVar3);
    auVar24._0_4_ =
         ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) +
         1;
    if (auVar24._0_4_ == 0) {
      return auVar17;
    }
LAB_00752303:
    auVar28._0_4_ =
         ((uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb
          | (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
          (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
          (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
          (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
          (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f)
         + 1;
    if (auVar28._0_4_ == 0) {
      auVar28._0_4_ =
           ((uint)(SUB321(auVar15 >> 7,0) & 1) | (uint)(SUB321(auVar15 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar15 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar15 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar15 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar15 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar15 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar15 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar15 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar15 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar15 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar15 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar15 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar15 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar15 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar15 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar15 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar15 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar15 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar15 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar15 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar15 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar15 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar15 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar15 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar15 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar15 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar15 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar15 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar15 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar15 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar15[0x1f] >> 7) << 0x1f
           ) + 1;
      if (auVar28._0_4_ == 0) {
        auVar23._0_4_ =
             ((uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
              (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f) + 1;
        if (auVar23._0_4_ == 0) {
LAB_0075231b:
          auVar23._0_4_ = 0;
          for (; (auVar24._0_4_ & 1) == 0; auVar24._0_4_ = auVar24._0_4_ >> 1 | 0x80000000) {
            auVar23._0_4_ = auVar23._0_4_ + 1;
          }
          bVar1 = *(int *)(param_2[3] + auVar23._0_4_) < *(int *)(param_1[3] + auVar23._0_4_);
          auVar21._0_4_ = (bVar1 - 1) + (uint)bVar1;
          auVar21._4_4_ = 0;
          auVar21[8] = bVar1;
          auVar21._9_7_ = 0;
          return auVar21;
        }
LAB_007522e0:
        auVar28._0_4_ = 0;
        for (; (auVar23._0_4_ & 1) == 0; auVar23._0_4_ = auVar23._0_4_ >> 1 | 0x80000000) {
          auVar28._0_4_ = auVar28._0_4_ + 1;
        }
        bVar1 = *(int *)(param_2[2] + auVar28._0_4_) < *(int *)(param_1[2] + auVar28._0_4_);
        auVar20._0_4_ = (bVar1 - 1) + (uint)bVar1;
        auVar20._4_4_ = 0;
        auVar20[8] = bVar1;
        auVar20._9_7_ = 0;
        return auVar20;
      }
LAB_007522c0:
      auVar23._0_4_ = 0;
      for (; (auVar28._0_4_ & 1) == 0; auVar28._0_4_ = auVar28._0_4_ >> 1 | 0x80000000) {
        auVar23._0_4_ = auVar23._0_4_ + 1;
      }
      bVar1 = *(int *)(param_2[1] + auVar23._0_4_) < *(int *)(param_1[1] + auVar23._0_4_);
      auVar19._0_4_ = (bVar1 - 1) + (uint)bVar1;
      auVar19._4_4_ = 0;
      auVar19[8] = bVar1;
      auVar19._9_7_ = 0;
      return auVar19;
    }
LAB_007522a0:
    auVar23._0_4_ = 0;
    for (; (auVar28._0_4_ & 1) == 0; auVar28._0_4_ = auVar28._0_4_ >> 1 | 0x80000000) {
      auVar23._0_4_ = auVar23._0_4_ + 1;
    }
    bVar1 = *(int *)(*param_2 + auVar23._0_4_) < *(int *)(*param_1 + auVar23._0_4_);
    auVar18._0_4_ = (bVar1 - 1) + (uint)bVar1;
    auVar18._4_4_ = 0;
    auVar18[8] = bVar1;
    auVar18._9_7_ = 0;
    return auVar18;
  }
  pauVar8 = (undefined1 (*) [32])(param_1[-4] + auVar17._8_8_);
  lVar9 = (long)param_2 - (long)param_1;
  param_1 = (undefined1 (*) [32])(((ulong)param_1 & 0xffffffffffffffe0) + 0x80);
  do {
    auVar12 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + (long)param_1),*param_1);
    auVar15 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + 0x20 + (long)param_1),param_1[1]);
    auVar16 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + 0x40 + (long)param_1),param_1[2]);
    auVar4 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + 0x60 + (long)param_1),param_1[3]);
    auVar3 = vpand_avx2(auVar15,auVar12);
    auVar4 = vpand_avx2(auVar4,auVar16);
    auVar3 = vpand_avx2(auVar4,auVar3);
    auVar24._0_4_ =
         ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) +
         1;
    if (auVar24._0_4_ != 0) goto LAB_00752300;
    param_1 = param_1 + 4;
  } while (param_1 < pauVar8);
  auVar23._0_4_ = (int)param_1 - (int)pauVar8;
  if (auVar23._0_4_ < 0x60) {
    auVar3 = *(undefined1 (*) [32])(lVar9 + 0x40 + (long)pauVar8);
    if (auVar23._0_4_ < 0x40) {
      auVar12 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + (long)pauVar8),*pauVar8);
      auVar15 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + 0x20 + (long)pauVar8),pauVar8[1]);
      auVar16 = vpcmpeqd_avx2(auVar3,pauVar8[2]);
      auVar4 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + 0x60 + (long)pauVar8),pauVar8[3]);
      auVar3 = vpand_avx2(auVar15,auVar12);
      auVar4 = vpand_avx2(auVar4,auVar16);
      auVar3 = vpand_avx2(auVar4,auVar3);
      auVar24._0_4_ =
           ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
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
            (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f)
           + 1;
      param_1 = pauVar8;
      if (auVar24._0_4_ == 0) {
        auVar22._8_8_ = pauVar8;
        auVar22._0_8_ = auVar17._0_8_;
        return auVar22;
      }
LAB_00752300:
      param_2 = (undefined1 (*) [32])(lVar9 + (long)param_1);
      goto LAB_00752303;
    }
    auVar3 = vpcmpeqd_avx2(auVar3,pauVar8[2]);
    auVar23._0_4_ =
         ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) +
         1;
    if (auVar23._0_4_ != 0) {
      pauVar8 = pauVar8 + -1;
      goto LAB_00752464;
    }
  }
  auVar3 = vpcmpeqd_avx2(*(undefined1 (*) [32])(lVar9 + 0x60 + (long)pauVar8),pauVar8[3]);
  auVar23._0_4_ =
       ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
        (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
        (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
        (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
        (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
        (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
        (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
        (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
        (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11
        | (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
        (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14
        | (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
        (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
        (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
        (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a | (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b
        | (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
        (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d | (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e
       | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f) + 1;
  auVar23._4_4_ = 0;
  if (auVar23._0_4_ == 0) {
    auVar23._8_8_ = pauVar8;
    return auVar23;
  }
LAB_00752464:
  auVar28._0_4_ = 0;
  for (; (auVar23._0_4_ & 1) == 0; auVar23._0_4_ = auVar23._0_4_ >> 1 | 0x80000000) {
    auVar28._0_4_ = auVar28._0_4_ + 1;
  }
  bVar1 = *(int *)((long)pauVar8 + lVar9 + 0x60 + (ulong)auVar28._0_4_) <
          *(int *)(pauVar8[3] + auVar28._0_4_);
  auVar25._0_4_ = (bVar1 - 1) + (uint)bVar1;
  auVar25._4_4_ = 0;
  auVar25[8] = bVar1;
  auVar25._9_7_ = 0;
  return auVar25;
}

