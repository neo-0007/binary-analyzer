
void FUN_0069c140(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x10;
  FUN_00670010(puVar1);
  *param_1 = &DAT_00938700;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x10] = &DAT_00938728;
  param_1[1] = 0;
                    /* try { // try from 0069c1ce to 0069c1d2 has its CatchHandler @ 0069c23a */
  FUN_0066fda0(puVar1,0);
  param_1[2] = &DAT_009386b0;
  param_1[0x10] = &DAT_009386d8;
                    /* try { // try from 0069c1ee to 0069c1f2 has its CatchHandler @ 0069c290 */
  FUN_0066fda0(puVar1,0);
  *param_1 = &PTR_FUN_00938818;
  param_1[0x10] = &PTR_FUN_00938868;
  param_1[2] = &PTR_FUN_00938840;
                    /* try { // try from 0069c221 to 0069c225 has its CatchHandler @ 0069c287 */
  FUN_00698ef0(param_1 + 3,param_2,param_3);
                    /* try { // try from 0069c22c to 0069c230 has its CatchHandler @ 0069c243 */
  FUN_0066fda0(puVar1,param_1 + 3);
  return;
}

