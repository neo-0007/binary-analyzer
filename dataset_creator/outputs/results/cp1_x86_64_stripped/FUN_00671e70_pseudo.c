
void FUN_00671e70(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = param_1 + 2;
  FUN_00670010(puVar1);
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[2] = &PTR_FUN_009374e8;
  lVar4 = param_2[1];
  param_1[0x21] = 0;
  param_1[1] = lVar4;
  lVar4 = *param_2;
  param_1[0x22] = 0;
  lVar4 = *(long *)(lVar4 + -0x18);
  *param_1 = &PTR_FUN_009374c0;
  lVar4 = lVar4 + (long)param_2;
  FUN_006703b0(puVar1,lVar4);
                    /* try { // try from 00671f0e to 00671f12 has its CatchHandler @ 00671f5c */
  FUN_0066efe0(puVar1,param_1 + 0x1c);
  uVar3 = *(undefined8 *)(lVar4 + 0xd8);
  param_1[0x1f] = 0;
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  param_1[0x1d] = uVar3;
  uVar2 = *(undefined2 *)(lVar4 + 0xe0);
  param_2[1] = 0;
  *(undefined2 *)(param_1 + 0x1e) = uVar2;
  return;
}

