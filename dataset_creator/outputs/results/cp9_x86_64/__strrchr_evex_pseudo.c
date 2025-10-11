
undefined1 * __strrchr_evex(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [32];
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 in_ZMM16 [64];
  
  auVar13 = vpbroadcastb_avx512vl();
  auVar12 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  if (((uint)param_1 & 0x3f) < 0x21) {
    auVar14 = vmovdqu64_avx512vl(*param_1);
    uVar1 = vpcmpb_avx512vl(auVar14,ZEXT1632(auVar12),0);
    uVar5 = (uint)uVar1;
    uVar2 = vpcmpb_avx512vl(auVar14,auVar13,0);
    uVar6 = (uint)uVar2;
    param_1 = param_1 + 1;
    if (uVar6 == 0) {
      if (uVar5 != 0) {
        return (undefined1 *)0x0;
      }
      pauVar11 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
      uVar2 = 0;
    }
    else {
      if (uVar5 != 0) {
LAB_0074c4e5:
        uVar6 = uVar6 & (uVar5 - 1 ^ uVar5);
        if (uVar6 == 0) {
          return (undefined1 *)0x0;
        }
        uVar5 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
          }
        }
        return param_1[-1] + uVar5;
      }
      pauVar11 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
      param_2 = param_1;
    }
  }
  else {
    uVar8 = (uint)param_1 & 0x1f;
    auVar14 = vmovdqa64_avx512vl(*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0));
    uVar1 = vpcmpb_avx512vl(auVar14,ZEXT1632(auVar12),0);
    uVar3 = vpcmpb_avx512vl(auVar14,auVar13,0);
    uVar5 = (uint)uVar1 >> uVar8;
    uVar6 = (uint)uVar3 >> uVar8;
    pauVar11 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0) + 1;
    if (uVar6 == 0) {
      uVar2 = (ulong)uVar5;
      if (uVar5 != 0) {
        return (undefined1 *)0x0;
      }
    }
    else {
      if (uVar5 != 0) {
        param_1 = (undefined1 (*) [32])(*pauVar11 + uVar8);
        goto LAB_0074c4e5;
      }
      uVar2 = (ulong)uVar6;
      param_2 = (undefined1 (*) [32])(*pauVar11 + uVar8);
    }
  }
LAB_0074c3e0:
  do {
    pauVar10 = param_2;
    uVar9 = uVar2;
    auVar14 = vmovdqa64_avx512vl(*pauVar11);
    auVar15 = ZEXT1632(auVar12);
    uVar1 = vpcmpb_avx512vl(auVar14,auVar15,0);
    uVar5 = (uint)uVar1;
    uVar7 = vpcmpb_avx512vl(auVar14,auVar13,0);
    pauVar4 = pauVar11 + 1;
    if (uVar5 == 0 && (int)uVar7 == 0) {
      auVar14 = vmovdqa64_avx512vl(pauVar11[1]);
      uVar1 = vpcmpb_avx512vl(auVar14,auVar15,0);
      uVar5 = (uint)uVar1;
      uVar7 = vpcmpb_avx512vl(auVar14,auVar13,0);
      pauVar4 = pauVar11 + 2;
      if (uVar5 == 0 && (int)uVar7 == 0) {
        auVar14 = vmovdqa64_avx512vl(pauVar11[2]);
        uVar1 = vpcmpb_avx512vl(auVar14,auVar15,0);
        uVar5 = (uint)uVar1;
        uVar7 = vpcmpb_avx512vl(auVar14,auVar13,0);
        pauVar4 = pauVar11 + 3;
        if (uVar5 == 0 && (int)uVar7 == 0) {
          auVar14 = vmovdqa64_avx512vl(pauVar11[3]);
          pauVar11 = pauVar11 + 4;
          uVar1 = vpcmpb_avx512vl(auVar14,auVar15,0);
          uVar5 = (uint)uVar1;
          uVar7 = vpcmpb_avx512vl(auVar14,auVar13,0);
          uVar2 = uVar9;
          param_2 = pauVar10;
          pauVar4 = pauVar11;
          if (uVar5 == 0 && (int)uVar7 == 0) goto LAB_0074c3e0;
        }
      }
    }
    pauVar11 = pauVar4;
    if ((uint)uVar7 == 0) goto LAB_0074c484;
    uVar2 = uVar7;
    param_2 = pauVar11;
    if (uVar5 != 0) {
      uVar5 = (uint)uVar7 & (uVar5 - 1 ^ uVar5);
      if (uVar5 != 0) {
        uVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        return pauVar11[-1] + uVar6;
      }
LAB_0074c484:
      uVar5 = (uint)uVar9;
      if (uVar5 == 0) {
        return (undefined1 *)0x0;
      }
      uVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      return pauVar10[-1] + uVar6;
    }
  } while( true );
}

