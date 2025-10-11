
ulong __strlen_evex(undefined1 (*param_1) [32])

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 in_ZMM16 [64];
  
  auVar11 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar6 = (uint)param_1;
  auVar16 = ZEXT1632(auVar11);
  if ((uVar6 & 0xfff) < 0xfe1) {
    uVar1 = vpcmpb_avx512vl(auVar16,*param_1,0);
    uVar7 = (uint)uVar1;
    if (uVar7 != 0) {
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (ulong)uVar6;
    }
  }
  else {
    uVar1 = vpcmpb_avx512vl(auVar16,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar7 = (int)uVar1 >> (uVar6 & 0x1f);
    if (uVar7 != 0) {
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (ulong)uVar6;
    }
  }
  uVar10 = (ulong)param_1 & 0xffffffffffffffe0;
  auVar12 = ZEXT1632(auVar11);
  uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar10 + 0x20),0);
  uVar7 = (uint)uVar1;
  iVar9 = (int)uVar10;
  if (uVar7 != 0) {
    iVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    return (ulong)((iVar9 - uVar6) + 0x20 + iVar4);
  }
  uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar10 + 0x40),0);
  uVar7 = (uint)uVar1;
  if (uVar7 != 0) {
    iVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    return (ulong)((iVar9 - uVar6) + 0x40 + iVar4);
  }
  uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar10 + 0x60),0);
  uVar7 = (uint)uVar1;
  if (uVar7 != 0) {
    iVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    return (ulong)((iVar9 - uVar6) + 0x60 + iVar4);
  }
  uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar10 + 0x80),0);
  uVar7 = (uint)uVar1;
  if (uVar7 != 0) {
    iVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    return (ulong)((iVar9 - uVar6) + 0x80 + iVar4);
  }
  uVar10 = uVar10 + 0x20 & 0xffffffffffffff80;
  do {
    auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar10 + 0x80));
    auVar13 = vpminub_avx512vl(auVar12,*(undefined1 (*) [32])(uVar10 + 0xa0));
    auVar14 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar10 + 0xc0));
    auVar15 = vpminub_avx512vl(auVar14,*(undefined1 (*) [32])(uVar10 + 0xe0));
    lVar2 = vpcmpb_avx512vl(auVar16,auVar13,0);
    uVar1 = vpcmpb_avx512vl(auVar16,auVar15,0);
    uVar10 = uVar10 + 0x80;
  } while ((int)uVar1 == 0 && (int)lVar2 == 0);
  if ((int)lVar2 == 0) {
    uVar3 = vpcmpb_avx512vl(auVar16,auVar14,0);
    lVar2 = 0;
    for (uVar8 = CONCAT44((int)uVar1,(int)uVar3); (uVar8 & 1) == 0;
        uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      lVar2 = lVar2 + 1;
    }
    return (uVar10 - (long)param_1) + 0x40 + lVar2;
  }
  uVar1 = vpcmpb_avx512vl(auVar16,auVar12,0);
  lVar5 = 0;
  for (uVar8 = lVar2 << 0x20 | CONCAT44((int)((ulong)param_1 >> 0x20),(int)uVar1); (uVar8 & 1) == 0;
      uVar8 = uVar8 >> 1 | 0x8000000000000000) {
    lVar5 = lVar5 + 1;
  }
  return lVar5 + (uVar10 - (long)param_1);
}

