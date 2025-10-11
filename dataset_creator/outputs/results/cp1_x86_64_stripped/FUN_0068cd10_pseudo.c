
void FUN_0068cd10(undefined8 *param_1,undefined8 param_2)

{
  FUN_00670010(param_1 + 1);
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_LAB_00937f60;
  param_1[1] = &PTR_FUN_00937f88;
                    /* try { // try from 0068cd86 to 0068cd8a has its CatchHandler @ 0068cd90 */
  FUN_0066f450(param_1 + 1,param_2);
  return;
}

