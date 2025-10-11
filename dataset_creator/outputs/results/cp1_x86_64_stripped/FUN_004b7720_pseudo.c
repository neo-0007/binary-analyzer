
void FUN_004b7720(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)((long)param_1 + 0x14);
  uVar4 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(uint *)((long)param_2 + 0x14);
  uVar5 = param_1[1];
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_2[1] = uVar5;
  *(undefined4 *)(param_2 + 2) = uVar2;
  *param_2 = uVar4;
  *(uint *)((long)param_1 + 0x14) = uVar1 & 1 | uVar3 & 0xe;
  *(uint *)((long)param_2 + 0x14) = uVar3 & 1 | uVar1 & 0xe;
  return;
}

