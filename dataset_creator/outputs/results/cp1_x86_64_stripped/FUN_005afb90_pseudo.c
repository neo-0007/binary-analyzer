
undefined8 FUN_005afb90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)(param_3 + 0x18);
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_3 + 0x20);
  }
  return 1;
}

