
void FUN_00671d20(undefined8 *param_1)

{
  FUN_00670010(param_1 + 2);
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_009374c0;
  param_1[2] = &PTR_FUN_009374e8;
  param_1[1] = 0;
                    /* try { // try from 00671d9a to 00671d9e has its CatchHandler @ 00671da4 */
  FUN_0066f450(param_1 + 2,0);
  return;
}

