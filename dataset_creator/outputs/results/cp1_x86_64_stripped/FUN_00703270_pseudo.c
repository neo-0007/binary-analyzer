
long FUN_00703270(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = FUN_007070d0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    lVar2 = param_1;
  }
  return lVar2;
}

