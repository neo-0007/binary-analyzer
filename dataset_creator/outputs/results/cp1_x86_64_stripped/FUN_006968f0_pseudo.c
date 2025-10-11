
void FUN_006968f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0xe;
  FUN_00670010(puVar1);
  *param_1 = &DAT_00938210;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0xe] = &DAT_00938238;
                    /* try { // try from 00696963 to 00696967 has its CatchHandler @ 00696a08 */
  FUN_0066f450(puVar1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xe] = &PTR_FUN_009382a8;
  *param_1 = &PTR_FUN_00938280;
  param_1[5] = 0;
  param_1[1] = &PTR_FUN_009388a8;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_006274c0(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 9) = 0x10;
  param_1[0xb] = 0;
  param_1[1] = &PTR_FUN_009380c8;
  param_1[10] = param_1 + 0xc;
                    /* try { // try from 006969fa to 006969fe has its CatchHandler @ 00696a11 */
  FUN_0066f450(puVar1,param_1 + 1);
  return;
}

