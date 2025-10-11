
int * FUN_007a9ea0(undefined1 (*param_1) [32],int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 in_ZMM16 [64];
  
  auVar10 = vpbroadcastd_avx512vl();
  auVar9 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  auVar17 = ZEXT1632(auVar9);
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar11 = vmovdqu64_avx512vl(*param_1);
    auVar12 = vpxorq_avx512vl(auVar10,auVar11);
    auVar11 = vpminud_avx512vl(auVar11,auVar12);
    uVar1 = vpcmpd_avx512vl(auVar11,auVar17,0);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar5 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (param_2 != *(int *)(*param_1 + (ulong)uVar5 * 4)) {
        return (int *)0x0;
      }
      return (int *)(*param_1 + (ulong)uVar5 * 4);
    }
  }
  else {
    auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0));
    auVar12 = vpxorq_avx512vl(auVar10,auVar11);
    auVar11 = vpminud_avx512vl(auVar11,auVar12);
    uVar1 = vpcmpd_avx512vl(auVar11,auVar17,0);
    uVar6 = (int)uVar1 >> ((int)(uint)param_1 >> 2 & 7U);
    if (uVar6 != 0) {
      uVar5 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (param_2 != *(int *)(*param_1 + (ulong)uVar5 * 4)) {
        return (int *)0x0;
      }
      return (int *)(*param_1 + (ulong)uVar5 * 4);
    }
  }
  uVar8 = (ulong)param_1 & 0xffffffffffffffe0;
  auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x20));
  auVar12 = vpxorq_avx512vl(auVar10,auVar11);
  auVar11 = vpminud_avx512vl(auVar11,auVar12);
  auVar12 = ZEXT1632(auVar9);
  uVar1 = vpcmpd_avx512vl(auVar11,auVar12,0);
  uVar6 = (uint)uVar1;
  if (uVar6 == 0) {
    auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x40));
    uVar1 = vpcmpd_avx512vl(auVar10,auVar11,0);
    uVar6 = (uint)uVar1;
    uVar1 = vpcmpd_avx512vl(auVar12,auVar11,0);
    if ((int)uVar1 == 0 && uVar6 == 0) {
      auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x60));
      auVar13 = vpxorq_avx512vl(auVar10,auVar11);
      auVar11 = vpminud_avx512vl(auVar11,auVar13);
      uVar1 = vpcmpd_avx512vl(auVar11,auVar12,0);
      uVar6 = (uint)uVar1;
      if (uVar6 == 0) {
        auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x80));
        uVar1 = vpcmpd_avx512vl(auVar10,auVar11,0);
        uVar6 = (uint)uVar1;
        uVar1 = vpcmpd_avx512vl(auVar12,auVar11,0);
        if ((int)uVar1 == 0 && uVar6 == 0) {
          uVar8 = uVar8 + 0x20 & 0xffffffffffffff80;
          do {
            uVar7 = uVar8;
            auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0x80));
            auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0xa0));
            auVar13 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0xc0));
            auVar14 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0xe0));
            auVar15 = vpxorq_avx512vl(auVar10,auVar11);
            uVar8 = vpcmpd_avx512vl(auVar12,auVar10,4);
            auVar16 = vpxorq_avx512vl(auVar10,auVar13);
            uVar2 = vpcmpd_avx512vl(auVar14,auVar10,4);
            auVar11 = vpminud_avx512vl(auVar15,auVar11);
            auVar13 = vpminud_avx512vl(auVar16,auVar13);
            auVar12 = vpminud_avx512vl(auVar12,auVar11);
            auVar15._4_4_ = (uint)((byte)(uVar8 >> 1) & 1) * auVar12._4_4_;
            auVar15._0_4_ = (uint)((byte)uVar8 & 1) * auVar12._0_4_;
            auVar15._8_4_ = (uint)((byte)(uVar8 >> 2) & 1) * auVar12._8_4_;
            auVar15._12_4_ = (uint)((byte)(uVar8 >> 3) & 1) * auVar12._12_4_;
            auVar15._16_4_ = (uint)((byte)(uVar8 >> 4) & 1) * auVar12._16_4_;
            auVar15._20_4_ = (uint)((byte)(uVar8 >> 5) & 1) * auVar12._20_4_;
            auVar15._24_4_ = (uint)((byte)(uVar8 >> 6) & 1) * auVar12._24_4_;
            auVar15._28_4_ = (uint)(byte)(uVar8 >> 7) * auVar12._28_4_;
            auVar12 = vpminud_avx512vl(auVar14,auVar13);
            auVar12 = vpminud_avx512vl(auVar12,auVar15);
            auVar14._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar12._4_4_;
            auVar14._0_4_ = (uint)((byte)uVar2 & 1) * auVar12._0_4_;
            auVar14._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar12._8_4_;
            auVar14._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar12._12_4_;
            auVar14._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar12._16_4_;
            auVar14._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar12._20_4_;
            auVar14._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar12._24_4_;
            auVar14._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar12._28_4_;
            uVar1 = vpcmpd_avx512vl(auVar14,auVar17,0);
            uVar8 = uVar7 + 0x80;
          } while ((int)uVar1 == 0);
          uVar3 = vpcmpd_avx512vl(auVar11,auVar17,0);
          uVar6 = (uint)uVar3;
          if (uVar6 == 0) {
            uVar3 = vpcmpd_avx512vl(auVar15,auVar17,0);
            uVar6 = (uint)uVar3;
            if (uVar6 == 0) {
              uVar3 = vpcmpd_avx512vl(auVar13,auVar17,0);
              uVar6 = 0;
              for (uVar5 = (uint)uVar3 | (int)uVar1 << 8; (uVar5 & 1) == 0;
                  uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (param_2 == *(int *)(uVar7 + 0xc0 + (ulong)uVar6 * 4)) {
                return (int *)(uVar7 + 0xc0 + (ulong)uVar6 * 4);
              }
            }
            else {
              uVar5 = 0;
              for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              if (param_2 == *(int *)(uVar7 + 0xa0 + (ulong)uVar5 * 4)) {
                return (int *)(uVar7 + 0xa0 + (ulong)uVar5 * 4);
              }
            }
          }
          else {
            uVar5 = 0;
            for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            if (param_2 == *(int *)(uVar8 + (ulong)uVar5 * 4)) {
              return (int *)(uVar8 + (ulong)uVar5 * 4);
            }
          }
          return (int *)0x0;
        }
        uVar5 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        sVar4 = ((byte)uVar5 < 0x21) * (' ' - (byte)uVar5);
        if ((uint)((int)uVar1 << sVar4) >> sVar4 == 0) {
          return (int *)(uVar8 + 0x80 + (ulong)uVar5 * 4);
        }
      }
      else {
        uVar5 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (param_2 == *(int *)(uVar8 + 0x60 + (ulong)uVar5 * 4)) {
          return (int *)(uVar8 + 0x60 + (ulong)uVar5 * 4);
        }
      }
    }
    else {
      uVar5 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      sVar4 = ((byte)uVar5 < 0x21) * (' ' - (byte)uVar5);
      if ((uint)((int)uVar1 << sVar4) >> sVar4 == 0) {
        return (int *)(uVar8 + 0x40 + (ulong)uVar5 * 4);
      }
    }
  }
  else {
    uVar5 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    if (param_2 == *(int *)(uVar8 + 0x20 + (ulong)uVar5 * 4)) {
      return (int *)(uVar8 + 0x20 + (ulong)uVar5 * 4);
    }
  }
  return (int *)0x0;
}

