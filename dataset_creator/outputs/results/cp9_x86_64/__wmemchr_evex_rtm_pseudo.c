
undefined1 * __wmemchr_evex_rtm(undefined1 (*param_1) [32],undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
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
  undefined1 in_ZMM23 [64];
  
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  auVar12 = vpbroadcastd_avx512vl();
  uVar3 = (uint)param_1 & 0xfff;
  if (uVar3 < 0xfe1) {
    uVar1 = vpcmpd_avx512vl(auVar12,*param_1,0);
    uVar4 = (uint)uVar1;
    if (param_3 < 9) {
LAB_00756a60:
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      puVar5 = *param_1 + (ulong)uVar3 * 4;
      if ((int)param_3 <= (int)uVar3) {
        puVar5 = (undefined1 *)0x0;
      }
      return puVar5;
    }
    if (uVar4 != 0) {
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return *param_1 + (ulong)uVar3 * 4;
    }
  }
  else {
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar3 = (int)uVar3 >> 2;
    uVar4 = (int)uVar1 >> (uVar3 & 7);
    if (param_3 <= 0x400 - uVar3) goto LAB_00756a60;
    if (uVar4 != 0) {
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return *param_1 + (ulong)uVar3 * 4;
    }
  }
  uVar8 = (ulong)param_1 & 0xffffffffffffffe0;
  uVar9 = (ulong)(uint)((int)(((int)uVar8 + 0xa0) - (uint)param_1) >> 2);
  uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x20),0);
  uVar3 = (uint)uVar1;
  uVar7 = param_3 - uVar9;
  if (uVar9 <= param_3 && uVar7 != 0) {
    if (uVar3 != 0) {
      uVar4 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x20 + (ulong)uVar4 * 4);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x40),0);
    uVar3 = (uint)uVar1;
    if (uVar3 != 0) {
      uVar4 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x40 + (ulong)uVar4 * 4);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x60),0);
    uVar3 = (uint)uVar1;
    if (uVar3 != 0) {
      uVar4 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x60 + (ulong)uVar4 * 4);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x80),0);
    uVar3 = (uint)uVar1;
    if (uVar3 != 0) {
      uVar4 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x80 + (ulong)uVar4 * 4);
    }
    bVar10 = uVar7 < 0x20;
    uVar7 = uVar7 - 0x20;
    if (bVar10 || uVar7 == 0) {
      uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xa0),0);
      uVar3 = (uint)uVar1;
      uVar8 = uVar8 + 0x80;
      if (uVar3 != 0) goto LAB_00756c00;
      uVar3 = (int)uVar7 + 0x10;
      if (uVar3 != 0 && SCARRY4((int)uVar7,0x10) == (int)uVar3 < 0) goto LAB_00756cb0;
      goto LAB_00756bd9;
    }
    uVar9 = uVar8 + 0x20 & 0xffffffffffffff80;
    uVar7 = uVar7 + (uint)((int)(uVar8 + 0x20) - (int)uVar9 >> 2);
    auVar11 = vpxorq_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    do {
      uVar8 = uVar9;
      uVar9 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x80),4);
      auVar13 = vpxorq_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xa0));
      auVar14 = vpxorq_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xc0));
      uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xe0),0);
      uVar3 = (uint)uVar1;
      auVar14 = vpminud_avx512vl(auVar14,auVar13);
      auVar15._4_4_ = (uint)((byte)(uVar9 >> 1) & 1) * auVar14._4_4_;
      auVar15._0_4_ = (uint)((byte)uVar9 & 1) * auVar14._0_4_;
      auVar15._8_4_ = (uint)((byte)(uVar9 >> 2) & 1) * auVar14._8_4_;
      auVar15._12_4_ = (uint)((byte)(uVar9 >> 3) & 1) * auVar14._12_4_;
      auVar15._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar14._16_4_;
      auVar15._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar14._20_4_;
      auVar15._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar14._24_4_;
      auVar15._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar14._28_4_;
      uVar1 = vpcmpd_avx512vl(ZEXT1632(auVar11),auVar15,0);
      uVar4 = (uint)uVar1;
      if (uVar3 != 0 || uVar4 != 0) {
        uVar6 = (int)uVar9 - 0xff;
        if (uVar6 != 0) {
          uVar3 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          return (undefined1 *)(uVar8 + 0x80 + (ulong)uVar3 * 4);
        }
        uVar1 = vpcmpd_avx512vl(ZEXT1632(auVar11),auVar13,0);
        uVar6 = (uint)uVar1;
        if (uVar6 != 0) {
          uVar3 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          return (undefined1 *)(uVar8 + 0xa0 + (ulong)uVar3 * 4);
        }
        if (uVar4 != 0) {
          uVar3 = 0;
          for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          return (undefined1 *)(uVar8 + 0xc0 + (ulong)uVar3 * 4);
        }
        uVar4 = 0;
        for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        return (undefined1 *)(uVar8 + 0xe0 + (ulong)uVar4 * 4);
      }
      bVar10 = 0x1f < uVar7;
      uVar7 = uVar7 - 0x20;
      uVar9 = uVar8 + 0x80;
    } while (bVar10 && uVar7 != 0);
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x100),0);
    uVar3 = (uint)uVar1;
    uVar8 = uVar8 + 0xe0;
  }
  if (uVar3 != 0) {
LAB_00756c00:
    uVar4 = 0;
    for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    if ((int)uVar7 + 0x20U <= uVar4) {
      return (undefined1 *)0x0;
    }
    return (undefined1 *)(uVar8 + 0x20 + (ulong)uVar4 * 4);
  }
  uVar3 = (int)uVar7 + 0x10;
  if (uVar3 != 0 && SCARRY4((int)uVar7,0x10) == (int)uVar3 < 0) {
LAB_00756cb0:
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x40),0);
    uVar4 = (uint)uVar1;
    if (uVar4 != 0) {
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return (undefined1 *)(uVar8 + 0x40 + (ulong)uVar3 * 4);
    }
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x60),0);
    sVar2 = ((byte)uVar3 < 0x21) * (' ' - (byte)uVar3);
    uVar6 = (uint)(0xffff << sVar2) >> sVar2;
    uVar4 = (uint)uVar1 & uVar6;
    puVar5 = (undefined1 *)(ulong)uVar4;
    if (uVar4 != 0) {
      uVar3 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return (undefined1 *)(uVar8 + 0x60 + (ulong)uVar3 * 4);
    }
    if (8 < uVar3) {
      uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x80),0);
      uVar3 = (uint)uVar1 & uVar6 >> 8;
      puVar5 = (undefined1 *)(ulong)uVar3;
      if (uVar3 != 0) {
        uVar4 = 0;
        for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        puVar5 = (undefined1 *)(uVar8 + 0x80 + (ulong)uVar4 * 4);
      }
    }
    return puVar5;
  }
LAB_00756bd9:
  puVar5 = (undefined1 *)0x0;
  if (uVar3 != 0xfffffff8 && SCARRY4(uVar3,8) == (int)(uVar3 + 8) < 0) {
    uVar1 = vpcmpd_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x40),0);
    uVar4 = 0;
    for (uVar6 = (uint)uVar1; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    if (uVar3 + 8 <= uVar4) {
      return (undefined1 *)0x0;
    }
    puVar5 = (undefined1 *)(uVar8 + 0x40 + (ulong)uVar4 * 4);
  }
  return puVar5;
}

