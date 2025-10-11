
void FUN_00752c40(undefined1 (*param_1) [32],undefined1 param_2,long param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  uint uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [32];
  
  uVar5 = param_3 * 4;
  auVar7 = vpbroadcastd_avx512vl();
  if (uVar5 < 0x20) {
    if (((uint)param_1 & 0xfff) < 0xfe1) {
      auVar7 = vmovdqu8_avx512vl(auVar7);
      *param_1 = auVar7;
      return;
    }
    uVar4 = (uint)uVar5;
    if (0xf < uVar4) {
      auVar2 = vmovdqu64_avx512vl(auVar7._0_16_);
      *(undefined1 (*) [16])*param_1 = auVar2;
      auVar2 = vmovdqu64_avx512vl(auVar7._0_16_);
      *(undefined1 (*) [16])(param_1[-1] + uVar5 + 0x10) = auVar2;
      return;
    }
    if (7 < uVar4) {
      *(long *)*param_1 = auVar7._0_8_;
      *(long *)(param_1[-1] + uVar5 + 0x18) = auVar7._0_8_;
      return;
    }
    if (3 < uVar4) {
      *(int *)*param_1 = auVar7._0_4_;
      *(int *)(param_1[-1] + uVar5 + 0x1c) = auVar7._0_4_;
      return;
    }
    if (1 < uVar4) {
      *(short *)*param_1 = auVar7._0_2_;
      param_1[-1][uVar5 + 0x1f] = auVar7[0];
      return;
    }
    if (uVar4 != 0) {
      (*param_1)[0] = param_2;
      return;
    }
  }
  else {
    if (uVar5 < 0x41) {
      auVar3 = vmovdqu64_avx512vl(auVar7);
      *(undefined1 (*) [32])(param_1[-1] + uVar5) = auVar3;
      auVar7 = vmovdqu64_avx512vl(auVar7);
      *param_1 = auVar7;
      return;
    }
    pauVar1 = (undefined1 (*) [32])(param_1[-4] + uVar5);
    auVar3 = vmovdqu64_avx512vl(auVar7);
    *param_1 = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar7);
    param_1[1] = auVar3;
    if (uVar5 < 0x81) {
      auVar3 = vmovdqu64_avx512vl(auVar7);
      pauVar1[2] = auVar3;
      auVar7 = vmovdqu64_avx512vl(auVar7);
      pauVar1[3] = auVar7;
      return;
    }
    auVar3 = vmovdqu64_avx512vl(auVar7);
    param_1[2] = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar7);
    param_1[3] = auVar3;
    if (param_1 + 4 < pauVar1) {
      pauVar6 = (undefined1 (*) [32])((ulong)(param_1 + 4) & 0xffffffffffffffc0);
      do {
        auVar3 = vmovdqa64_avx512vl(auVar7);
        *pauVar6 = auVar3;
        auVar3 = vmovdqa64_avx512vl(auVar7);
        pauVar6[1] = auVar3;
        auVar3 = vmovdqa64_avx512vl(auVar7);
        pauVar6[2] = auVar3;
        auVar3 = vmovdqa64_avx512vl(auVar7);
        pauVar6[3] = auVar3;
        pauVar6 = pauVar6 + 4;
      } while (pauVar6 < pauVar1);
    }
    auVar3 = vmovdqu64_avx512vl(auVar7);
    *pauVar1 = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar7);
    pauVar1[1] = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar7);
    pauVar1[2] = auVar3;
    auVar7 = vmovdqu64_avx512vl(auVar7);
    pauVar1[3] = auVar7;
  }
  return;
}

