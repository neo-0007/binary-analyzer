
void _dlfo_sort_mappings(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  
  if (1 < param_2) {
    puVar7 = param_1;
    uVar5 = 0;
    do {
      uVar8 = uVar5 + 1;
      uVar4 = *puVar7;
      uVar3 = uVar8;
      puVar6 = puVar7;
      if (uVar8 < param_2) {
        do {
          if (param_1[uVar3 * 4] < uVar4) {
            uVar4 = param_1[uVar3 * 4];
            uVar5 = uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (param_2 != uVar3);
        uVar4 = param_1[uVar5 * 4];
        puVar6 = param_1 + uVar5 * 4;
      }
      uVar3 = puVar7[1];
      uVar1 = puVar6[2];
      uVar2 = puVar6[3];
      uVar5 = puVar6[1];
      *puVar6 = *puVar7;
      puVar6[1] = uVar3;
      uVar3 = puVar7[3];
      puVar6[2] = puVar7[2];
      puVar6[3] = uVar3;
      *puVar7 = uVar4;
      puVar7[1] = uVar5;
      puVar7[2] = uVar1;
      puVar7[3] = uVar2;
      puVar7 = puVar7 + 4;
      uVar5 = uVar8;
    } while (uVar8 != param_2 - 1);
  }
  return;
}

