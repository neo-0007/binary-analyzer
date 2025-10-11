
ulong FUN_0075fa80(undefined1 (*param_1) [32],ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 in_ZMM16 [64];
  
  if (param_2 == 0) {
    return 0;
  }
  auVar11 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  auVar16 = ZEXT1632(auVar11);
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    uVar1 = vpcmpd_avx512vl(auVar16,*param_1,0);
    uVar5 = (uint)uVar1;
    if (param_2 < 9) {
      uVar6 = 0;
      for (uVar5 = uVar5 | (uint)(1L << (param_2 & 0x3f)); (uVar5 & 1) == 0;
          uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (ulong)uVar6;
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (ulong)uVar6;
    }
  }
  else {
    uVar1 = vpcmpd_avx512vl(auVar16,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar6 = (uint)((ulong)param_1 >> 2) & 7;
    uVar5 = (int)uVar1 >> uVar6;
    if (uVar5 != 0) {
      uVar6 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar7 = (ulong)uVar6;
      if (param_2 < uVar7) {
        uVar7 = param_2 & 0xffffffff;
      }
      return uVar7;
    }
    if (param_2 <= 8 - uVar6) {
      return param_2 & 0xffffffff;
    }
  }
  uVar9 = (ulong)param_1 & 0xffffffffffffffe0;
  uVar6 = (int)(((int)uVar9 + 0xa4) - (uint)param_1) >> 2;
  auVar12 = ZEXT1632(auVar11);
  uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar9 + 0x20),0);
  uVar5 = (uint)uVar1;
  uVar7 = param_2 - uVar6;
  if (uVar6 <= param_2) {
    if (uVar5 != 0) {
      iVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      return (ulong)((uVar6 - 0x21) + iVar3);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar9 + 0x40),0);
    uVar5 = (uint)uVar1;
    if (uVar5 != 0) {
      iVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      return (ulong)((uVar6 - 0x19) + iVar3);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar9 + 0x60),0);
    uVar5 = (uint)uVar1;
    if (uVar5 != 0) {
      iVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      return (ulong)((uVar6 - 0x11) + iVar3);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar9 + 0x80),0);
    uVar5 = (uint)uVar1;
    if (uVar5 != 0) {
      iVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      return (ulong)((uVar6 - 9) + iVar3);
    }
    uVar8 = uVar9 + 0x20;
    if (uVar7 < 0x20) {
      auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0xa0));
    }
    else {
      uVar7 = uVar7 + (uint)((int)((uint)uVar8 & 0x7f) >> 2);
      uVar8 = uVar8 & 0xffffffffffffff80;
      while( true ) {
        auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x80));
        bVar10 = uVar7 < 0x20;
        uVar7 = uVar7 - 0x20;
        if (bVar10) break;
        auVar13 = vpminud_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xa0));
        auVar14 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xc0));
        auVar15 = vpminud_avx512vl(auVar14,*(undefined1 (*) [32])(uVar8 + 0xe0));
        uVar1 = vpcmpd_avx512vl(auVar16,auVar13,0);
        iVar3 = (int)uVar1;
        uVar1 = vpcmpd_avx512vl(auVar16,auVar15,0);
        uVar8 = uVar8 + 0x80;
        if ((int)uVar1 != 0 || iVar3 != 0) {
          uVar7 = uVar8 - (long)param_1 >> 2;
          if (iVar3 != 0) {
            uVar1 = vpcmpd_avx512vl(auVar16,auVar12,0);
            uVar5 = 0;
            for (uVar6 = iVar3 << 8 | (uint)uVar1; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000
                ) {
              uVar5 = uVar5 + 1;
            }
            return uVar5 + uVar7;
          }
          uVar2 = vpcmpd_avx512vl(auVar16,auVar14,0);
          uVar5 = 0;
          for (uVar6 = (uint)CONCAT11((char)uVar1,(char)uVar2); (uVar6 & 1) == 0;
              uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          return uVar7 + 0x10 + (ulong)uVar5;
        }
      }
    }
    uVar1 = vpcmpd_avx512vl(auVar16,auVar12,0);
    uVar5 = (uint)uVar1;
    uVar9 = uVar8 + 0x60;
  }
  if ((uVar7 & 0x10) == 0) {
    uVar6 = (uint)uVar7 & 0x1f;
    if (uVar5 == 0) {
      if (7 < uVar6) {
        uVar1 = vpcmpd_avx512vl(auVar16,*(undefined1 (*) [32])(uVar9 + 0x40),0);
        uVar5 = 0;
        for (uVar4 = (uint)uVar1; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 <= uVar6 - 8) {
          return ((long)(uVar9 - (long)param_1) >> 2) + 0x10 + (ulong)uVar5;
        }
      }
    }
    else {
      uVar4 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if (uVar4 <= uVar6) {
        return ((long)(uVar9 - (long)param_1) >> 2) + 8 + (ulong)uVar4;
      }
    }
    return param_2;
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    return ((long)(uVar9 - (long)param_1) >> 2) + 8 + (ulong)uVar6;
  }
  uVar1 = vpcmpd_avx512vl(auVar16,*(undefined1 (*) [32])(uVar9 + 0x40),0);
  uVar5 = (uint)uVar1;
  if (uVar5 == 0) {
    uVar6 = (uint)uVar7 & 0x1f;
    uVar1 = vpcmpd_avx512vl(auVar16,*(undefined1 (*) [32])(uVar9 + 0x60),0);
    uVar5 = (uint)uVar1;
    if (uVar5 == 0) {
      if (uVar6 < 0x18) {
        return param_2;
      }
      uVar1 = vpcmpd_avx512vl(auVar16,*(undefined1 (*) [32])(uVar9 + 0x80),0);
      uVar5 = 0;
      for (uVar4 = (uint)uVar1; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar6 - 0x18) {
        return ((long)(uVar9 - (long)param_1) >> 2) + 0x20 + (ulong)uVar5;
      }
    }
    else {
      uVar4 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if (uVar4 <= uVar6 - 0x10) {
        return ((long)(uVar9 - (long)param_1) >> 2) + 0x18 + (ulong)uVar4;
      }
    }
    return param_2;
  }
  uVar6 = 0;
  for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
    uVar6 = uVar6 + 1;
  }
  return ((long)(uVar9 - (long)param_1) >> 2) + 0x10 + (ulong)uVar6;
}

