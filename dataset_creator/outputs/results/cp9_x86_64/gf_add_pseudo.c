
void gf_add(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = 0;
  do {
    *(long *)((long)param_1 + lVar1) = *(long *)(param_3 + lVar1) + *(long *)(param_2 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  uVar4 = param_1[7];
  puVar2 = param_1 + 6;
  uVar6 = uVar4 >> 0x38;
  param_1[4] = param_1[4] + uVar6;
  puVar3 = puVar2;
  while( true ) {
    uVar5 = uVar4 & 0xffffffffffffff;
    uVar4 = *puVar3;
    puVar3[1] = (uVar4 >> 0x38) + uVar5;
    if (param_1 == puVar3) break;
    puVar3 = puVar3 + -1;
  }
  uVar4 = param_1[7];
  *param_1 = (*param_1 & 0xffffffffffffff) + uVar6;
  uVar6 = uVar4 >> 0x38;
  param_1[4] = param_1[4] + uVar6;
  while( true ) {
    uVar5 = uVar4 & 0xffffffffffffff;
    uVar4 = *puVar2;
    puVar2[1] = (uVar4 >> 0x38) + uVar5;
    if (param_1 == puVar2) break;
    puVar2 = puVar2 + -1;
  }
  *param_1 = (*param_1 & 0xffffffffffffff) + uVar6;
  return;
}

