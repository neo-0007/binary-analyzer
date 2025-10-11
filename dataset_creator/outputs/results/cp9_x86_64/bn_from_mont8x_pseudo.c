
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_from_mont8x(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_170 [320];
  undefined1 *puVar12;
  
  uVar13 = (ulong)(uint)(param_6 << 3);
  uVar14 = (ulong)(auStack_170 + (uVar13 * -2 - param_1)) & 0xfff;
  if (uVar13 * 3 < uVar14) {
    uVar11 = uVar13 * -2 + 0xec0;
    lVar15 = uVar14 - uVar11;
    if (uVar14 < uVar11) {
      lVar15 = 0;
    }
    puVar12 = auStack_170 + (uVar13 * -2 - lVar15);
  }
  else {
    puVar12 = auStack_170 + (uVar13 * -2 - uVar14);
  }
  uVar11 = (ulong)puVar12 & 0xffffffffffffffc0;
  for (uVar14 = uVar11 + ((ulong)(&stack0xffffffffffffffd0 + -uVar11) & 0xfffffffffffff000);
      uVar11 < uVar14; uVar14 = uVar14 - 0x1000) {
  }
  *(undefined8 *)(uVar14 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar14 + 0x28) = register0x00000020;
  puVar9 = (undefined8 *)(uVar14 + 0x30);
  uVar11 = uVar13;
  do {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    *(undefined1 (*) [16])((long)puVar9 + uVar13) = (undefined1  [16])0x0;
    uVar1 = param_2[6];
    uVar2 = param_2[7];
    *(undefined1 (*) [16])((long)puVar9 + uVar13 + 0x10) = (undefined1  [16])0x0;
    param_2 = param_2 + 8;
    *puVar9 = uVar3;
    puVar9[1] = uVar4;
    *(undefined1 (*) [16])((long)puVar9 + uVar13 + 0x20) = (undefined1  [16])0x0;
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    *(undefined1 (*) [16])((long)puVar9 + uVar13 + 0x30) = (undefined1  [16])0x0;
    puVar9[4] = uVar7;
    puVar9[5] = uVar8;
    puVar9[6] = uVar1;
    puVar9[7] = uVar2;
    puVar9 = puVar9 + 8;
    uVar11 = uVar11 - 0x40;
  } while (uVar11 != 0);
  if ((_DAT_0093e5a0 & 0x80108) == 0x80108) {
    *(undefined8 *)(uVar14 - 8) = 0x4b6e85;
    __bn_sqrx8x_reduction(0,param_1,param_4,-uVar13,(long)puVar9 + uVar13);
    *(undefined8 *)(uVar14 - 8) = 0x4b6e8a;
    __bn_postx4x_internal();
    pauVar10 = (undefined1 (*) [16])(uVar14 + 0x30);
  }
  else {
    *(undefined8 *)(uVar14 - 8) = 0x4b6ea5;
    __bn_sqr8x_reduction();
    *(undefined8 *)(uVar14 - 8) = 0x4b6eaa;
    __bn_post4x_internal();
    pauVar10 = (undefined1 (*) [16])(uVar14 + 0x30);
  }
  do {
    *pauVar10 = (undefined1  [16])0x0;
    pauVar10[1] = (undefined1  [16])0x0;
    pauVar10[2] = (undefined1  [16])0x0;
    pauVar10[3] = (undefined1  [16])0x0;
    pauVar10 = pauVar10 + 4;
    uVar13 = uVar13 - 0x20;
  } while (uVar13 != 0);
  return 1;
}

