
void ecp_nistz256_scatter_w5(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  uVar2 = param_2[1];
  uVar13 = (ulong)(uint)((param_3 * 3 + -3) * 0x20);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  *(undefined8 *)(param_1 + uVar13) = *param_2;
  ((undefined8 *)(param_1 + uVar13))[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar13);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x30 + uVar13);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(param_1 + 0x40 + uVar13);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(param_1 + 0x50 + uVar13);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  return;
}

