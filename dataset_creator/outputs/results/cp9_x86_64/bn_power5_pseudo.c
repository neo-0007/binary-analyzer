
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_power5(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
         int param_6)

{
  ulong uVar1;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_170 [320];
  undefined1 *puVar2;
  
  if ((_DAT_0093e5a0 & 0x80108) != 0x80108) {
    uVar3 = (ulong)(uint)(param_6 * 8);
    uVar4 = (ulong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
    if ((uint)(param_6 * 0x18) < uVar4) {
      uVar1 = uVar3 * -2 + 0xec0;
      lVar5 = uVar4 - uVar1;
      if (uVar4 < uVar1) {
        lVar5 = 0;
      }
      puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
    }
    else {
      puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
    }
    uVar4 = (ulong)puVar2 & 0xffffffffffffffc0;
    for (uVar3 = uVar4 + ((ulong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
        uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
    }
    *(undefined8 *)(uVar3 + 0x20) = *param_5;
    *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar3 - 8) = 0x4b631b;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6320;
    __bn_post4x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6325;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b632a;
    __bn_post4x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b632f;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6334;
    __bn_post4x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6339;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b633e;
    __bn_post4x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6343;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6348;
    __bn_post4x_internal();
    *(undefined8 *)(uVar3 - 8) = 0x4b6364;
    mul4x_internal(param_2);
    return 1;
  }
  uVar3 = (ulong)(uint)(param_6 << 3);
  uVar4 = (ulong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar1 = (ulong)puVar2 & 0xffffffffffffffc0;
  for (uVar4 = uVar1 + ((ulong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
      uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
  }
  *(undefined8 *)(uVar4 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar4 - 8) = 0x4b78bf;
  bn_sqrx8x_internal(0,param_1,param_4,-uVar3,param_3);
  *(undefined8 *)(uVar4 - 8) = 0x4b78c4;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78c9;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78ce;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78d3;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78d8;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78dd;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78e2;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78e7;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b78ec;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x4b7906;
  mulx4x_internal(param_2);
  return 1;
}

