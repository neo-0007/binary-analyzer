
ulong FUN_00755a60(undefined1 (*param_1) [32],ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 in_ZMM16 [64];
  
  if (param_2 == 0) {
    return 0;
  }
  auVar14 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar8 = (uint)param_1;
  auVar19 = ZEXT1632(auVar14);
  if ((uVar8 & 0xfff) < 0xfe1) {
    uVar1 = vpcmpb_avx512vl(auVar19,*param_1,0);
    uVar8 = (uint)uVar1;
    if (param_2 < 0x21) {
      uVar10 = 0;
      for (uVar8 = uVar8 | (uint)(1L << (param_2 & 0x3f)); (uVar8 & 1) == 0;
          uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return (ulong)uVar10;
    }
    if (uVar8 != 0) {
      uVar10 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return (ulong)uVar10;
    }
  }
  else {
    uVar1 = vpcmpb_avx512vl(auVar19,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar10 = (int)uVar1 >> (uVar8 & 0x1f);
    if (uVar10 != 0) {
      uVar8 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar8;
      if (param_2 < uVar9) {
        uVar9 = param_2 & 0xffffffff;
      }
      return uVar9;
    }
    if (param_2 <= 0x20 - (uVar8 & 0x1f)) {
      return param_2 & 0xffffffff;
    }
  }
  uVar12 = (ulong)param_1 & 0xffffffffffffffe0;
  uVar9 = (uVar12 + 0xa1) - (long)param_1;
  auVar15 = ZEXT1632(auVar14);
  uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])(uVar12 + 0x20),0);
  uVar8 = (uint)uVar1;
  uVar11 = param_2 - uVar9;
  if (uVar9 <= param_2) {
    iVar7 = (int)uVar9;
    if (uVar8 != 0) {
      iVar4 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar7 + -0x81 + iVar4);
    }
    uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])(uVar12 + 0x40),0);
    uVar8 = (uint)uVar1;
    if (uVar8 != 0) {
      iVar4 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar7 + -0x61 + iVar4);
    }
    uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])(uVar12 + 0x60),0);
    uVar8 = (uint)uVar1;
    if (uVar8 != 0) {
      iVar4 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar7 + -0x41 + iVar4);
    }
    uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])(uVar12 + 0x80),0);
    uVar8 = (uint)uVar1;
    if (uVar8 != 0) {
      iVar4 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      return (ulong)(uint)(iVar7 + -0x21 + iVar4);
    }
    uVar9 = uVar12 + 0x20;
    if (uVar11 < 0x80) {
      auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar12 + 0xa0));
    }
    else {
      uVar11 = uVar11 + ((uint)uVar9 & 0x7f);
      uVar9 = uVar9 & 0xffffffffffffff80;
      while( true ) {
        auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x80));
        bVar13 = uVar11 < 0x80;
        uVar11 = uVar11 - 0x80;
        if (bVar13) break;
        auVar16 = vpminub_avx512vl(auVar15,*(undefined1 (*) [32])(uVar9 + 0xa0));
        auVar17 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0xc0));
        auVar18 = vpminub_avx512vl(auVar17,*(undefined1 (*) [32])(uVar9 + 0xe0));
        lVar2 = vpcmpb_avx512vl(auVar19,auVar16,0);
        uVar1 = vpcmpb_avx512vl(auVar19,auVar18,0);
        uVar9 = uVar9 + 0x80;
        if ((int)uVar1 != 0 || (int)lVar2 != 0) {
          if ((int)lVar2 != 0) {
            uVar1 = vpcmpb_avx512vl(auVar19,auVar15,0);
            lVar6 = 0;
            for (uVar11 = lVar2 << 0x20 | CONCAT44((int)((ulong)param_1 >> 0x20),(int)uVar1);
                (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
              lVar6 = lVar6 + 1;
            }
            return lVar6 + (uVar9 - (long)param_1);
          }
          uVar3 = vpcmpb_avx512vl(auVar19,auVar17,0);
          lVar2 = 0;
          for (uVar11 = CONCAT44((int)uVar1,(int)uVar3); (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x8000000000000000) {
            lVar2 = lVar2 + 1;
          }
          return (uVar9 - (long)param_1) + 0x40 + lVar2;
        }
      }
    }
    uVar1 = vpcmpb_avx512vl(auVar19,auVar15,0);
    uVar8 = (uint)uVar1;
    uVar12 = uVar9 + 0x60;
  }
  if ((uVar11 & 0x40) == 0) {
    uVar10 = (uint)uVar11 & 0x7f;
    if (uVar8 == 0) {
      if (0x1f < uVar10) {
        uVar1 = vpcmpb_avx512vl(auVar19,*(undefined1 (*) [32])(uVar12 + 0x40),0);
        uVar8 = 0;
        for (uVar5 = (uint)uVar1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        if (uVar8 <= uVar10 - 0x20) {
          return (uVar12 - (long)param_1) + 0x40 + (ulong)uVar8;
        }
      }
    }
    else {
      uVar5 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar10) {
        return (uVar12 - (long)param_1) + 0x20 + (ulong)uVar5;
      }
    }
    return param_2;
  }
  if (uVar8 != 0) {
    uVar10 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    return (uVar12 - (long)param_1) + 0x20 + (ulong)uVar10;
  }
  uVar1 = vpcmpb_avx512vl(auVar19,*(undefined1 (*) [32])(uVar12 + 0x40),0);
  uVar8 = (uint)uVar1;
  if (uVar8 == 0) {
    uVar10 = (uint)uVar11 & 0x7f;
    uVar1 = vpcmpb_avx512vl(auVar19,*(undefined1 (*) [32])(uVar12 + 0x60),0);
    uVar8 = (uint)uVar1;
    if (uVar8 == 0) {
      if (uVar10 < 0x60) {
        return param_2;
      }
      uVar1 = vpcmpb_avx512vl(auVar19,*(undefined1 (*) [32])(uVar12 + 0x80),0);
      uVar8 = 0;
      for (uVar5 = (uint)uVar1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      if (uVar8 <= uVar10 - 0x60) {
        return (uVar12 - (long)param_1) + 0x80 + (ulong)uVar8;
      }
    }
    else {
      uVar5 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 <= uVar10 - 0x40) {
        return (uVar12 - (long)param_1) + 0x60 + (ulong)uVar5;
      }
    }
    return param_2;
  }
  uVar10 = 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar10 = uVar10 + 1;
  }
  return (uVar12 - (long)param_1) + 0x40 + (ulong)uVar10;
}

