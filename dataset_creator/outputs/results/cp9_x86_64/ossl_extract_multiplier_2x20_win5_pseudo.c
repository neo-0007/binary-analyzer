
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_extract_multiplier_2x20_win5
               (undefined1 (*param_1) [32],long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  ulong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [64];
  
  pauVar3 = (undefined1 (*) [32])(param_2 + param_4 * 0xa0);
  auVar7 = vmovdqa64_avx512vl(_DAT_0092fe20);
  auVar8 = vpbroadcastq_avx512vl();
  auVar20 = ZEXT1664((undefined1  [16])0x0);
  auVar13 = auVar20._0_32_;
  auVar9 = vmovdqa64_avx512vl(auVar13);
  auVar10 = vmovdqa64_avx512vl(auVar13);
  auVar11 = vmovdqa64_avx512vl(auVar13);
  auVar12 = vmovdqa64_avx512vl(auVar13);
  auVar13 = vmovdqa64_avx512vl(auVar13);
  pauVar4 = pauVar3;
  do {
    uVar6 = vpcmpq_avx512vl(auVar8,auVar13,0);
    uVar6 = uVar6 & 0xf;
    pauVar5 = pauVar4 + 10;
    auVar13 = vpaddq_avx512vl(auVar13,auVar7);
    auVar14 = vmovdqu64_avx512vl(*pauVar4);
    auVar15 = vmovdqu64_avx512vl(pauVar4[1]);
    auVar16 = vmovdqu64_avx512vl(pauVar4[2]);
    auVar17 = vmovdqu64_avx512vl(pauVar4[3]);
    auVar18 = vmovdqu64_avx512vl(pauVar4[4]);
    auVar14 = vpblendmq_avx512vl(auVar12,auVar14);
    bVar1 = (byte)uVar6;
    auVar19._0_8_ = (ulong)(bVar1 & 1) * auVar14._0_8_ | (ulong)!(bool)(bVar1 & 1) * auVar12._0_8_;
    bVar2 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar19._8_8_ = (ulong)bVar2 * auVar14._8_8_ | (ulong)!bVar2 * auVar12._8_8_;
    bVar2 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar19._16_8_ = (ulong)bVar2 * auVar14._16_8_ | (ulong)!bVar2 * auVar12._16_8_;
    auVar19._24_8_ = (uVar6 >> 3) * auVar14._24_8_ | (ulong)!SUB81(uVar6 >> 3,0) * auVar12._24_8_;
    auVar12 = vpblendmq_avx512vl(auVar11,auVar15);
    auVar14._0_8_ = (ulong)(bVar1 & 1) * auVar12._0_8_ | (ulong)!(bool)(bVar1 & 1) * auVar11._0_8_;
    bVar2 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar14._8_8_ = (ulong)bVar2 * auVar12._8_8_ | (ulong)!bVar2 * auVar11._8_8_;
    bVar2 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar14._16_8_ = (ulong)bVar2 * auVar12._16_8_ | (ulong)!bVar2 * auVar11._16_8_;
    auVar14._24_8_ = (uVar6 >> 3) * auVar12._24_8_ | (ulong)!SUB81(uVar6 >> 3,0) * auVar11._24_8_;
    auVar12 = vpblendmq_avx512vl(auVar10,auVar16);
    auVar15._0_8_ = (ulong)(bVar1 & 1) * auVar12._0_8_ | (ulong)!(bool)(bVar1 & 1) * auVar10._0_8_;
    bVar2 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar15._8_8_ = (ulong)bVar2 * auVar12._8_8_ | (ulong)!bVar2 * auVar10._8_8_;
    bVar2 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar15._16_8_ = (ulong)bVar2 * auVar12._16_8_ | (ulong)!bVar2 * auVar10._16_8_;
    auVar15._24_8_ = (uVar6 >> 3) * auVar12._24_8_ | (ulong)!SUB81(uVar6 >> 3,0) * auVar10._24_8_;
    auVar12 = vpblendmq_avx512vl(auVar9,auVar17);
    auVar16._0_8_ = (ulong)(bVar1 & 1) * auVar12._0_8_ | (ulong)!(bool)(bVar1 & 1) * auVar9._0_8_;
    bVar2 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar16._8_8_ = (ulong)bVar2 * auVar12._8_8_ | (ulong)!bVar2 * auVar9._8_8_;
    bVar2 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar16._16_8_ = (ulong)bVar2 * auVar12._16_8_ | (ulong)!bVar2 * auVar9._16_8_;
    auVar16._24_8_ = (uVar6 >> 3) * auVar12._24_8_ | (ulong)!SUB81(uVar6 >> 3,0) * auVar9._24_8_;
    auVar12 = vpblendmq_avx512vl(auVar20._0_32_,auVar18);
    auVar17._0_8_ = (ulong)(bVar1 & 1) * auVar12._0_8_ | (ulong)!(bool)(bVar1 & 1) * auVar20._0_8_;
    bVar2 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar17._8_8_ = (ulong)bVar2 * auVar12._8_8_ | (ulong)!bVar2 * auVar20._8_8_;
    bVar2 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar17._16_8_ = (ulong)bVar2 * auVar12._16_8_ | (ulong)!bVar2 * auVar20._16_8_;
    auVar17._24_8_ = (uVar6 >> 3) * auVar12._24_8_ | (ulong)!SUB81(uVar6 >> 3,0) * auVar20._24_8_;
    auVar20 = ZEXT3264(auVar17);
    pauVar4 = pauVar5;
    auVar12 = auVar19;
    auVar11 = auVar14;
    auVar10 = auVar15;
    auVar9 = auVar16;
  } while (pauVar3 + 0x140 != pauVar5);
  auVar12 = vmovdqu64_avx512vl(auVar19);
  *param_1 = auVar12;
  auVar12 = vmovdqu64_avx512vl(auVar14);
  param_1[1] = auVar12;
  auVar12 = vmovdqu64_avx512vl(auVar15);
  param_1[2] = auVar12;
  auVar12 = vmovdqu64_avx512vl(auVar16);
  param_1[3] = auVar12;
  auVar12 = vmovdqu64_avx512vl(auVar17);
  param_1[4] = auVar12;
  return;
}

