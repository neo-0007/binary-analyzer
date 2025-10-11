
undefined1 (*) [64]
__memset_avx512_unaligned_erms(undefined1 (*param_1) [64],undefined1 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [64];
  uint uVar4;
  undefined1 (*pauVar5) [64];
  undefined1 (*pauVar6) [64];
  undefined1 auVar7 [64];
  
  auVar7 = vpbroadcastb_avx512bw();
  if (param_3 < 0x40) {
    if (((uint)param_1 & 0xfff) < 0xfc1) {
      auVar7 = vmovdqu8_avx512bw(auVar7);
      *param_1 = auVar7;
      return param_1;
    }
    uVar4 = (uint)param_3;
    if (0x1f < uVar4) {
      auVar2 = vmovdqu64_avx512vl(auVar7._0_32_);
      *(undefined1 (*) [32])*param_1 = auVar2;
      auVar2 = vmovdqu64_avx512vl(auVar7._0_32_);
      *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar2;
      return param_1;
    }
    if (0xf < uVar4) {
      auVar1 = vmovdqu64_avx512vl(auVar7._0_16_);
      *(undefined1 (*) [16])*param_1 = auVar1;
      auVar1 = vmovdqu64_avx512vl(auVar7._0_16_);
      *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x30) = auVar1;
      return param_1;
    }
    if (7 < uVar4) {
      *(long *)*param_1 = auVar7._0_8_;
      *(long *)(param_1[-1] + param_3 + 0x38) = auVar7._0_8_;
      return param_1;
    }
    if (3 < uVar4) {
      *(int *)*param_1 = auVar7._0_4_;
      *(int *)(param_1[-1] + param_3 + 0x3c) = auVar7._0_4_;
      return param_1;
    }
    if (1 < uVar4) {
      *(short *)*param_1 = auVar7._0_2_;
      param_1[-1][param_3 + 0x3f] = auVar7[0];
      return param_1;
    }
    if (uVar4 != 0) {
      (*param_1)[0] = param_2;
      return param_1;
    }
  }
  else {
    if (param_3 < 0x81) {
      auVar3 = vmovdqu64_avx512f(auVar7);
      *param_1 = auVar3;
      auVar7 = vmovdqu64_avx512f(auVar7);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar7;
      return param_1;
    }
    pauVar5 = param_1;
    if (__x86_rep_stosb_threshold < param_3) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*pauVar5)[0] = param_2;
        pauVar5 = (undefined1 (*) [64])(*pauVar5 + 1);
      }
      return param_1;
    }
    pauVar5 = (undefined1 (*) [64])(param_1[-8] + param_3);
    auVar3 = vmovdqu64_avx512f(auVar7);
    *param_1 = auVar3;
    auVar3 = vmovdqu64_avx512f(auVar7);
    param_1[1] = auVar3;
    if (param_3 < 0x101) {
      auVar3 = vmovdqu64_avx512f(auVar7);
      pauVar5[6] = auVar3;
      auVar7 = vmovdqu64_avx512f(auVar7);
      pauVar5[7] = auVar7;
      return param_1;
    }
    auVar3 = vmovdqu64_avx512f(auVar7);
    param_1[2] = auVar3;
    auVar3 = vmovdqu64_avx512f(auVar7);
    param_1[3] = auVar3;
    if (param_1 < pauVar5) {
      pauVar6 = (undefined1 (*) [64])((ulong)param_1 & 0xffffffffffffff80);
      do {
        auVar3 = vmovdqa64_avx512f(auVar7);
        pauVar6[4] = auVar3;
        auVar3 = vmovdqa64_avx512f(auVar7);
        pauVar6[5] = auVar3;
        auVar3 = vmovdqa64_avx512f(auVar7);
        pauVar6[6] = auVar3;
        auVar3 = vmovdqa64_avx512f(auVar7);
        pauVar6[7] = auVar3;
        pauVar6 = pauVar6 + 4;
      } while (pauVar6 < pauVar5);
    }
    auVar3 = vmovdqu64_avx512f(auVar7);
    pauVar5[4] = auVar3;
    auVar3 = vmovdqu64_avx512f(auVar7);
    pauVar5[5] = auVar3;
    auVar3 = vmovdqu64_avx512f(auVar7);
    pauVar5[6] = auVar3;
    auVar7 = vmovdqu64_avx512f(auVar7);
    pauVar5[7] = auVar7;
  }
  return param_1;
}

