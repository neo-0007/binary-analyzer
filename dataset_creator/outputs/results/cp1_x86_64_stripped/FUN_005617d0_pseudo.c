
undefined8 FUN_005617d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00561430(param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = FUN_00561440(param_2,*(undefined8 *)(param_1 + 0x30));
  if ((int)uVar1 != 0) {
    FUN_00561650(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

