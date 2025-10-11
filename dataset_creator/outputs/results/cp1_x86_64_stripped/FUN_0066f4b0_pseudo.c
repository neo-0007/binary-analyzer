
void FUN_0066f4b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_00670010();
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_009370d8;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
                    /* try { // try from 0066f51b to 0066f51f has its CatchHandler @ 0066f528 */
  FUN_0066f450(param_1,param_2);
  return;
}

