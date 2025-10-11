
void FUN_00671610(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1 + 3;
  FUN_00670010(puVar1);
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  *param_1 = &DAT_00937360;
  param_1[3] = &DAT_00937388;
  lVar3 = param_2[1];
  param_1[0x1e] = 0;
  param_1[1] = lVar3;
  lVar3 = *param_2;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  lVar3 = *(long *)(lVar3 + -0x18);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  lVar3 = lVar3 + (long)param_2;
  param_1[0x23] = 0;
  FUN_006703b0(puVar1,lVar3);
                    /* try { // try from 006716b2 to 006716b6 has its CatchHandler @ 0067172b */
  FUN_0066f990(puVar1,param_1 + 0x1d);
  uVar2 = *(undefined8 *)(lVar3 + 0xd8);
  param_1[0x20] = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  param_1[0x1e] = uVar2;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(lVar3 + 0xe0);
  *(undefined1 *)((long)param_1 + 0xfc) = *(undefined1 *)(lVar3 + 0xe4);
  param_2[1] = 0;
  *param_1 = &PTR_FUN_009373e8;
  param_1[3] = &PTR_FUN_00937438;
  param_1[2] = &PTR_FUN_00937410;
  return;
}

