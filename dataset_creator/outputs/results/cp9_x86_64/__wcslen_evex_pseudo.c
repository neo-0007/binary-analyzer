
ulong __wcslen_evex(undefined1 (*param_1) [32])

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 in_ZMM16 [64];
  
  auVar8 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar4 = (uint)param_1;
  auVar13 = ZEXT1632(auVar8);
  if ((uVar4 & 0xfff) < 0xfe1) {
    uVar1 = vpcmpd_avx512vl(auVar13,*param_1,0);
    uVar5 = (uint)uVar1;
    if (uVar5 != 0) {
      uVar4 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (ulong)uVar4;
    }
  }
  else {
    uVar1 = vpcmpd_avx512vl(auVar13,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar5 = (int)uVar1 >> ((uint)((ulong)param_1 >> 2) & 7);
    if (uVar5 != 0) {
      uVar4 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (ulong)uVar4;
    }
  }
  uVar7 = (ulong)param_1 & 0xffffffffffffffe0;
  auVar9 = ZEXT1632(auVar8);
  uVar1 = vpcmpd_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0x20),0);
  uVar5 = (uint)uVar1;
  iVar6 = (int)uVar7;
  if (uVar5 != 0) {
    iVar3 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      iVar3 = iVar3 + 1;
    }
    return (ulong)(uint)(((int)(iVar6 - uVar4) >> 2) + 8 + iVar3);
  }
  uVar1 = vpcmpd_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0x40),0);
  uVar5 = (uint)uVar1;
  if (uVar5 != 0) {
    iVar3 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      iVar3 = iVar3 + 1;
    }
    return (ulong)(uint)(((int)(iVar6 - uVar4) >> 2) + 0x10 + iVar3);
  }
  uVar1 = vpcmpd_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0x60),0);
  uVar5 = (uint)uVar1;
  if (uVar5 != 0) {
    iVar3 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      iVar3 = iVar3 + 1;
    }
    return (ulong)(uint)(((int)(iVar6 - uVar4) >> 2) + 0x18 + iVar3);
  }
  uVar1 = vpcmpd_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0x80),0);
  uVar5 = (uint)uVar1;
  if (uVar5 != 0) {
    iVar3 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      iVar3 = iVar3 + 1;
    }
    return (ulong)(uint)(((int)(iVar6 - uVar4) >> 2) + 0x20 + iVar3);
  }
  uVar7 = uVar7 + 0x20 & 0xffffffffffffff80;
  do {
    auVar9 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0x80));
    auVar10 = vpminud_avx512vl(auVar9,*(undefined1 (*) [32])(uVar7 + 0xa0));
    auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar7 + 0xc0));
    auVar12 = vpminud_avx512vl(auVar11,*(undefined1 (*) [32])(uVar7 + 0xe0));
    uVar1 = vpcmpd_avx512vl(auVar13,auVar10,0);
    iVar6 = (int)uVar1;
    uVar1 = vpcmpd_avx512vl(auVar13,auVar12,0);
    uVar7 = uVar7 + 0x80;
  } while ((int)uVar1 == 0 && iVar6 == 0);
  uVar7 = uVar7 - (long)param_1 >> 2;
  if (iVar6 == 0) {
    uVar2 = vpcmpd_avx512vl(auVar13,auVar11,0);
    uVar4 = 0;
    for (uVar5 = (uint)CONCAT11((char)uVar1,(char)uVar2); (uVar5 & 1) == 0;
        uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return uVar7 + 0x10 + (ulong)uVar4;
  }
  uVar1 = vpcmpd_avx512vl(auVar13,auVar9,0);
  uVar4 = 0;
  for (uVar5 = iVar6 << 8 | (uint)uVar1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
    uVar4 = uVar4 + 1;
  }
  return uVar4 + uVar7;
}

