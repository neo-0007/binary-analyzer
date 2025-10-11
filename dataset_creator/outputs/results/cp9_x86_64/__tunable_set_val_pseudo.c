
void __tunable_set_val(uint param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = (ulong)param_1;
  lVar4 = uVar9 * 0x70;
  if (*(int *)(&DAT_0092ced0 + lVar4) == 3) {
    uVar9 = *param_2;
    (&DAT_0092cef0)[lVar4] = 1;
    *(ulong *)(&DAT_0092cee8 + lVar4) = uVar9;
    return;
  }
  uVar1 = *param_2;
  uVar2 = *(ulong *)(&DAT_0092ced8 + lVar4);
  uVar5 = uVar2;
  if (param_3 != (ulong *)0x0) {
    uVar5 = *param_3;
  }
  uVar3 = *(ulong *)(&DAT_0092cee0 + uVar9 * 0x70);
  uVar7 = uVar3;
  if (param_4 != (ulong *)0x0) {
    uVar7 = *param_4;
  }
  uVar6 = uVar2;
  if (*(int *)(&DAT_0092ced0 + lVar4) == 0) {
    if ((long)uVar5 < (long)uVar2) {
      uVar5 = uVar2;
    }
    if ((long)uVar3 < (long)uVar7) {
      uVar7 = uVar3;
    }
    uVar8 = uVar3;
    if ((long)uVar5 <= (long)uVar7) {
      uVar6 = uVar5;
      uVar8 = uVar7;
    }
    if ((long)uVar1 < (long)uVar6) {
      return;
    }
    if ((long)uVar8 < (long)uVar1) {
      return;
    }
  }
  else {
    if (uVar2 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar3 < uVar7) {
      uVar7 = uVar3;
    }
    uVar8 = uVar7;
    if (uVar7 < uVar6) {
      uVar8 = uVar3;
      uVar6 = uVar2;
    }
    if (uVar1 < uVar6) {
      return;
    }
    if (uVar8 < uVar1) {
      return;
    }
  }
  lVar4 = uVar9 * 0x70;
  *(ulong *)(&DAT_0092cee8 + lVar4) = uVar1;
  *(ulong *)(&DAT_0092ced8 + lVar4) = uVar6;
  *(ulong *)(&DAT_0092cee0 + lVar4) = uVar8;
  (&DAT_0092cef0)[lVar4] = 1;
  return;
}

