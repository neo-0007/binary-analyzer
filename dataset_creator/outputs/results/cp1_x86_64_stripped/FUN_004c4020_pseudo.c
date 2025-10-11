
undefined8
FUN_004c4020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,int param_6)

{
  ulong uVar1;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_170 [320];
  undefined1 *puVar2;
  
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
  *(undefined8 *)(uVar4 - 8) = 0x4c40ff;
  FUN_004c4180(0,param_1,param_4,-uVar3,param_3);
  *(undefined8 *)(uVar4 - 8) = 0x4c4104;
  FUN_004c4ae0();
  *(undefined8 *)(uVar4 - 8) = 0x4c4109;
  FUN_004c4180();
  *(undefined8 *)(uVar4 - 8) = 0x4c410e;
  FUN_004c4ae0();
  *(undefined8 *)(uVar4 - 8) = 0x4c4113;
  FUN_004c4180();
  *(undefined8 *)(uVar4 - 8) = 0x4c4118;
  FUN_004c4ae0();
  *(undefined8 *)(uVar4 - 8) = 0x4c411d;
  FUN_004c4180();
  *(undefined8 *)(uVar4 - 8) = 0x4c4122;
  FUN_004c4ae0();
  *(undefined8 *)(uVar4 - 8) = 0x4c4127;
  FUN_004c4180();
  *(undefined8 *)(uVar4 - 8) = 0x4c412c;
  FUN_004c4ae0();
  *(undefined8 *)(uVar4 - 8) = 0x4c4146;
  FUN_004c3840(param_2);
  return 1;
}

