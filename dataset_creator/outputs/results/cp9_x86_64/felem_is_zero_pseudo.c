
long felem_is_zero(long *param_1)

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
  
  uVar2 = ((ulong)param_1[8] >> 0x39) + *param_1;
  uVar9 = (uVar2 >> 0x3a) + param_1[1];
  uVar4 = (uVar9 >> 0x3a) + param_1[2];
  uVar3 = (uVar4 >> 0x3a) + param_1[3];
  uVar8 = (uVar3 >> 0x3a) + param_1[4];
  uVar7 = (uVar8 >> 0x3a) + param_1[5];
  uVar6 = (uVar7 >> 0x3a) + param_1[6];
  uVar5 = (uVar6 >> 0x3a) + param_1[7];
  uVar1 = (param_1[8] & 0x1ffffffffffffffU) + (uVar5 >> 0x3a);
  return (long)((uVar1 ^ 0x1ffffffffffffff |
                ~(uVar2 & uVar9 & uVar4 & uVar3 & uVar8 & uVar7 & uVar6 & uVar5) & 0x3ffffffffffffff
                ) - 1 | ((uVar2 | uVar9 | uVar4 | uVar3 | uVar8 | uVar7 | uVar6 | uVar5) &
                         0x3ffffffffffffff | uVar1) - 1) >> 0x3f;
}

