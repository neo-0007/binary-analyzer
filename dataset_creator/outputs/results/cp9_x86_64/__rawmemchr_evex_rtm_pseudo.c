
undefined1 * __rawmemchr_evex_rtm(undefined1 (*param_1) [32])

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 in_ZMM23 [64];
  
  auVar9 = vpbroadcastb_avx512vl();
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    uVar1 = vpcmpb_avx512vl(auVar9,*param_1,0);
    uVar4 = (uint)uVar1;
    if (uVar4 != 0) {
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return *param_1 + uVar3;
    }
  }
  else {
    uVar1 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar4 = (int)uVar1 >> ((uint)param_1 & 0x1f);
    if (uVar4 != 0) {
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return *param_1 + uVar3;
    }
  }
  uVar6 = (ulong)param_1 & 0xffffffffffffffe0;
  uVar1 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])(uVar6 + 0x20),0);
  uVar4 = (uint)uVar1;
  if (uVar4 != 0) {
    uVar3 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    return (undefined1 *)(uVar6 + 0x20 + (ulong)uVar3);
  }
  uVar1 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])(uVar6 + 0x40),0);
  uVar4 = (uint)uVar1;
  if (uVar4 != 0) {
    uVar3 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    return (undefined1 *)(uVar6 + 0x40 + (ulong)uVar3);
  }
  uVar1 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])(uVar6 + 0x60),0);
  uVar4 = (uint)uVar1;
  if (uVar4 != 0) {
    uVar3 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    return (undefined1 *)(uVar6 + 0x60 + (ulong)uVar3);
  }
  uVar1 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])(uVar6 + 0x80),0);
  uVar4 = (uint)uVar1;
  if (uVar4 != 0) {
    uVar3 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    return (undefined1 *)(uVar6 + 0x80 + (ulong)uVar3);
  }
  auVar8 = vpxorq_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
  uVar6 = uVar6 + 0x20 & 0xffffffffffffff80;
  do {
    uVar7 = uVar6;
    uVar2 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0x80),4);
    auVar10 = vpxorq_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0xa0));
    auVar11 = vpxorq_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0xc0));
    uVar1 = vpcmpb_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0xe0),0);
    uVar4 = (uint)uVar1;
    auVar11 = vpminub_avx512vl(auVar11,auVar10);
    auVar12[1] = ((byte)(uVar2 >> 1) & 1) * auVar11[1];
    auVar12[0] = ((byte)uVar2 & 1) * auVar11[0];
    auVar12[2] = ((byte)(uVar2 >> 2) & 1) * auVar11[2];
    auVar12[3] = ((byte)(uVar2 >> 3) & 1) * auVar11[3];
    auVar12[4] = ((byte)(uVar2 >> 4) & 1) * auVar11[4];
    auVar12[5] = ((byte)(uVar2 >> 5) & 1) * auVar11[5];
    auVar12[6] = ((byte)(uVar2 >> 6) & 1) * auVar11[6];
    auVar12[7] = ((byte)(uVar2 >> 7) & 1) * auVar11[7];
    auVar12[8] = ((byte)(uVar2 >> 8) & 1) * auVar11[8];
    auVar12[9] = ((byte)(uVar2 >> 9) & 1) * auVar11[9];
    auVar12[10] = ((byte)(uVar2 >> 10) & 1) * auVar11[10];
    auVar12[0xb] = ((byte)(uVar2 >> 0xb) & 1) * auVar11[0xb];
    auVar12[0xc] = ((byte)(uVar2 >> 0xc) & 1) * auVar11[0xc];
    auVar12[0xd] = ((byte)(uVar2 >> 0xd) & 1) * auVar11[0xd];
    auVar12[0xe] = ((byte)(uVar2 >> 0xe) & 1) * auVar11[0xe];
    auVar12[0xf] = ((byte)(uVar2 >> 0xf) & 1) * auVar11[0xf];
    auVar12[0x10] = ((byte)(uVar2 >> 0x10) & 1) * auVar11[0x10];
    auVar12[0x11] = ((byte)(uVar2 >> 0x11) & 1) * auVar11[0x11];
    auVar12[0x12] = ((byte)(uVar2 >> 0x12) & 1) * auVar11[0x12];
    auVar12[0x13] = ((byte)(uVar2 >> 0x13) & 1) * auVar11[0x13];
    auVar12[0x14] = ((byte)(uVar2 >> 0x14) & 1) * auVar11[0x14];
    auVar12[0x15] = ((byte)(uVar2 >> 0x15) & 1) * auVar11[0x15];
    auVar12[0x16] = ((byte)(uVar2 >> 0x16) & 1) * auVar11[0x16];
    auVar12[0x17] = ((byte)(uVar2 >> 0x17) & 1) * auVar11[0x17];
    auVar12[0x18] = ((byte)(uVar2 >> 0x18) & 1) * auVar11[0x18];
    auVar12[0x19] = ((byte)(uVar2 >> 0x19) & 1) * auVar11[0x19];
    auVar12[0x1a] = ((byte)(uVar2 >> 0x1a) & 1) * auVar11[0x1a];
    auVar12[0x1b] = ((byte)(uVar2 >> 0x1b) & 1) * auVar11[0x1b];
    auVar12[0x1c] = ((byte)(uVar2 >> 0x1c) & 1) * auVar11[0x1c];
    auVar12._30_2_ = auVar11._30_2_;
    auVar12[0x1d] = ((byte)(uVar2 >> 0x1d) & 1) * auVar11[0x1d];
    uVar1 = vpcmpb_avx512vl(ZEXT1632(auVar8),auVar12,0);
    uVar3 = (uint)uVar1;
    uVar6 = uVar7 + 0x80;
  } while (uVar4 == 0 && uVar3 == 0);
  uVar5 = (int)uVar2 + 1;
  if (uVar5 != 0) {
    uVar4 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)((ulong)uVar4 + uVar7 + 0x80);
  }
  uVar1 = vpcmpb_avx512vl(ZEXT1632(auVar8),auVar10,0);
  uVar5 = (uint)uVar1;
  if (uVar5 != 0) {
    uVar4 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar7 + 0xa0 + (ulong)uVar4);
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar7 + 0xc0 + (ulong)uVar4);
  }
  uVar3 = 0;
  for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
    uVar3 = uVar3 + 1;
  }
  return (undefined1 *)(uVar7 + 0xe0 + (ulong)uVar3);
}

