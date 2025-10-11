
/* WARNING: Switch with 1 destination removed at 0x0060e98d : 9 cases all go to same destination */

void FUN_0060e970(uint *param_1,uint param_2,undefined8 param_3)

{
  if (param_2 < 9) {
    *(undefined8 *)(param_1 + 2) = param_3;
  }
  *param_1 = param_2;
  return;
}

