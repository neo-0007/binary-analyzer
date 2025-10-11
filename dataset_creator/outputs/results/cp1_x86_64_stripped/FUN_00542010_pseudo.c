
void FUN_00542010(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_1[2];
  }
  return;
}

