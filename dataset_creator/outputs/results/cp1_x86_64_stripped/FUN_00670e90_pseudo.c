
void FUN_00670e90(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1 + 3;
  FUN_00670010(puVar1);
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *param_1 = &DAT_00937210;
  param_1[3] = &DAT_00937238;
  lVar3 = param_2[1];
  param_1[0x20] = 0;
  param_1[1] = lVar3;
  lVar3 = *param_2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  lVar3 = *(long *)(lVar3 + -0x18);
  param_1[0x23] = 0;
  lVar3 = lVar3 + (long)param_2;
  FUN_006703b0(puVar1,lVar3);
                    /* try { // try from 00670f2a to 00670f2e has its CatchHandler @ 00670f96 */
  FUN_0066efe0(puVar1,param_1 + 0x1d);
  uVar2 = *(undefined8 *)(lVar3 + 0xd8);
  param_1[0x20] = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  param_1[0x1e] = uVar2;
  *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(lVar3 + 0xe0);
  param_2[1] = 0;
  *param_1 = &PTR_LAB_00937298;
  param_1[3] = &PTR_FUN_009372e8;
  param_1[2] = &PTR_FUN_009372c0;
  return;
}

