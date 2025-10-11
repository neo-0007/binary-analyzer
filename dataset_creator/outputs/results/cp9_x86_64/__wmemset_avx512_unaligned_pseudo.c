
void __wmemset_avx512_unaligned(undefined1 (*param_1) [64],undefined1 param_2,long param_3)

{
  undefined1 (*pauVar1) [64];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [64];
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [64];
  
  uVar6 = param_3 * 4;
  auVar7 = vpbroadcastd_avx512f();
  if (uVar6 < 0x40) {
    if (((uint)param_1 & 0xfff) < 0xfc1) {
      auVar7 = vmovdqu8_avx512bw(auVar7);
      *param_1 = auVar7;
      return;
    }
    uVar5 = (uint)uVar6;
    if (0x1f < uVar5) {
      auVar3 = vmovdqu64_avx512vl(auVar7._0_32_);
      *(undefined1 (*) [32])*param_1 = auVar3;
      auVar3 = vmovdqu64_avx512vl(auVar7._0_32_);
      *(undefined1 (*) [32])(param_1[-1] + uVar6 + 0x20) = auVar3;
      return;
    }
    if (0xf < uVar5) {
      auVar2 = vmovdqu64_avx512vl(auVar7._0_16_);
      *(undefined1 (*) [16])*param_1 = auVar2;
      auVar2 = vmovdqu64_avx512vl(auVar7._0_16_);
      *(undefined1 (*) [16])(param_1[-1] + uVar6 + 0x30) = auVar2;
      return;
    }
    if (7 < uVar5) {
      *(long *)*param_1 = auVar7._0_8_;
      *(long *)(param_1[-1] + uVar6 + 0x38) = auVar7._0_8_;
      return;
    }
    if (3 < uVar5) {
      *(int *)*param_1 = auVar7._0_4_;
      *(int *)(param_1[-1] + uVar6 + 0x3c) = auVar7._0_4_;
      return;
    }
    if (1 < uVar5) {
      *(short *)*param_1 = auVar7._0_2_;
      param_1[-1][uVar6 + 0x3f] = auVar7[0];
      return;
    }
    if (uVar5 != 0) {
      (*param_1)[0] = param_2;
      return;
    }
  }
  else {
    if (uVar6 < 0x81) {
      auVar4 = vmovdqu64_avx512f(auVar7);
      *(undefined1 (*) [64])(param_1[-1] + uVar6) = auVar4;
      auVar7 = vmovdqu64_avx512f(auVar7);
      *param_1 = auVar7;
      return;
    }
    pauVar1 = (undefined1 (*) [64])(param_1[-8] + uVar6);
    auVar4 = vmovdqu64_avx512f(auVar7);
    *param_1 = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar7);
    param_1[1] = auVar4;
    if (uVar6 < 0x101) {
      auVar4 = vmovdqu64_avx512f(auVar7);
      pauVar1[6] = auVar4;
      auVar7 = vmovdqu64_avx512f(auVar7);
      pauVar1[7] = auVar7;
      return;
    }
    auVar4 = vmovdqu64_avx512f(auVar7);
    param_1[2] = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar7);
    param_1[3] = auVar4;
    if (param_1 < pauVar1) {
      param_1 = (undefined1 (*) [64])((ulong)param_1 & 0xffffffffffffff80);
      do {
        auVar4 = vmovdqa64_avx512f(auVar7);
        param_1[4] = auVar4;
        auVar4 = vmovdqa64_avx512f(auVar7);
        param_1[5] = auVar4;
        auVar4 = vmovdqa64_avx512f(auVar7);
        param_1[6] = auVar4;
        auVar4 = vmovdqa64_avx512f(auVar7);
        param_1[7] = auVar4;
        param_1 = param_1 + 4;
      } while (param_1 < pauVar1);
    }
    auVar4 = vmovdqu64_avx512f(auVar7);
    pauVar1[4] = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar7);
    pauVar1[5] = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar7);
    pauVar1[6] = auVar4;
    auVar7 = vmovdqu64_avx512f(auVar7);
    pauVar1[7] = auVar7;
  }
  return;
}

