
long FUN_007032a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined **)(param_1 + 0xd8) = &DAT_0093f5e0;
  *(undefined **)(*(long *)(param_1 + 0xa0) + 0xe0) = &DAT_0093f2e0;
  lVar2 = FUN_007070d0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    return param_1;
  }
  *(undefined **)(param_1 + 0xd8) = &DAT_0093f520;
  *(undefined **)(*(long *)(param_1 + 0xa0) + 0xe0) = &DAT_0093f220;
  return 0;
}

