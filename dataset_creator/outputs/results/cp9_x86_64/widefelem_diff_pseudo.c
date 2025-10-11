
void widefelem_diff(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2 + 0x100000000000000;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  param_1[2] = uVar3;
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  param_1[3] = uVar4 + 0xffffffffffffff;
  uVar8 = param_1[7];
  uVar9 = param_1[8];
  param_1[4] = uVar5;
  uVar10 = param_1[9];
  param_1[5] = uVar6 + 0xffffffffffffff;
  param_1[6] = uVar7;
  param_1[7] = uVar8 + 0x100000000000000;
  param_1[8] = uVar9;
  param_1[9] = uVar10 + 0xfffeffffffffff;
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  uVar13 = param_1[0xc];
  uVar14 = param_1[0xd];
  param_1[0xc] = uVar13;
  param_1[0xd] = uVar14 + 0xffffffffffffff;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12 + 0xffffffffffffff;
  uVar15 = *param_2;
  param_1[1] = ((uVar2 + 0x100000000000000) - param_2[1]) - (ulong)(uVar1 < *param_2);
  *param_1 = uVar1 - uVar15;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar3 - param_2[2];
  param_1[3] = ((uVar4 + 0xffffffffffffff) - uVar2) - (ulong)(uVar3 < uVar1);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar5 - param_2[4];
  param_1[5] = ((uVar6 + 0xffffffffffffff) - uVar2) - (ulong)(uVar5 < uVar1);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar7 - param_2[6];
  param_1[7] = ((uVar8 + 0x100000000000000) - uVar2) - (ulong)(uVar7 < uVar1);
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  param_1[8] = uVar9 - param_2[8];
  param_1[9] = ((uVar10 + 0xfffeffffffffff) - uVar2) - (ulong)(uVar9 < uVar1);
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  param_1[10] = uVar11 - param_2[10];
  param_1[0xb] = ((uVar12 + 0xffffffffffffff) - uVar2) - (ulong)(uVar11 < uVar1);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  param_1[0xc] = uVar13 - param_2[0xc];
  param_1[0xd] = ((uVar14 + 0xffffffffffffff) - uVar2) - (ulong)(uVar13 < uVar1);
  return;
}

