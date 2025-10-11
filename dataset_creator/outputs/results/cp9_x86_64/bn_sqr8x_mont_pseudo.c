
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_sqr8x_mont(long param_1,long param_2,undefined8 param_3,ulong param_4,ulong *param_5,uint param_6
             )

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ulong *puVar29;
  undefined1 (*pauVar30) [16];
  ulong *puVar31;
  long *plVar33;
  uint *puVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  bool bVar38;
  long *extraout_XMM1_Qa;
  long *extraout_XMM1_Qa_00;
  undefined1 auStack_70 [64];
  undefined1 *puVar32;
  
  uVar35 = (ulong)(param_6 << 3);
  uVar36 = *param_5;
  uVar37 = (ulong)(auStack_70 + (uVar35 * -2 - param_2)) & 0xfff;
  if ((ulong)param_6 << 5 < uVar37) {
    uVar4 = uVar35 * -2 + 0xfc0;
    lVar28 = uVar37 - uVar4;
    if (uVar37 < uVar4) {
      lVar28 = 0;
    }
    puVar32 = auStack_70 + (uVar35 * -2 - lVar28);
  }
  else {
    puVar32 = auStack_70 + (uVar35 * -2 - uVar37);
  }
  puVar31 = (ulong *)((ulong)puVar32 & 0xffffffffffffffc0);
  for (puVar29 = (ulong *)(((ulong)(&stack0xffffffffffffffd0 + -(long)puVar31) & 0xfffffffffffff000)
                          + (long)puVar31); puVar31 < puVar29; puVar29 = puVar29 + -0x200) {
  }
  puVar29[4] = uVar36;
  puVar29[5] = (ulong)register0x00000020;
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    puVar29[-1] = 0x4b4c4b;
    iVar26 = bn_sqrx8x_internal(0,param_1,param_4,-uVar35);
    puVar29 = (ulong *)(uVar36 + param_4);
    lVar28 = (long)param_4 >> 5;
    bVar38 = ((long)param_4 >> 4 & 1U) != 0;
    plVar33 = extraout_XMM1_Qa;
    uVar36 = param_4;
  }
  else {
    puVar29[-1] = 0x4b4c65;
    param_4 = uVar35;
    iVar26 = bn_sqr8x_internal();
    puVar29 = (ulong *)(param_1 + param_4);
    lVar28 = (long)param_4 >> 5;
    bVar38 = ((long)param_4 >> 4 & 1U) != 0;
    plVar33 = extraout_XMM1_Qa_00;
    uVar36 = param_4;
  }
  do {
    uVar35 = *puVar29;
    puVar1 = puVar29 + 1;
    puVar2 = puVar29 + 2;
    puVar3 = puVar29 + 3;
    puVar29 = puVar29 + 4;
    uVar37 = (ulong)bVar38;
    uVar6 = uVar35 - *puVar31;
    uVar35 = (ulong)(uVar35 < *puVar31 || uVar6 < uVar37);
    uVar7 = *puVar1 - puVar31[1];
    uVar4 = (ulong)(*puVar1 < puVar31[1] || uVar7 < uVar35);
    uVar8 = *puVar2 - puVar31[2];
    uVar5 = (ulong)(*puVar2 < puVar31[2] || uVar8 < uVar4);
    uVar9 = *puVar3 - puVar31[3];
    bVar38 = *puVar3 < puVar31[3] || uVar9 < uVar5;
    puVar31 = puVar31 + 4;
    *plVar33 = uVar6 - uVar37;
    plVar33[1] = uVar7 - uVar35;
    plVar33[2] = uVar8 - uVar4;
    plVar33[3] = uVar9 - uVar5;
    plVar33 = plVar33 + 4;
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0);
  uVar27 = iVar26 - (uint)bVar38;
  pauVar30 = (undefined1 (*) [16])((long)puVar29 + uVar36);
  puVar34 = (uint *)((long)plVar33 + uVar36);
  do {
    uVar10 = *(uint *)*pauVar30;
    uVar11 = *(uint *)(*pauVar30 + 4);
    uVar12 = *(uint *)(*pauVar30 + 8);
    uVar13 = *(uint *)(*pauVar30 + 0xc);
    uVar14 = *(uint *)pauVar30[1];
    uVar15 = *(uint *)(pauVar30[1] + 4);
    uVar16 = *(uint *)(pauVar30[1] + 8);
    uVar17 = *(uint *)(pauVar30[1] + 0xc);
    uVar22 = *puVar34;
    uVar23 = puVar34[1];
    uVar24 = puVar34[2];
    uVar25 = puVar34[3];
    uVar18 = puVar34[4];
    uVar19 = puVar34[5];
    uVar20 = puVar34[6];
    uVar21 = puVar34[7];
    *pauVar30 = (undefined1  [16])0x0;
    pauVar30[1] = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*pauVar30 + param_4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar30[1] + param_4) = (undefined1  [16])0x0;
    *puVar34 = uVar22 & -(uint)(uVar27 == 0) | uVar10 & uVar27;
    puVar34[1] = uVar23 & -(uint)(uVar27 == 0) | uVar11 & uVar27;
    puVar34[2] = uVar24 & -(uint)(uVar27 == 0) | uVar12 & uVar27;
    puVar34[3] = uVar25 & -(uint)(uVar27 == 0) | uVar13 & uVar27;
    puVar34[4] = uVar18 & -(uint)(uVar27 == 0) | uVar14 & uVar27;
    puVar34[5] = uVar19 & -(uint)(uVar27 == 0) | uVar15 & uVar27;
    puVar34[6] = uVar20 & -(uint)(uVar27 == 0) | uVar16 & uVar27;
    puVar34[7] = uVar21 & -(uint)(uVar27 == 0) | uVar17 & uVar27;
    uVar36 = uVar36 + 0x20;
    pauVar30 = pauVar30 + 2;
    puVar34 = puVar34 + 8;
  } while (uVar36 != 0);
  return 1;
}

