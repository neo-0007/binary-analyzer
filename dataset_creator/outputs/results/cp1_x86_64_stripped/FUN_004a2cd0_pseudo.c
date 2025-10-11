
undefined8
FUN_004a2cd0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
            long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = FUN_004a23e0(*(undefined8 *)(param_5 + 0x10));
    uVar1 = *(undefined8 *)(param_5 + 0x10);
    *param_2 = uVar3;
    uVar2 = FUN_004a23b0(uVar1);
    *param_3 = uVar2;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}

