
undefined1 (*) [32]
__memset_evex_unaligned_erms(undefined1 (*param_1) [32],undefined1 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 auVar6 [32];
  
  auVar6 = vpbroadcastb_avx512vl();
  if (param_3 < 0x20) {
    if (((uint)param_1 & 0xfff) < 0xfe1) {
      auVar6 = vmovdqu8_avx512vl(auVar6);
      *param_1 = auVar6;
      return param_1;
    }
    uVar3 = (uint)param_3;
    if (0xf < uVar3) {
      auVar1 = vmovdqu64_avx512vl(auVar6._0_16_);
      *(undefined1 (*) [16])*param_1 = auVar1;
      auVar1 = vmovdqu64_avx512vl(auVar6._0_16_);
      *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar1;
      return param_1;
    }
    if (7 < uVar3) {
      *(long *)*param_1 = auVar6._0_8_;
      *(long *)(param_1[-1] + param_3 + 0x18) = auVar6._0_8_;
      return param_1;
    }
    if (3 < uVar3) {
      *(int *)*param_1 = auVar6._0_4_;
      *(int *)(param_1[-1] + param_3 + 0x1c) = auVar6._0_4_;
      return param_1;
    }
    if (1 < uVar3) {
      *(short *)*param_1 = auVar6._0_2_;
      param_1[-1][param_3 + 0x1f] = auVar6[0];
      return param_1;
    }
    if (uVar3 != 0) {
      (*param_1)[0] = param_2;
      return param_1;
    }
  }
  else {
    if (param_3 < 0x41) {
      auVar2 = vmovdqu64_avx512vl(auVar6);
      *param_1 = auVar2;
      auVar6 = vmovdqu64_avx512vl(auVar6);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar6;
      return param_1;
    }
    pauVar4 = param_1;
    if (__x86_rep_stosb_threshold < param_3) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*pauVar4)[0] = param_2;
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1);
      }
      return param_1;
    }
    pauVar4 = (undefined1 (*) [32])(param_1[-4] + param_3);
    auVar2 = vmovdqu64_avx512vl(auVar6);
    *param_1 = auVar2;
    auVar2 = vmovdqu64_avx512vl(auVar6);
    param_1[1] = auVar2;
    if (param_3 < 0x81) {
      auVar2 = vmovdqu64_avx512vl(auVar6);
      pauVar4[2] = auVar2;
      auVar6 = vmovdqu64_avx512vl(auVar6);
      pauVar4[3] = auVar6;
      return param_1;
    }
    auVar2 = vmovdqu64_avx512vl(auVar6);
    param_1[2] = auVar2;
    auVar2 = vmovdqu64_avx512vl(auVar6);
    param_1[3] = auVar2;
    if (param_1 + 4 < pauVar4) {
      pauVar5 = (undefined1 (*) [32])((ulong)(param_1 + 4) & 0xffffffffffffffc0);
      do {
        auVar2 = vmovdqa64_avx512vl(auVar6);
        *pauVar5 = auVar2;
        auVar2 = vmovdqa64_avx512vl(auVar6);
        pauVar5[1] = auVar2;
        auVar2 = vmovdqa64_avx512vl(auVar6);
        pauVar5[2] = auVar2;
        auVar2 = vmovdqa64_avx512vl(auVar6);
        pauVar5[3] = auVar2;
        pauVar5 = pauVar5 + 4;
      } while (pauVar5 < pauVar4);
    }
    auVar2 = vmovdqu64_avx512vl(auVar6);
    *pauVar4 = auVar2;
    auVar2 = vmovdqu64_avx512vl(auVar6);
    pauVar4[1] = auVar2;
    auVar2 = vmovdqu64_avx512vl(auVar6);
    pauVar4[2] = auVar2;
    auVar6 = vmovdqu64_avx512vl(auVar6);
    pauVar4[3] = auVar6;
  }
  return param_1;
}

