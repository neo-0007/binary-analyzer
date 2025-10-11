
undefined8 FUN_0041e340(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (((param_2 != (undefined8 *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 8) == 7)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x18);
    }
    *param_2 = **(undefined8 **)(param_1 + 0x10);
    return 1;
  }
  return 0;
}

