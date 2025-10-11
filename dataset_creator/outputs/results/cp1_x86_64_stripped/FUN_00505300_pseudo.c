
void FUN_00505300(ulong *param_1,ulong *param_2)

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
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar1 = param_2[9];
  uVar2 = *param_2;
  uVar3 = param_2[4];
  uVar4 = param_2[0xb];
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xd];
  uVar7 = param_2[2];
  uVar8 = param_2[0xe];
  uVar9 = param_2[1];
  uVar10 = param_2[10];
  uVar11 = param_2[8];
  uVar12 = param_2[0xf];
  uVar13 = param_2[0x10];
  uVar14 = param_2[3];
  uVar15 = param_2[0x11];
  uVar16 = param_2[6];
  uVar17 = param_2[5];
  uVar18 = param_2[7];
  param_1[2] = (uVar7 >> 0x3a) + (uVar3 & 0x3ffffffffffffff) + (uVar9 >> 0x34) +
               (uVar14 & 0xfffffffffffff) * 0x40;
  param_1[3] = (uVar14 >> 0x34) + (uVar3 >> 0x3a) + (uVar16 & 0x3ffffffffffffff) +
               (uVar17 & 0xfffffffffffff) * 0x40;
  param_1[4] = (uVar17 >> 0x34) + (uVar16 >> 0x3a) + (uVar11 & 0x3ffffffffffffff) +
               (uVar18 & 0xfffffffffffff) * 0x40;
  param_1[5] = (uVar18 >> 0x34) + (uVar11 >> 0x3a) + (uVar10 & 0x3ffffffffffffff) +
               (uVar1 & 0xfffffffffffff) * 0x40;
  param_1[6] = (uVar1 >> 0x34) + (uVar10 >> 0x3a) + (uVar5 & 0x3ffffffffffffff) +
               (uVar4 & 0xfffffffffffff) * 0x40;
  param_1[7] = (uVar8 & 0x3ffffffffffffff) + (uVar5 >> 0x3a) + (uVar4 >> 0x34) +
               (uVar6 & 0xfffffffffffff) * 0x40;
  param_1[8] = (uVar13 & 0x3ffffffffffffff) + (uVar8 >> 0x3a) + (uVar6 >> 0x34) +
               (uVar12 & 0xfffffffffffff) * 0x40;
  uVar1 = (uVar2 & 0x3ffffffffffffff) +
          ((uVar15 & 0xfffffffffffff) * 0x40 + (uVar13 >> 0x3a) + (uVar12 >> 0x34)) * 2;
  *param_1 = uVar1 & 0x3ffffffffffffff;
  param_1[1] = (uVar9 & 0xfffffffffffff) * 0x40 + (uVar7 & 0x3ffffffffffffff) + (uVar2 >> 0x3a) +
               (uVar15 >> 0x34) * 2 + (uVar1 >> 0x3a);
  return;
}

