
void FUN_004dee90(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  puVar1 = param_1 + 6;
  uVar6 = param_1[7];
  uVar5 = uVar6 >> 0x38;
  param_1[4] = param_1[4] + uVar5;
  while( true ) {
    uVar7 = uVar6 & 0xffffffffffffff;
    uVar6 = *puVar1;
    puVar1[1] = (uVar6 >> 0x38) + uVar7;
    if (param_1 == puVar1) break;
    puVar1 = puVar1 + -1;
  }
  uVar7 = 0;
  lVar3 = 0;
  uVar5 = (*param_1 & 0xffffffffffffff) + uVar5;
  uVar6 = 0xffffffffffffff;
  *param_1 = uVar5;
  lVar4 = 0;
  while( true ) {
    uVar2 = (uVar7 + uVar5) - uVar6;
    lVar3 = (lVar3 + (ulong)CARRY8(uVar7,uVar5)) - (ulong)(uVar7 + uVar5 < uVar6);
    *(ulong *)((long)param_1 + lVar4) = uVar2 & 0xffffffffffffff;
    lVar8 = lVar4 + 8;
    uVar7 = uVar2 >> 0x38 | lVar3 * 0x100;
    lVar3 = lVar3 >> 0x38;
    if (lVar8 == 0x40) break;
    uVar5 = *(ulong *)((long)param_1 + lVar8);
    uVar6 = *(ulong *)((long)&DAT_007f10e8 + lVar4);
    lVar4 = lVar8;
  }
  uVar6 = 0xffffffffffffff;
  uVar5 = 0;
  lVar4 = 0;
  while( true ) {
    uVar9 = *(ulong *)((long)param_1 + lVar4) + (uVar6 & uVar7);
    uVar2 = uVar5 + uVar9;
    uVar5 = uVar2 >> 0x38 |
            ((ulong)CARRY8(*(ulong *)((long)param_1 + lVar4),uVar6 & uVar7) +
            (ulong)CARRY8(uVar5,uVar9)) * 0x100;
    *(ulong *)((long)param_1 + lVar4) = uVar2 & 0xffffffffffffff;
    if (lVar4 + 8 == 0x40) break;
    uVar6 = *(ulong *)((long)&DAT_007f10e8 + lVar4);
    lVar4 = lVar4 + 8;
  }
  return;
}

