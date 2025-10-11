
undefined8 FUN_004d8df0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_004b7bb0();
    uVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
    uVar3 = FUN_004b7ad0(uVar2,uVar1);
    return uVar3;
  }
  return 0xffffffff;
}

