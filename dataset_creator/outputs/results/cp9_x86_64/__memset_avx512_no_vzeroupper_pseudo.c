
void __memset_avx512_no_vzeroupper(undefined1 (*param_1) [64],uint param_2,ulong param_3)

{
  undefined1 auVar1 [64];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined1 (*pauVar4) [64];
  undefined1 auVar5 [64];
  
  bVar3 = (byte)param_3;
  auVar2 = vpshufb_avx(ZEXT416(param_2),(undefined1  [16])0x0);
  if (param_3 < 0x10) {
    if (7 < bVar3) {
      *(long *)*param_1 = auVar2._0_8_;
      *(long *)(param_1[-1] + param_3 + 0x38) = auVar2._0_8_;
      return;
    }
    if (3 < bVar3) {
      *(int *)*param_1 = auVar2._0_4_;
      *(int *)(param_1[-1] + param_3 + 0x3c) = auVar2._0_4_;
      return;
    }
    if (1 < bVar3) {
      *(short *)*param_1 = auVar2._0_2_;
      *(short *)(param_1[-1] + param_3 + 0x3e) = auVar2._0_2_;
      return;
    }
    if (bVar3 != 0) {
      (*param_1)[0] = auVar2[0];
    }
    return;
  }
  auVar5 = vbroadcastss_avx512f(auVar2);
  if (0x200 < param_3) {
    if (__x86_shared_cache_size_half < param_3) {
      pauVar4 = (undefined1 (*) [64])(((ulong)param_1 & 0xffffffffffffff80) + 0x80);
      *param_1 = auVar5;
      param_1[1] = auVar5;
      do {
        auVar1 = vmovntdq_avx512f(auVar5);
        *pauVar4 = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[1] = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[2] = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[3] = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[4] = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[5] = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[6] = auVar1;
        auVar1 = vmovntdq_avx512f(auVar5);
        pauVar4[7] = auVar1;
        pauVar4 = pauVar4 + 8;
      } while (pauVar4 < (undefined1 (*) [64])(param_1[-8] + param_3));
      *(undefined1 (*) [64])(param_1[-8] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-7] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-6] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-5] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar5;
      return;
    }
    if (param_3 < 0x401) {
      *param_1 = auVar5;
      param_1[1] = auVar5;
      param_1[2] = auVar5;
      param_1[3] = auVar5;
      param_1[4] = auVar5;
      param_1[5] = auVar5;
      param_1[6] = auVar5;
      param_1[7] = auVar5;
      *(undefined1 (*) [64])(param_1[-8] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-7] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-6] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-5] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar5;
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar5;
      return;
    }
    *param_1 = auVar5;
    pauVar4 = (undefined1 (*) [64])(((ulong)param_1 & 0xffffffffffffffc0) + 0x40);
    do {
      *pauVar4 = auVar5;
      pauVar4[1] = auVar5;
      pauVar4[2] = auVar5;
      pauVar4[3] = auVar5;
      pauVar4 = pauVar4 + 4;
    } while (pauVar4 < (undefined1 (*) [64])(param_1[-4] + param_3));
    *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar5;
    return;
  }
  if (0xff < param_3) {
    *param_1 = auVar5;
    param_1[1] = auVar5;
    param_1[2] = auVar5;
    param_1[3] = auVar5;
    *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar5;
    return;
  }
  if (0x7f < bVar3) {
    *param_1 = auVar5;
    param_1[1] = auVar5;
    *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar5;
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar5;
    return;
  }
  if (0x3f < bVar3) {
    *param_1 = auVar5;
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar5;
    return;
  }
  if (0x1f < bVar3) {
    *(undefined1 (*) [32])*param_1 = auVar5._0_32_;
    *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar5._0_32_;
    return;
  }
  *(undefined1 (*) [16])*param_1 = auVar2;
  *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x30) = auVar2;
  return;
}

