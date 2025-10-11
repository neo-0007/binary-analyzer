
undefined8 FUN_004c21a0(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *in_R8;
  int in_R9D;
  ulong uVar3;
  uint in_R11D;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_170 [320];
  
  if ((in_R11D & 0x80108) != 0x80108) {
    uVar3 = (ulong)(uint)(in_R9D << 3);
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
    uVar4 = (ulong)puVar2 & 0xffffffffffffffc0;
    for (uVar3 = uVar4 + ((ulong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
        uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
    }
    *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar3 - 8) = 0x4c225f;
    FUN_004c22a0();
    return 1;
  }
  uVar3 = (ulong)(uint)(in_R9D << 3);
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
  uVar4 = (ulong)puVar2 & 0xffffffffffffffc0;
  for (uVar3 = uVar4 + ((ulong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
      uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
  }
  *(undefined8 *)(uVar3 + 0x20) = *in_R8;
  *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar3 - 8) = 0x4c3803;
  FUN_004c3840();
  return 1;
}

