
void __memset_avx512_unaligned(undefined1 (*param_1) [64],undefined1 param_2,ulong param_3)

{
  undefined1 (*pauVar1) [64];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [64];
  uint uVar5;
  undefined1 auVar6 [64];
  
  uVar5 = (uint)param_3;
  auVar6 = vpbroadcastb_avx512bw();
  if (param_3 < 0x40) {
    if (((uint)param_1 & 0xfff) < 0xfc1) {
      auVar6 = vmovdqu8_avx512bw(auVar6);
      *param_1 = auVar6;
      return;
    }
    if (0x1f < uVar5) {
      auVar3 = vmovdqu64_avx512vl(auVar6._0_32_);
      *(undefined1 (*) [32])*param_1 = auVar3;
      auVar3 = vmovdqu64_avx512vl(auVar6._0_32_);
      *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar3;
      return;
    }
    if (0xf < uVar5) {
      auVar2 = vmovdqu64_avx512vl(auVar6._0_16_);
      *(undefined1 (*) [16])*param_1 = auVar2;
      auVar2 = vmovdqu64_avx512vl(auVar6._0_16_);
      *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x30) = auVar2;
      return;
    }
    if (7 < uVar5) {
      *(long *)*param_1 = auVar6._0_8_;
      *(long *)(param_1[-1] + param_3 + 0x38) = auVar6._0_8_;
      return;
    }
    if (3 < uVar5) {
      *(int *)*param_1 = auVar6._0_4_;
      *(int *)(param_1[-1] + param_3 + 0x3c) = auVar6._0_4_;
      return;
    }
    if (1 < uVar5) {
      *(short *)*param_1 = auVar6._0_2_;
      param_1[-1][param_3 + 0x3f] = auVar6[0];
      return;
    }
    if (uVar5 != 0) {
      (*param_1)[0] = param_2;
      return;
    }
  }
  else {
    if (param_3 < 0x81) {
      auVar4 = vmovdqu64_avx512f(auVar6);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar4;
      auVar6 = vmovdqu64_avx512f(auVar6);
      *param_1 = auVar6;
      return;
    }
    pauVar1 = (undefined1 (*) [64])(param_1[-8] + param_3);
    auVar4 = vmovdqu64_avx512f(auVar6);
    *param_1 = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar6);
    param_1[1] = auVar4;
    if (param_3 < 0x101) {
      auVar4 = vmovdqu64_avx512f(auVar6);
      pauVar1[6] = auVar4;
      auVar6 = vmovdqu64_avx512f(auVar6);
      pauVar1[7] = auVar6;
      return;
    }
    auVar4 = vmovdqu64_avx512f(auVar6);
    param_1[2] = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar6);
    param_1[3] = auVar4;
    if (param_1 < pauVar1) {
      param_1 = (undefined1 (*) [64])((ulong)param_1 & 0xffffffffffffff80);
      do {
        auVar4 = vmovdqa64_avx512f(auVar6);
        param_1[4] = auVar4;
        auVar4 = vmovdqa64_avx512f(auVar6);
        param_1[5] = auVar4;
        auVar4 = vmovdqa64_avx512f(auVar6);
        param_1[6] = auVar4;
        auVar4 = vmovdqa64_avx512f(auVar6);
        param_1[7] = auVar4;
        param_1 = param_1 + 4;
      } while (param_1 < pauVar1);
    }
    auVar4 = vmovdqu64_avx512f(auVar6);
    pauVar1[4] = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar6);
    pauVar1[5] = auVar4;
    auVar4 = vmovdqu64_avx512f(auVar6);
    pauVar1[6] = auVar4;
    auVar6 = vmovdqu64_avx512f(auVar6);
    pauVar1[7] = auVar6;
  }
  return;
}

