
undefined1 * __memchr_evex_rtm(undefined1 (*param_1) [32],undefined8 param_2,ulong param_3)

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
  auVar12 = vpbroadcastb_avx512vl();
  uVar6 = (uint)param_1;
  if ((uVar6 & 0xfff) < 0xfe1) {
    uVar1 = vpcmpb_avx512vl(auVar12,*param_1,0);
    uVar4 = (uint)uVar1;
    if (param_3 < 0x21) {
LAB_0074c580:
      uVar6 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      puVar5 = *param_1 + uVar6;
      if ((int)param_3 <= (int)uVar6) {
        puVar5 = (undefined1 *)0x0;
      }
      return puVar5;
    }
    if (uVar4 != 0) {
      uVar6 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return *param_1 + uVar6;
    }
  }
  else {
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar4 = (int)uVar1 >> (uVar6 & 0x1f);
    if (param_3 <= 0x1000 - (uVar6 & 0xfff)) goto LAB_0074c580;
    if (uVar4 != 0) {
      uVar6 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return *param_1 + uVar6;
    }
  }
  uVar8 = (ulong)param_1 & 0xffffffffffffffe0;
  uVar9 = (ulong)(((int)uVar8 + 0xa0) - uVar6);
  uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x20),0);
  uVar6 = (uint)uVar1;
  uVar7 = param_3 - uVar9;
  if (uVar9 <= param_3 && uVar7 != 0) {
    if (uVar6 != 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x20 + (ulong)uVar4);
    }
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x40),0);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x40 + (ulong)uVar4);
    }
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x60),0);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x60 + (ulong)uVar4);
    }
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x80),0);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (undefined1 *)(uVar8 + 0x80 + (ulong)uVar4);
    }
    bVar10 = uVar7 < 0x80;
    uVar7 = uVar7 - 0x80;
    if (bVar10 || uVar7 == 0) {
      uVar9 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xa0),0);
      uVar6 = (uint)uVar9;
      puVar5 = (undefined1 *)(uVar9 & 0xffffffff);
      uVar8 = uVar8 + 0x80;
      if (uVar6 != 0) goto LAB_0074c700;
      uVar6 = (int)uVar7 + 0x40;
      if (uVar6 != 0 && SCARRY4((int)uVar7,0x40) == (int)uVar6 < 0) goto LAB_0074c7a0;
      goto LAB_0074c6dc;
    }
    uVar9 = uVar8 + 0x20 & 0xffffffffffffff80;
    uVar7 = (uVar7 + uVar8 + 0x20) - uVar9;
    auVar11 = vpxorq_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    do {
      uVar8 = uVar9;
      uVar9 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x80),4);
      auVar13 = vpxorq_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xa0));
      auVar14 = vpxorq_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xc0));
      uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0xe0),0);
      uVar6 = (uint)uVar1;
      auVar14 = vpminub_avx512vl(auVar14,auVar13);
      auVar15[1] = ((byte)(uVar9 >> 1) & 1) * auVar14[1];
      auVar15[0] = ((byte)uVar9 & 1) * auVar14[0];
      auVar15[2] = ((byte)(uVar9 >> 2) & 1) * auVar14[2];
      auVar15[3] = ((byte)(uVar9 >> 3) & 1) * auVar14[3];
      auVar15[4] = ((byte)(uVar9 >> 4) & 1) * auVar14[4];
      auVar15[5] = ((byte)(uVar9 >> 5) & 1) * auVar14[5];
      auVar15[6] = ((byte)(uVar9 >> 6) & 1) * auVar14[6];
      auVar15[7] = ((byte)(uVar9 >> 7) & 1) * auVar14[7];
      auVar15[8] = ((byte)(uVar9 >> 8) & 1) * auVar14[8];
      auVar15[9] = ((byte)(uVar9 >> 9) & 1) * auVar14[9];
      auVar15[10] = ((byte)(uVar9 >> 10) & 1) * auVar14[10];
      auVar15[0xb] = ((byte)(uVar9 >> 0xb) & 1) * auVar14[0xb];
      auVar15[0xc] = ((byte)(uVar9 >> 0xc) & 1) * auVar14[0xc];
      auVar15[0xd] = ((byte)(uVar9 >> 0xd) & 1) * auVar14[0xd];
      auVar15[0xe] = ((byte)(uVar9 >> 0xe) & 1) * auVar14[0xe];
      auVar15[0xf] = ((byte)(uVar9 >> 0xf) & 1) * auVar14[0xf];
      auVar15[0x10] = ((byte)(uVar9 >> 0x10) & 1) * auVar14[0x10];
      auVar15[0x11] = ((byte)(uVar9 >> 0x11) & 1) * auVar14[0x11];
      auVar15[0x12] = ((byte)(uVar9 >> 0x12) & 1) * auVar14[0x12];
      auVar15[0x13] = ((byte)(uVar9 >> 0x13) & 1) * auVar14[0x13];
      auVar15[0x14] = ((byte)(uVar9 >> 0x14) & 1) * auVar14[0x14];
      auVar15[0x15] = ((byte)(uVar9 >> 0x15) & 1) * auVar14[0x15];
      auVar15[0x16] = ((byte)(uVar9 >> 0x16) & 1) * auVar14[0x16];
      auVar15[0x17] = ((byte)(uVar9 >> 0x17) & 1) * auVar14[0x17];
      auVar15[0x18] = ((byte)(uVar9 >> 0x18) & 1) * auVar14[0x18];
      auVar15[0x19] = ((byte)(uVar9 >> 0x19) & 1) * auVar14[0x19];
      auVar15[0x1a] = ((byte)(uVar9 >> 0x1a) & 1) * auVar14[0x1a];
      auVar15[0x1b] = ((byte)(uVar9 >> 0x1b) & 1) * auVar14[0x1b];
      auVar15[0x1c] = ((byte)(uVar9 >> 0x1c) & 1) * auVar14[0x1c];
      auVar15._30_2_ = auVar14._30_2_;
      auVar15[0x1d] = ((byte)(uVar9 >> 0x1d) & 1) * auVar14[0x1d];
      uVar1 = vpcmpb_avx512vl(ZEXT1632(auVar11),auVar15,0);
      uVar4 = (uint)uVar1;
      if (uVar6 != 0 || uVar4 != 0) {
        uVar3 = (int)uVar9 + 1;
        if (uVar3 != 0) {
          uVar6 = 0;
          for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          return (undefined1 *)(uVar8 + 0x80 + (ulong)uVar6);
        }
        uVar1 = vpcmpb_avx512vl(ZEXT1632(auVar11),auVar13,0);
        uVar3 = (uint)uVar1;
        if (uVar3 != 0) {
          uVar6 = 0;
          for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          return (undefined1 *)(uVar8 + 0xa0 + (ulong)uVar6);
        }
        if (uVar4 != 0) {
          uVar6 = 0;
          for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          return (undefined1 *)(uVar8 + 0xc0 + (ulong)uVar6);
        }
        uVar4 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        return (undefined1 *)(uVar8 + 0xe0 + (ulong)uVar4);
      }
      bVar10 = 0x7f < uVar7;
      uVar7 = uVar7 - 0x80;
      uVar9 = uVar8 + 0x80;
    } while (bVar10 && uVar7 != 0);
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x100),0);
    uVar6 = (uint)uVar1;
    uVar8 = uVar8 + 0xe0;
  }
  puVar5 = (undefined1 *)(ulong)uVar6;
  if (uVar6 != 0) {
LAB_0074c700:
    uVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    if ((int)uVar7 + 0x80U <= uVar4) {
      return (undefined1 *)0x0;
    }
    return (undefined1 *)(uVar8 + 0x20 + (ulong)uVar4);
  }
  uVar6 = (int)uVar7 + 0x40;
  if (uVar6 != 0 && SCARRY4((int)uVar7,0x40) == (int)uVar6 < 0) {
LAB_0074c7a0:
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x40),0);
    uVar4 = (uint)uVar1;
    if (uVar4 != 0) {
      uVar6 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (undefined1 *)(uVar8 + 0x40 + (ulong)uVar6);
    }
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x60),0);
    sVar2 = ((byte)uVar6 < 0x41) * ('@' - (byte)uVar6);
    uVar7 = (ulong)(-1L << sVar2) >> sVar2;
    uVar4 = (uint)uVar1 & (uint)uVar7;
    puVar5 = (undefined1 *)(ulong)uVar4;
    if (uVar4 != 0) {
      uVar6 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (undefined1 *)(uVar8 + 0x60 + (ulong)uVar6);
    }
    if (0x20 < uVar6) {
      uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x80),0);
      uVar6 = (uint)uVar1 & (uint)(uVar7 >> 0x20);
      puVar5 = (undefined1 *)(ulong)uVar6;
      if (uVar6 != 0) {
        uVar4 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        puVar5 = (undefined1 *)(uVar8 + 0x80 + (ulong)uVar4);
      }
    }
    return puVar5;
  }
LAB_0074c6dc:
  if (uVar6 != 0xffffffe0 && SCARRY4(uVar6,0x20) == (int)(uVar6 + 0x20) < 0) {
    uVar1 = vpcmpb_avx512vl(auVar12,*(undefined1 (*) [32])(uVar8 + 0x40),0);
    uVar4 = 0;
    for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    if (uVar6 + 0x20 <= uVar4) {
      return (undefined1 *)0x0;
    }
    puVar5 = (undefined1 *)(uVar8 + 0x40 + (ulong)uVar4);
  }
  return puVar5;
}

