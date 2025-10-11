
undefined8 FUN_005b7c80(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = FUN_005b44d0();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) != 0x17) {
    return 0;
  }
  uVar1 = FUN_005b8540();
  return uVar1;
}

