
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004db670(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_004df1e0(param_1 + 0x40,param_2 + 0x40,param_2);
  FUN_004df0f0(param_1,param_2 + 0x40,param_2);
  FUN_005cd6f0(param_1 + 0xc0,param_1 + 0x40,param_1);
  uVar7 = _UNK_007ebc58;
  uVar6 = _DAT_007ebc50;
  uVar5 = _UNK_007ebc48;
  uVar4 = _DAT_007ebc40;
  uVar3 = _UNK_007ebc38;
  uVar2 = _DAT_007ebc30;
  uVar1 = _UNK_007ebc28;
  *(undefined8 *)(param_1 + 0x80) = _DAT_007ebc20;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  return;
}

