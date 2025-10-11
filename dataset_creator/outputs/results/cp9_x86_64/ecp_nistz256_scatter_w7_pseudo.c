
void ecp_nistz256_scatter_w7(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = param_2[1];
  uVar9 = (ulong)(uint)(param_3 << 6);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined8 *)(param_1 + uVar9) = *param_2;
  ((undefined8 *)(param_1 + uVar9))[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar9);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar9);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x30 + uVar9);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  return;
}

