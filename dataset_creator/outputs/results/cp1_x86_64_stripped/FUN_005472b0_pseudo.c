
undefined8 FUN_005472b0(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    return 1;
  }
  return 0;
}

