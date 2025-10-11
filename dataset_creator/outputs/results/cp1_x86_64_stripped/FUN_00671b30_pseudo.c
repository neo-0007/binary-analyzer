
void FUN_00671b30(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 00671bae to 00671bb2 has its CatchHandler @ 00671bb8 */
  FUN_0066f450(param_1 + 2,param_2);
  return;
}

