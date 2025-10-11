
undefined8
FUN_005afa30(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)*param_5;
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)param_5[1];
    *param_2 = *(undefined8 *)((undefined4 *)param_5[1] + 2);
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *param_5;
  }
  return 1;
}

