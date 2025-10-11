
void FUN_0068fe40(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1 + 1;
  FUN_00670010(puVar1);
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[1] = &PTR_FUN_00937fe8;
  lVar3 = *param_2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar3 = (long)param_2 + *(long *)(lVar3 + -0x18);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_00937fc0;
  FUN_006703b0(puVar1,lVar3);
                    /* try { // try from 0068fed5 to 0068fed9 has its CatchHandler @ 0068ff1c */
  FUN_0066f990(puVar1,param_1 + 0x1b);
  uVar2 = *(undefined8 *)(lVar3 + 0xd8);
  param_1[0x1e] = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  param_1[0x1c] = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar3 + 0xe0);
  *(undefined1 *)((long)param_1 + 0xec) = *(undefined1 *)(lVar3 + 0xe4);
  return;
}

