
void FUN_00675330(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = param_1 + 2;
  FUN_00670010(puVar1);
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[2] = &PTR_FUN_00937548;
  lVar4 = param_2[1];
  param_1[0x1f] = 0;
  param_1[1] = lVar4;
  lVar4 = *param_2;
  param_1[0x20] = 0;
  lVar4 = *(long *)(lVar4 + -0x18);
  *param_1 = &PTR_FUN_00937520;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  lVar4 = lVar4 + (long)param_2;
  FUN_006703b0(puVar1,lVar4);
                    /* try { // try from 006753d6 to 006753da has its CatchHandler @ 00675431 */
  FUN_0066f990(puVar1,param_1 + 0x1c);
  uVar3 = *(undefined8 *)(lVar4 + 0xd8);
  param_1[0x1f] = 0;
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  param_1[0x1d] = uVar3;
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(lVar4 + 0xe0);
  uVar2 = *(undefined1 *)(lVar4 + 0xe4);
  param_2[1] = 0;
  *(undefined1 *)((long)param_1 + 0xf4) = uVar2;
  return;
}

