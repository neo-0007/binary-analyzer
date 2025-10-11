
undefined1 * FUN_00753e00(undefined1 (*param_1) [32])

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
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
  
  auVar10 = vpbroadcastb_avx512vl();
  auVar9 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  auVar17 = ZEXT1632(auVar9);
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar11 = vmovdqu64_avx512vl(*param_1);
    auVar12 = vpxorq_avx512vl(auVar10,auVar11);
    auVar11 = vpminub_avx512vl(auVar11,auVar12);
    uVar1 = vpcmpb_avx512vl(auVar11,auVar17,0);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return *param_1 + uVar4;
    }
  }
  else {
    auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0));
    auVar12 = vpxorq_avx512vl(auVar10,auVar11);
    auVar11 = vpminub_avx512vl(auVar11,auVar12);
    uVar1 = vpcmpb_avx512vl(auVar11,auVar17,0);
    uVar6 = (int)uVar1 >> ((uint)param_1 & 0x1f);
    if (uVar6 != 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return *param_1 + uVar4;
    }
  }
  uVar7 = (ulong)param_1 & 0xffffffffffffffe0;
  auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0x20));
  auVar12 = vpxorq_avx512vl(auVar10,auVar11);
  auVar11 = vpminub_avx512vl(auVar11,auVar12);
  auVar12 = ZEXT1632(auVar9);
  uVar1 = vpcmpb_avx512vl(auVar11,auVar12,0);
  uVar6 = (uint)uVar1;
  if (uVar6 != 0) {
    uVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar7 + 0x20 + (ulong)uVar4);
  }
  auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0x40));
  uVar1 = vpcmpb_avx512vl(auVar10,auVar11,0);
  uVar2 = vpcmpb_avx512vl(auVar12,auVar11,0);
  if ((uint)uVar2 != 0 || (uint)uVar1 != 0) {
    uVar4 = 0;
    for (uVar6 = (uint)uVar2 | (uint)uVar1; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar7 + 0x40 + (ulong)uVar4);
  }
  auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0x60));
  auVar13 = vpxorq_avx512vl(auVar10,auVar11);
  auVar11 = vpminub_avx512vl(auVar11,auVar13);
  uVar1 = vpcmpb_avx512vl(auVar11,auVar12,0);
  uVar6 = (uint)uVar1;
  if (uVar6 != 0) {
    uVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar7 + 0x60 + (ulong)uVar4);
  }
  auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0x80));
  uVar1 = vpcmpb_avx512vl(auVar10,auVar11,0);
  uVar2 = vpcmpb_avx512vl(auVar12,auVar11,0);
  if ((uint)uVar2 != 0 || (uint)uVar1 != 0) {
    uVar4 = 0;
    for (uVar6 = (uint)uVar2 | (uint)uVar1; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar7 + 0x80 + (ulong)uVar4);
  }
  uVar7 = uVar7 + 0x20 & 0xffffffffffffff80;
  do {
    uVar8 = uVar7;
    auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x80));
    auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xa0));
    auVar13 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xc0));
    auVar14 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xe0));
    auVar15 = vpxorq_avx512vl(auVar10,auVar11);
    uVar7 = vpcmpb_avx512vl(auVar12,auVar10,4);
    auVar16 = vpxorq_avx512vl(auVar10,auVar13);
    uVar3 = vpcmpb_avx512vl(auVar14,auVar10,4);
    auVar11 = vpminub_avx512vl(auVar15,auVar11);
    auVar13 = vpminub_avx512vl(auVar16,auVar13);
    auVar12 = vpminub_avx512vl(auVar12,auVar11);
    auVar15[1] = ((byte)(uVar7 >> 1) & 1) * auVar12[1];
    auVar15[0] = ((byte)uVar7 & 1) * auVar12[0];
    auVar15[2] = ((byte)(uVar7 >> 2) & 1) * auVar12[2];
    auVar15[3] = ((byte)(uVar7 >> 3) & 1) * auVar12[3];
    auVar15[4] = ((byte)(uVar7 >> 4) & 1) * auVar12[4];
    auVar15[5] = ((byte)(uVar7 >> 5) & 1) * auVar12[5];
    auVar15[6] = ((byte)(uVar7 >> 6) & 1) * auVar12[6];
    auVar15[7] = ((byte)(uVar7 >> 7) & 1) * auVar12[7];
    auVar15[8] = ((byte)(uVar7 >> 8) & 1) * auVar12[8];
    auVar15[9] = ((byte)(uVar7 >> 9) & 1) * auVar12[9];
    auVar15[10] = ((byte)(uVar7 >> 10) & 1) * auVar12[10];
    auVar15[0xb] = ((byte)(uVar7 >> 0xb) & 1) * auVar12[0xb];
    auVar15[0xc] = ((byte)(uVar7 >> 0xc) & 1) * auVar12[0xc];
    auVar15[0xd] = ((byte)(uVar7 >> 0xd) & 1) * auVar12[0xd];
    auVar15[0xe] = ((byte)(uVar7 >> 0xe) & 1) * auVar12[0xe];
    auVar15[0xf] = ((byte)(uVar7 >> 0xf) & 1) * auVar12[0xf];
    auVar15[0x10] = ((byte)(uVar7 >> 0x10) & 1) * auVar12[0x10];
    auVar15[0x11] = ((byte)(uVar7 >> 0x11) & 1) * auVar12[0x11];
    auVar15[0x12] = ((byte)(uVar7 >> 0x12) & 1) * auVar12[0x12];
    auVar15[0x13] = ((byte)(uVar7 >> 0x13) & 1) * auVar12[0x13];
    auVar15[0x14] = ((byte)(uVar7 >> 0x14) & 1) * auVar12[0x14];
    auVar15[0x15] = ((byte)(uVar7 >> 0x15) & 1) * auVar12[0x15];
    auVar15[0x16] = ((byte)(uVar7 >> 0x16) & 1) * auVar12[0x16];
    auVar15[0x17] = ((byte)(uVar7 >> 0x17) & 1) * auVar12[0x17];
    auVar15[0x18] = ((byte)(uVar7 >> 0x18) & 1) * auVar12[0x18];
    auVar15[0x19] = ((byte)(uVar7 >> 0x19) & 1) * auVar12[0x19];
    auVar15[0x1a] = ((byte)(uVar7 >> 0x1a) & 1) * auVar12[0x1a];
    auVar15[0x1b] = ((byte)(uVar7 >> 0x1b) & 1) * auVar12[0x1b];
    auVar15[0x1c] = ((byte)(uVar7 >> 0x1c) & 1) * auVar12[0x1c];
    auVar15._30_2_ = auVar12._30_2_;
    auVar15[0x1d] = ((byte)(uVar7 >> 0x1d) & 1) * auVar12[0x1d];
    auVar12 = vpminub_avx512vl(auVar14,auVar13);
    auVar12 = vpminub_avx512vl(auVar12,auVar15);
    auVar14[1] = ((byte)(uVar3 >> 1) & 1) * auVar12[1];
    auVar14[0] = ((byte)uVar3 & 1) * auVar12[0];
    auVar14[2] = ((byte)(uVar3 >> 2) & 1) * auVar12[2];
    auVar14[3] = ((byte)(uVar3 >> 3) & 1) * auVar12[3];
    auVar14[4] = ((byte)(uVar3 >> 4) & 1) * auVar12[4];
    auVar14[5] = ((byte)(uVar3 >> 5) & 1) * auVar12[5];
    auVar14[6] = ((byte)(uVar3 >> 6) & 1) * auVar12[6];
    auVar14[7] = ((byte)(uVar3 >> 7) & 1) * auVar12[7];
    auVar14[8] = ((byte)(uVar3 >> 8) & 1) * auVar12[8];
    auVar14[9] = ((byte)(uVar3 >> 9) & 1) * auVar12[9];
    auVar14[10] = ((byte)(uVar3 >> 10) & 1) * auVar12[10];
    auVar14[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar12[0xb];
    auVar14[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar12[0xc];
    auVar14[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar12[0xd];
    auVar14[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar12[0xe];
    auVar14[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar12[0xf];
    auVar14[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar12[0x10];
    auVar14[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar12[0x11];
    auVar14[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar12[0x12];
    auVar14[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar12[0x13];
    auVar14[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar12[0x14];
    auVar14[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar12[0x15];
    auVar14[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar12[0x16];
    auVar14[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar12[0x17];
    auVar14[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar12[0x18];
    auVar14[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar12[0x19];
    auVar14[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar12[0x1a];
    auVar14[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar12[0x1b];
    auVar14[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar12[0x1c];
    auVar14._30_2_ = auVar12._30_2_;
    auVar14[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar12[0x1d];
    uVar1 = vpcmpb_avx512vl(auVar14,auVar17,0);
    uVar7 = uVar8 + 0x80;
  } while ((int)uVar1 == 0);
  uVar2 = vpcmpb_avx512vl(auVar11,auVar17,0);
  uVar6 = (uint)uVar2;
  if (uVar6 != 0) {
    uVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar8 + 0x80 + (ulong)uVar4);
  }
  uVar2 = vpcmpb_avx512vl(auVar15,auVar17,0);
  uVar6 = (uint)uVar2;
  if (uVar6 != 0) {
    uVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar8 + 0xa0 + (ulong)uVar4);
  }
  uVar2 = vpcmpb_avx512vl(auVar13,auVar17,0);
  lVar5 = 0;
  for (uVar7 = CONCAT44((int)uVar1,(int)uVar2); (uVar7 & 1) == 0;
      uVar7 = uVar7 >> 1 | 0x8000000000000000) {
    lVar5 = lVar5 + 1;
  }
  return (undefined1 *)(uVar8 + 0xc0 + lVar5);
}

