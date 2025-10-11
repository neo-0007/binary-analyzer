
void __memset_evex_unaligned(undefined1 (*param_1) [32],undefined1 param_2,ulong param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  uint uVar4;
  undefined1 (*pauVar5) [32];
  undefined1 auVar6 [32];
  
  uVar4 = (uint)param_3;
  auVar6 = vpbroadcastb_avx512vl();
  if (param_3 < 0x20) {
    if (((uint)param_1 & 0xfff) < 0xfe1) {
      auVar6 = vmovdqu8_avx512vl(auVar6);
      *param_1 = auVar6;
      return;
    }
    if (0xf < uVar4) {
      auVar2 = vmovdqu64_avx512vl(auVar6._0_16_);
      *(undefined1 (*) [16])*param_1 = auVar2;
      auVar2 = vmovdqu64_avx512vl(auVar6._0_16_);
      *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar2;
      return;
    }
    if (7 < uVar4) {
      *(long *)*param_1 = auVar6._0_8_;
      *(long *)(param_1[-1] + param_3 + 0x18) = auVar6._0_8_;
      return;
    }
    if (3 < uVar4) {
      *(int *)*param_1 = auVar6._0_4_;
      *(int *)(param_1[-1] + param_3 + 0x1c) = auVar6._0_4_;
      return;
    }
    if (1 < uVar4) {
      *(short *)*param_1 = auVar6._0_2_;
      param_1[-1][param_3 + 0x1f] = auVar6[0];
      return;
    }
    if (uVar4 != 0) {
      (*param_1)[0] = param_2;
      return;
    }
  }
  else {
    if (param_3 < 0x41) {
      auVar3 = vmovdqu64_avx512vl(auVar6);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar3;
      auVar6 = vmovdqu64_avx512vl(auVar6);
      *param_1 = auVar6;
      return;
    }
    pauVar1 = (undefined1 (*) [32])(param_1[-4] + param_3);
    auVar3 = vmovdqu64_avx512vl(auVar6);
    *param_1 = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar6);
    param_1[1] = auVar3;
    if (param_3 < 0x81) {
      auVar3 = vmovdqu64_avx512vl(auVar6);
      pauVar1[2] = auVar3;
      auVar6 = vmovdqu64_avx512vl(auVar6);
      pauVar1[3] = auVar6;
      return;
    }
    auVar3 = vmovdqu64_avx512vl(auVar6);
    param_1[2] = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar6);
    param_1[3] = auVar3;
    if (param_1 + 4 < pauVar1) {
      pauVar5 = (undefined1 (*) [32])((ulong)(param_1 + 4) & 0xffffffffffffffc0);
      do {
        auVar3 = vmovdqa64_avx512vl(auVar6);
        *pauVar5 = auVar3;
        auVar3 = vmovdqa64_avx512vl(auVar6);
        pauVar5[1] = auVar3;
        auVar3 = vmovdqa64_avx512vl(auVar6);
        pauVar5[2] = auVar3;
        auVar3 = vmovdqa64_avx512vl(auVar6);
        pauVar5[3] = auVar3;
        pauVar5 = pauVar5 + 4;
      } while (pauVar5 < pauVar1);
    }
    auVar3 = vmovdqu64_avx512vl(auVar6);
    *pauVar1 = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar6);
    pauVar1[1] = auVar3;
    auVar3 = vmovdqu64_avx512vl(auVar6);
    pauVar1[2] = auVar3;
    auVar6 = vmovdqu64_avx512vl(auVar6);
    pauVar1[3] = auVar6;
  }
  return;
}

