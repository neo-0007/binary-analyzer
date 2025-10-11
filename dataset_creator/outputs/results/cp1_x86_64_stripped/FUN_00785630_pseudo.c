
void FUN_00785630(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x358);
  plVar2 = (long *)(&DAT_0094ada0)[(uint)DAT_0094ad90 & 1];
  if (plVar2 == (long *)0x0) {
    return;
  }
  while( true ) {
    uVar5 = plVar2[2];
    if (uVar5 == 0) {
      return;
    }
    if ((ulong)plVar2[4] <= uVar1) break;
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  puVar3 = (ulong *)(plVar2 + 4);
  puVar4 = puVar3 + uVar5 * 4;
  do {
    while( true ) {
      uVar7 = uVar5 >> 1;
      if (puVar3[uVar7 * 4] < uVar1) break;
      uVar5 = uVar7;
      if (uVar7 == 0) goto LAB_007856b5;
    }
    puVar3 = puVar3 + uVar7 * 4 + 4;
    uVar5 = (uVar5 - 1) - uVar7;
  } while (uVar5 != 0);
LAB_007856b5:
  if ((puVar4 == puVar3) || (uVar1 != *puVar3)) {
    puVar4 = puVar3 + -4;
    puVar6 = puVar3 + -3;
    if (puVar3[-3] <= uVar1) {
      return;
    }
  }
  else {
    puVar6 = puVar3 + 1;
    puVar4 = puVar3;
    if (puVar3[1] <= uVar1) {
      return;
    }
  }
  *puVar6 = *puVar4;
  puVar4[2] = 0;
  return;
}

